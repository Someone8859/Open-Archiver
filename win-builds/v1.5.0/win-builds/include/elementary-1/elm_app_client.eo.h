#ifndef _ELM_APP_CLIENT_EO_H_
#define _ELM_APP_CLIENT_EO_H_

#ifndef _ELM_APP_CLIENT_EO_TYPES
#define _ELM_APP_CLIENT_EO_TYPES


#endif
#define ELM_APP_CLIENT_CLASS elm_app_client_class_get()

const Eo_Class *elm_app_client_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] package Package of application
 *
 */
EOAPI void  elm_app_client_constructor(const char *package);

/**
 *
 * Return a iterator with all views of application.
 *
 *
 */
EOAPI Eina_Iterator * elm_app_client_views_get(void);

/**
 *
 * Return the application package.
 *
 *
 */
EOAPI const char * elm_app_client_package_get(void);

/**
 *
 * Close all views of application.
 *
 *
 */
EOAPI void  elm_app_client_view_all_close(void);

/**
 *
 * Terminate application.
 *
 *
 */
EOAPI void  elm_app_client_terminate(void);

/**
 *
 * Open a application view.
 *
 * @param[in] args an array of
 * @param[in] view_open_cb callback to be called when view open
 * @param[in] data calback user data
 *
 */
EOAPI Elm_App_Client_Pending * elm_app_client_view_open(Eina_Value *args, Elm_App_Client_Open_View_Cb view_open_cb, const void *data);

/**
 *
 * Cancel a pending elm_app_client_view_open().
 *
 * @param[in] pending the view open handler
 *
 */
EOAPI void  elm_app_client_view_open_cancel(Elm_App_Client_Pending *pending);

EOAPI extern const Eo_Event_Description _ELM_APP_CLIENT_EVENT_VIEW_CREATED;
EOAPI extern const Eo_Event_Description _ELM_APP_CLIENT_EVENT_VIEW_DELETED;
EOAPI extern const Eo_Event_Description _ELM_APP_CLIENT_EVENT_VIEW_LIST_LOADED;
EOAPI extern const Eo_Event_Description _ELM_APP_CLIENT_EVENT_APPLICATION_TERMINATED;

/**
 * Called when a view of this application is created.
 */
#define ELM_APP_CLIENT_EVENT_VIEW_CREATED (&(_ELM_APP_CLIENT_EVENT_VIEW_CREATED))

/**
 * Called when a view of this application is deleted.
 */
#define ELM_APP_CLIENT_EVENT_VIEW_DELETED (&(_ELM_APP_CLIENT_EVENT_VIEW_DELETED))

/**
 * Called when list of view is loaded.
 */
#define ELM_APP_CLIENT_EVENT_VIEW_LIST_LOADED (&(_ELM_APP_CLIENT_EVENT_VIEW_LIST_LOADED))

/**
 * Called when application is terminated.
 */
#define ELM_APP_CLIENT_EVENT_APPLICATION_TERMINATED (&(_ELM_APP_CLIENT_EVENT_APPLICATION_TERMINATED))

#endif
