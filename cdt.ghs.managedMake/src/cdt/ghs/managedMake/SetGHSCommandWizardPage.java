/*******************************************************************************
 * Copyright (c) 2011, 2015 Marc-Andre Laperle and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 * 
 * Contributors:
 *     Marc-Andre Laperle - initial API and implementation
 *******************************************************************************/
package cdt.ghs.managedMake;

import org.eclipse.cdt.core.templateengine.SharedDefaults;
import org.eclipse.cdt.managedbuilder.ui.wizards.MBSCustomPage;
import org.eclipse.cdt.managedbuilder.ui.wizards.MBSCustomPageManager;
import org.eclipse.jface.resource.ImageDescriptor;
import org.eclipse.jface.wizard.IWizardPage;
import org.eclipse.swt.SWT;
import org.eclipse.swt.events.ModifyEvent;
import org.eclipse.swt.events.ModifyListener;
import org.eclipse.swt.events.SelectionEvent;
import org.eclipse.swt.events.SelectionListener;
import org.eclipse.swt.graphics.Image;
import org.eclipse.swt.layout.GridData;
import org.eclipse.swt.layout.GridLayout;
import org.eclipse.swt.widgets.Button;
import org.eclipse.swt.widgets.Composite;
import org.eclipse.swt.widgets.Control;
import org.eclipse.swt.widgets.DirectoryDialog;
import org.eclipse.swt.widgets.Label;
import org.eclipse.swt.widgets.Text;
import org.eclipse.ui.dialogs.WizardNewProjectCreationPage;

/**
 * A wizard page that allows the user to specify the prefix and the path of a Cross GCC command.
 * The values are passed to {@link SetCrossCommandOperation} using the {@link MBSCustomPageManager}
 */
public class SetGHSCommandWizardPage extends MBSCustomPage {

	private Composite composite;
	private boolean finish = false;
	private Text pathTxt;

	public static final String PAGE_ID = "cdt.build.ghs.setGHSCommandWizardPage"; //$NON-NLS-1$
	
	public static final String GHS_PROJECT_NAME = "ghsProjectName"; //$NON-NLS-1$
	public static final String GHS_COMMAND_PATH = "ghsCommandPath"; //$NON-NLS-1$
	
	// Note: The shared defaults keys don't have "cross" in them because we want to keep
	// compatibility with defaults that were saved when it used to be a template
	static final String SHARED_DEFAULTS_PATH_KEY = "path";
	
	public SetGHSCommandWizardPage() {
		pageID = PAGE_ID;
		
		MBSCustomPageManager.addPageProperty(PAGE_ID, GHS_COMMAND_PATH, ""); //$NON-NLS-1$
	}

	@Override
	public boolean isCustomPageComplete() {
		// Make sure that if the users goes back to the first page and changes the project name,
		// the property will be updated
		updateProjectNameProperty();
		return finish;
	}

	public String getName() {
		return Messages.SetGHSCommandWizardPage_name;
	}

	public void createControl(Composite parent) {
		composite = new Composite(parent, SWT.NULL);
		
		composite.setLayout(new GridLayout(3, false));
		GridData layoutData = new GridData();
		composite.setLayoutData(layoutData);
		
		Label label = new Label(composite, SWT.NONE);
		label.setText(Messages.SetGHSCommandWizardPage_path);
		
		pathTxt = new Text(composite, SWT.SINGLE | SWT.BORDER);
		String crossCommandPath = SharedDefaults.getInstance().getSharedDefaultsMap().get(SHARED_DEFAULTS_PATH_KEY);
		if (crossCommandPath != null) {
			pathTxt.setText(crossCommandPath);
			updatePathProperty();
		}
		layoutData = new GridData(SWT.FILL, SWT.CENTER, true, false, 1, 1);
		pathTxt.setLayoutData(layoutData);
		pathTxt.addModifyListener(new ModifyListener() {
			
			public void modifyText(ModifyEvent e) {
				updatePathProperty();
			}
		});
		
		Button button = new Button(composite, SWT.NONE);
		button.setText(Messages.SetGHSCommandWizardPage_browse);
		button.addSelectionListener(new SelectionListener() {
			
			public void widgetDefaultSelected(SelectionEvent e) {
			}

			public void widgetSelected(SelectionEvent e) {
				DirectoryDialog dirDialog = new DirectoryDialog(composite.getShell(), SWT.APPLICATION_MODAL);
				String browsedDirectory = dirDialog.open();
				if (browsedDirectory != null) {
					pathTxt.setText(browsedDirectory);
				}
			}
		});
		layoutData = new GridData(SWT.LEFT, SWT.TOP, false, false, 1, 1);
		button.setLayoutData(layoutData);
	}
	
	public Control getControl() {
		return composite;
	}

	public String getDescription() {
		return Messages.SetGHSCommandWizardPage_description;
	}

	public String getErrorMessage() {
		return null;
	}

	public Image getImage() {
		return wizard.getDefaultPageImage();
	}

	public String getMessage() {
		return null;
	}

	public String getTitle() {
		return Messages.SetGHSCommandWizardPage_title;
	}

	public void performHelp() {
	}

	public void setDescription(String description) {
	}

	public void setImageDescriptor(ImageDescriptor image) {
	}

	public void setTitle(String title) {
	}

	public void setVisible(boolean visible) {
		if (visible) {
			finish = true;
		}
		composite.setVisible(visible);
	}
	
	public void dispose() {
	}

	
	/**
	 * MBSCustomPageManager and properties are used to pass things to SetCrossCommandOperation 
	 */
	private void updatePathProperty() {
		MBSCustomPageManager.addPageProperty(PAGE_ID, GHS_COMMAND_PATH, pathTxt.getText());
	}

	private void updateProjectNameProperty() {
		IWizardPage[] pages = getWizard().getPages();
		for (IWizardPage wizardPage : pages) {
			if (wizardPage instanceof WizardNewProjectCreationPage) {
				MBSCustomPageManager.addPageProperty(PAGE_ID, GHS_PROJECT_NAME, ((WizardNewProjectCreationPage) wizardPage).getProjectName());
				break;
			}
		}
	}
}