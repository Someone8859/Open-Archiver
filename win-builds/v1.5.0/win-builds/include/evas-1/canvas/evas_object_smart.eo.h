#ifndef _EVAS_OBJECT_SMART_EO_H_
#define _EVAS_OBJECT_SMART_EO_H_

#ifndef _EVAS_OBJECT_SMART_EO_TYPES
#define _EVAS_OBJECT_SMART_EO_TYPES


#endif
#define EVAS_OBJECT_SMART_CLASS evas_object_smart_class_get()

const Eo_Class *evas_object_smart_class_get(void) EINA_CONST;

/**
 *
 * Set or unset the flag signalling that a given smart object needs to
 * get recalculated.
 *
 * If this flag is set, then the @c calculate() smart function of @p
 * obj will be called, if one is provided, during rendering phase of
 * Evas (see evas_render()), after which this flag will be
 * automatically unset.
 *
 * If that smart function is not provided for the given object, this
 * flag will be left unchanged.
 *
 * @note just setting this flag will not make the canvas' whole scene
 * dirty, by itself, and evas_render() will have no effect. To
 * force that, use evas_object_smart_changed(), that will also
 * call this function automatically, with @c EINA_TRUE as parameter.
 *
 * @see evas_object_smart_need_recalculate_get()
 * @see evas_object_smart_calculate()
 * @see evas_smart_objects_calculate()
 *
 * @ingroup Evas_Smart_Object_Group
 *
 * @param[in] value whether one wants to set (@c EINA_TRUE) or to unset
(@c EINA_FALSE) the flag.
 *
 */
EOAPI void  evas_obj_smart_need_recalculate_set(Eina_Bool value);

/**
 *
 * Get the value of the flag signalling that a given smart object needs to
 * get recalculated.
 *
 * @return if flag is set or not.
 *
 * @note this flag will be unset during the rendering phase, when the
 * @c calculate() smart function is called, if one is provided.
 * If it's not provided, then the flag will be left unchanged
 * after the rendering phase.
 *
 * @see evas_object_smart_need_recalculate_set(), for more details
 *
 * @ingroup Evas_Smart_Object_Group
 *
 *
 */
EOAPI Eina_Bool  evas_obj_smart_need_recalculate_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] clip No description supplied.
 *
 */
EOAPI void  evas_obj_smart_clip_set(Evas_Object *clip);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] r No description supplied.
 * @param[in] g No description supplied.
 * @param[in] b No description supplied.
 * @param[in] a No description supplied.
 *
 */
EOAPI void  evas_obj_smart_color_set(int r, int g, int b, int a);

/**
 *
 * Store a pointer to user data for a given smart object.
 *
 * This data is stored @b independently of the one set by
 * evas_object_data_set(), naturally.
 *
 * @see evas_object_smart_data_get()
 *
 * @ingroup Evas_Smart_Object_Group
 *
 * @param[in] data A pointer to user data
 *
 */
EOAPI void  evas_obj_smart_data_set(void *data);

/**
 *
 * Retrieves the list of the member objects of a given Evas smart
 * object
 *
 * @return Returns the list of the member objects of @p obj.
 *
 * The returned list should be freed with @c eina_list_free() when you
 * no longer need it.
 *
 * @since 1.7 This function will return @c NULL when a non-smart object is passed.
 *
 * @see evas_object_smart_member_add()
 * @see evas_object_smart_member_del()
 * @see evas_object_smart_iterator_new()
 *
 *
 */
EOAPI Eina_List * evas_obj_smart_members_get(void);

/**
 *
 * Get the #Evas_Smart from which @p obj smart object was created.
 *
 * @return the #Evas_Smart handle or @c NULL, on errors
 *
 * @ingroup Evas_Smart_Object_Group
 *
 *
 */
