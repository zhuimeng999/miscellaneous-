package cdt.ghs.managedMake;

import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.eclipse.cdt.core.ErrorParserManager;
import org.eclipse.cdt.core.IErrorParser;
import org.eclipse.core.resources.IFile;

public class GHSCompilerErrorParser
  implements IErrorParser
{
  static final int ErrorSeverity = 2;
  static final int WarningSeverity = 1;
  static final int InfoSeverity = 0;
  static final int DefaultSeverity = 2;
  Pattern fileNameREPattern;
  Pattern elxrFileNameREPattern;
  Pattern variableNameREPattern;
  Pattern lineNumberREPattern;
  Pattern errorSeverityREPattern;
  Pattern warningSeverityREPattern;
  Pattern infoSeverityREPattern;
  Pattern severityColonREPattern;
  Pattern linkErrorFileNameREPattern;
  Pattern linkErrorErrorSeverityREPattern;
  Pattern linkErrorWarningSeverityREPattern;
  Pattern easeErrorREPattern;
  boolean initialized = false;
  String theFileName = null;
  String theErrorDescription = null;
  String theVariableName = null;
  int theLineNumber = -1;
  int lastContinuationPosition = -1;
  int theErrorSeverity = 2;
  boolean theSavedErrorIsValid = false;
  String[] savedLines;
  
  private boolean tryToParseOldAsError(String line)
  {
    Pattern arrowREPattern = Pattern.compile("^([^\\t]+) ([0-9]+): -*\\^-");
    String fileName = null;String lineNumberString = null;String errorDesc = null;
    int lineNumber = -1;int severity = 2;
    boolean gotError = false;
    if (this.savedLines == null) {
      this.savedLines = new String[3];
    }
    this.savedLines[2] = this.savedLines[1];
    this.savedLines[1] = this.savedLines[0];
    this.savedLines[0] = line;
    if ((this.savedLines[1] == null) || (this.savedLines[0] == null)) {
      return false;
    }
    Matcher m = arrowREPattern.matcher(this.savedLines[1]);
    if (m.matches())
    {
      fileName = m.group(1);
      lineNumberString = m.group(2);
      try
      {
        lineNumber = Integer.parseInt(lineNumberString);
      }
      catch (NumberFormatException localNumberFormatException)
      {
        lineNumber = -1;
      }
      String errorMsgRE = "^" + fileName + " " + lineNumberString + ": (.*)$";
      Pattern errorMsgREPattern = Pattern.compile(errorMsgRE);
      Matcher m2 = errorMsgREPattern.matcher(this.savedLines[0]);
      if (m2.matches())
      {
        errorDesc = m2.group(1);
        gotError = true;
      }
    }
    if (!gotError) {
      return false;
    }
    this.theFileName = fileName;
    this.theLineNumber = lineNumber;
    this.theErrorDescription = errorDesc;
    this.theErrorSeverity = severity;
    
    this.theSavedErrorIsValid = false;
    return true;
  }
  
  private boolean tryToParseEaseError(String line)
  {
    String fileName = null;String lineNumberString = null;String errorDesc = null;
    int lineNumber = -1;int severity = 2;
    boolean gotError = false;
    
    Matcher m = this.easeErrorREPattern.matcher(line);
    if (m.matches())
    {
      severity = 2;
      fileName = m.group(1);
      lineNumberString = m.group(2);
      try
      {
        lineNumber = Integer.parseInt(lineNumberString);
      }
      catch (NumberFormatException localNumberFormatException)
      {
        lineNumber = -1;
        lineNumberString = null;
      }
      errorDesc = m.group(3);
      gotError = true;
    }
    if (!gotError) {
      return false;
    }
    this.theFileName = fileName;
    this.theLineNumber = lineNumber;
    this.theErrorDescription = errorDesc;
    this.theErrorSeverity = severity;
    
    this.theSavedErrorIsValid = false;
    return true;
  }
  
  private boolean tryToParseLinkError(String line)
  {
    String fileName = null;String lineNumberString = null;String errorDesc = null;
    int lineNumber = -1;int severity = 2;int lastRparenPos = line.lastIndexOf(')');
    boolean gotError = false;
    if (this.linkErrorErrorSeverityREPattern.matcher(line).matches())
    {
      severity = 2;
      gotError = true;
    }
    else if (this.linkErrorWarningSeverityREPattern.matcher(line).matches())
    {
      severity = 1;
      gotError = true;
    }
    if (!gotError) {
      return false;
    }
    Matcher m = this.elxrFileNameREPattern.matcher(line);
    if (m.matches()) {
      fileName = m.group(1);
    }
    m = this.lineNumberREPattern.matcher(line);
    if (m.matches())
    {
      lineNumberString = m.group(1);
      try
      {
        lineNumber = Integer.parseInt(lineNumberString);
      }
      catch (NumberFormatException localNumberFormatException)
      {
        lineNumber = -1;
        lineNumberString = null;
      }
    }
    if ((lastRparenPos != -1) && (line.length() > lastRparenPos + 2))
    {
      if ((fileName != null) && (lineNumber != -1) && 
        (line.length() > m.end(1) + 2)) {
        errorDesc = line.substring(m.end(1) + 2);
      } else {
        errorDesc = line.substring(lastRparenPos + 2);
      }
    }
    else {
      errorDesc = line;
    }
    this.theFileName = fileName;
    this.theLineNumber = lineNumber;
    this.theErrorDescription = errorDesc;
    this.theErrorSeverity = severity;
    
    this.theSavedErrorIsValid = false;
    return true;
  }
  
  public boolean processLine(String line, ErrorParserManager eoParser)
  {
    return processLine(line, eoParser, 2);
  }
  
  public boolean processLine(String line, ErrorParserManager eoParser, int inheritedSeverity)
  {
    if (!this.initialized) {
      initialize();
    }
    if ((line.equals("^")) && (this.theSavedErrorIsValid))
    {
      finishError(line, eoParser);
    }
    else if (this.theSavedErrorIsValid)
    {
      continueError(line);
    }
    else
    {
      boolean gotError = tryToParseError(line);
      if ((!gotError) && 
        (line.length() > 0)) {
        if (line.charAt(0) == '[')
        {
          if (tryToParseLinkError(line)) {
            setErrorMarker(eoParser);
          } else if (tryToParseEaseError(line)) {
            setErrorMarker(eoParser);
          }
        }
        else if (tryToParseOldAsError(line)) {
          setErrorMarker(eoParser);
        }
      }
    }
    return false;
  }
  
  private void setErrorMarker(ErrorParserManager eoParser)
  {
    if (eoParser != null)
    {
      IFile file = null;
      if (this.theFileName != null)
      {
        file = eoParser.findFilePath(this.theFileName);
        if (file == null)
        {
          file = eoParser.findFileName(this.theFileName);
          if (file != null) {
            if (eoParser.isConflictingName(this.theFileName))
            {
              this.theErrorDescription = ("*" + this.theErrorDescription);
              file = null;
            }
          }
        }
        if (file == null) {
          this.theErrorDescription = (this.theErrorDescription + "[" + this.theFileName + "]");
        }
      }
      eoParser.generateMarker(file, this.theLineNumber, this.theErrorDescription.trim(), 
        this.theErrorSeverity, this.theVariableName);
    }
    else
    {
      System.out.println("Filename '" + this.theFileName + "', line number " + this.theLineNumber + 
        ", description '" + this.theErrorDescription.trim() + "', severity " + 
        this.theErrorSeverity + ", theVariableName = '" + this.theVariableName + "'");
    }
    this.theSavedErrorIsValid = false;
    this.theFileName = null;
    this.theErrorDescription = null;
    this.theVariableName = null;
    this.theLineNumber = -1;
    this.lastContinuationPosition = -1;
    this.theErrorSeverity = 2;
    this.theSavedErrorIsValid = false;
    this.savedLines = null;
  }
  
  private void initialize()
  {
    this.fileNameREPattern = Pattern.compile("^\"([^\\t]+)\", .*$");
    this.elxrFileNameREPattern = Pattern.compile("^.*\\) \"([^\\t]+)\", .*$");
    this.variableNameREPattern = Pattern.compile("^.*(variable|identifier) \"([^\\t]+)\".*$");
    this.lineNumberREPattern = Pattern.compile("^.*line (\\p{Digit}+)[: ].*$");
    this.errorSeverityREPattern = Pattern.compile("^.*(catastrophic )?error( #|:).*$");
    this.warningSeverityREPattern = Pattern.compile("^.*warning( #|:).*$");
    this.infoSeverityREPattern = Pattern.compile("^.*remark( #|:).*$");
    this.severityColonREPattern = Pattern.compile("((error|warning|remark)( #[0-9A-Z-]+)?:)");
    this.linkErrorFileNameREPattern = Pattern.compile("^.*\"([^\\t]+)\", .*$");
    this.linkErrorErrorSeverityREPattern = Pattern.compile("^\\[elxr\\] \\((assertion|error)\\) .*$");
    this.linkErrorWarningSeverityREPattern = Pattern.compile("^\\[elxr\\] \\(warning\\) .*$");
    this.easeErrorREPattern = Pattern.compile("^\\[as[a-z0-9]*\\] \\(error\\) ([^ \\t]*) ([0-9]+): (.*)$");
    this.initialized = true;
  }
  
  private void continueError(String line)
  {
    if (this.theErrorDescription != null)
    {
      this.lastContinuationPosition = this.theErrorDescription.length();
      this.theErrorDescription += line;
      this.theErrorDescription += " ";
    }
    else
    {
      this.lastContinuationPosition = 0;
      this.theErrorDescription = line;
    }
  }
  
  private void finishError(String line, ErrorParserManager eoParser)
  {
    if (this.lastContinuationPosition != -1) {
      this.theErrorDescription = this.theErrorDescription.substring(0, this.lastContinuationPosition);
    }
    this.theErrorDescription = this.theErrorDescription.trim();
    
    Matcher m = this.variableNameREPattern.matcher(this.theErrorDescription);
    if (m.matches()) {
      this.theVariableName = m.group(2);
    }
    setErrorMarker(eoParser);
    this.theSavedErrorIsValid = false;
    this.lastContinuationPosition = -1;
  }
  
  private boolean tryToParseError(String line)
  {
    String fileName = null;String lineNumberString = null;String errorDesc = null;
    int lineNumber = -1;int severity = 2;int lastColonPos = line.lastIndexOf(':');
    Matcher m = this.fileNameREPattern.matcher(line);
    Matcher m2 = this.severityColonREPattern.matcher(line);
    if (m.matches()) {
      fileName = m.group(1);
    }
    m = this.lineNumberREPattern.matcher(line);
    if (m.matches())
    {
      lineNumberString = m.group(1);
      try
      {
        lineNumber = Integer.parseInt(lineNumberString);
      }
      catch (NumberFormatException localNumberFormatException)
      {
        lineNumber = -1;
        lineNumberString = null;
      }
    }
    if (this.errorSeverityREPattern.matcher(line).matches()) {
      severity = 2;
    } else if (this.warningSeverityREPattern.matcher(line).matches()) {
      severity = 1;
    } else if (this.infoSeverityREPattern.matcher(line).matches()) {
      severity = 0;
    }
    if (m2.find()) {
      lastColonPos = m2.end() - 1;
    }
    if (lastColonPos != -1)
    {
      int errorStart = lastColonPos + 2;
      if (errorStart > line.length()) {
        errorStart = line.length();
      }
      errorDesc = line.substring(errorStart);
    }
    else
    {
      errorDesc = line;
    }
    errorDesc = errorDesc + " ";
    if (fileName != null)
    {
      this.theFileName = fileName;
      this.theLineNumber = lineNumber;
      this.theErrorDescription = errorDesc;
      this.theErrorSeverity = severity;
      this.theSavedErrorIsValid = true;
      return true;
    }
    return false;
  }
}
