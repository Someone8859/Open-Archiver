#ifndef _ELM_APP_SERVER_EO_H_
#define _ELM_APP_SERVER_EO_H_

#ifndef _ELM_APP_SERVER_EO_TYPES
#define _ELM_APP_SERVER_EO_TYPES


#endif
#define ELM_APP_SERVER_CLASS elm_app_server_class_get()

const Eo_Class *elm_app_server_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] packageid package of application
 * @param[in] create_view_cb callback to be called when user whants to open some application view
 *
 */
EOAPI void  elm_app_server_constructor(const char *packageid, Elm_App_Server_Create_View_Cb create_view_cb);

/**
 *
 * No description supplied.
 *
 * @param[in] icon title of icon
 *
 */
EOAPI void  elm_app_server_icon_set(Eina_Stringshare *icon);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Eina_Stringshare * elm_app_server_icon_get(void);

/**
 *
 * Return a iterator with all views of application
 *
 *
 */
EOAPI Eina_Iterator * elm_app_server_views_get(void);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI const char * elm_app_server_path_get(void);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Eina_Stringshare * elm_app_server_package_get(void);

/**
 *
 * Set icon to application, using the raw pixels of image.
 *
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 * @param[in] has_alpha No description supplied.
 * @param[in] pixels No description supplied.
 *
 */
EOAPI void  elm_app_server_pixels_set(unsigned int w, unsigned int h, Eina_Bool has_alpha, const unsigned char *pixels);

/**
 *
 * Get application raw icon.
 *
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 * @param[out] has_alpha No description supplied.
 * @param[out] pixels No description supplied.
 *
 */
EOAPI void  elm_app_server_pixels_get(unsigned int *w, unsigned int *h, Eina_Bool *has_alpha, const unsigned char **pixels);

/**
 *
 * Close all views of application
 *
 *
 */
EOAPI void  elm_app_server_close_all(void);

/**
 *
 * If view id is available and unique, return the full DBus object path of view
 *
 * @param[in] id view identifier
 *
 */
EOAPI Eina_Bool  elm_app_server_view_check(const char *id);

/**
 *
 * Add a view to elm_app_server. This should only be used if the application open a view that was not requested by create_view_cb.
 *
 * @param[in] view elm_app_server_view
 *
 */
EOAPI void  elm_app_server_view_add(Elm_App_Server_View *view);

/**
 *
 * Set a title to application.
 *
 * @param[in] title title of application
 *
 */
EOAPI void  elm_app_server_title_set(const char *title);

/**
 *
 * Get title of application
 *
 *
 */
EOAPI Eina_Stringshare * elm_app_server_title_get(void);

/**
 *
 * Save the state of all views
 *
 *
 */
EOAPI void  elm_app_server_save(void);

EOAPI extern const Eo_Event_Description _ELM_APP_SERVER_EVENT_TERMINATE;

/**
 * Called when application must be terminated.
 */
#define ELM_APP_SERVER_EVENT_TERMINATE (&(_ELM_APP_SERVER_EVENT_TERMINATE))

#endif
