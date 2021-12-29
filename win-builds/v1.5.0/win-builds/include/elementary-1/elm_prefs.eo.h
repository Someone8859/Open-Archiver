#ifndef _ELM_PREFS_EO_H_
#define _ELM_PREFS_EO_H_

#ifndef _ELM_PREFS_EO_TYPES
#define _ELM_PREFS_EO_TYPES


#endif
#define ELM_PREFS_CLASS elm_prefs_class_get()

const Eo_Class *elm_prefs_class_get(void) EINA_CONST;

/**
 *
 * Set user data for a given prefs widget
 *
 * @return @c EINA_TRUE, on success, @c EINA_FALSE otherwise
 *
 * Once a prefs widget is created, after elm_prefs_file_set() is
 * issued on it, all of its UI elements will get default values, when
 * declared on that file. To fetch an user's own, personal set of
 * those values, one gets to pair a <b>prefs data</b> handle to the
 * prefs widget. This is what this call is intended for.
 *
 * Prefs data values from @a prefs_data with keys matching the ones
 * present on the file passed on elm_prefs_file_set() to @a obj will
 * have their values applied to the respective UI elements of the
 * widget.
 *
 * When @a obj dies, the values of the elements declared on its @b
 * .epb file (the one set on elm_prefs_file_set()) marked as permanent
 * <b>will be written back</b> to @a prefs_data, if it is writable.
 * One is also able to make this writing event to take place
 * automatically after each UI element modification by using
 * elm_prefs_autosave_set().
 *
 * @note @a obj will keep a reference of its own for @a prefs_data,
 * but you should still unreference it by yourself, after the widget
 * is gone.
 *
 * @see elm_prefs_data_get()
 *
 * @since 1.8
 *
 * @param[in] data A valid prefs_data handle
 *
 */
EOAPI Eina_Bool  elm_obj_prefs_data_set(Elm_Prefs_Data *data);

/**
 *
 * Retrieve user data for a given prefs widget
 *
 * @return A pointer to the user data of a given prefs widget on success.
 * @c NULL otherwise.
 *
 * @see elm_prefs_data_set() for more details
 *
 * @since 1.8
 *
 *
 */
EOAPI Elm_Prefs_Data * elm_obj_prefs_data_get(void);

/**
 *
 * Set file and page to populate a given prefs widget's interface.
 *
 * @return @c EINA_TRUE, on success, @c EINA_FALSE otherwise
 *
 * Elm prefs widgets start blank, with no child widgets. It's meant to
 * have its viewport populated with child elements coming from a
 * declaration file. That file (usually with @b .epb extension), is a
 * binary format (Eet) one, coming from a human-readable textual
 * declaration. This textual form (usually with @b .epc extension) is
 * translated to the binary form by means of the @b prefs_cc compiler.
 *
 * With this function, one thus populates a prefs widget with UI
 * elements.
 *
 * If @a file is @c NULL, "elm_app_data_dir_get()/preferences.epb"
 * will be used, by default. If @a file is a @b relative path, the
 * prefix "elm_app_data_dir_get()/" will be implicitly used with it.
 * If @a page is @c NULL, it is considered "main", as default.
 *
 * @warning If your binary is not properly installed and
 * elm_app_data_dir_get() can't be figured out, a fallback value of
 * "." will be tryed, instead.
 *
 * @see elm_prefs_file_get()
 *
 * @since 1.8
 *
 * @param[in] file The @b .epb (binary) file to get contents from
 * @param[in] page The page, inside @a file, where to get item contents from
 *
 */
EOAPI Eina_Bool  elm_obj_prefs_file_set(const char *file, const char *page);

/**
 *
 * Retrieve file and page bound to a given prefs widget.
 *
 * @return @c EINA_TRUE, on success, @c EINA_FALSE otherwise
 *
 * @note Use @c NULL pointers on the components you're not
 * interested in: they'll be ignored by the function.
 *
 * @see elm_prefs_file_set() for more information
 *
 * @since 1.8
 *
 * @param[out] file The @b .epb (binary) file to get contents from
 * @param[out] page The page, inside @a file, where to get item contents from
 *
 */
EOAPI Eina_Bool  elm_obj_prefs_file_get(const char **file, const char **page);

