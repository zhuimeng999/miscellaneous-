package cdt.ghs.managedMake;

import java.util.ArrayList;

import org.eclipse.cdt.managedbuilder.core.BuildException;
import org.eclipse.cdt.managedbuilder.core.IConfiguration;
import org.eclipse.cdt.managedbuilder.core.IOption;
import org.eclipse.cdt.managedbuilder.core.IToolChain;
import org.eclipse.cdt.managedbuilder.internal.macros.BuildMacro;
import org.eclipse.cdt.managedbuilder.macros.IBuildMacro;
import org.eclipse.cdt.managedbuilder.macros.IBuildMacroProvider;
import org.eclipse.cdt.managedbuilder.macros.IConfigurationBuildMacroSupplier;

@SuppressWarnings("restriction")
public class ConfigurationBuildMacroSupplier implements IConfigurationBuildMacroSupplier {

	private static String CROSS_FLAGS = "toolchain_flags";

	// ------------------------------------------------------------------------

	private String getToolChainFlags(IConfiguration configuration)
	{
		IOption option = configuration.getToolChain().getOptionBySuperClassId("cdt.ghs.managedbuild.option.processorFamily");
		String sReturn = null;
		if (option != null) {
			try {
				String sEnumId = option.getStringValue();
				sReturn = option.getEnumCommand(sEnumId).trim();
			} catch (BuildException e) {
				Activator.log(e);
			}
		} else {
			Activator.log("cdt.ghs.managedbuild.option.processorFamily" + " not found");
		}
		
		option = configuration.getToolChain().getOptionBySuperClassId("cdt.ghs.managedMake.option.floating_point_coprocessor");
		if (option != null) {
			try {
				String sEnumId = option.getStringValue();
				sReturn = sReturn += " " + option.getEnumCommand(sEnumId).trim();
			} catch (BuildException e) {
				Activator.log(e);
			}
		} else {
			Activator.log("cdt.ghs.managedMake.option.floating_point_coprocessor" + " not found");
		}


		return sReturn;
	}
	@Override
	public IBuildMacro getMacro(String macroName, IConfiguration configuration, IBuildMacroProvider provider) {

		if (CROSS_FLAGS.equals(macroName)) {
			String sValue = getToolChainFlags(configuration);
			if (sValue != null && sValue.length() > 0) {
				return new BuildMacro(macroName, BuildMacro.VALUE_TEXT, sValue);
			}
		}
		// System.out.println("Missing value of " + macroName + " in "
		// + configuration.getName());
		return null;
	}

	// Generate a set of configuration specific macros to pass the
	// toolchain commands (like ${cross_c}) to the make generator.

	@Override
	public IBuildMacro[] getMacros(IConfiguration configuration, IBuildMacroProvider provider) {

		IToolChain toolchain = configuration.getToolChain();
		ArrayList<IBuildMacro> oMacrosList = new ArrayList<IBuildMacro>();

		String sValue;

		sValue = getToolChainFlags(configuration);
		if (sValue != null && sValue.length() > 0) {
			oMacrosList.add(new BuildMacro(CROSS_FLAGS, BuildMacro.VALUE_TEXT, sValue));
		}

		return oMacrosList.toArray(new IBuildMacro[0]);
	}

	// ------------------------------------------------------------------------
}