EOAPI Evas_Smart * evas_obj_smart_get(void);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  evas_obj_smart_show(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 *
 */
EOAPI void  evas_obj_smart_move(Evas_Coord x, Evas_Coord y);

/**
 *
 * Set an smart object @b instance's smart callbacks descriptions.
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE on failure.
 *
 * These descriptions are hints to be used by introspection and are
 * not enforced in any way.
 *
 * It will not be checked if instance callbacks descriptions have the
 * same name as respective possibly registered in the smart object
 * @b class. Both are kept in different arrays and users of
 * evas_object_smart_callbacks_descriptions_get() should handle this
 * case as they wish.
 *
 * @note Becase @p descriptions must be @c NULL terminated, and
 * because a @c NULL name makes little sense, too,
 * Evas_Smart_Cb_Description.name must @b not be @c NULL.
 *
 * @note While instance callbacks descriptions are possible, they are
 * @b not recommended. Use @b class callbacks descriptions
 * instead as they make you smart object user's life simpler and
 * will use less memory, as descriptions and arrays will be
 * shared among all instances.
 *
 * @ingroup Evas_Smart_Object_Group
 *
 * @param[in] descriptions @c NULL terminated array with
#Evas_Smart_Cb_Description descriptions. Array elements won't be
modified at run time, but references to them and their contents
will be made, so this array should be kept alive during the whole
object's lifetime.
 *
 */
EOAPI Eina_Bool  evas_obj_smart_callbacks_descriptions_set(const Evas_Smart_Cb_Description *descriptions);

/**
 *
 * Retrieve an smart object's know smart callback descriptions (both
 * instance and class ones).
 *
 * This call searches for registered callback descriptions for both
 * instance and class of the given smart object. These arrays will be
 * sorted by Evas_Smart_Cb_Description.name and also @c NULL
 * terminated, so both @a class_count and @a instance_count can be
 * ignored, if the caller wishes so. The terminator @c NULL is not
 * counted in these values.
 *
 * @note If just class descriptions are of interest, try
 * evas_smart_callbacks_descriptions_get() instead.
 *
 * @note Use @c NULL pointers on the descriptions/counters you're not
 * interested in: they'll be ignored by the function.
 *
 * @see evas_smart_callbacks_descriptions_get()
 *
 * @ingroup Evas_Smart_Object_Group
 *
 * @param[out] class_descriptions Where to store class callbacks
descriptions array, if any is known. If no descriptions are
known, @c NULL is returned
 * @param[out] class_count Returns how many class callbacks descriptions
are known.
 * @param[out] instance_descriptions Where to store instance callbacks
descriptions array, if any is known. If no descriptions are
known, @c NULL is returned.
 * @param[out] instance_count Returns how many instance callbacks
descriptions are known.
 *
 */
EOAPI void  evas_obj_smart_callbacks_descriptions_get(const Evas_Smart_Cb_Description ***class_descriptions, unsigned int *class_count, const Evas_Smart_Cb_Description ***instance_descriptions, unsigned int *instance_count);

/**
 *
 * Retrieves an iterator of the member objects of a given Evas smart
 * object
 *
 * @return Returns the iterator of the member objects of @p obj.
 *
 * @since 1.8
 *
 * @see evas_object_smart_member_add()
 * @see evas_object_smart_member_del()
 * @see evas_object_smart_members_get()
 *
 *
 */
EOAPI Eina_Iterator * evas_obj_smart_iterator_new(void);

/**
 *
 * Find callback description for callback called @a name.
 *
 * or @c NULL if not found. If parameter is @c NULL, no search
 * will be done on instance descriptions.
 * @return reference to description if found, @c NULL if not found.
 *
 * @param[in] name name of desired callback, must @b not be @c NULL.  The
search have a special case for @a name being the same
pointer as registered with Evas_Smart_Cb_Description, one
can use it to avoid excessive use of strcmp().
 * @param[out] class_description pointer to return class description or
@c NULL if not found. If parameter is @c NULL, no search will
be done on class descriptions.
 * @param[out] instance_description pointer to return instance description
 *
 */
EOAPI void  evas_obj_smart_callback_description_find(const char *name, const Evas_Smart_Cb_Description **class_description, const Evas_Smart_Cb_Description **instance_description);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  evas_obj_smart_hide(void);

/**
 *
 * Call the @b calculate() smart function immediately on a given smart
 * object.
 *
 * This will force immediate calculations (see #Evas_Smart_Class)
 * needed for renderization of this object and, besides, unset the
 * flag on it telling it needs recalculation for the next rendering
 * phase.
 *
 * @see evas_object_smart_need_recalculate_set()
 *
 * @ingroup Evas_Smart_Object_Group
 *
 *
 */
EOAPI void  evas_obj_smart_calculate(void);

/**
 *
 * Instantiates a new smart object described by @p s.
 *
 * @return a new #Evas_Object handle
 *
 * This is the function one should use when defining the public
 * function @b adding an instance of the new smart object to a given
 * canvas. It will take care of setting all of its internals to work
 * as they should, if the user set things properly, as seem on the
 * #EVAS_SMART_SUBCLASS_NEW, for example.
 *
 * @ingroup Evas_Smart_Object_Group
 *
 *
 */
EOAPI void  evas_obj_smart_add(void);

/**
 *
 * Set an Evas object as a member of a given smart object.
 *
 * Members will automatically be stacked and layered together with the
 * smart object. The various stacking functions will operate on
 * members relative to the other members instead of the entire canvas,
 * since they now live on an exclusive layer (see
 * evas_object_stack_above(), for more details).
 *
 * Any @p smart_obj object's specific implementation of the @c
 * member_add() smart function will take place too, naturally.
 *
 * @see evas_object_smart_member_del()
 * @see evas_object_smart_members_get()
 *
 * @ingroup Evas_Smart_Object_Group
 *
 * @param[in] sub_obj The member object
 *
 */
EOAPI void  evas_obj_smart_member_add(Evas_Object *sub_obj);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 *
 */
EOAPI void  evas_obj_smart_resize(Evas_Coord w, Evas_Coord h);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  evas_obj_smart_clip_unset(void);

/**
 *
 * Mark smart object as changed, dirty.
 *
 * This will flag the given object as needing recalculation,
 * forcefully. As an effect, on the next rendering cycle its @b
 * calculate() (see #Evas_Smart_Class) smart function will be called.
 *
 * @see evas_object_smart_need_recalculate_set().
 * @see evas_object_smart_calculate().
 *
 * @ingroup Evas_Smart_Object_Group
 *
 *
 */
EOAPI void  evas_obj_smart_changed(void);

/**
 *
 * Removes a member object from a given smart object.
 *
 * This removes a member object from a smart object, if it was added
 * to any. The object will still be on the canvas, but no longer
 * associated with whichever smart object it was associated with.
 *
 * @see evas_object_smart_member_add() for more details
 * @see evas_object_smart_members_get()
 *
 * @param[in] sub_obj the member object
@ingroup Evas_Smart_Object_Group
 *
 */
EOAPI void  evas_obj_smart_member_del(Evas_Object *sub_obj);

/**
 *
 * Deletes a smart object.
 *
 *
 */
EOAPI void  evas_obj_smart_del(void);

/**
 *
 * Attach a given smart data to a given smart object.
 *
 * @param[in] s No description supplied.
 *
 */
EOAPI void  evas_obj_smart_attach(Evas_Smart *s);


#endif
