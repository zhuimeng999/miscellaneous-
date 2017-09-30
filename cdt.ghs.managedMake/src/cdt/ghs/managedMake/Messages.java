/*******************************************************************************
 * Copyright (c) 2011, 2014 Marc-Andre Laperle and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 * 
 * Contributors:
 *     Marc-Andre Laperle - initial API and implementation
 *******************************************************************************/
package cdt.ghs.managedMake;

import java.util.MissingResourceException;
import java.util.ResourceBundle;

import org.eclipse.osgi.util.NLS;

public class Messages extends NLS {
	public static String SetGHSCommandWizardPage_browse;
	public static String SetGHSCommandWizardPage_description;
	public static String SetGHSCommandWizardPage_name;
	public static String SetGHSCommandWizardPage_path;
	public static String SetGHSCommandWizardPage_title;
	
	private static final String BUNDLE_NAME = "cdt.ghs.managedMake.Messages"; //$NON-NLS-1$

	private static final ResourceBundle RESOURCE_BUNDLE = ResourceBundle.getBundle(BUNDLE_NAME);

	static {
		// Initialize resource bundle.
		NLS.initializeMessages(Messages.class.getName(), Messages.class);
	}

	private Messages() {
	}

	public static String getString(String key) {
		try {
			return RESOURCE_BUNDLE.getString(key);
		} catch (MissingResourceException e) {
			return '!' + key + '!';
		}
	}
}
