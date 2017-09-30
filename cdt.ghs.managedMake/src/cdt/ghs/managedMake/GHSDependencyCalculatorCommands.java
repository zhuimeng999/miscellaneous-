package cdt.ghs.managedMake;

import org.eclipse.cdt.managedbuilder.core.IBuildObject;
import org.eclipse.cdt.managedbuilder.core.IConfiguration;
import org.eclipse.cdt.managedbuilder.core.IResourceInfo;
import org.eclipse.cdt.managedbuilder.core.ITool;
import org.eclipse.cdt.managedbuilder.internal.macros.BuildMacroProvider;
import org.eclipse.cdt.managedbuilder.internal.macros.FileContextData;
import org.eclipse.cdt.managedbuilder.makegen.IManagedDependencyCommands;
import org.eclipse.cdt.managedbuilder.makegen.gnu.GnuMakefileGenerator;
import org.eclipse.core.resources.IProject;
import org.eclipse.core.resources.IResource;
import org.eclipse.core.runtime.IPath;

@SuppressWarnings("restriction")
public class GHSDependencyCalculatorCommands
  implements IManagedDependencyCommands
{
  IPath source;
  IResource resource;
  IBuildObject buildContext;
  ITool tool;
  IPath topBuildDirectory;
  IProject project;
  IPath sourceLocation;
  IPath outputLocation;
  boolean needExplicitRuleForFile;
  Boolean genericCommands = null;
  
  public GHSDependencyCalculatorCommands(IPath source, IResource resource, IBuildObject buildContext, ITool tool, IPath topBuildDirectory)
  {
    this.source = source;
    this.resource = resource;
    this.buildContext = buildContext;
    this.tool = tool;
    this.topBuildDirectory = topBuildDirectory;
    if ((buildContext instanceof IConfiguration))
    {
      IConfiguration config = (IConfiguration)buildContext;
      this.project = ((IProject)config.getOwner());
    }
    else if ((buildContext instanceof IResourceInfo))
    {
      IResourceInfo rcInfo = (IResourceInfo)buildContext;
      this.project = rcInfo.getParent().getOwner().getProject();
    }
    this.sourceLocation = (source.isAbsolute() ? source : this.project.getLocation().append(source));
    this.outputLocation = this.project.getLocation().append(topBuildDirectory).append(getDependencyFiles()[0]);
    
    boolean resourceNameRequiresExplicitRule = true;
    if (resource != null) {
      resourceNameRequiresExplicitRule = ((resource.isLinked()) && 
        (GnuMakefileGenerator.containsSpecialCharacters(this.sourceLocation.toString()))) || (
        (!resource.isLinked()) && 
        (GnuMakefileGenerator.containsSpecialCharacters(resource.getProjectRelativePath().toString())));
    }
    if ((!resourceNameRequiresExplicitRule) && 
      (BuildMacroProvider.getReferencedExplitFileMacros(tool).length <= 0)) {}
    this.needExplicitRuleForFile = 
    
      (BuildMacroProvider.getReferencedExplitFileMacros(tool.getToolCommand(), 1, new FileContextData(this.sourceLocation, this.outputLocation, null, tool)).length > 0);
    if (this.needExplicitRuleForFile) {
      this.genericCommands = new Boolean(false);
    }
  }
  
  public GHSDependencyCalculatorCommands(IPath source, IBuildObject buildContext, ITool tool, IPath topBuildDirectory)
  {
    this(source, null, buildContext, tool, topBuildDirectory);
  }
  
  public boolean areCommandsGeneric()
  {
    if (this.genericCommands == null) {
      this.genericCommands = new Boolean(true);
    }
    return this.genericCommands.booleanValue();
  }
  
  public String[] getDependencyCommandOptions()
  {
    String[] options = new String[1];
    
    options[0] = "-MD";
    
    return options;
  }
  
  public IPath[] getDependencyFiles()
  {
    IPath depFilePath = this.source.removeFileExtension().addFileExtension("d");
    if ((!depFilePath.isAbsolute()) && 
      (this.topBuildDirectory.isPrefixOf(depFilePath))) {
      depFilePath = depFilePath.removeFirstSegments(1);
    }
    IPath[] paths = new IPath[1];
    paths[0] = depFilePath;
    return paths;
  }
  
  public String[] getPostToolDependencyCommands()
  {
    return null;
  }
  
  public String[] getPreToolDependencyCommands()
  {
    return null;
  }
  
  public IBuildObject getBuildContext()
  {
    return this.buildContext;
  }
  
  public IPath getSource()
  {
    return this.source;
  }
  
  public ITool getTool()
  {
    return this.tool;
  }
  
  public IPath getTopBuildDirectory()
  {
    return this.topBuildDirectory;
  }
}