/**
 *
 * Set whether a given prefs widget should save its values back (on
 * the user data file, if set) automatically on every UI element
 * changes.
 *
 * If @a autosave is @c EINA_TRUE, every call to
 * elm_prefs_item_value_set(), every
 * Elm_Prefs_Data_Event_Type.ELM_PREFS_DATA_EVENT_ITEM_CHANGED event
 * coming for its prefs data and every UI element direct value
 * changing will implicitly make the prefs values to be flushed back
 * to it prefs data. If a prefs data handle with no writing
 * permissions or no prefs data is set on @a prefs, naturally nothing
 * will happen.
 *
 * @see elm_prefs_autosave_get()
 *
 * @since 1.8
 *
 * @param[in] autosave @c EINA_TRUE to save automatically, @c EINA_FALSE
otherwise.
 *
 */
EOAPI void  elm_obj_prefs_autosave_set(Eina_Bool autosave);

/**
 *
 * Get whether a given prefs widget is saving its values back
 * automatically on changes.
 *
 * @return @c EINA_TRUE if @a prefs is saving automatically,
 * @c EINA_FALSE otherwise.
 *
 * @see elm_prefs_autosave_set(), for more details
 *
 * @since 1.8
 *
 *
 */
EOAPI Eina_Bool  elm_obj_prefs_autosave_get(void);

/**
 *
 * Reset the values of a given prefs widget to a previous state.
 *
 * As can be seen on #Elm_Prefs_Reset_Mode, there are two possible
 * actions to be taken by this call -- either to reset @a prefs'
 * values to the defaults (declared on the @c .epb file it is bound
 * to) or to reset to the state they were before the last modification
 * it got.
 *
 * @since 1.8
 *
 * @param[in] mode The reset mode to apply on @a prefs
 *
 */
EOAPI void  elm_obj_prefs_reset(Elm_Prefs_Reset_Mode mode);

/**
 *
 * Set the value on a given prefs widget's item.
 *
 * @return @c EINA_TRUE, on success, @c EINA_FALSE otherwise
 *
 * This will change the value of item named @a name programatically.
 *
 * @see elm_prefs_item_value_get()
 *
 * @since 1.8
 *
 * @param[in] name The name of the item (as declared in the prefs
collection)
 * @param[in] value The value to set on the item. It should be typed as
the item expects, preferably, or a conversion will
take place
 *
 */
EOAPI Eina_Bool  elm_obj_prefs_item_value_set(const char *name, const Eina_Value *value);

/**
 *
 * Retrieve the value of a given prefs widget's item.
 *
 * @return @c EINA_TRUE, on success, @c EINA_FALSE otherwise
 *
 * This will retrieve the value of item named @a name.
 *
 * @see elm_prefs_item_value_set()
 *
 * @since 1.8
 *
 * @param[in] name The name of the item (as declared in the prefs
collection) to get value from
 * @param[out] value Where to store the value of the item. It will be
overwritten and setup with the type the item
is bound to
 *
 */
EOAPI Eina_Bool  elm_obj_prefs_item_value_get(const char *name, Eina_Value *value);

/**
 *
 * Retrieve the Elementary widget bound to a given prefs widget's
 * item.
 *
 * @return A valid widget handle, on success, or @c NULL, otherwise
 *
 * This will retrieve a handle to the real widget implementing a given
 * item of @a prefs, <b>for read-only</b> actions.
 *
 * @warning You should @b never modify the state of the returned
 * widget, because it's meant to be managed by @a prefs, solely.
 *
 * @see elm_prefs_item_value_set()
 *
 * @since 1.8
 *
 * @param[in] name The name of the item (as declared in the prefs
collection) to get object from
 *
 */
EOAPI const Evas_Object * elm_obj_prefs_item_object_get(const char *name);

/**
 *
 * Set whether the widget bound to a given prefs widget's item is
 * disabled or not.
 *
 * @see elm_prefs_item_disabled_get()
 *
 * @since 1.8
 *
 * @param[in] name The name of the item (as declared in the prefs
collection) to act on
 * @param[in] disabled @c EINA_TRUE, to make it disabled, @c EINA_FALSE
otherwise
 *
 */
EOAPI void  elm_obj_prefs_item_disabled_set(const char *name, Eina_Bool disabled);

/**
 *
 * Retrieve whether the widget bound to a given prefs widget's item is
 * disabled or not.
 *
 * @return @c EINA_TRUE, if it is disabled, @c EINA_FALSE
 * otherwise
 *
 * @see elm_prefs_item_disabled_set()
 *
 * @since 1.8
 *
 * @param[in] name The name of the item (as declared in the prefs
collection) to get disabled state from
 *
 */
EOAPI Eina_Bool  elm_obj_prefs_item_disabled_get(const char *name);

