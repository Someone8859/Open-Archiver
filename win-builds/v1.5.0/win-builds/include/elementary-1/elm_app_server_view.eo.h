#ifndef _ELM_APP_SERVER_VIEW_EO_H_
#define _ELM_APP_SERVER_VIEW_EO_H_

#ifndef _ELM_APP_SERVER_VIEW_EO_TYPES
#define _ELM_APP_SERVER_VIEW_EO_TYPES


#endif
#define ELM_APP_SERVER_VIEW_CLASS elm_app_server_view_class_get()

const Eo_Class *elm_app_server_view_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] id identifier of view
 *
 */
EOAPI void  elm_app_server_view_constructor(const char *id);

/**
 *
 * No description supplied.
 *
 * @param[in] progress No description supplied.
 *
 */
EOAPI void  elm_app_server_view_progress_set(short progress);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI short  elm_app_server_view_progress_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] events No description supplied.
 *
 */
EOAPI void  elm_app_server_view_new_events_set(int events);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI int  elm_app_server_view_new_events_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] icon No description supplied.
 *
 */
EOAPI void  elm_app_server_view_icon_set(const char *icon);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI const char * elm_app_server_view_icon_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] title No description supplied.
 *
 */
EOAPI void  elm_app_server_view_title_set(const char *title);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI const char * elm_app_server_view_title_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] win No description supplied.
 *
 */
EOAPI void  elm_app_server_view_window_set(Evas_Object *win);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Eina_Stringshare * elm_app_server_view_id_get(void);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Elm_App_View_State  elm_app_server_view_state_get(void);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI const char * elm_app_server_view_path_get(void);

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
EOAPI void  elm_app_server_view_pixels_set(unsigned int w, unsigned int h, Eina_Bool has_alpha, const unsigned char *pixels);

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
EOAPI void  elm_app_server_view_pixels_get(unsigned int *w, unsigned int *h, Eina_Bool *has_alpha, const unsigned char **pixels);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI void  elm_app_server_view_pause(void);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI void  elm_app_server_view_resume(void);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI void  elm_app_server_view_shallow(void);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI void  elm_app_server_view_close(void);

EOAPI extern const Eo_Event_Description _ELM_APP_SERVER_VIEW_EVENT_RESUMED;
EOAPI extern const Eo_Event_Description _ELM_APP_SERVER_VIEW_EVENT_PAUSED;
EOAPI extern const Eo_Event_Description _ELM_APP_SERVER_VIEW_EVENT_CLOSED;
EOAPI extern const Eo_Event_Description _ELM_APP_SERVER_VIEW_EVENT_SHALLOW;
EOAPI extern const Eo_Event_Description _ELM_APP_SERVER_VIEW_EVENT_SAVE;

/**
 * Called when view must be resumed
 */
#define ELM_APP_SERVER_VIEW_EVENT_RESUMED (&(_ELM_APP_SERVER_VIEW_EVENT_RESUMED))

/**
 * Called when view must be paused
 */
#define ELM_APP_SERVER_VIEW_EVENT_PAUSED (&(_ELM_APP_SERVER_VIEW_EVENT_PAUSED))

/**
 * Called when view must be closed
 */
#define ELM_APP_SERVER_VIEW_EVENT_CLOSED (&(_ELM_APP_SERVER_VIEW_EVENT_CLOSED))

/**
 * Called when view state is set to shallow
 */
#define ELM_APP_SERVER_VIEW_EVENT_SHALLOW (&(_ELM_APP_SERVER_VIEW_EVENT_SHALLOW))

/**
 * Called when view state should be saved
 */
#define ELM_APP_SERVER_VIEW_EVENT_SAVE (&(_ELM_APP_SERVER_VIEW_EVENT_SAVE))

#endif
