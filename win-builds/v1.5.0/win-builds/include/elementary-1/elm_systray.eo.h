#ifndef _ELM_SYSTRAY_EO_H_
#define _ELM_SYSTRAY_EO_H_

#ifndef _ELM_SYSTRAY_EO_TYPES
#define _ELM_SYSTRAY_EO_TYPES


#endif
#define ELM_SYSTRAY_CLASS elm_systray_class_get()

const Eo_Class *elm_systray_class_get(void) EINA_CONST;

/**
 *
 * Set the id of the Status Notifier Item.
 *
 * @param[in] id No description supplied.
 *
 */
EOAPI void  elm_obj_systray_id_set(const char *id);

/**
 *
 * Retrieve the id of the Status Notifier Item.
 *
 *
 */
EOAPI const char * elm_obj_systray_id_get(void);

/**
 *
 * Set the category of the Status Notifier Item.
 *
 * @param[in] cat Category
 *
 */
EOAPI void  elm_obj_systray_category_set(Elm_Systray_Category cat);

/**
 *
 * Retrieve the category of the Status Notifier Item.
 *
 *
 */
EOAPI Elm_Systray_Category  elm_obj_systray_category_get(void);

/**
 *
 * Set the path to the theme where the icons can be found. Set this value to "" to use the default path.
 *
 * @param[in] icon_theme_path No description supplied.
 *
 */
EOAPI void  elm_obj_systray_icon_theme_path_set(const char *icon_theme_path);

/**
 *
 * Retrieve the path to the icon's theme currently in use.
 *
 *
 */
EOAPI const char * elm_obj_systray_icon_theme_path_get(void);

/**
 *
 * Set the object path of the D-Bus Menu that is to be show when the Status Notifier Item is activated by the user.
 *
 * @param[in] menu No description supplied.
 *
 */
EOAPI void  elm_obj_systray_menu_set(const Eo *menu);

/**
 *
 * Retrieve the object path of the D-Bus Menu currently in use.
 *
 *
 */
EOAPI const Eo * elm_obj_systray_menu_get(void);

/**
 *
 * Set the name of the attention icon to be used by the Status Notifier Item.
 *
 * @param[in] att_icon_name No description supplied.
 *
 */
EOAPI void  elm_obj_systray_att_icon_name_set(const char *att_icon_name);

/**
 *
 * Retrieve the name of the attention icon used by the Status Notifier Item.
 *
 *
 */
EOAPI const char * elm_obj_systray_att_icon_name_get(void);

/**
 *
 * Set the status of the Status Notifier Item.
 *
 * @param[in] st Status
 *
 */
EOAPI void  elm_obj_systray_status_set(Elm_Systray_Status st);

/**
 *
 * Retrieve the status of the Status Notifier Item.
 *
 *
 */
EOAPI Elm_Systray_Status  elm_obj_systray_status_get(void);

/**
 *
 * Set the name of the icon to be used by the Status Notifier Item.
 *
 * @param[in] icon_name No description supplied.
 *
 */
EOAPI void  elm_obj_systray_icon_name_set(const char *icon_name);

/**
 *
 * Retrieve the name of the icon used by the Status Notifier Item.
 *
 *
 */
EOAPI const char * elm_obj_systray_icon_name_get(void);

/**
 *
 * Set the title of the Status Notifier Item.
 *
 * @param[in] title No description supplied.
 *
 */
EOAPI void  elm_obj_systray_title_set(const char *title);

/**
 *
 * Retrieve the title of the Status Notifier Item.
 *
 *
 */
EOAPI const char * elm_obj_systray_title_get(void);

/**
 *
 * Register this Status Notifier Item in the System Tray Watcher. This function should only be called after the event ELM_EVENT_SYSTRAY_READY is emitted.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_systray_register(void);


#endif
