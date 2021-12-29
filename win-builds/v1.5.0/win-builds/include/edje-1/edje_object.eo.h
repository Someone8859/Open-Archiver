#ifndef _EDJE_OBJECT_EO_H_
#define _EDJE_OBJECT_EO_H_

#ifndef _EDJE_OBJECT_EO_TYPES
#define _EDJE_OBJECT_EO_TYPES


#endif
#define EDJE_OBJECT_CLASS edje_object_class_get()

const Eo_Class *edje_object_class_get(void) EINA_CONST;

/**
 *
 * @brief Edje will automatically update the size hints on itself.
 *
 * By default edje doesn't set size hints on itself. With this function
 * call, it will do so if update is true. Be carefully, it cost a lot to
 * trigger this feature as it will recalc the object every time it make
 * sense to be sure that's its minimal size hint is always accurate.
 *
 * @param[in] update Whether or not update the size hints.
 *
 */
EOAPI void  edje_obj_update_hints_set(Eina_Bool update);

/**
 *
 * @brief Whether or not Edje will update size hints on itself.
 *
 * @return @c true if does, @c false if it doesn't.
 *
 *
 */
EOAPI Eina_Bool  edje_obj_update_hints_get(void);

/**
 *
 * @brief Set the RTL orientation for this object.
 *
 * @since 1.1.0
 *
 * @param[in] rtl new value of flag EINA_TRUE/EINA_FALSE
 *
 */
EOAPI void  edje_obj_mirrored_set(Eina_Bool rtl);

/**
 *
 * @brief Get the RTL orientation for this object.
 *
 * You can RTL orientation explicitly with edje_object_mirrored_set.
 *
 * @return @c EINA_TRUE if the flag is set or @c EINA_FALSE if not.
 * @since 1.1.0
 *
 *
 */
EOAPI Eina_Bool  edje_obj_mirrored_get(void);

/**
 *
 * @brief Set the object's animation state.
 *
 * This function starts or stops an Edje object's animation. The
 * information if it's stopped can be retrieved by
 * edje_object_animation_get().
 *
 * @see edje_object_animation_get()
 *
 * @param[in] on The animation state. @c EINA_TRUE to starts or
@c EINA_FALSE to stops.
 *
 */
EOAPI void  edje_obj_animation_set(Eina_Bool on);

/**
 *
 * @brief Get the Edje object's animation state.
 *
 * @return @c EINA_FALSE on error or if object is not animated;
 * @c EINA_TRUE if animated.
 *
 * This function returns if the animation is stopped or not. The
 * animation state is set by edje_object_animation_set().
 *
 * @see edje_object_animation_set().
 *
 *
 */
EOAPI Eina_Bool  edje_obj_animation_get(void);

/**
 *
 * @brief Set the Edje object to playing or paused states.
 *
 * This function sets the Edje object @a obj to playing or paused
 * states, depending on the parameter @a play. This has no effect if
 * the object was already at that state.
 *
 * @see edje_object_play_get().
 *
 * @param[in] play Object state (@c EINA_TRUE to playing,
@c EINA_FALSE to paused).
 *
 */
EOAPI void  edje_obj_play_set(Eina_Bool play);

/**
 *
 * @brief Get the Edje object's state.
 *
 * @return @c EINA_FALSE if the object is not connected, its @c delete_me flag
 * is set, or it is at paused state; @c EINA_TRUE if the object is at playing
 * state.
 *
 * This function tells if an Edje object is playing or not. This state
 * is set by edje_object_play_set().
 *
 * @see edje_object_play_set().
 *
 *
 */
EOAPI Eina_Bool  edje_obj_play_get(void);

/**
 *
 * Set the given perspective object on this Edje object.
 *
 * Make the given perspective object be the default perspective for this Edje
 * object.
 *
 * There can be only one perspective object per Edje object, and if a
 * previous one was set, it will be removed and the new perspective object
 * will be used.
 *
 * An Edje perspective will only affect a part if it doesn't point to another
 * part to be used as perspective.
 *
 * @see edje_object_perspective_new()
 * @see edje_object_perspective_get()
 * @see edje_perspective_set()
 *
 * @param[in] ps The perspective object that will be used.
 *
 */
EOAPI void  edje_obj_perspective_set(Edje_Perspective *ps);

/**
 *
 * Get the current perspective used on this Edje object.
 *
 * @return The perspective object being used on this Edje object. Or @c NULL
 * if there was none, and on errors.
 *
 * @see edje_object_perspective_set()
 *
 *
 */
EOAPI const Edje_Perspective * edje_obj_perspective_get(void);

/**
 *
 * @brief Sets the @b EDJ file (and group within it) to load an Edje
 * object's contents from
 *
 * @return @c EINA_TRUE, on success or @c EINA_FALSE, on errors (check
 * edje_object_load_error_get() after this call to get errors causes)
 *
 * Edje expects EDJ files, which are theming objects' descriptions and
 * resources packed together in an EET file, to read Edje object
 * definitions from. They usually are created with the @c .edj
 * extension. EDJ files, in turn, are assembled from @b textual object
 * description files, where one describes Edje objects declaratively
 * -- the EDC files (see @ref edcref "the syntax" for those files).
 *
 * Those description files were designed so that many Edje object
 * definitions -- also called @b groups (or collections) -- could be
 * packed together <b>in the same EDJ file</b>, so that a whole
 * application's theme could be packed in one file only. This is the
 * reason for the @p group argument.
 *
 * Use this function after you instantiate a new Edje object, so that
 * you can "give him life", telling where to get its contents from.
 *
 * @see edje_object_add()
 * @see edje_object_file_get()
 * @see edje_object_mmap_set()
 *
 * @param[in] file The path to the EDJ file to load @p from
 * @param[in] group The name of the group, in @p file, which implements an
Edje object
 *
 */
EOAPI Eina_Bool  edje_obj_file_set(const char *file, const char *group);

/**
 *
 * @brief Get the file and group name that a given Edje object is bound to
 *
 * This gets the EDJ file's path, with the respective group set for
 * the given Edje object. If @a obj is either not an Edje file, or has
 * not had its file/group set previously, by edje_object_file_set(),
 * then both @p file and @p group will be set to @c NULL, indicating
 * an error.
 *
 * @see edje_object_file_set()
 *
 * @note Use @c NULL pointers on the file/group components you're not
 * interested in: they'll be ignored by the function.
 *
 * @param[out] file The path to the EDJ file to load @p from
 * @param[out] group The name of the group, in @p file, which implements an
Edje object
 *
 */
EOAPI void  edje_obj_file_get(const char **file, const char **group);

/**
 *
 * @brief Set the scaling factor for a given Edje object.
 *
 * This function sets an @b individual scaling factor on the @a obj
 * Edje object. This property (or Edje's global scaling factor, when
 * applicable), will affect this object's part sizes. If @p scale is
 * not zero, than the individual scaling will @b override any global
 * scaling set, for the object @p obj's parts. Put it back to zero to
 * get the effects of the global scaling again.
 *
 * @warning Only parts which, at EDC level, had the @c "scale"
 * property set to @c 1, will be affected by this function. Check the
 * complete @ref edcref "syntax reference" for EDC files.
 *
 * @see edje_object_scale_get()
 * @see edje_scale_get() for more details
 *
 * @param[in] scale The scaling factor (the default value is @c 0.0,
meaning individual scaling @b not set)
 *
 */
EOAPI Eina_Bool  edje_obj_scale_set(double scale);

/**
 *
 * @brief Get a given Edje object's scaling factor.
 *
 * This function returns the @c individual scaling factor set on the
 * @a obj Edje object.
 *
 * @see edje_object_scale_set() for more details
 *
 *
 */
EOAPI double  edje_obj_scale_get(void);

/**
 *
 * @brief Sets the @b EDJ file (and group within it) to load an Edje
 * object's contents from
 *
 * @return @c EINA_TRUE, on success or @c EINA_FALSE, on errors (check
 * edje_object_load_error_get() after this call to get errors causes)
 *
 * Edje expects EDJ files, which are theming objects' descriptions and
 * resources packed together in an EET file, to read Edje object
 * definitions from. They usually are created with the @c .edj
 * extension. EDJ files, in turn, are assembled from @b textual object
 * description files, where one describes Edje objects declaratively
 * -- the EDC files (see @ref edcref "the syntax" for those files).
 *
 * Those description files were designed so that many Edje object
 * definitions -- also called @b groups (or collections) -- could be
 * packed together <b>in the same EDJ file</b>, so that a whole
 * application's theme could be packed in one file only. This is the
 * reason for the @p group argument.
 *
 * Use this function after you instantiate a new Edje object, so that
 * you can "give him life", telling where to get its contents from.
 *
 * @see edje_object_add()
 * @see edje_object_file_get()
 * @see edje_object_mmap_set()
 * @since 1.8
 *
 * @param[in] file The Eina.File pointing to the EDJ file to load @p from
 * @param[in] group The name of the group, in @p file, which implements an
Edje object
 *
 */
EOAPI Eina_Bool  edje_obj_mmap_set(const Eina_File *file, const char *group);

/**
 *
 * @brief Set the object text callback.
 *
 * This function sets the callback to be called when the text changes.
 *
 * @param[in] func The callback function to handle the text change
 * @param[in] data The data associated to the callback function.
 *
 */
EOAPI void  edje_obj_text_change_cb_set(Edje_Text_Change_Cb func, void *data);

