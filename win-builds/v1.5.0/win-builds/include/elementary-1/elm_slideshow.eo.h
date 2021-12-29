#ifndef _ELM_SLIDESHOW_EO_H_
#define _ELM_SLIDESHOW_EO_H_

#ifndef _ELM_SLIDESHOW_EO_TYPES
#define _ELM_SLIDESHOW_EO_TYPES


#endif
#define ELM_SLIDESHOW_CLASS elm_slideshow_class_get()

const Eo_Class *elm_slideshow_class_get(void) EINA_CONST;

/**
 *
 * Set the number of items to cache, on a given slideshow widget,
 * <b>after the current item</b>
 *
 * The default value for this property is @c 2. See
 * @ref Slideshow_Caching "slideshow caching" for more details.
 *
 * @see elm_slideshow_cache_after_get()
 *
 * @ingroup Slideshow
 *
 * @param[in] count Number of items to cache after the current one
 *
 */
EOAPI void  elm_obj_slideshow_cache_after_set(int count);

/**
 *
 * Retrieve the number of items to cache, on a given slideshow widget,
 * <b>after the current item</b>
 *
 * @return The number of items set to be cached after the current one
 *
 * @see elm_slideshow_cache_after_set() for more details
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI int  elm_obj_slideshow_cache_after_get(void);

/**
 *
 * Set the number of items to cache, on a given slideshow widget,
 * <b>before the current item</b>
 *
 * The default value for this property is @c 2. See
 * @ref Slideshow_Caching "slideshow caching" for more details.
 *
 * @see elm_slideshow_cache_before_get()
 *
 * @ingroup Slideshow
 *
 * @param[in] count Number of items to cache before the current one
 *
 */
EOAPI void  elm_obj_slideshow_cache_before_set(int count);

/**
 *
 * Retrieve the number of items to cache, on a given slideshow widget,
 * <b>before the current item</b>
 *
 * @return The number of items set to be cached before the current one
 *
 * @see elm_slideshow_cache_before_set() for more details
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI int  elm_obj_slideshow_cache_before_get(void);

/**
 *
 * Set the current slide layout in use for a given slideshow widget
 *
 * If @p layout is implemented in @p obj's theme (i.e., is contained
 * in the list returned by elm_slideshow_layouts_get()), this new
 * images layout will be used on the widget.
 *
 * @see elm_slideshow_layouts_get() for more details
 *
 * @ingroup Slideshow
 *
 * @param[in] layout The new layout's name string
 *
 */
EOAPI void  elm_obj_slideshow_layout_set(const char *layout);

/**
 *
 * Get the current slide layout in use for a given slideshow widget
 *
 * @return The current layout's name
 *
 * @see elm_slideshow_layout_set() for more details
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI const char * elm_obj_slideshow_layout_get(void);

/**
 *
 * Set the current slide transition/effect in use for a given
 * slideshow widget
 *
 * If @p transition is implemented in @p obj's theme (i.e., is
 * contained in the list returned by
 * elm_slideshow_transitions_get()), this new sliding effect will
 * be used on the widget.
 *
 * @see elm_slideshow_transitions_get() for more details
 *
 * @ingroup Slideshow
 *
 * @param[in] transition The new transition's name string
 *
 */
EOAPI void  elm_obj_slideshow_transition_set(const char *transition);

/**
 *
 * Get the current slide transition/effect in use for a given
 * slideshow widget
 *
 * @return The current transition's name
 *
 * @see elm_slideshow_transition_set() for more details
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI const char * elm_obj_slideshow_transition_get(void);

/**
 *
 * Set if, after a slideshow is started, for a given slideshow
 * widget, its items should be displayed cyclically or not.
 *
 * @note elm_slideshow_next() and elm_slideshow_previous() will @b
 * ignore what is set by this functions, i.e., they'll @b always
 * cycle through items. This affects only the "automatic"
 * slideshow, as set by elm_slideshow_timeout_set().
 *
 * @see elm_slideshow_loop_get()
 *
 * @ingroup Slideshow
 *
 * @param[in] loop Use @c EINA_TRUE to make it cycle through items or
@c EINA_FALSE for it to stop at the end of @p obj's internal
list of items
 *
 */
EOAPI void  elm_obj_slideshow_loop_set(Eina_Bool loop);

