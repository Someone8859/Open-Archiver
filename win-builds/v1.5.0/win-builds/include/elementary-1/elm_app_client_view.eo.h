#ifndef _ELM_APP_CLIENT_VIEW_EO_H_
#define _ELM_APP_CLIENT_VIEW_EO_H_

#ifndef _ELM_APP_CLIENT_VIEW_EO_TYPES
#define _ELM_APP_CLIENT_VIEW_EO_TYPES


#endif
#define ELM_APP_CLIENT_VIEW_CLASS elm_app_client_view_class_get()

const Eo_Class *elm_app_client_view_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] path DBus path of view
 *
 */
EOAPI void  elm_app_client_view_constructor(const char *path);

/**
 *
 * Get state of view
 *
 *
 */
EOAPI Elm_App_View_State  elm_app_client_view_state_get(void);

/**
 *
 * Get new events of view
 *
 *
 */
EOAPI int  elm_app_client_view_new_events_get(void);

/**
 *
 * Get window of view
 *
 *
 */
EOAPI int  elm_app_client_view_window_get(void);

/**
 *
 * Get icon pixels of view, view could have a icon in raw format not saved in disk.
 *
 * @param[out] w icon width
 * @param[out] h icon height
 * @param[out] has_alpha if icon have alpha channel
 * @param[out] pixels uchar array, with all bytes of icon
 *
 */
EOAPI void  elm_app_client_view_icon_pixels_get(unsigned int *w, unsigned int *h, Eina_Bool *has_alpha, const unsigned char **pixels);

/**
 *
 * Get DBus path of view
 *
 *
 */
EOAPI const char * elm_app_client_view_path_get(void);

/**
 *
 * Get application package
 *
 *
 */
EOAPI const char * elm_app_client_view_package_get(void);

/**
 *
 * Get icon path of view
 *
 *
 */
EOAPI const char * elm_app_client_view_icon_get(void);

/**
 *
 * Get progress of view, should be -1 if there nothing in progress or something between 0-100
 *
 *
 */
EOAPI unsigned short  elm_app_client_view_progress_get(void);

/**
 *
 * Get title of view
 *
 *
 */
EOAPI const char * elm_app_client_view_title_get(void);

/**
 *
 * Pause view
 *
 * @param[in] cb callback to be called when view was paused
 * @param[in] data callback user data
 *
 */
EOAPI void  elm_app_client_view_pause(Elm_App_Client_View_Cb cb, const void *data);

/**
 *
 * Resume view
 *
 * @param[in] cb callback to be called when view was resumed
 * @param[in] data callback user data
 *
 */
EOAPI void  elm_app_client_view_resume(Elm_App_Client_View_Cb cb, const void *data);

/**
 *
 * Close view
 *
 * @param[in] cb callback to be called when view was closed
 * @param[in] data callback user data
 *
 */
EOAPI void  elm_app_client_view_close(Elm_App_Client_View_Cb cb, const void *data);

EOAPI extern const Eo_Event_Description _ELM_APP_CLIENT_VIEW_EVENT_STATE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_APP_CLIENT_VIEW_EVENT_TITLE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_APP_CLIENT_VIEW_EVENT_ICON_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_APP_CLIENT_VIEW_EVENT_ICON_PIXELS_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_APP_CLIENT_VIEW_EVENT_NEW_EVENTS_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_APP_CLIENT_VIEW_EVENT_PROGRESS_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_APP_CLIENT_VIEW_EVENT_WINDOW_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_APP_CLIENT_VIEW_EVENT_PROPERTY_CHANGED;

/**
 * State of view changed.
 */
#define ELM_APP_CLIENT_VIEW_EVENT_STATE_CHANGED (&(_ELM_APP_CLIENT_VIEW_EVENT_STATE_CHANGED))

/**
 * Title of view changed.
 */
#define ELM_APP_CLIENT_VIEW_EVENT_TITLE_CHANGED (&(_ELM_APP_CLIENT_VIEW_EVENT_TITLE_CHANGED))

/**
 * Icon of view changed.
 */
#define ELM_APP_CLIENT_VIEW_EVENT_ICON_CHANGED (&(_ELM_APP_CLIENT_VIEW_EVENT_ICON_CHANGED))

/**
 * Icons pixels of view changed.
 */
#define ELM_APP_CLIENT_VIEW_EVENT_ICON_PIXELS_CHANGED (&(_ELM_APP_CLIENT_VIEW_EVENT_ICON_PIXELS_CHANGED))

/**
 * New events of view changed.
 */
#define ELM_APP_CLIENT_VIEW_EVENT_NEW_EVENTS_CHANGED (&(_ELM_APP_CLIENT_VIEW_EVENT_NEW_EVENTS_CHANGED))

/**
 * Progress of view changed.
 */
#define ELM_APP_CLIENT_VIEW_EVENT_PROGRESS_CHANGED (&(_ELM_APP_CLIENT_VIEW_EVENT_PROGRESS_CHANGED))

/**
 * Window of view changed.
 */
#define ELM_APP_CLIENT_VIEW_EVENT_WINDOW_CHANGED (&(_ELM_APP_CLIENT_VIEW_EVENT_WINDOW_CHANGED))

/**
 * One of view properties changed.
 */
#define ELM_APP_CLIENT_VIEW_EVENT_PROPERTY_CHANGED (&(_ELM_APP_CLIENT_VIEW_EVENT_PROPERTY_CHANGED))

#endif