/**
 *
 * @brief Moves the cursor to the beginning of the text part
 * @see evas_textblock_cursor_paragraph_first
 *
 * @param[in] part The part name
 * @param[in] cur the edje cursor to work on
 *
 */
EOAPI void  edje_obj_part_text_cursor_begin_set(const char *part, Edje_Cursor cur);

/**
 *
 * @brief Move the cursor to the end of the line.
 * @see evas_textblock_cursor_line_char_last
 *
 * @param[in] part The part name
 * @param[in] cur the edje cursor to work on
 *
 */
EOAPI void  edje_obj_part_text_cursor_line_end_set(const char *part, Edje_Cursor cur);

/**
 *
 * @brief Sets Edje text class.
 *
 * @return @c EINA_TRUE, on success or @c EINA_FALSE, on error
 *
 * This function sets the text class for the Edje.
 *
 * @param[in] text_class The text class name
 * @param[in] font Font name
 * @param[in] size Font Size
 *
 */
EOAPI Eina_Bool  edje_obj_text_class_set(const char *text_class, const char *font, Evas_Font_Size size);

/**
 *
 * Position the given cursor to a X,Y position.
 *
 * This is frequently used with the user cursor.
 *
 * @return True on success, false on error.
 *
 * @param[in] part The part containing the object.
 * @param[in] cur The cursor to adjust.
 * @param[in] x X Coordinate.
 * @param[in] y Y Coordinate.
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_cursor_coord_set(const char *part, Edje_Cursor cur, Evas_Coord x, Evas_Coord y);

/**
 *
 * @brief Moves the cursor to the end of the text part.
 * @see evas_textblock_cursor_paragraph_last
 *
 * @param[in] part The part name
 * @param[in] cur the edje cursor to work on
 *
 */
EOAPI void  edje_obj_part_text_cursor_end_set(const char *part, Edje_Cursor cur);

/**
 *
 * @brief Sets the text for an object part, but converts HTML escapes to UTF8
 *
 * This converts the given string @p text to UTF8 assuming it contains HTML
 * style escapes like "&amp;" and "&copy;" etc. IF the part is of type TEXT,
 * as opposed to TEXTBLOCK.
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * @since 1.2
 *
 * @param[in] part The part name
 * @param[in] text The text string
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_escaped_set(const char *part, const char *text);

/**
 *
 * @brief Set the function that provides item objects for named items in an edje entry text
 *
 * Item objects may be deleted any time by Edje, and will be deleted when the
 * Edje object is deleted (or file is set to a new file).
 *
 * @param[in] func The function to call (or NULL to disable) to get item objects
 * @param[in] data The data pointer to pass to the @p func callback
 *
 */
EOAPI void  edje_obj_item_provider_set(Edje_Item_Provider_Cb func, void *data);

/**
 *
 * @brief Move the cursor to the beginning of the line.
 * @see evas_textblock_cursor_line_char_first
 *
 * @param[in] part The part name
 * @param[in] cur the edje cursor to work on
 *
 */
EOAPI void  edje_obj_part_text_cursor_line_begin_set(const char *part, Edje_Cursor cur);

/**
 *
 * @brief Set an Edje message handler function for a given Edje object.
 *
 * For scriptable programs on an Edje object's defining EDC file which
 * send messages with the @c send_message() primitive, one can attach
 * <b>handler functions</b>, to be called in the code which creates
 * that object (see @ref edcref "the syntax" for EDC files).
 *
 * This function associates a message handler function and the
 * attached data pointer to the object @p obj.
 *
 * @see edje_object_message_send()
 *
 * @param[in] func The function to handle messages @b coming from @p obj
 * @param[in] data Auxiliary data to be passed to @p func
 *
 */
EOAPI void  edje_obj_message_handler_set(Edje_Message_Handler_Cb func, void *data);

/**
 *
 * @brief Get the minimum size specified -- as an EDC property -- for a
 * given Edje object
 *
 * This function retrieves the @p obj object's minimum size values,
 * <b>as declared in its EDC group definition</b>. Minimum size of
 * groups have the following syntax
 * @code
 * collections {
 * group {
 * name: "a_group";
 * min: 100 100;
 * }
 * }
 * @endcode
 *
 * where one declares a minimum size of 100 pixels both for width and
 * height. Those are (hint) values which should be respected when the
 * given object/group is to be controlled by a given container object
 * (e.g. an Edje object being "swallowed" into a given @c SWALLOW
 * typed part, as in edje_object_part_swallow()). Check the complete
 * @ref edcref "syntax reference" for EDC files.
 *
 * @note If the @c min EDC property was not declared for @p obj, this
 * call will return the value 0, for each axis.
 *
 * @note On failure, this function will make all non-@c NULL size
 * pointers' pointed variables be set to zero.
 *
 * @see edje_object_size_max_get()
 *
 * @param[out] minw Pointer to a variable where to store the minimum width
 * @param[out] minh Pointer to a variable where to store the minimum height
 *
 */
EOAPI void  edje_obj_size_min_get(Evas_Coord *minw, Evas_Coord *minh);

/**
 *
 * @brief Retrieve a list all accessibility part names
 *
 * @return A list all accessibility part names on @p obj
 * @since 1.7.0
 *
 *
 */
EOAPI Eina_List * edje_obj_access_part_list_get(void);

/**
 *
 * @brief Gets the (last) file loading error for a given Edje object
 *
 * @return The Edje loading error, one of:
 * - #EDJE_LOAD_ERROR_NONE
 * - #EDJE_LOAD_ERROR_GENERIC
 * - #EDJE_LOAD_ERROR_DOES_NOT_EXIST
 * - #EDJE_LOAD_ERROR_PERMISSION_DENIED
 * - #EDJE_LOAD_ERROR_RESOURCE_ALLOCATION_FAILED
 * - #EDJE_LOAD_ERROR_CORRUPT_FILE
 * - #EDJE_LOAD_ERROR_UNKNOWN_FORMAT
 * - #EDJE_LOAD_ERROR_INCOMPATIBLE_FILE
 * - #EDJE_LOAD_ERROR_UNKNOWN_COLLECTION
 * - #EDJE_LOAD_ERROR_RECURSIVE_REFERENCE
 *
 * This function is meant to be used after an Edje EDJ <b>file
 * loading</b>, what takes place with the edje_object_file_set()
 * function. If that function does not return @c EINA_TRUE, one should
 * check for the reason of failure with this one.
 *
 * @see edje_load_error_str()
 *
 *
 */
EOAPI Edje_Load_Error  edje_obj_load_error_get(void);

/**
 *
 * @brief Get the maximum size specified -- as an EDC property -- for a
 * given Edje object
 *
 * This function retrieves the @p obj object's maximum size values,
 * <b>as declared in its EDC group definition</b>. Maximum size of
 * groups have the following syntax
 * @code
 * collections {
 * group {
 * name: "a_group";
 * max: 100 100;
 * }
 * }
 * @endcode
 *
 * where one declares a maximum size of 100 pixels both for width and
 * height. Those are (hint) values which should be respected when the
 * given object/group is to be controlled by a given container object
 * (e.g. an Edje object being "swallowed" into a given @c SWALLOW
 * typed part, as in edje_object_part_swallow()). Check the complete
 * @ref edcref "syntax reference" for EDC files.
 *
 * @note If the @c max EDC property was not declared for @p obj, this
 * call will return the maximum size a given Edje object may have, for
 * each axis.
 *
 * @note On failure, this function will make all non-@c NULL size
 * pointers' pointed variables be set to zero.
 *
 * @see edje_object_size_min_get()
 *
 * @param[out] maxw Pointer to a variable where to store the maximum width
 * @param[out] maxh Pointer to a variable where to store the maximum height
 *
 */
EOAPI void  edje_obj_size_max_get(Evas_Coord *maxw, Evas_Coord *maxh);

/**
 *
 * @brief Removes all object from the table.
 *
 * @return @c EINA_TRUE clear the table, @c EINA_FALSE on failure
 *
 * Removes all object from the table indicated by part, except the
 * internal ones set from the theme.
 *
 * @param[in] part The part name
 * @param[in] clear If set, will delete subobjs on remove
 *
 */
EOAPI Eina_Bool  edje_obj_part_table_clear(const char *part, Eina_Bool clear);

/**
 *
 * Facility to query the type of the given parameter of the given part.
 *
 * @return @c EDJE_EXTERNAL_PARAM_TYPE_MAX on errors, or another value
 * from #Edje_External_Param_Type on success.
 *
 * @param[in] part The part name
 * @param[out] param the parameter name to use.
 *
 */
EOAPI Edje_External_Param_Type  edje_obj_part_external_param_type_get(const char *part, const char *param);

/**
 *
 * @brief Enables selection if the entry is an EXPLICIT selection mode
 * type.
 *
 * The default is to @b not allow selection. This function only affects user
 * selection, functions such as edje_object_part_text_select_all() and
 * edje_object_part_text_select_none() are not affected.
 *
 * @param[in] part The part name
 * @param[in] allow EINA_TRUE to enable, EINA_FALSE otherwise
 *
 */
EOAPI void  edje_obj_part_text_select_allow_set(const char *part, Eina_Bool allow);

/**
 *
 * @brief Returns the state of the Edje part.
 *
 * @return The part state:\n
 * "default" for the default state\n
 * "" for other states
 *
 * @param[in] part The part name
 * @param[out] val_ret No description supplied.
 *
 */