/**
 *
 * Get if, after a slideshow is started, for a given slideshow
 * widget, its items are to be displayed cyclically or not.
 *
 * @return @c EINA_TRUE, if the items in @p obj will be cycled
 * through or @c EINA_FALSE, otherwise
 *
 * @see elm_slideshow_loop_set() for more details
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI Eina_Bool  elm_obj_slideshow_loop_get(void);

/**
 *
 * Set the interval between each image transition on a given
 * slideshow widget, <b>and start the slideshow, itself</b>
 *
 * After this call, the slideshow widget will start cycling its
 * view, sequentially and automatically, with the images of the
 * items it has. The time between each new image displayed is going
 * to be @p timeout, in @b seconds. If a different timeout was set
 * previously and an slideshow was in progress, it will continue
 * with the new time between transitions, after this call.
 *
 * @note A value less than or equal to 0 on @p timeout will disable
 * the widget's internal timer, thus halting any slideshow which
 * could be happening on @p obj.
 *
 * @see elm_slideshow_timeout_get()
 *
 * @ingroup Slideshow
 *
 * @param[in] timeout The new displaying timeout for images
 *
 */
EOAPI void  elm_obj_slideshow_timeout_set(double timeout);

/**
 *
 * Get the interval set for image transitions on a given slideshow
 * widget.
 *
 * @return Returns the timeout set on it or -1.0, on errors
 *
 * @see elm_slideshow_timeout_set() for more details
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI double  elm_obj_slideshow_timeout_get(void);

/**
 *
 * Get the internal list of items in a given slideshow widget.
 *
 * @return The list of items (#Elm_Object_Item as data) or
 * @c NULL on errors.
 *
 * This list is @b not to be modified in any way and must not be
 * freed. Use the list members with functions like
 * elm_object_item_del(), elm_object_item_data_get().
 *
 * @warning This list is only valid until @p obj object's internal
 * items list is changed. It should be fetched again with another
 * call to this function when changes happen.
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI const Eina_List * elm_obj_slideshow_items_get(void);

/**
 *
 * Returns the list of sliding transition/effect names available, for a
 * given slideshow widget.
 *
 * @return The list of transitions (list of @b stringshared strings
 * as data)
 *
 * The transitions, which come from @p obj's theme, must be an EDC
 * data item named @c "transitions" on the theme file, with (prefix)
 * names of EDC programs actually implementing them.
 *
 * The available transitions for slideshows on the default theme are:
 * - @c "fade" - the current item fades out, while the new one
 * fades in to the slideshow's viewport.
 * - @c "black_fade" - the current item fades to black, and just
 * then, the new item will fade in.
 * - @c "horizontal" - the current item slides horizontally, until
 * it gets out of the slideshow's viewport, while the new item
 * comes from the left to take its place.
 * - @c "vertical" - the current item slides vertically, until it
 * gets out of the slideshow's viewport, while the new item comes
 * from the bottom to take its place.
 * - @c "square" - the new item starts to appear from the middle of
 * the current one, but with a tiny size, growing until its
 * target (full) size and covering the old one.
 *
 * @warning The stringshared strings get no new references
 * exclusive to the user grabbing the list, here, so if you'd like
 * to use them out of this call's context, you'd better @c
 * eina_stringshare_ref() them. Also the list is an internal list and
 * so is only valid for as long as the slideshow object is valid and
 * has not internally changed its list for some reason, so make a
 * copy if you need it around.
 *
 * @see elm_slideshow_transition_set()
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI const Eina_List * elm_obj_slideshow_transitions_get(void);

/**
 *
 * Get the number of items stored in a given slideshow widget
 *
 * @return The number of items on @p obj, at the moment of this call
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI unsigned int  elm_obj_slideshow_count_get(void);

/**
 *
 * Returns the currently displayed item, in a given slideshow widget
 *
 * @return A handle to the item being displayed in @p obj or
 * @c NULL, if none is (and on errors)
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI Elm_Object_Item * elm_obj_slideshow_item_current_get(void);

/**
 *
 * Returns the list of @b layout names available, for a given
 * slideshow widget.
 *
 * @return The list of layouts (list of @b stringshared strings
 * as data)
 *
 * Slideshow layouts will change how the widget is to dispose each
 * image item in its viewport, with regard to cropping, scaling,
 * etc.
 *
 * The layouts, which come from @p obj's theme, must be an EDC
 * data item name @c "layouts" on the theme file, with (prefix)
 * names of EDC programs actually implementing them.
 *
 * The available layouts for slideshows on the default theme are:
 * - @c "fullscreen" - item images with original aspect, scaled to
 * touch top and down slideshow borders or, if the image's height
 * is not enough, left and right slideshow borders.
 * - @c "not_fullscreen" - the same behavior as the @c "fullscreen"
 * one, but always leaving 10% of the slideshow's dimensions of
 * distance between the item image's borders and the slideshow
 * borders, for each axis.
 *
 * @warning The stringshared strings get no new references
 * exclusive to the user grabbing the list, here, so if you'd like
 * to use them out of this call's context, you'd better @c
 * eina_stringshare_ref() them.
 *
 * @see elm_slideshow_layout_set()
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI const Eina_List * elm_obj_slideshow_layouts_get(void);

/**
 *
 * Slide to the @b previous item, in a given slideshow widget
 *
 * The sliding animation @p obj is set to use will be the
 * transition effect used, after this call is issued.
 *
 * @note If the beginning of the slideshow's internal list of items
 * is reached, it'll wrap around to the list's end, again.
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI void  elm_obj_slideshow_previous(void);

/**
 *
 * Get the the item, in a given slideshow widget, placed at
 * position @p nth, in its internal items list
 *
 * @return The item stored in @p obj at position @p nth or @c NULL,
 * if there's no item with that index (and on errors)
 *
 * @ingroup Slideshow
 *
 * @param[in] nth The number of the item to grab a handle to (0 being
the first)
 *
 */
