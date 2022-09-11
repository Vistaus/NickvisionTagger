#pragma once

#include <string>

namespace NickvisionTagger::Models
{
    /**
     * Themes for the application
     */
    enum class Theme
    {
    	System = 0,
    	Light,
    	Dark
    };

    /**
     * A model for the settings of the application
     */
    class Configuration
    {
    public:
    	/**
    	 * Constructs a Configuration (loading the configuraton from disk)
    	 */
    	Configuration();
    	/**
    	 * Gets the requested theme
    	 *
    	 * @returns The requested theme
    	 */
    	Theme getTheme() const;
    	/**
    	 * Sets the requested theme
    	 *
    	 * @param theme The new theme
    	 */
    	void setTheme(Theme theme);
    	/**
    	 * Gets whether or not the application is being opened for the first time
    	 * 
    	 * @returns True if the application is being opened for the first time, else false
    	 */
    	bool getIsFirstTimeOpen() const;
    	/**
    	 * Sets whether or not the application will be treated as being opened for the first time 
    	 *
    	 * @param isFirstTimeOpen True to be treated as being opened for the first time, else false
    	 */
    	void setIsFirstTimeOpen(bool isFirstTimeOpen);
    	/**
    	 * Gets whether or not to include subfolders when scanning for music files in a music folder
    	 *
    	 * @returns True to include subfolders, else false
    	 */
    	bool getIncludeSubfolders() const;
    	/**
    	 * Sets whether or not to include subfolders when scanning for music files in a music folder
    	 *
    	 * @param includeSubfolders True to include subfolders, else false
    	 */
    	void setIncludeSubfolders(bool includeSubfolders);
    	/**
    	 * Gets whether or not to remember last opened music folder to reopen on application startup
    	 *
    	 * @returns True to remember last opened music folder, else false
    	 */
    	bool getRememberLastOpenedFolder() const;
    	/**
    	 * Sets whether or not to remember last opened music folder to reopen on application startup
    	 *
    	 * @param rememberLastOpenedFolder True to remember last opened music folder, else false
    	 */
    	void setRememberLastOpenedFolder(bool rememberLastOpenedFolder);
    	/**
    	 * Gets the last opened music folder
    	 *
    	 * @returns The last opened music folder
    	 */
    	const std::string& getLastOpenedFolder() const;
    	/**
    	 * Sets the last opened music folder
    	 *
    	 * @param lastOpenedFolder The new last opened music folder
    	 */
    	void setLastOpenedFolder(const std::string& lastOpenedFolder);
    	/**
    	 * Saves the configuration to disk
    	 */
    	void save() const;
    
    private:
    	std::string m_configDir;
    	Theme m_theme;
    	bool m_isFirstTimeOpen;
    	bool m_includeSubfolders;
    	bool m_rememberLastOpenedFolder;
    	std::string m_lastOpenedFolder;
    };
}