EOAPI const char * edje_obj_part_state_get(const char *part, double *val_ret);

/**
 *
 * Delete a function and matching user data from the markup filter list.
 *
 * Delete the given @p func filter and @p data user data from the list
 * in @p part.
 * Returns the user data pointer given when added.
 *
 * @see edje_object_text_markup_filter_callback_add
 * @see edje_object_text_markup_filter_callback_del
 *
 * @return The same data pointer if successful, or NULL otherwise
 * @since 1.2.0
 *
 * @param[in] part The part name
 * @param[in] func The function callback to remove
 * @param[in] data The data passed to the callback function
 *
 */
EOAPI void * edje_obj_text_markup_filter_callback_del_full(const char *part, Edje_Markup_Filter_Cb func, void *data);

/**
 *
 * @brief Sets the drag step increment.
 *
 * Sets the x,y step increments for a dragable object.
 *
 * Values for @p dx and @p dy are real numbers that range from 0 to 1,
 * representing the relative size of the dragable area on that axis by which the
 * part will be moved.
 *
 * @see edje_object_part_drag_step_get()
 *
 * @param[in] part The part name
 * @param[in] dx The x step amount
 * @param[in] dy The y step amount
 *
 */
EOAPI Eina_Bool  edje_obj_part_drag_step_set(const char *part, double dx, double dy);

/**
 *
 * @brief Gets the drag step increment values.
 *
 * Gets the x and y step increments for the dragable object.
 *
 *
 * @see edje_object_part_drag_step_set()
 *
 * @param[in] part The part
 * @param[out] dx The x step increment pointer
 * @param[out] dy The y step increment pointer
 *
 */
EOAPI Eina_Bool  edje_obj_part_drag_step_get(const char *part, double *dx, double *dy);

/**
 *
 * @brief Get the input method context in entry.
 *
 * If ecore_imf was not available when edje was compiled, this function returns NULL
 * otherwise, the returned pointer is an Ecore_IMF
 *
 * @return The input method context (Ecore_IMF_Context *) in entry
 * @since 1.2.0
 *
 * @param[in] part The part name
 *
 */
EOAPI void * edje_obj_part_text_imf_context_get(const char *part);

/**
 *
 * @brief Starts selecting at current cursor position
 *
 * @param[in] part The part name
 *
 */
EOAPI void  edje_obj_part_text_select_begin(const char *part);

/**
 *
 * @brief Return the text of the object part.
 *
 * @return The text string
 *
 * This function returns the style associated with the textblock part.
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 *
 */
EOAPI const char * edje_obj_part_text_style_user_peek(const char *part);

/**
 *
 * @brief Remove a signal-triggered callback from an object.
 *
 * @return The data pointer
 *
 * This function removes a callback, previously attached to the
 * emittion of a signal, from the object @a obj. The parameters @a
 * emission, @a source and @a func must match exactly those passed to
 * a previous call to edje_object_signal_callback_add(). The data
 * pointer that was passed to this call will be returned.
 *
 * @see edje_object_signal_callback_add().
 * @see edje_object_signal_callback_del_full().
 *
 * @param[in] emission The emission string.
 * @param[in] source The source string.
 * @param[in] func The callback function.
 * @param[in] data The callback function.
 *
 */
EOAPI void * edje_obj_signal_callback_del(const char *emission, const char *source, Edje_Signal_Cb func, void *data);

/**
 *
 * @brief Advances the cursor to the next cursor position.
 * @see evas_textblock_cursor_char_next
 *
 * @param[in] part The part name
 * @param[in] cur The edje cursor to advance
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_cursor_next(const char *part, Edje_Cursor cur);

/**
 *
 * @brief Set the style of the
 *
 * This function sets the style associated with the textblock part.
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 * @param[in] style The style to set (textblock conventions).
 *
 */
EOAPI void  edje_obj_part_text_style_user_push(const char *part, const char *style);

/**
 *
 * @brief Insert text for an object part.
 *
 * This function inserts the text for an object part at the end; It does not
 * move the cursor.
 *
 * @since 1.1
 *
 * @param[in] part The part name
 * @param[in] text The text string
 *
 */
EOAPI void  edje_obj_part_text_append(const char *part, const char *text);

/**
 *
 * @brief Retrieve the geometry of a given Edje part, in a given Edje
 * object's group definition, <b>relative to the object's area</b>
 *
 * This function gets the geometry of an Edje part within its
 * group. The @p x and @p y coordinates are relative to the top left
 * corner of the whole @p obj object's area.
 *
 * @note Use @c NULL pointers on the geometry components you're not
 * interested in: they'll be ignored by the function.
 *
 * @note On failure, this function will make all non-@c NULL geometry
 * pointers' pointed variables be set to zero.
 *
 * @param[in] part The Edje part's name
 * @param[out] x A pointer to a variable where to store the part's x
coordinate
 * @param[out] y A pointer to a variable where to store the part's y
coordinate
 * @param[out] w A pointer to a variable where to store the part's width
 * @param[out] h A pointer to a variable where to store the part's height
 *
 */