EOAPI Elm_Object_Item * elm_obj_slideshow_item_nth_get(unsigned int nth);

/**
 *
 * Slide to the @b next item, in a given slideshow widget
 *
 * The sliding animation @p obj is set to use will be the
 * transition effect used, after this call is issued.
 *
 * @note If the end of the slideshow's internal list of items is
 * reached, it'll wrap around to the list's beginning, again.
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI void  elm_obj_slideshow_next(void);

/**
 *
 * Remove all items from a given slideshow widget
 *
 * This removes (and deletes) all items in @p obj, leaving it
 * empty.
 *
 * @see elm_object_item_del(), to remove just one item.
 *
 * @ingroup Slideshow
 *
 *
 */
EOAPI void  elm_obj_slideshow_clear(void);

/**
 *
 * Add (append) a new item in a given slideshow widget.
 *
 * @return A handle to the item added or @c NULL, on errors
 *
 * Add a new item to @p obj's internal list of items, appending it.
 * The item's class must contain the function really fetching the
 * image object to show for this item, which could be an Evas image
 * object or an Elementary photo, for example. The @p data
 * parameter is going to be passed to both class functions of the
 * item.
 *
 * @see #Elm_Slideshow_Item_Class
 * @see elm_slideshow_item_sorted_insert()
 * @see elm_object_item_data_set()
 *
 * @ingroup Slideshow
 *
 * @param[in] itc The item class for the item
 * @param[in] data The item's data
 *
 */
EOAPI Elm_Object_Item * elm_obj_slideshow_item_add(const Elm_Slideshow_Item_Class *itc, const void *data);

/**
 *
 * Insert a new item into the given slideshow widget, using the @p func
 * function to sort items (by item handles).
 *
 * @return Returns The slideshow item handle, on success, or
 * @c NULL, on errors
 *
 * Add a new item to @p obj's internal list of items, in a position
 * determined by the @p func comparing function. The item's class
 * must contain the function really fetching the image object to
 * show for this item, which could be an Evas image object or an
 * Elementary photo, for example. The @p data parameter is going to
 * be passed to both class functions of the item.
 *
 * @see #Elm_Slideshow_Item_Class
 * @see elm_slideshow_item_add()
 *
 * @ingroup Slideshow
 *
 * @param[in] itc The item class for the item
 * @param[in] data The item's data
 * @param[in] func The comparing function to be used to sort slideshow
items <b>by #Elm_Slideshow_Item_Class item handles</b>
 *
 */
EOAPI Elm_Object_Item * elm_obj_slideshow_item_sorted_insert(const Elm_Slideshow_Item_Class *itc, const void *data, Eina_Compare_Cb func);

EOAPI extern const Eo_Event_Description _ELM_SLIDESHOW_EVENT_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_SLIDESHOW_EVENT_TRANSITION_END;
EOAPI extern const Eo_Event_Description _ELM_SLIDESHOW_EVENT_LANGUAGE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_SLIDESHOW_EVENT_ACCESS_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_SLIDESHOW_EVENT_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_SLIDESHOW_EVENT_UNFOCUSED;

/**
 * No description
 */
#define ELM_SLIDESHOW_EVENT_CHANGED (&(_ELM_SLIDESHOW_EVENT_CHANGED))

/**
 * No description
 */
#define ELM_SLIDESHOW_EVENT_TRANSITION_END (&(_ELM_SLIDESHOW_EVENT_TRANSITION_END))

/**
 * No description
 */
#define ELM_SLIDESHOW_EVENT_LANGUAGE_CHANGED (&(_ELM_SLIDESHOW_EVENT_LANGUAGE_CHANGED))

/**
 * No description
 */
#define ELM_SLIDESHOW_EVENT_ACCESS_CHANGED (&(_ELM_SLIDESHOW_EVENT_ACCESS_CHANGED))

/**
 * No description
 */
#define ELM_SLIDESHOW_EVENT_FOCUSED (&(_ELM_SLIDESHOW_EVENT_FOCUSED))

/**
 * No description
 */
#define ELM_SLIDESHOW_EVENT_UNFOCUSED (&(_ELM_SLIDESHOW_EVENT_UNFOCUSED))

#endif
