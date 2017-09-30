/*******************************************************************************
 * Copyright (c) 2013, 2015 Ericsson and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     Marc-Andre Laperle (Ericsson) - initial API and implementation
 *******************************************************************************/

package cdt.ghs.managedMake;

import java.util.ArrayList;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import org.eclipse.cdt.core.language.settings.providers.ILanguageSettingsEditableProvider;
import org.eclipse.cdt.core.settings.model.ICSettingEntry;
import org.eclipse.cdt.managedbuilder.core.IConfiguration;
import org.eclipse.cdt.managedbuilder.core.IOption;
import org.eclipse.cdt.managedbuilder.core.IToolChain;
import org.eclipse.cdt.managedbuilder.core.ManagedBuildManager;
import org.eclipse.cdt.managedbuilder.language.settings.providers.ToolchainBuiltinSpecsDetector;

/**
 * Language settings provider to detect built-in compiler settings for IBM XLC compiler.
 */
public class GHSBuiltinSpecsDetector extends ToolchainBuiltinSpecsDetector implements ILanguageSettingsEditableProvider {
	// must match the toolchain definition in org.eclipse.cdt.managedbuilder.core.buildDefinitions extension point
	private static final String GHS_TOOLCHAIN_ID = "cdt.ghs.managedbuild.toolchain.base";  //$NON-NLS-1$

	private static final Pattern OPTIONS_PATTERN = Pattern.compile("-[^\\s\"']*(\\s*((\".*?\")|('.*?')|([^-\\s][^\\s]+)))?"); //$NON-NLS-1$
	private static final int OPTION_GROUP = 0;
	
	public static final String FILE_SEPARATOR = System.getProperty("file.separator");

	/*	Sample output:

		> xlC -E -V -P -w ~/tmp/spec.C
		export XL_CONFIG=/etc/vac.cfg:xlC
		/usr/vac/exe/xlCcpp /home/me/tmp/spec.C - -qc++=/usr/vacpp/include -D_AIX -D_AIX32 -D_AIX41 -D_AIX43 -D_AIX50 -D_AIX51 -D_AIX52 -D_IBMR2 -D_POWER -E -P -w -qlanglvl=ansi -qansialias
		rm /tmp/xlcW0lt4Jia
		rm /tmp/xlcW1lt4Jib
		rm /tmp/xlcW2lt4Jic
	 */
	@SuppressWarnings("nls")
	private static final AbstractOptionParser[] optionParsers = {
			new IncludePathOptionParser("-I\\s*([\"'])(.*)\\1", "$2", ICSettingEntry.BUILTIN | ICSettingEntry.READONLY | ICSettingEntry.LOCAL),
			new IncludePathOptionParser("-I\\s*([^\\s\"']*)", "$1", ICSettingEntry.BUILTIN | ICSettingEntry.READONLY),
			new IncludePathOptionParser("-qc\\+\\+=\\s*([^\\s\"']*)", "$1", ICSettingEntry.BUILTIN | ICSettingEntry.READONLY),
			new MacroOptionParser("-D\\s*([\"'])([^=]*)(=(.*))?\\1", "$2", "$4", ICSettingEntry.BUILTIN | ICSettingEntry.READONLY),
			new MacroOptionParser("-D\\s*([^\\s=\"']*)=(\\\\([\"']))(.*?)\\2", "$1", "$3$4$3", ICSettingEntry.BUILTIN | ICSettingEntry.READONLY),
			new MacroOptionParser("-D\\s*([^\\s=\"']*)=([\"'])(.*?)\\2", "$1", "$3", ICSettingEntry.BUILTIN | ICSettingEntry.READONLY),
			new MacroOptionParser("-D\\s*([^\\s=\"']*)(=([^\\s\"']*))?", "$1", "$3", ICSettingEntry.BUILTIN | ICSettingEntry.READONLY),
	};

	@Override
	protected String getCompilerCommand(String languageId) {
		// Include the cross command prefix (tool option) in the ${COMMAND} macro
		// For example: "arch-os-" + "gcc"
		String prefix = ""; //$NON-NLS-1$
		IToolChain toolchain = null;
		if (currentCfgDescription != null) {
			IConfiguration cfg = ManagedBuildManager.getConfigurationForDescription(currentCfgDescription);
			toolchain = cfg != null ? cfg.getToolChain() : null;
			if (toolchain != null) {
				IOption option = toolchain.getOptionBySuperClassId("cdt.ghs.managedbuild.option.path"); //$NON-NLS-1$
				if (option != null) {
					prefix = (String) option.getValue();
				}
			}
		}

		return super.getCompilerCommand(languageId);
	}
	
	@Override
	public String getToolchainId() {
		return GHS_TOOLCHAIN_ID;
	}

	@Override
	protected AbstractOptionParser[] getOptionParsers() {
		return optionParsers;
	}

	@Override
	protected List<String> parseOptions(String line) {
		List<String> options = new ArrayList<String>();
		Matcher optionMatcher = OPTIONS_PATTERN.matcher(line);
		while (optionMatcher.find()) {
			String option = optionMatcher.group(OPTION_GROUP);
			if (option!=null) {
				options.add(option);
			}
		}
		return options;
	}

	@Override
	public GHSBuiltinSpecsDetector cloneShallow() throws CloneNotSupportedException {
		return (GHSBuiltinSpecsDetector) super.cloneShallow();
	}

	@Override
	public GHSBuiltinSpecsDetector clone() throws CloneNotSupportedException {
		return (GHSBuiltinSpecsDetector) super.clone();
	}

}