EOAPI Eina_Bool  edje_obj_part_geometry_get(const char *part, Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * @brief Hide the input panel (virtual keyboard).
 * @see edje_object_part_text_input_panel_show
 *
 * Note that input panel is shown or hidden automatically according to the focus state.
 * This API can be used in the case of manually controlling by using edje_object_part_text_input_panel_enabled_set.
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 *
 */
EOAPI void  edje_obj_part_text_input_panel_hide(const char *part);

/**
 *
 * @brief Return item geometry.
 *
 * @return 1 if item exists, 0 if not
 *
 * This function return a list of Evas_Textblock_Rectangle item
 * rectangles.
 *
 * @param[in] part The part name
 * @param[in] item The item name
 * @param[out] cx Item x return (relative to entry part)
 * @param[out] cy Item y return (relative to entry part)
 * @param[out] cw Item width return
 * @param[out] ch Item height return
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_item_geometry_get(const char *part, const char *item, Evas_Coord *cx, Evas_Coord *cy, Evas_Coord *cw, Evas_Coord *ch);

/**
 *
 * @brief Removes an object from the table.
 *
 * @return @c EINA_TRUE object removed, @c EINA_FALSE on failure
 *
 * Removes an object from the table indicated by part.
 *
 * @param[in] part The part name
 * @param[in] child_obj The object to pack in
 *
 */
EOAPI Eina_Bool  edje_obj_part_table_unpack(const char *part, Evas_Object *child_obj);

/**
 *
 * @brief Aborts any selection action on a part.
 *
 * @param[in] part The part name
 *
 */
EOAPI void  edje_obj_part_text_select_abort(const char *part);

/**
 *
 * Delete a function and matching user data from the filter list.
 *
 * Delete the given @p func filter and @p data user data from the list
 * in @p part.
 * Returns the user data pointer given when added.
 *
 * @see edje_object_text_insert_filter_callback_add
 * @see edje_object_text_insert_filter_callback_del
 *
 * @return The same data pointer if successful, or NULL otherwise
 *
 * @param[in] part The part name
 * @param[in] func The function callback to remove
 * @param[in] data The data passed to the callback function
 *
 */
EOAPI void * edje_obj_text_insert_filter_callback_del_full(const char *part, Edje_Text_Filter_Cb func, void *data);

/**
 *
 * @brief Delete the top style form the user style stack.
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 *
 */
EOAPI void  edje_obj_part_text_style_user_pop(const char *part);

/**
 *
 * Set the input panel-specific data to deliver to the input panel.
 *
 * This API is used by applications to deliver specific data to the input panel.
 * The data format MUST be negotiated by both application and the input panel.
 * The size and format of data are defined by the input panel.
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 * @param[in] data The specific data to be set to the input panel.
 * @param[in] len the length of data, in bytes, to send to the input panel
 *
 */
EOAPI void  edje_obj_part_text_input_panel_imdata_set(const char *part, const void *data, int len);

/**
 *
 * Get the specific data of the current active input panel.
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 * @param[in] data The specific data to be got from the input panel
 * @param[in] len The length of data
 *
 */
EOAPI void  edje_obj_part_text_input_panel_imdata_get(const char *part, void *data, int *len);

/**
 *
 * @brief Insert text for an object part.
 *
 * This function inserts the text for an object part just before the
 * cursor position.
 *
 * @param[in] part The part name
 * @param[in] text The text string
 *
 */
EOAPI void  edje_obj_part_text_insert(const char *part, const char *text);

/**
 *
 * @brief Removes an object from the box.
 *
 * @return Pointer to the object removed, or @c NULL.
 *
 * Removes from the box indicated by part, the object in the position
 * pos.
 *
 * @see edje_object_part_box_remove()
 * @see edje_object_part_box_remove_all()
 *
 * @param[in] part The part name
 * @param[in] pos The position index of the object (starts counting from 0)
 *
 */
EOAPI Evas_Object * edje_obj_part_box_remove_at(const char *part, unsigned int pos);

/**
 *
 * @brief Copy the cursor to another cursor.
 *
 * @param[in] part The part name
 * @param[in] src the cursor to copy from
 * @param[in] dst the cursor to copy to
 *
 */
EOAPI void  edje_obj_part_text_cursor_copy(const char *part, Edje_Cursor src, Edje_Cursor dst);

/**
 *
 * Calculate the geometry of the region, relative to a given Edje
 * object's area, <b>occupied by all parts in the object</b>
 *
 * This function gets the geometry of the rectangle equal to the area
 * required to group all parts in @p obj's group/collection. The @p x
 * and @p y coordinates are relative to the top left corner of the
 * whole @p obj object's area. Parts placed out of the group's
 * boundaries will also be taken in account, so that @p x and @p y
 * <b>may be negative</b>.
 *
 * @note Use @c NULL pointers on the geometry components you're not
 * interested in: they'll be ignored by the function.
 *
 * @note On failure, this function will make all non-@c NULL geometry
 * pointers' pointed variables be set to zero.
 *
 * @param[out] x A pointer to a variable where to store the parts region's
x coordinate
 * @param[out] y A pointer to a variable where to store the parts region's
y coordinate
 * @param[out] w A pointer to a variable where to store the parts region's
width
 * @param[out] h A pointer to a variable where to store the parts region's
height
 *
 */
EOAPI Eina_Bool  edje_obj_parts_extends_calc(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * @brief Set the dragable object location.
 *
 * Places the dragable object at the given location.
 *
 * Values for @p dx and @p dy are real numbers that range from 0 to 1,
 * representing the relative position to the dragable area on that axis.
 *
 * This value means, for the vertical axis, that 0.0 will be at the top if the
 * first parameter of @c y in the dragable part theme is 1, and at bottom if it
 * is -1.
 *
 * For the horizontal axis, 0.0 means left if the first parameter of @c x in the
 * dragable part theme is 1, and right if it is -1.
 *
 * @see edje_object_part_drag_value_get()
 *
 * @param[in] part The part name
 * @param[in] dx The x value
 * @param[in] dy The y value
 *
 */
EOAPI Eina_Bool  edje_obj_part_drag_value_set(const char *part, double dx, double dy);

/**
 *
 * @brief Get the dragable object location.
 *
 * Values for @p dx and @p dy are real numbers that range from 0 to 1,
 * representing the relative position to the dragable area on that axis.
 *
 * @see edje_object_part_drag_value_set()
 *
 * Gets the drag location values.
 *
 * @param[in] part The part name
 * @param[out] dx The X value pointer
 * @param[out] dy The Y value pointer
 *
 */
EOAPI Eina_Bool  edje_obj_part_drag_value_get(const char *part, double *dx, double *dy);

/**
 *
 * @brief Force a Size/Geometry calculation.
 *
 * Forces the object @p obj to recalculation layout regardless of
 * freeze/thaw.
 *
 *
 */
EOAPI void  edje_obj_calc_force(void);

/**
 *
 * @brief Sets the cursor position to the given value
 *
 * @since 1.1.0
 *
 * @param[in] part The part name
 * @param[in] cur The cursor to move
 * @param[in] pos the position of the cursor
 *
 */
EOAPI void  edje_obj_part_text_cursor_pos_set(const char *part, Edje_Cursor cur, int pos);

/**
 *
 * @brief Retrieves the current position of the cursor
 *
 * @return The cursor position
 * @since 1.1.0
 *
 * @param[in] part The part name
 * @param[in] cur The cursor to get the position
 *
 */
EOAPI int  edje_obj_part_text_cursor_pos_get(const char *part, Edje_Cursor cur);

/**
 *
 * @brief Freezes the Edje object.
 *
 * @return The frozen state or 0 on Error
 *
 * This function puts all changes on hold. Successive freezes will
 * nest, requiring an equal number of thaws.
 *
 * @see edje_object_thaw()
 *
 *
 */
EOAPI int  edje_obj_freeze(void);

/**
 *
 * @brief Returns the content (char) at the cursor position.
 * @see evas_textblock_cursor_content_get
 *
 * You must free the return (if not NULL) after you are done with it.
 *
 * @return The character string pointed to (may be a multi-byte utf8 sequence) terminated by a nul byte.
 *
 * @param[in] part The part name
 * @param[in] cur The cursor to use
 *
 */
EOAPI char * edje_obj_part_text_cursor_content_get(const char *part, Edje_Cursor cur);

/**
 *
 * @brief Set the layout of the input panel.
 *
 * The layout of the input panel or virtual keyboard can make it easier or
 * harder to enter content. This allows you to hint what kind of input you
 * are expecting to enter and thus have the input panel automatically
 * come up with the right mode.
 *
 * @since 1.1
 *
 * @param[in] part The part name
 * @param[in] layout layout type
 *
 */
EOAPI void  edje_obj_part_text_input_panel_layout_set(const char *part, Edje_Input_Panel_Layout layout);

/**
 *
 * @brief Get the layout of the input panel.
 *
 * @return Layout type of the input panel
 *
 * @see edje_object_part_text_input_panel_layout_set
 * @since 1.1
 *
 * @param[in] part The part name
 *
 */
EOAPI Edje_Input_Panel_Layout  edje_obj_part_text_input_panel_layout_get(const char *part);

/**
 *
 * @brief Packs an object into the table.
 *
 * @return @c EINA_TRUE object was added, @c EINA_FALSE on failure
 *
 * Packs an object into the table indicated by part.
 *
 * @param[in] part The part name
 * @param[in] child_obj The object to pack in
 * @param[in] col The column to place it in
 * @param[in] row The row to place it in
 * @param[in] colspan Columns the child will take
 * @param[in] rowspan Rows the child will take
 *
 */
EOAPI Eina_Bool  edje_obj_part_table_pack(const char *part, Evas_Object *child_obj, unsigned short col, unsigned short row, unsigned short colspan, unsigned short rowspan);

/**
 *
 * Set the language mode of the input panel.
 *
 * This API can be used if you want to show the Alphabet keyboard.
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 * @param[in] lang the language to be set to the input panel.
 *
 */
EOAPI void  edje_obj_part_text_input_panel_language_set(const char *part, Edje_Input_Panel_Lang lang);

/**
 *
 * Get the language mode of the input panel.
 *
 * See @ref edje_object_part_text_input_panel_language_set for more details.
 *
 * @return input panel language type
 * @since 1.2.0
 *
 * @param[in] part The part name
 *
 */
EOAPI Edje_Input_Panel_Lang  edje_obj_part_text_input_panel_language_get(const char *part);

/**
 *
 * @brief Gets the number of columns and rows the table has.
 *
 * @return @c EINA_TRUE get some data, @c EINA_FALSE on failure
 *
 * Retrieves the size of the table in number of columns and rows.
 *
 * @param[in] part The part name
 * @param[out] cols Pointer where to store number of columns (can be NULL)
 * @param[out] rows Pointer where to store number of rows (can be NULL)
 *
 */
EOAPI Eina_Bool  edje_obj_part_table_col_row_size_get(const char *part, int *cols, int *rows);

/**
 *
 * @brief Get the object created by this external part.
 *
 * Parts of type external creates the part object using information
 * provided by external plugins. It's somehow like "swallow"
 * (edje_object_part_swallow()), but it's all set automatically.
 *
 * This function returns the part created by such external plugins and
 * being currently managed by this Edje.
 *
 * @note Almost all swallow rules apply: you should not move, resize,
 * hide, show, set the color or clipper of such part. It's a bit
 * more restrictive as one must @b never delete this object!
 *
 * @return The externally created object, or NULL if there is none or
 * part is not an external.
 *
 * @param[in] part The part name
 *
 */
EOAPI Evas_Object * edje_obj_part_external_object_get(const char *part);

/**
 *
 * @brief Get an object contained in an part of type EXTERNAL
 *
 * The @p content string must not be NULL. Its actual value depends on the
 * code providing the EXTERNAL.
 *
 * @param[in] part The name of the part holding the EXTERNAL
 * @param[out] content A string identifying which content from the EXTERNAL to get
 *
 */
EOAPI Evas_Object * edje_obj_part_external_content_get(const char *part, const char *content);

/**
 *
 * @brief Preload the images on the Edje Object in the background.
 *
 * @return @c EINA_FASLE if obj was not a valid Edje object
 * otherwise @c EINA_TRUE
 *
 * This function requests the preload of all data images (on the given
 * object) in the background. The work is queued before being processed
 * (because there might be other pending requests of this type).
 * It emits a signal "preload,done" when finished.
 *
 * @note Use @c EINA_TRUE on scenarios where you don't need
 * the image data preloaded anymore.
 *
 * @param[in] cancel @c EINA_FALSE will add it the preloading work queue,
@c EINA_TRUE will remove it (if it was issued before).
 *
 */
EOAPI Eina_Bool  edje_obj_preload(Eina_Bool cancel);

/**
 *
 * @brief Sets the attribute to show the input panel automatically.
 *
 * @since 1.1.0
 *
 * @param[in] part The part name
 * @param[in] enabled If true, the input panel is appeared when entry is clicked or has a focus
 *
 */
EOAPI void  edje_obj_part_text_input_panel_enabled_set(const char *part, Eina_Bool enabled);

/**
 *
 * @brief Retrieve the attribute to show the input panel automatically.
 * @see edje_object_part_text_input_panel_enabled_set
 *
 * @return EINA_TRUE if it supports or EINA_FALSE otherwise
 * @since 1.1.0
 *
 * @param[in] part The part name
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_input_panel_enabled_get(const char *part);

/**
 *
 * @brief Extends the current selection to the current cursor position
 *
 * @param[in] part The part name
 *
 */
EOAPI void  edje_obj_part_text_select_extend(const char *part);

/**
 *
 * @brief Inserts an object to the box.
 *
 * @return @c EINA_TRUE: Successfully added.\n
 * @c EINA_FALSE: An error occurred.
 *
 * Adds child to the box indicated by part, in the position given by
 * pos.
 *
 * @see edje_object_part_box_append()
 * @see edje_object_part_box_prepend()
 * @see edje_object_part_box_insert_before()
 *
 * @param[in] part The part name
 * @param[in] child The object to insert
 * @param[in] pos The position where to insert child
 *
 */
EOAPI Eina_Bool  edje_obj_part_box_insert_at(const char *part, Evas_Object *child, unsigned int pos);

/**
 *
 * @brief Return a list of Evas_Textblock_Rectangle anchor rectangles.
 *
 * @return The list of anchor rects (const Evas_Textblock_Rectangle
 * *), do not modify! Geometry is relative to entry part.
 *
 * This function return a list of Evas_Textblock_Rectangle anchor
 * rectangles.
 *
 * @param[in] part The part name
 * @param[in] anchor The anchor name
 *
 */
EOAPI const Eina_List * edje_obj_part_text_anchor_geometry_get(const char *part, const char *anchor);

/**
 *
 * @brief Moves the cursor to the char below the current cursor position.
 *
 * @param[in] part The part name
 * @param[in] cur the edje cursor to work on
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_cursor_down(const char *part, Edje_Cursor cur);

/**
 *
 * @brief Sets the page step increments.
 *
 * Sets the x,y page step increment values.
 *
 * Values for @p dx and @p dy are real numbers that range from 0 to 1,
 * representing the relative size of the dragable area on that axis by which the
 * part will be moved.
 *
 * @see edje_object_part_drag_page_get()
 *
 * @param[in] part The part name
 * @param[in] dx The x page step increment
 * @param[in] dy The y page step increment
 *
 */
EOAPI Eina_Bool  edje_obj_part_drag_page_set(const char *part, double dx, double dy);

/**
 *
 * @brief Gets the page step increments.
 *
 * Gets the x,y page step increments for the dragable object.
 *
 * @see edje_object_part_drag_page_set()
 *
 * @param[in] part The part name
 * @param[out] dx The dx page increment pointer
 * @param[out] dy The dy page increment pointer
 *
 */
EOAPI Eina_Bool  edje_obj_part_drag_page_get(const char *part, double *dx, double *dy);

/**
 *
 * @brief Prepends an object to the box.
 *
 * @return @c EINA_TRUE: Successfully added.\n
 * @c EINA_FALSE: An error occurred.
 *
 * Prepends child to the box indicated by part.
 *
 * @see edje_object_part_box_append()
 * @see edje_object_part_box_insert_before()
 * @see edje_object_part_box_insert_at()
 *
 * @param[in] part The part name
 * @param[in] child The object to prepend
 *
 */
EOAPI Eina_Bool  edje_obj_part_box_prepend(const char *part, Evas_Object *child);

/**
 *
 * @brief Send/emit an Edje signal to a given Edje object
 *
 * This function sends a signal to the object @a obj. An Edje program,
 * at @p obj's EDC specification level, can respond to a signal by
 * having declared matching @c 'signal' and @c 'source' fields on its
 * block (see @ref edcref "the syntax" for EDC files).
 *
 * As an example,
 * @code
 * edje_object_signal_emit(obj, "a_signal", "");
 * @endcode
 * would trigger a program which had an EDC declaration block like
 * @code
 * program {
 * name: "a_program";
 * signal: "a_signal";
 * source: "";
 * action: ...
 * }
 * @endcode
 *
 * @see edje_object_signal_callback_add() for more on Edje signals.
 *
 * @param[in] emission The signal's "emission" string
 * @param[in] source The signal's "source" string
 *
 */
EOAPI void  edje_obj_signal_emit(const char *emission, const char *source);

/**
 *
 * @brief Set the layout variation of the input panel.
 *
 * The layout variation of the input panel or virtual keyboard can make it easier or
 * harder to enter content. This allows you to hint what kind of input you
 * are expecting to enter and thus have the input panel automatically
 * come up with the right mode.
 *
 * @since 1.8
 *
 * @param[in] part The part name
 * @param[in] variation layout variation type
 *
 */
EOAPI void  edje_obj_part_text_input_panel_layout_variation_set(const char *part, int variation);

/**
 *
 * @brief Get the layout variation of the input panel.
 *
 * @return Layout variation type of the input panel
 *
 * @see edje_object_part_text_input_panel_layout_variation_set
 * @since 1.8
 *
 * @param[in] part The part name
 *
 */
EOAPI int  edje_obj_part_text_input_panel_layout_variation_get(const char *part);

/**
 *
 * @brief Send an (Edje) message to a given Edje object
 *
 * This function sends an Edje message to @p obj and to all of its
 * child objects, if it has any (swallowed objects are one kind of
 * child object). @p type and @p msg @b must be matched accordingly,
 * as documented in #Edje_Message_Type.
 *
 * The @p id argument as a form of code and theme defining a common
 * interface on message communication. One should define the same IDs
 * on both code and EDC declaration (see @ref edcref "the syntax" for
 * EDC files), to individualize messages (binding them to a given
 * context).
 *
 * The function to handle messages arriving @b from @b obj is set with
 * edje_object_message_handler_set().
 *
 * @param[in] type The type of message to send to @p obj
 * @param[in] id A identification number for the message to be sent
 * @param[in] msg The message's body, a struct depending on @p type
 *
 */
EOAPI void  edje_obj_message_send(Edje_Message_Type type, int id, void *msg);

/**
 *
 * @brief Set the selection to be none.
 *
 * This function sets the selection text to be none.
 *
 * @param[in] part The part name
 *
 */
EOAPI void  edje_obj_part_text_select_none(const char *part);

/**
 *
 * @brief Get a handle to the Evas object implementing a given Edje
 * part, in an Edje object.
 *
 * @return A pointer to the Evas object implementing the given part,
 * or @c NULL on failure (e.g. the given part doesn't exist)
 *
 * This function gets a pointer of the Evas object corresponding to a
 * given part in the @p obj object's group.
 *
 * You should @b never modify the state of the returned object (with
 * @c evas_object_move() or @c evas_object_hide() for example),
 * because it's meant to be managed by Edje, solely. You are safe to
 * query information about its current state (with @c
 * evas_object_visible_get() or @c evas_object_color_get() for
 * example), though.
 *
 * @param[in] part The Edje part's name
 *
 */
EOAPI const Evas_Object * edje_obj_part_object_get(const char *part);

/**
 *
 * @brief Set the dragable object size.
 *
 * Values for @p dw and @p dh are real numbers that range from 0 to 1,
 * representing the relative size of the dragable area on that axis.
 *
 * Sets the size of the dragable object.
 *
 * @see edje_object_part_drag_size_get()
 *
 * @param[in] part The part name
 * @param[in] dw The drag width
 * @param[in] dh The drag height
 *
 */
EOAPI Eina_Bool  edje_obj_part_drag_size_set(const char *part, double dw, double dh);

/**
 *
 * @brief Get the dragable object size.
 *
 * Gets the dragable object size.
 *
 * @see edje_object_part_drag_size_set()
 *
 * @param[in] part The part name
 * @param[out] dw The drag width pointer
 * @param[out] dh The drag height pointer
 *
 */
EOAPI Eina_Bool  edje_obj_part_drag_size_get(const char *part, double *dw, double *dh);

/**
 *
 * Delete a function from the filter list.
 *
 * Delete the given @p func filter from the list in @p part. Returns
 * the user data pointer given when added.
 *
 * @see edje_object_text_insert_filter_callback_add
 * @see edje_object_text_insert_filter_callback_del_full
 *
 * @return The user data pointer if successful, or NULL otherwise
 *
 * @param[in] part The part name
 * @param[in] func The function callback to remove
 *
 */
EOAPI void * edje_obj_text_insert_filter_callback_del(const char *part, Edje_Text_Filter_Cb func);

/**
 *
 * @brief Determine dragable directions.
 *
 * The dragable directions are defined in the EDC file, inside the @c dragable
 * section, by the attributes @c x and @c y. See the @ref edcref for more
 * information.
 *
 * @return #EDJE_DRAG_DIR_NONE: Not dragable\n
 * #EDJE_DRAG_DIR_X: Dragable in X direction\n
 * #EDJE_DRAG_DIR_Y: Dragable in Y direction\n
 * #EDJE_DRAG_DIR_XY: Dragable in X & Y directions
 *
 * @param[in] part The part name
 *
 */
EOAPI Edje_Drag_Dir  edje_obj_part_drag_dir_get(const char *part);

/**
 *
 * @brief Sets the raw (non escaped) text for an object part.
 *
 * This funciton will not do escape for you if it is a TEXTBLOCK part, that is,
 * if text contain tags, these tags will not be interpreted/parsed by TEXTBLOCK.
 *
 * @see edje_object_part_text_unescaped_get().
 *
 * @param[in] part The part name
 * @param[in] text_to_escape The text string
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_unescaped_set(const char *part, const char *text_to_escape);

/**
 *
 * @brief Returns the text of the object part, without escaping.
 *
 * @return The @b allocated text string without escaping, or NULL on
 * problems.
 *
 * This function is the counterpart of
 * edje_object_part_text_unescaped_set(). Please notice that the
 * result is newly allocated memory and should be released with free()
 * when done.
 *
 * @see edje_object_part_text_unescaped_set().
 *
 * @param[in] part The part name
 *
 */
EOAPI char * edje_obj_part_text_unescaped_get(const char *part);

/**
 *
 * @brief Add a callback for an arriving Edje signal, emitted by
 * a given Edje object.
 *
 * Edje signals are one of the communication interfaces between
 * @b code and a given Edje object's @b theme. With signals, one can
 * communicate two string values at a time, which are:
 * - "emission" value: the name of the signal, in general
 * - "source" value: a name for the signal's context, in general
 *
 * Though there are those common uses for the two strings, one is free
 * to use them however they like.
 *
 * This function adds a callback function to a signal emitted by @a obj, to
 * be issued every time an EDC program like the following
 * @code
 * program {
 * name: "emit_example";
 * action: SIGNAL_EMIT "a_signal" "a_source";
 * }
 * @endcode
 * is run, if @p emission and @p source are given those same values,
 * here.
 *
 * Signal callback registration is powerful, in the way that @b blobs
 * may be used to match <b>multiple signals at once</b>. All the @c
 * "*?[\" set of @c fnmatch() operators can be used, both for @p
 * emission and @p source.
 *
 * Edje has @b internal signals it will emit, automatically, on
 * various actions taking place on group parts. For example, the mouse
 * cursor being moved, pressed, released, etc., over a given part's
 * area, all generate individual signals.
 *
 * By using something like
 * @code
 * edje_object_signal_callback_add(obj, "mouse,down,*", "button.*",
 * signal_cb, NULL);
 * @endcode
 * being @c "button.*" the pattern for the names of parts implementing
 * buttons on an interface, you'd be registering for notifications on
 * events of mouse buttons being pressed down on either of those parts
 * (those events all have the @c "mouse,down," common prefix on their
 * names, with a suffix giving the button number). The actual emission
 * and source strings of an event will be passed in as the @a emission
 * and @a source parameters of the callback function (e.g. @c
 * "mouse,down,2" and @c "button.close"), for each of those events.
 *
 * @note See @ref edcref "the syntax" for EDC files
 * @see edje_object_signal_emit() on how to emits Edje signals from
 * code to a an object
 * @see edje_object_signal_callback_del_full()
 *
 * @param[in] emission The signal's "emission" string
 * @param[in] source The signal's "source" string
 * @param[in] func The callback function to be executed when the signal is
emitted.
 * @param[in] data A pointer to data to pass in to @p func.
 *
 */
EOAPI void  edje_obj_signal_callback_add(const char *emission, const char *source, Edje_Signal_Cb func, void *data);

/**
 *
 * @brief Set the selection to be everything.
 *
 * This function selects all text of the object of the part.
 *
 * @param[in] part The part name
 *
 */
EOAPI void  edje_obj_part_text_select_all(const char *part);

/**
 *
 * Set the return key on the input panel to be disabled.
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 * @param[in] disabled The state
 *
 */
EOAPI void  edje_obj_part_text_input_panel_return_key_disabled_set(const char *part, Eina_Bool disabled);

/**
 *
 * Get whether the return key on the input panel should be disabled or not.
 *
 * @return EINA_TRUE if it should be disabled
 * @since 1.2.0
 *
 * @param[in] part The part name
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_input_panel_return_key_disabled_get(const char *part);

/**
 *
 * @brief Set the autocapitalization type on the immodule.
 *
 * @since 1.1.0
 *
 * @param[in] part The part name
 * @param[in] autocapital_type The type of autocapitalization
 *
 */
EOAPI void  edje_obj_part_text_autocapital_type_set(const char *part, Edje_Text_Autocapital_Type autocapital_type);

/**
 *
 * @brief Retrieves the autocapitalization type
 *
 * @return The autocapitalization type
 * @since 1.1.0
 *
 * @param[in] part The part name
 *
 */
EOAPI Edje_Text_Autocapital_Type  edje_obj_part_text_autocapital_type_get(const char *part);

/**
 *
 * @brief Unswallow an object.
 *
 * Causes the edje to regurgitate a previously swallowed object. :)
 *
 * @note @p obj_swallow will @b not be deleted or hidden.
 * @note @p obj_swallow may appear shown on the evas depending on its state when
 * it got unswallowed. Make sure you delete it or hide it if you do not want it to.
 *
 * @param[in] obj_swallow The swallowed object
 *
 */
EOAPI void  edje_obj_part_unswallow(Evas_Object *obj_swallow);

/**
 *
 * @brief Set whether the prediction is allowed or not.
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 * @param[in] prediction If true, the prediction feature is allowed.
 *
 */
EOAPI void  edje_obj_part_text_prediction_allow_set(const char *part, Eina_Bool prediction);

/**
 *
 * @brief Get whether the prediction is allowed or not.
 *
 * @return EINA_TRUE if prediction feature is allowed.
 * @since 1.2.0
 *
 * @param[in] part The part name
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_prediction_allow_get(const char *part);

/**
 *
 * @brief Retrive an <b>EDC data field's value</b> from a given Edje
 * object's group.
 *
 * @return The data's value string. Must not be freed.
 *
 * This function fetches an EDC data field's value, which is declared
 * on the objects building EDC file, <b>under its group</b>. EDC data
 * blocks are most commonly used to pass arbitrary parameters from an
 * application's theme to its code.
 *
 * They look like the following:
 *
 * @code
 * collections {
 * group {
 * name: "a_group";
 * data {
 * item: "key1" "value1";
 * item: "key2" "value2";
 * }
 * }
 * }
 * @endcode
 *
 * EDC data fields always hold @b strings as values, hence the return
 * type of this function. Check the complete @ref edcref "syntax reference"
 * for EDC files.
 *
 * @warning Do not confuse this call with edje_file_data_get(), which
 * queries for a @b global EDC data field on an EDC declaration file.
 *
 * @see edje_object_file_set()
 *
 * @param[in] key The data field's key string
 *
 */
EOAPI const char * edje_obj_data_get(const char *key);

/**
 *
 * Add a markup filter function for newly inserted text.
 *
 * Whenever text is inserted (not the same as set) into the given @p part,
 * the list of markup filter functions will be called to decide if and how
 * the new text will be accepted.
 * The text parameter in the @p func filter is always markup. It can be
 * modified by the user and it's up to him to free the one passed if he's to
 * change the pointer. If doing so, the newly set text should be malloc'ed,
 * as once all the filters are called Edje will free it.
 * If the text is to be rejected, freeing it and setting the pointer to NULL
 * will make Edje break out of the filter cycle and reject the inserted
 * text.
 * This function is different from edje_object_text_insert_filter_callback_add()
 * in that the text parameter in the @p fucn filter is always markup.
 *
 * @warning If you use this function with
 * edje_object_text_insert_filter_callback_add() togehter, all
 * Edje_Text_Filter_Cb functions and Edje_Markup_Filter_Cb functions
 * will be executed, and then filtered text will be inserted.
 *
 * @see edje_object_text_markup_filter_callback_del
 * @see edje_object_text_markup_filter_callback_del_full
 * @see edje_object_text_insert_filter_callback_add
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 * @param[in] func The callback function that will act as markup filter
 * @param[in] data User provided data to pass to the filter function
 *
 */
EOAPI void  edje_obj_text_markup_filter_callback_add(const char *part, Edje_Markup_Filter_Cb func, void *data);

/**
 *
 * @brief Process an object's message queue.
 *
 * This function goes through the object message queue processing the
 * pending messages for @b this specific Edje object. Normally they'd
 * be processed only at idle time.
 *
 *
 */
EOAPI void  edje_obj_message_signal_process(void);

/**
 *
 * @brief Removes an object from the box.
 *
 * @return Pointer to the object removed, or @c NULL.
 *
 * Removes child from the box indicated by part.
 *
 * @see edje_object_part_box_remove_at()
 * @see edje_object_part_box_remove_all()
 *
 * @param[in] part The part name
 * @param[in] child The object to remove
 *
 */
EOAPI Evas_Object * edje_obj_part_box_remove(const char *part, Evas_Object *child);

/**
 *
 * @brief Thaws the Edje object.
 *
 * @return The frozen state or 0 if the object is not frozen or on error.
 *
 * This function thaws the given Edje object.
 *
 * @note: If sucessives freezes were done, an equal number of
 * thaws will be required.
 *
 * @see edje_object_freeze()
 *
 *
 */
EOAPI int  edje_obj_thaw(void);

/**
 *
 * @brief Get the object currently swallowed by a part.
 *
 * @return The swallowed object, or NULL if there is none.
 *
 * @param[in] part The part name
 *
 */
EOAPI Evas_Object * edje_obj_part_swallow_get(const char *part);

/**
 *
 * @brief Reset the input method context if needed.
 *
 * This can be necessary in the case where modifying the buffer would confuse on-going input method behavior
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 *
 */
EOAPI void  edje_obj_part_text_imf_context_reset(const char *part);

/**
 *
 * Set the "return" key type. This type is used to set string or icon on the "return" key of the input panel.
 *
 * An input panel displays the string or icon associated with this type
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 * @param[in] return_key_type The type of "return" key on the input panel
 *
 */
EOAPI void  edje_obj_part_text_input_panel_return_key_type_set(const char *part, Edje_Input_Panel_Return_Key_Type return_key_type);

/**
 *
 * Get the "return" key type.
 *
 * @see edje_object_part_text_input_panel_return_key_type_set() for more details
 *
 * @return The type of "return" key on the input panel
 * @since 1.2.0
 *
 * @param[in] part The part name
 *
 */
EOAPI Edje_Input_Panel_Return_Key_Type  edje_obj_part_text_input_panel_return_key_type_get(const char *part);

/**
 *
 * @brief Retrieve a child from a table
 *
 * @return The child Evas_Object
 *
 * @param[in] part The part name
 * @param[in] col The column of the child to get
 * @param[in] row The row of the child to get
 *
 */
EOAPI Evas_Object * edje_obj_part_table_child_get(const char *part, unsigned int col, unsigned int row);

/**
 *
 * @brief Adds an object to the box.
 *
 * @return @c EINA_TRUE: Successfully added.\n
 * @c EINA_FALSE: An error occurred.
 *
 * Inserts child in the box given by part, in the position marked by
 * reference.
 *
 * @see edje_object_part_box_append()
 * @see edje_object_part_box_prepend()
 * @see edje_object_part_box_insert_at()
 *
 * @param[in] part The part name
 * @param[in] child The object to insert
 * @param[in] reference The object to be used as reference
 *
 */
EOAPI Eina_Bool  edje_obj_part_box_insert_before(const char *part, Evas_Object *child, const Evas_Object *reference);

/**
 *
 * @brief Set the parameter for the external part.
 *
 * Parts of type external may carry extra properties that have
 * meanings defined by the external plugin. For instance, it may be a
 * string that defines a button label and setting this property will
 * change that label on the fly.
 *
 * @note external parts have parameters set when they change
 * states. Those parameters will never be changed by this
 * function. The interpretation of how state_set parameters and
 * param_set will interact is up to the external plugin.
 *
 * @note this function will not check if parameter value is valid
 * using #Edje_External_Param_Info minimum, maximum, valid
 * choices and others. However these should be checked by the
 * underlying implementation provided by the external
 * plugin. This is done for performance reasons.
 *
 * @return @c EINA_TRUE if everything went fine, @c EINA_FALSE on errors.
 *
 * @param[in] part The part name
 * @param[in] param the parameter details, including its name, type and
actual value. This pointer should be valid, and the
parameter must exist in
#Edje_External_Type.parameters_info, with the exact type,
otherwise the operation will fail and @c EINA_FALSE will be
returned.
 *
 */
EOAPI Eina_Bool  edje_obj_part_external_param_set(const char *part, const Edje_External_Param *param);

/**
 *
 * @brief Get the parameter for the external part.
 *
 * Parts of type external may carry extra properties that have
 * meanings defined by the external plugin. For instance, it may be a
 * string that defines a button label. This property can be modified by
 * state parameters, by explicit calls to
 * edje_object_part_external_param_set() or getting the actual object
 * with edje_object_part_external_object_get() and calling native
 * functions.
 *
 * This function asks the external plugin what is the current value,
 * independent on how it was set.
 *
 * @return @c EINA_TRUE if everything went fine and @p param members
 * are filled with information, @c EINA_FALSE on errors and @p
 * param member values are not set or valid.
 *
 * @param[in] part The part name
 * @param[out] param the parameter details. It is used as both input and
output variable. This pointer should be valid, and the
parameter must exist in
#Edje_External_Type.parameters_info, with the exact type,
otherwise the operation will fail and @c EINA_FALSE will be
returned.
 *
 */
EOAPI Eina_Bool  edje_obj_part_external_param_get(const char *part, Edje_External_Param *param);

/**
 *
 * @brief Calculate the minimum required size for a given Edje object.
 *
 * This call works exactly as edje_object_size_min_restricted_calc(),
 * with the last two arguments set to 0. Please refer to its
 * documentation, then.
 *
 * @param[out] minw Pointer to a variable where to store the minimum
required width
 * @param[out] minh Pointer to a variable where to store the minimum
required height
 *
 */
EOAPI void  edje_obj_size_min_calc(Evas_Coord *minw, Evas_Coord *minh);

/**
 *
 * @brief Appends an object to the box.
 *
 * @return @c EINA_TRUE: Successfully added.\n
 * @c EINA_FALSE: An error occurred.
 *
 * Appends child to the box indicated by part.
 *
 * @see edje_object_part_box_prepend()
 * @see edje_object_part_box_insert_before()
 * @see edje_object_part_box_insert_at()
 *
 * @param[in] part The part name
 * @param[in] child The object to append
 *
 */
EOAPI Eina_Bool  edje_obj_part_box_append(const char *part, Evas_Object *child);

/**
 *
 * @brief Calculate the minimum required size for a given Edje object.
 *
 * This call will trigger an internal recalculation of all parts of
 * the @p obj object, in order to return its minimum required
 * dimensions for width and height. The user might choose to @b impose
 * those minimum sizes, making the resulting calculation to get to values
 * equal or bigger than @p restrictedw and @p restrictedh, for width and
 * height, respectively.
 *
 * @note At the end of this call, @p obj @b won't be automatically
 * resized to new dimensions, but just return the calculated
 * sizes. The caller is the one up to change its geometry or not.
 *
 * @warning Be advised that invisible parts in @p obj @b will be taken
 * into account in this calculation.
 *
 * @param[out] minw Pointer to a variable where to store the minimum
required width
 * @param[out] minh Pointer to a variable where to store the minimum
required height
 * @param[in] restrictedw Do not allow object's calculated (minimum) width
to be less than this value
 * @param[in] restrictedh Do not allow object's calculated (minimum)
height to be less than this value
 *
 */
EOAPI void  edje_obj_size_min_restricted_calc(Evas_Coord *minw, Evas_Coord *minh, Evas_Coord restrictedw, Evas_Coord restrictedh);

/**
 *
 * @brief Removes all elements from the box.
 *
 * @return 1: Successfully cleared.\n
 * 0: An error occurred.
 *
 * Removes all the external objects from the box indicated by part.
 * Elements created from the theme will not be removed.
 *
 * @see edje_object_part_box_remove()
 * @see edje_object_part_box_remove_at()
 *
 * @param[in] part The part name
 * @param[in] clear Delete objects on removal
 *
 */
EOAPI Eina_Bool  edje_obj_part_box_remove_all(const char *part, Eina_Bool clear);

/**
 *
 * @brief Pages x,y steps.
 *
 * Pages x,y where the increment is defined by
 * edje_object_part_drag_page_set.
 *
 * Values for @p dx and @p dy are real numbers that range from 0 to 1.
 *
 * @warning Paging is bugged!
 *
 * @see edje_object_part_drag_step()
 *
 * @param[in] part The part name
 * @param[in] dx The x step
 * @param[in] dy The y step
 *
 */
EOAPI Eina_Bool  edje_obj_part_drag_page(const char *part, double dx, double dy);

/**
 *
 * @brief Sets the text for an object part
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * @param[in] part The part name
 * @param[in] text The text string
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_set(const char *part, const char *text);

/**
 *
 * @brief Return the text of the object part.
 *
 * @return The text string
 *
 * This function returns the text associated to the object part.
 *
 * @see edje_object_part_text_set().
 *
 * @param[in] part The part name
 *
 */
EOAPI const char * edje_obj_part_text_get(const char *part);

/**
 *
 * Set the attribute to show the input panel in case of only an user's explicit Mouse Up event.
 * It doesn't request to show the input panel even though it has focus.
 *
 * @since 1.9.0
 *
 * @param[in] part The part name
 * @param[in] ondemand If true, the input panel will be shown in case of only Mouse up event. (Focus event will be ignored.)
 *
 */
EOAPI void  edje_obj_part_text_input_panel_show_on_demand_set(const char *part, Eina_Bool ondemand);

/**
 *
 * Get the attribute to show the input panel in case of only an user's explicit Mouse Up event.
 *
 * @return @c EINA_TRUE if the input panel will be shown in case of only Mouse up event.
 * @since 1.9.0
 *
 * @param[in] part The part name
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_input_panel_show_on_demand_get(const char *part);

/**
 *
 * @brief Return the selection text of the object part.
 *
 * @return The text string
 *
 * This function returns selection text of the object part.
 *
 * @see edje_object_part_text_select_all()
 * @see edje_object_part_text_select_none()
 *
 * @param[in] part The part name
 *
 */
EOAPI const char * edje_obj_part_text_selection_get(const char *part);

/**
 *
 * @brief Returns whether the cursor points to a format.
 * @see evas_textblock_cursor_is_format
 *
 * @return EINA_TRUE if it's true, EINA_FALSE otherwise.
 *
 * @param[in] part The part name
 * @param[in] cur The cursor to adjust.
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_cursor_is_format_get(const char *part, Edje_Cursor cur);

/**
 *
 * @brief Sets the object color class.
 *
 * This function sets the color values for an object level color
 * class. This will cause all edje parts in the specified object that
 * have the specified color class to have their colors multiplied by
 * these values.
 *
 * The first color is the object, the second is the text outline, and
 * the third is the text shadow. (Note that the second two only apply
 * to text parts).
 *
 * Setting color emits a signal "color_class,set" with source being
 * the given color.
 *
 * @note unlike Evas, Edje colors are @b not pre-multiplied. That is,
 * half-transparent white is 255 255 255 128.
 *
 * @param[in] color_class No description supplied.
 * @param[in] r Object Red value
 * @param[in] g Object Green value
 * @param[in] b Object Blue value
 * @param[in] a Object Alpha value
 * @param[in] r2 Outline Red value
 * @param[in] g2 Outline Green value
 * @param[in] b2 Outline Blue value
 * @param[in] a2 Outline Alpha value
 * @param[in] r3 Shadow Red value
 * @param[in] g3 Shadow Green value
 * @param[in] b3 Shadow Blue value
 * @param[in] a3 Shadow Alpha value
 *
 */
EOAPI Eina_Bool  edje_obj_color_class_set(const char *color_class, int r, int g, int b, int a, int r2, int g2, int b2, int a2, int r3, int g3, int b3, int a3);

/**
 *
 * @brief Gets the object color class.
 *
 * @return EINA_TRUE if found or EINA_FALSE if not found and all
 * values are zeroed.
 *
 * This function gets the color values for an object level color
 * class. If no explicit object color is set, then global values will
 * be used.
 *
 * The first color is the object, the second is the text outline, and
 * the third is the text shadow. (Note that the second two only apply
 * to text parts).
 *
 * @note unlike Evas, Edje colors are @b not pre-multiplied. That is,
 * half-transparent white is 255 255 255 128.
 *
 * @param[in] color_class No description supplied.
 * @param[out] r Object Red value
 * @param[out] g Object Green value
 * @param[out] b Object Blue value
 * @param[out] a Object Alpha value
 * @param[out] r2 Outline Red value
 * @param[out] g2 Outline Green value
 * @param[out] b2 Outline Blue value
 * @param[out] a2 Outline Alpha value
 * @param[out] r3 Shadow Red value
 * @param[out] g3 Shadow Green value
 * @param[out] b3 Shadow Blue value
 * @param[out] a3 Shadow Alpha value
 *
 */
EOAPI Eina_Bool  edje_obj_color_class_get(const char *color_class, int *r, int *g, int *b, int *a, int *r2, int *g2, int *b2, int *a2, int *r3, int *g3, int *b3, int *a3);

/**
 *
 * @brief Steps the dragable x,y steps.
 *
 * Steps x,y where the step increment is the amount set by
 * edje_object_part_drag_step_set.
 *
 * Values for @p dx and @p dy are real numbers that range from 0 to 1.
 *
 * @see edje_object_part_drag_page()
 *
 * @param[in] part The part name
 * @param[in] dx The x step
 * @param[in] dy The y step
 *
 */
EOAPI Eina_Bool  edje_obj_part_drag_step(const char *part, double dx, double dy);

/**
 *
 * @brief Move the cursor to the char above the current cursor position.
 *
 * @param[in] part The part name
 * @param[in] cur the edje cursor to work on
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_cursor_up(const char *part, Edje_Cursor cur);

/**
 *
 * @brief Returns the cursor geometry of the part relative to the edje
 * object.
 *
 * @param[in] part The part name
 * @param[out] x Cursor X position
 * @param[out] y Cursor Y position
 * @param[out] w Cursor width
 * @param[out] h Cursor height
 *
 */
EOAPI void  edje_obj_part_text_cursor_geometry_get(const char *part, Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * @brief Return a list of char anchor names.
 *
 * @return The list of anchors (const char *), do not modify!
 *
 * This function returns a list of char anchor names.
 *
 * @param[in] part The part name
 *
 */
EOAPI const Eina_List * edje_obj_part_text_anchor_list_get(const char *part);

/**
 *
 * Add a filter function for newly inserted text.
 *
 * Whenever text is inserted (not the same as set) into the given @p part,
 * the list of filter functions will be called to decide if and how the new
 * text will be accepted.
 * There are three types of filters, EDJE_TEXT_FILTER_TEXT,
 * EDJE_TEXT_FILTER_FORMAT and EDJE_TEXT_FILTER_MARKUP.
 * The text parameter in the @p func filter can be modified by the user and
 * it's up to him to free the one passed if he's to change the pointer. If
 * doing so, the newly set text should be malloc'ed, as once all the filters
 * are called Edje will free it.
 * If the text is to be rejected, freeing it and setting the pointer to NULL
 * will make Edje break out of the filter cycle and reject the inserted
 * text.
 *
 * @warning This function will be deprecated because of difficulty in use.
 * The type(format, text, or markup) of text should be always
 * checked in the filter function for correct filtering.
 * Please use edje_object_text_markup_filter_callback_add() instead. There
 * is no need to check the type of text in the filter function
 * because the text is always markup.
 * @warning If you use this function with
 * edje_object_text_markup_filter_callback_add() together, all
 * Edje_Text_Filter_Cb functions and Edje_Markup_Filter_Cb functions
 * will be executed, and then filtered text will be inserted.
 *
 * @see edje_object_text_insert_filter_callback_del
 * @see edje_object_text_insert_filter_callback_del_full
 * @see edje_object_text_markup_filter_callback_add
 *
 * @param[in] part The part name
 * @param[in] func The callback function that will act as filter
 * @param[in] data User provided data to pass to the filter function
 *
 */
EOAPI void  edje_obj_text_insert_filter_callback_add(const char *part, Edje_Text_Filter_Cb func, void *data);

/**
 *
 * @brief Show the input panel (virtual keyboard) based on the input panel property such as layout, autocapital types, and so on.
 *
 * Note that input panel is shown or hidden automatically according to the focus state.
 * This API can be used in the case of manually controlling by using edje_object_part_text_input_panel_enabled_set.
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 *
 */
EOAPI void  edje_obj_part_text_input_panel_show(const char *part);

/**
 *
 * @brief Check if an Edje part exists in a given Edje object's group
 * definition.
 *
 * @return @c EINA_TRUE, if the Edje part exists in @p obj's group or
 * @c EINA_FALSE, otherwise (and on errors)
 *
 * This function returns if a given part exists in the Edje group
 * bound to object @p obj (with edje_object_file_set()).
 *
 * This call is useful, for example, when one could expect or not a
 * given GUI element, depending on the @b theme applied to @p obj.
 *
 * @param[in] part The part's name to check for existence in @p obj's
group
 *
 */
EOAPI Eina_Bool  edje_obj_part_exists(const char *part);

/**
 *
 * Delete a function from the markup filter list.
 *
 * Delete the given @p func filter from the list in @p part. Returns
 * the user data pointer given when added.
 *
 * @see edje_object_text_markup_filter_callback_add
 * @see edje_object_text_markup_filter_callback_del_full
 *
 * @return The user data pointer if successful, or NULL otherwise
 * @since 1.2.0
 *
 * @param[in] part The part name
 * @param[in] func The function callback to remove
 *
 */
EOAPI void * edje_obj_text_markup_filter_callback_del(const char *part, Edje_Markup_Filter_Cb func);

/**
 *
 * @brief Return true if the cursor points to a visible format
 * For example \\t, \\n, item and etc.
 * @see  evas_textblock_cursor_format_is_visible_get
 *
 * @param[in] part The part name
 * @param[in] cur The cursor to adjust.
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_cursor_is_visible_format_get(const char *part, Edje_Cursor cur);

/**
 *
 * @brief This function inserts text as if the user has inserted it.
 *
 * This means it actually registers as a change and emits signals, triggers
 * callbacks as appropriate.
 *
 * @since 1.2.0
 *
 * @param[in] part The part name
 * @param[in] text The text string
 *
 */
EOAPI void  edje_obj_part_text_user_insert(const char *part, const char *text);

/**
 *
 * @brief Moves the cursor to the previous char
 * @see evas_textblock_cursor_char_prev
 *
 * @param[in] part The part name
 * @param[in] cur the edje cursor to work on
 *
 */
EOAPI Eina_Bool  edje_obj_part_text_cursor_prev(const char *part, Edje_Cursor cur);

/**
 *
 * @brief Return a list of char item names.
 *
 * @return The list of items (const char *), do not modify!
 *
 * This function returns a list of char item names.
 *
 * @param[in] part The part name
 *
 */
EOAPI const Eina_List * edje_obj_part_text_item_list_get(const char *part);

/**
 *
 * @brief "Swallows" an object into one of the Edje object @c SWALLOW
 * parts.
 *
 * Swallowing an object into an Edje object is, for a given part of
 * type @c SWALLOW in the EDC group which gave life to @a obj, to set
 * an external object to be controlled by @a obj, being displayed
 * exactly over that part's region inside the whole Edje object's
 * viewport.
 *
 * From this point on, @a obj will have total control over @a
 * obj_swallow's geometry and visibility. For instance, if @a obj is
 * visible, as in @c evas_object_show(), the swallowed object will be
 * visible too -- if the given @c SWALLOW part it's in is also
 * visible. Other actions on @a obj will also reflect on the swallowed
 * object as well (e.g. resizing, moving, raising/lowering, etc.).
 *
 * Finally, all internal changes to @a part, specifically, will
 * reflect on the displaying of @a obj_swallow, for example state
 * changes leading to different visibility states, geometries,
 * positions, etc.
 *
 * If an object has already been swallowed into this part, then it
 * will first be unswallowed (as in edje_object_part_unswallow())
 * before the new object is swallowed.
 *
 * @note @a obj @b won't delete the swallowed object once it is
 * deleted -- @a obj_swallow will get to an unparented state again.
 *
 * For more details on EDC @c SWALLOW parts, see @ref edcref "syntax
 * reference".
 *
 * @param[in] part The swallow part's name
 * @param[in] obj_swallow The object to occupy that part
 *
 */
EOAPI Eina_Bool  edje_obj_part_swallow(const char *part, Evas_Object *obj_swallow);


#endif
