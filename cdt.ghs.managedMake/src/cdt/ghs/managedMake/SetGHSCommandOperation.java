/*******************************************************************************
 * Copyright (c) 2009, 2013 Wind River Systems, Inc. and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 * 
 * Contributors:
 *     Doug Schaefer - initial API and implementation
 *     Marc-Andre Laperle - Moved to an operation for a custom wizard page
 *******************************************************************************/
package cdt.ghs.managedMake;
import java.lang.reflect.InvocationTargetException;

import org.eclipse.cdt.core.templateengine.SharedDefaults;
import org.eclipse.cdt.managedbuilder.core.IConfiguration;
import org.eclipse.cdt.managedbuilder.core.IManagedBuildInfo;
import org.eclipse.cdt.managedbuilder.core.IOption;
import org.eclipse.cdt.managedbuilder.core.IToolChain;
import org.eclipse.cdt.managedbuilder.core.ManagedBuildManager;
import org.eclipse.cdt.managedbuilder.ui.wizards.MBSCustomPageManager;
import org.eclipse.core.resources.IProject;
import org.eclipse.core.resources.ResourcesPlugin;
import org.eclipse.core.runtime.IProgressMonitor;
import org.eclipse.jface.operation.IRunnableWithProgress;

/**
 * An operation that runs when the new project wizard finishes for the Cross GCC toolchain.
 * It reuses the information from {@link SetGHSCommandWizardPage} to set build options (prefix and path).
 * It also clears and reruns scanner discovery to account for the modified command. 
 *
 */
public class SetGHSCommandOperation implements IRunnableWithProgress {

	public void run(IProgressMonitor monitor) throws InvocationTargetException,
			InterruptedException {
		
		String projectName = (String) MBSCustomPageManager.getPageProperty(SetGHSCommandWizardPage.PAGE_ID, SetGHSCommandWizardPage.GHS_PROJECT_NAME);
		String path = (String) MBSCustomPageManager.getPageProperty(SetGHSCommandWizardPage.PAGE_ID, SetGHSCommandWizardPage.GHS_COMMAND_PATH);
		
		SharedDefaults.getInstance().getSharedDefaultsMap().put(SetGHSCommandWizardPage.SHARED_DEFAULTS_PATH_KEY, path);
		SharedDefaults.getInstance().updateShareDefaultsMap(SharedDefaults.getInstance().getSharedDefaultsMap());
		
		IProject project = ResourcesPlugin.getWorkspace().getRoot().getProject(projectName);
		if (!project.exists())
			return;
		
		IManagedBuildInfo buildInfo = ManagedBuildManager.getBuildInfo(project);
		if (buildInfo == null)
			return;
		
		IConfiguration[] configs = buildInfo.getManagedProject().getConfigurations();
		for (IConfiguration config : configs) {
			IToolChain toolchain = config.getToolChain();
			IOption option = toolchain.getOptionBySuperClassId("cdt.ghs.managedbuild.option.path"); //$NON-NLS-1$
			ManagedBuildManager.setOption(config, toolchain, option, path);
		}
		
		ManagedBuildManager.saveBuildInfo(project, true);
	}

}