/**
 *
 * "Swallows" an object into a SWALLOW item of a prefs widget.
 *
 * @return @c EINA_TRUE, on success, @c EINA_FALSE otherwise
 *
 * @see elm_prefs_item_swallow() for more details
 *
 * @since 1.8
 *
 * @param[in] name the name of the SWALLOW item (as declared in the prefs
collection)
 * @param[in] child The object to occupy the item
 *
 */
EOAPI Eina_Bool  elm_obj_prefs_item_swallow(const char *name, Evas_Object *child);

/**
 *
 * Set whether the widget bound to a given prefs widget's item is
 * editable or not.
 *
 * @note Only @c TEXT or @c TEXTAREA items' default widgets implement
 * the 'editable' property. Custom registered widgets may as well
 * implement them.
 *
 * @see elm_prefs_item_editable_get()
 *
 * @since 1.8
 *
 * @param[in] name The name of the item (as declared in the prefs
collection) to act on
 * @param[in] editable @c EINA_TRUE, to make it editable, @c EINA_FALSE
otherwise
 *
 */
EOAPI void  elm_obj_prefs_item_editable_set(const char *name, Eina_Bool editable);

/**
 *
 * Retrieve whether the widget bound to a given prefs widget's item is
 * editable or not.
 *
 * @return @c EINA_TRUE, if it is editable, @c EINA_FALSE
 * otherwise
 *
 * @see elm_prefs_item_editable_set() for more details
 *
 * @since 1.8
 *
 * @param[in] name The name of the item (as declared in the prefs
collection) to get editable state from
 *
 */
EOAPI Eina_Bool  elm_obj_prefs_item_editable_get(const char *name);

/**
 *
 * Unswallow an object from a SWALLOW item of a prefs widget.
 *
 * @return The unswallowed object, or NULL on errors
 *
 * @see elm_prefs_item_unswallow() for more details
 *
 * @since 1.8
 *
 * @param[in] name the name of the SWALLOW item (as declared in the prefs
collection)
 *
 */
EOAPI Evas_Object * elm_obj_prefs_item_unswallow(const char *name);

/**
 *
 * Set whether the widget bound to given prefs widget's item should be
 * visible or not.
 *
 * Each prefs item may have a default visibility state, declared on
 * the @c .epb @a prefs it was loaded with. By this call one may alter
 * that state, programatically.
 *
 * @see elm_prefs_item_visible_get()
 *
 * @since 1.8
 *
 * @param[in] name The name of the item (as declared in the prefs
collection) to change visibility of
 * @param[in] visible @c EINA_TRUE, to make it visible, @c EINA_FALSE
otherwise
 *
 */
EOAPI void  elm_obj_prefs_item_visible_set(const char *name, Eina_Bool visible);

/**
 *
 * Retrieve whether the widget bound to a given prefs widget's item is
 * visible or not.
 *
 * @return @c EINA_TRUE, if it is visible, @c EINA_FALSE
 * otherwise
 *
 * @see elm_prefs_item_visible_set() for more details
 *
 * @since 1.8
 *
 * @param[in] name The name of the item (as declared in the prefs
collection) to get visibility state from
 *
 */
EOAPI Eina_Bool  elm_obj_prefs_item_visible_get(const char *name);

EOAPI extern const Eo_Event_Description _ELM_PREFS_EVENT_PAGE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_PREFS_EVENT_PAGE_SAVED;
EOAPI extern const Eo_Event_Description _ELM_PREFS_EVENT_PAGE_RESET;
EOAPI extern const Eo_Event_Description _ELM_PREFS_EVENT_PAGE_LOADED;
EOAPI extern const Eo_Event_Description _ELM_PREFS_EVENT_ITEM_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_PREFS_EVENT_ACTION;

/**
 * s
 */
#define ELM_PREFS_EVENT_PAGE_CHANGED (&(_ELM_PREFS_EVENT_PAGE_CHANGED))

/**
 * s
 */
#define ELM_PREFS_EVENT_PAGE_SAVED (&(_ELM_PREFS_EVENT_PAGE_SAVED))

/**
 * s
 */
#define ELM_PREFS_EVENT_PAGE_RESET (&(_ELM_PREFS_EVENT_PAGE_RESET))

/**
 * s
 */
#define ELM_PREFS_EVENT_PAGE_LOADED (&(_ELM_PREFS_EVENT_PAGE_LOADED))

/**
 * s
 */
#define ELM_PREFS_EVENT_ITEM_CHANGED (&(_ELM_PREFS_EVENT_ITEM_CHANGED))

/**
 * ss
 */
#define ELM_PREFS_EVENT_ACTION (&(_ELM_PREFS_EVENT_ACTION))

#endif
