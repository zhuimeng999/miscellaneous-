package cdt.ghs.managedMake;

import org.eclipse.cdt.managedbuilder.core.IBuildObject;
import org.eclipse.cdt.managedbuilder.core.IConfiguration;
import org.eclipse.cdt.managedbuilder.core.ITool;
import org.eclipse.cdt.managedbuilder.makegen.IManagedDependencyGenerator2;
import org.eclipse.cdt.managedbuilder.makegen.IManagedDependencyInfo;
import org.eclipse.core.resources.IResource;
import org.eclipse.core.runtime.IPath;

public class GHSDependencyCalculator
  implements IManagedDependencyGenerator2
{
  public int getCalculatorType()
  {
    return 5;
  }
  
  public String getDependencyFileExtension(IConfiguration buildContext, ITool tool)
  {
    return "d";
  }
  
  public IManagedDependencyInfo getDependencySourceInfo(IPath source, IResource resource, IBuildObject buildContext, ITool tool, IPath topBuildDirectory)
  {
    return new GHSDependencyCalculatorCommands(source, resource, buildContext, tool, topBuildDirectory);
  }
  
  public IManagedDependencyInfo getDependencySourceInfo(IPath source, IBuildObject buildContext, ITool tool, IPath topBuildDirectory)
  {
    return new GHSDependencyCalculatorCommands(source, buildContext, tool, topBuildDirectory);
  }
  
  public boolean postProcessDependencyFile(IPath dependencyFile, IConfiguration buildContext, ITool tool, IPath topBuildDirectory)
  {
    return false;
  }
}

