#ifndef _EO_BASE_EO_H_
#define _EO_BASE_EO_H_

#ifndef _EO_BASE_EO_TYPES
#define _EO_BASE_EO_TYPES


#endif
#define EO_BASE_CLASS eo_base_class_get()

const Eo_Class *eo_base_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI void  eo_constructor(void);

/**
 *
 * Set the parent of an object
 * Parents keep references to their children so in order to delete objects that have parents you need to set parent to NULL or use eo_del() that does that for you (and also unrefs the object).
 *
 * @param[in] parent the new parent
 *
 */
EOAPI void  eo_parent_set(Eo *parent);

/**
 *
 * Get the parent of an object
 *
 *
 */
EOAPI Eo * eo_parent_get(void);

/**
 *
 * return freeze events of object.
 * Return event freeze count.
 *
 *
 */
EOAPI int  eo_event_global_freeze_count_get(void);

/**
 *
 * return freeze events of object.
 * Return event freeze count.
 *
 *
 */
EOAPI int  eo_event_freeze_count_get(void);

/**
 *
 * Remove an event callback forwarder for an event and an object.
 *
 * @param[in] desc The description of the event to listen to
 * @param[in] new_obj The object to emit events from
 *
 */
EOAPI void  eo_event_callback_forwarder_del(const Eo_Event_Description *desc, Eo *new_obj);

/**
 *
 * thaw events of object.
 * Lets event callbacks be called for the object.
 *
 *
 */
EOAPI void  eo_event_thaw(void);

/**
 *
 * freeze events of object.
 * Prevents event callbacks from being called for the object.
 *
 *
 */
EOAPI void  eo_event_freeze(void);

/**
 *
 * freeze events of object.
 * Prevents event callbacks from being called for the object.
 *
 *
 */
EOAPI void  eo_event_global_freeze(void);

/**
 *
 * Del a callback array with a specific data associated to it for an event.
 *
 * @param[in] array an #Eo_Callback_Array_Item of events to listen to
 * @param[in] user_data The data to compare
 *
 */
EOAPI void  eo_event_callback_array_del(const Eo_Callback_Array_Item *array, const void *user_data);

/**
 *
 * Delete the weak reference passed.
 *
 * @param[inout] wref No description supplied.
 *
 */
EOAPI void  eo_wref_del(Eo **wref);

/**
 *
 * Call the object's destructor.
 * Should not be used with #eo_do. Only use it with #eo_do_super.
 *
 *
 */
EOAPI void  eo_destructor(void);

/**
 *
 * Called at the end of #eo_add. Should not be called, just overridden.
 *
 *
 */
EOAPI Eo * eo_finalize(void);

/**
 *
 * Set generic data to object.
 *
 * @param[in] key the key associated with the data
 * @param[in] data the data to set
 * @param[in] free_func the func to free data with (NULL means
 *
 */
EOAPI void  eo_key_data_set(const char *key, const void *data, eo_key_data_free_func free_func);

/**
 *
 * Get generic data from object.
 *
 * @param[in] key the key associated with the data
 *
 */
EOAPI void * eo_key_data_get(const char *key);

/**
 *
 * Del a callback with a specific data associated to it for an event.
 *
 * @param[in] desc The description of the event to listen to
 * @param[in] func the callback to delete
 * @param[in] user_data The data to compare
 *
 */
EOAPI void  eo_event_callback_del(const Eo_Event_Description *desc, Eo_Event_Cb func, const void *user_data);

/**
 *
 * thaw events of object.
 * Lets event callbacks be called for the object.
 *
 *
 */
EOAPI void  eo_event_global_thaw(void);

/**
 *
 * Del generic data from object.
 *
 * @param[in] key the key associated with the data
 *
 */
EOAPI void  eo_key_data_del(const char *key);

/**
 *
 * Add a callback array for an event with a specific priority.
 * callbacks of the same priority are called in reverse order of creation.
 *
 * @param[in] array an #Eo_Callback_Array_Item of events to listen to
 * @param[in] priority The priority of the callback
 * @param[in] data additional data to pass to the callback
 *
 */
EOAPI void  eo_event_callback_array_priority_add(const Eo_Callback_Array_Item *array, Eo_Callback_Priority priority, const void *data);

/**
 *
 * Add a new weak reference to obj.
 * This function registers the object handle pointed by wref to obj so when obj is deleted it'll be updated to NULL. This functions should be used when you want to keep track of an object in a safe way, but you don't want to prevent it from being freed.
 *
 * @param[inout] wref No description supplied.
 *
 */
EOAPI void  eo_wref_add(Eo **wref);

/**
 *
 * Get dbg information from the object.
 *
 * @param[in] root_node node of the tree
 *
 */
EOAPI void  eo_dbg_info_get(Eo_Dbg_Info *root_node);

/**
 *
 * Add an event callback forwarder for an event and an object.
 *
 * @param[in] desc The description of the event to listen to
 * @param[in] new_obj The object to emit events from
 *
 */
EOAPI void  eo_event_callback_forwarder_add(const Eo_Event_Description *desc, Eo *new_obj);

/**
 *
 * Call the callbacks for an event of an object.
 *
 * @param[in] desc The description of the event to call
 * @param[in] event_info Extra event info to pass to the callbacks
 *
 */
EOAPI Eina_Bool  eo_event_callback_call(const Eo_Event_Description *desc, void *event_info);

/**
 *
 * Add a callback for an event with a specific priority.
 * callbacks of the same priority are called in reverse order of creation.
 *
 * @param[in] desc The description of the event to listen to
 * @param[in] priority The priority of the callback
 * @param[in] cb the callback to call
 * @param[in] data additional data to pass to the callback
 *
 */
EOAPI void  eo_event_callback_priority_add(const Eo_Event_Description *desc, Eo_Callback_Priority priority, Eo_Event_Cb cb, const void *data);

/**
 *
 * Get an iterator on all childrens
 *
 *
 */
EOAPI Eina_Iterator * eo_children_iterator_new(void);

EOAPI extern const Eo_Event_Description _EO_BASE_EVENT_CALLBACK_ADD;
EOAPI extern const Eo_Event_Description _EO_BASE_EVENT_CALLBACK_DEL;
EOAPI extern const Eo_Event_Description _EO_BASE_EVENT_DEL;

/**
 * A callback was added.
 */
#define EO_BASE_EVENT_CALLBACK_ADD (&(_EO_BASE_EVENT_CALLBACK_ADD))

/**
 * A callback was deleted.
 */
#define EO_BASE_EVENT_CALLBACK_DEL (&(_EO_BASE_EVENT_CALLBACK_DEL))

/**
 * Obj is being deleted.
 */
#define EO_BASE_EVENT_DEL (&(_EO_BASE_EVENT_DEL))

#endif
