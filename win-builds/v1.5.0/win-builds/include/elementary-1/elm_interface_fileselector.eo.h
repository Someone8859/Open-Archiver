#ifndef _ELM_INTERFACE_FILESELECTOR_EO_H_
#define _ELM_INTERFACE_FILESELECTOR_EO_H_

#ifndef _ELM_INTERFACE_FILESELECTOR_EO_TYPES
#define _ELM_INTERFACE_FILESELECTOR_EO_TYPES


#endif
#define ELM_INTERFACE_FILESELECTOR_INTERFACE elm_interface_fileselector_interface_get()

const Eo_Class *elm_interface_fileselector_interface_get(void) EINA_CONST;

/**
 *
 * Enable/disable folder-only view for a given file selector widget
 *
 * @param[in] only No description supplied.
 *
 */
EOAPI void  elm_interface_fileselector_folder_only_set(Eina_Bool only);

/**
 *
 * Get whether folder-only view is set for a given file selector
 *
 *
 */
EOAPI Eina_Bool  elm_interface_fileselector_folder_only_get(void);

/**
 *
 * Set, programmatically, the currently selected file/directory in the given file selector widget
 *
 * @param[in] path No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_fileselector_selected_set(const char *path);

/**
 *
 * Get the currently selected item's (full) path, in the given file the given file selector widget
 *
 *
 */
EOAPI const char * elm_interface_fileselector_selected_get(void);

/**
 *
 * Set the size for the thumbnail of the file selector widget's view.
 *
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 *
 */
EOAPI void  elm_interface_fileselector_thumbnail_size_set(Evas_Coord w, Evas_Coord h);

/**
 *
 * Get the size for the thumbnail of a given file selector widget
 *
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 *
 */
EOAPI void  elm_interface_fileselector_thumbnail_size_get(Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Enable or disable visibility of hidden files/directories in the file selector widget.
 *
 * @param[in] multi No description supplied.
 *
 */
EOAPI void  elm_interface_fileselector_hidden_visible_set(Eina_Bool multi);

/**
 *
 * Get if hiden files/directories in the file selector are visible or not.
 *
 *
 */
EOAPI Eina_Bool  elm_interface_fileselector_hidden_visible_get(void);

/**
 *
 * Set the sort method of the file selector widget.
 *
 * @param[in] sort No description supplied.
 *
 */
EOAPI void  elm_interface_fileselector_sort_method_set(Elm_Fileselector_Sort sort);

/**
 *
 * Get the sort method of the file selector widget.
 *
 *
 */
EOAPI Elm_Fileselector_Sort  elm_interface_fileselector_sort_method_get(void);

/**
 *
 * Enable or disable multi-selection in the fileselector
 *
 * @param[in] multi No description supplied.
 *
 */
EOAPI void  elm_interface_fileselector_multi_select_set(Eina_Bool multi);

/**
 *
 * Gets if multi-selection in fileselector is enabled or disabled.
 *
 *
 */
EOAPI Eina_Bool  elm_interface_fileselector_multi_select_get(void);

/**
 *
 * Enable/disable a tree view in the given file selector widget, <b>if it's in
 *
 * @param[in] expand No description supplied.
 *
 */
EOAPI void  elm_interface_fileselector_expandable_set(Eina_Bool expand);

/**
 *
 * Get whether tree view is enabled for the given file selector
 *
 *
 */
EOAPI Eina_Bool  elm_interface_fileselector_expandable_get(void);

/**
 *
 * Set, programmatically, the directory that a given file selector widget will display contents from
 *
 * @param[in] path No description supplied.
 *
 */
EOAPI void  elm_interface_fileselector_path_set(const char *path);

/**
 *
 * Get the parent directory's path that a given file selector selector widget will display contents from
 *
 *
 */
EOAPI const char * elm_interface_fileselector_path_get(void);

/**
 *
 * Set the mode in which a given file selector widget will display (layout) file system entries in its view
 *
 * @param[in] mode No description supplied.
 *
 */
EOAPI void  elm_interface_fileselector_mode_set(Elm_Fileselector_Mode mode);

/**
 *
 * Get the mode in which a given file selector widget is displaying
 *
 *
 */
EOAPI Elm_Fileselector_Mode  elm_interface_fileselector_mode_get(void);

/**
 *
 * Enable/disable the file name entry box where the user can type in a name for a file, in a given file selector widget
 *
 * @param[in] is_save No description supplied.
 *
 */
EOAPI void  elm_interface_fileselector_is_save_set(Eina_Bool is_save);

/**
 *
 * Get whether the given file selector is in "saving dialog" mode
 *
 *
 */
EOAPI Eina_Bool  elm_interface_fileselector_is_save_get(void);

/**
 *
 * Get a list of selected paths in the fileselector.
 *
 *
 */
EOAPI const Eina_List * elm_interface_fileselector_selected_paths_get(void);

/**
 *
 * Append custom filter into filter list
 *
 * @param[in] func function
 * @param[in] data No description supplied.
 * @param[in] filter_name No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_fileselector_custom_filter_append(Elm_Fileselector_Filter_Func func, void *data, const char *filter_name);

/**
 *
 * Clear all filters registered
 *
 *
 */
EOAPI void  elm_interface_fileselector_filters_clear(void);

/**
 *
 * Append mime type based filter into filter list
 *
 * @param[in] mime_types No description supplied.
 * @param[in] filter_name No description supplied.
 *
 */
EOAPI Eina_Bool  elm_interface_fileselector_mime_types_filter_append(const char *mime_types, const char *filter_name);


#endif
