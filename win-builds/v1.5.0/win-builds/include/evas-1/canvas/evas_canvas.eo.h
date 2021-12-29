#ifndef _EVAS_CANVAS_EO_H_
#define _EVAS_CANVAS_EO_H_

#ifndef _EVAS_CANVAS_EO_TYPES
#define _EVAS_CANVAS_EO_TYPES


#endif
#define EVAS_CANVAS_CLASS evas_canvas_class_get()

const Eo_Class *evas_canvas_class_get(void) EINA_CONST;

/**
 *
 * Sets the output framespace size of the render engine of the given evas.
 *
 * The framespace size is used in the Wayland engines to denote space where
 * the output is not drawn. This is mainly used in ecore_evas to draw borders
 *
 * The units used for @p w and @p h depend on the engine used by the
 * evas.
 *
 * @ingroup Evas_Output_Size
 * @since 1.1
 *
 * @param[in] x The left coordinate in output units, usually pixels.
 * @param[in] y The top coordinate in output units, usually pixels.
 * @param[in] w The width in output units, usually pixels.
 * @param[in] h The height in output units, usually pixels.
 *
 */
EOAPI void  evas_canvas_output_framespace_set(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

/**
 *
 * Get the render engine's output framespace co-ordinates in canvas units.
 *
 * @ingroup Evas_Output_Size
 * @since 1.1
 *
 * @param[out] x The left coordinate in output units, usually pixels.
 * @param[out] y The top coordinate in output units, usually pixels.
 * @param[out] w The width in output units, usually pixels.
 * @param[out] h The height in output units, usually pixels.
 *
 */
EOAPI void  evas_canvas_output_framespace_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Sets the output viewport of the given evas in evas units.
 *
 * The output viewport is the area of the evas that will be visible to
 * the viewer.  The viewport will be stretched to fit the output
 * target of the evas when rendering is performed.
 *
 * @note The coordinate values do not have to map 1-to-1 with the output
 * target.  However, it is generally advised that it is done for ease
 * of use.
 *
 * @ingroup Evas_Output_Size
 *
 * @param[in] x The top-left corner x value of the viewport.
 * @param[in] y The top-left corner y value of the viewport.
 * @param[in] w The width of the viewport.  Must be greater than 0.
 * @param[in] h The height of the viewport.  Must be greater than 0.
 *
 */
EOAPI void  evas_canvas_output_viewport_set(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

/**
 *
 * Get the render engine's output viewport co-ordinates in canvas units.
 * Calling this function writes the current canvas output viewport
 * size and location values into the variables pointed to by @p x, @p
 * y, @p w and @p h.  On success the variables have the output
 * location and size values written to them in canvas units. Any of @p
 * x, @p y, @p w or @p h that are @c NULL will not be written to. If @p e
 * is invalid, the results are undefined.
 *
 * Example:
 * @code
 * extern Evas *evas;
 * Evas_Coord x, y, width, height;
 *
 * evas_output_viewport_get(evas, &x, &y, &w, &h);
 * @endcode
 *
 * @param[out] x The top-left corner x value of the viewport.
 * @param[out] y The top-left corner y value of the viewport.
 * @param[out] w The width of the viewport.  Must be greater than 0.
 * @param[out] h The height of the viewport.  Must be greater than 0.
 *
 */
EOAPI void  evas_canvas_output_viewport_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Set the image cache.
 *
 * This function sets the image cache of canvas in bytes.
 *
 * @param[in] size The cache size.
 *
 */
EOAPI void  evas_canvas_image_cache_set(int size);

/**
 *
 * Get the image cache
 *
 * This function returns the image cache size of canvas in bytes.
 *
 *
 */
EOAPI int  evas_canvas_image_cache_get(void);

/**
 *
 * Set the default set of flags an event begins with
 *
 * Events in evas can have an event_flags member. This starts out with
 * and initial value (no flags). This lets you set the default flags that
 * an event begins with to be @p flags
 *
 * @since 1.2
 *
 * @param[in] flags The default flags to use
 *
 */
EOAPI void  evas_canvas_event_default_flags_set(Evas_Event_Flags flags);

/**
 *
 * Get the default set of flags an event begins with
 *
 * @return The default event flags for that canvas
 *
 * This gets the default event flags events are produced with when fed in.
 *
 * @see evas_event_default_flags_set()
 * @since 1.2
 *
 *
 */
EOAPI Evas_Event_Flags  evas_canvas_event_default_flags_get(void);

/**
 *
 * Sets the output engine for the given evas.
 *
 * Once the output engine for an evas is set, any attempt to change it
 * will be ignored.  The value for @p render_method can be found using
 * @ref evas_render_method_lookup .
 *
 * @attention it is mandatory that one calls evas_init() before
 * setting the output method.
 *
 * @ingroup Evas_Output_Method
 *
 * @param[in] render_method The numeric engine value to use.
 *
 */
EOAPI void  evas_canvas_output_method_set(int render_method);

/**
 *
 * Retrieves the number of the output engine used for the given evas.
 * @return  The ID number of the output engine being used.  @c 0 is
 * returned if there is an error.
 * @ingroup Evas_Output_Method
 *
 *
 */
EOAPI int  evas_canvas_output_method_get(void);

/**
 *
 * Changes the size of font cache of the given evas.
 *
 * @ingroup Evas_Font_Group
 *
 * @param[in] size The size, in bytes.
 *
 */
EOAPI void  evas_canvas_font_cache_set(int size);

/**
 *
 * Changes the size of font cache of the given evas.
 *
 * @return The size, in bytes.
 *
 * @ingroup Evas_Font_Group
 *
 *
 */
EOAPI int  evas_canvas_font_cache_get(void);

/**
 *
 * Sets the output size of the render engine of the given evas.
 *
 * The evas will render to a rectangle of the given size once this
 * function is called.  The output size is independent of the viewport
 * size.  The viewport will be stretched to fill the given rectangle.
 *
 * The units used for @p w and @p h depend on the engine used by the
 * evas.
 *
 * @ingroup Evas_Output_Size
 *
 * @param[in] w The width in output units, usually pixels.
 * @param[in] h The height in output units, usually pixels.
 *
 */
EOAPI void  evas_canvas_output_size_set(int w, int h);

/**
 *
 * Retrieve the output size of the render engine of the given evas.
 *
 * The output size is given in whatever the output units are for the
 * engine.
 *
 * If either @p w or @p h is @c NULL, then it is ignored.  If @p e is
 * invalid, the returned results are undefined.
 *
 * @ingroup Evas_Output_Size
 *
 * @param[out] w The width in output units, usually pixels.
 * @param[out] h The height in output units, usually pixels.
 *
 */
EOAPI void  evas_canvas_output_size_get(int *w, int *h);

/**
 *
 * Attaches a specific pointer to the evas for fetching later
 *
 * @ingroup Evas_Canvas
 *
 * @param[in] data The pointer to attach
 *
 */
EOAPI void  evas_canvas_data_attach_set(void *data);

/**
 *
 * Returns the pointer attached by evas_data_attach_set()
 *
 * @return The pointer attached
 * @ingroup Evas_Canvas
 *
 *
 */
EOAPI void * evas_canvas_data_attach_get(void);

/**
 *
 * Changes the font hinting for the given evas.
 *
 * #EVAS_FONT_HINTING_AUTO, #EVAS_FONT_HINTING_BYTECODE.
 * @ingroup Evas_Font_Group
 *
 * @param[in] hinting The hinting to use, one of #EVAS_FONT_HINTING_NONE,
 *
 */
EOAPI void  evas_canvas_font_hinting_set(Evas_Font_Hinting_Flags hinting);

/**
 *
 * Retrieves the font hinting used by the given evas.
 *
 * @return The hinting in use, one of #EVAS_FONT_HINTING_NONE,
 * #EVAS_FONT_HINTING_AUTO, #EVAS_FONT_HINTING_BYTECODE.
 * @ingroup Evas_Font_Group
 *
 *
 */
EOAPI Evas_Font_Hinting_Flags  evas_canvas_font_hinting_get(void);

/**
 *
 * Applies the engine settings for the given evas from the given @c
 * Evas_Engine_Info structure.
 *
 * To get the Evas_Engine_Info structure to use, call @ref
 * evas_engine_info_get .  Do not try to obtain a pointer to an
 * @c Evas_Engine_Info structure in any other way.
 *
 * You will need to call this function at least once before you can
 * create objects on an evas or render that evas.  Some engines allow
 * their settings to be changed more than once.
 *
 * Once called, the @p info pointer should be considered invalid.
 *
 * @return  @c EINA_TRUE if no error occurred, @c EINA_FALSE otherwise.
 * @ingroup Evas_Output_Method
 *
 * @param[in] info The pointer to the Engine Info to use
 *
 */
EOAPI Eina_Bool  evas_canvas_engine_info_set(Evas_Engine_Info *info);

/**
 *
 * Retrieves the current render engine info struct from the given evas.
 *
 * The returned structure is publicly modifiable.  The contents are
 * valid until either @ref evas_engine_info_set or @ref evas_render
 * are called.
 *
 * This structure does not need to be freed by the caller.
 *
 * @return  A pointer to the Engine Info structure.  @c NULL is returned if
 * an engine has not yet been assigned.
 * @ingroup Evas_Output_Method
 *
 *
 */
EOAPI Evas_Engine_Info * evas_canvas_engine_info_get(void);

/**
 *
 * Retrieve the object that currently has focus.
 *
 * @return The object that has focus or @c NULL if there is not one.
 *
 * Evas can have (at most) one of its objects focused at a time.
 * Focused objects will be the ones having <b>key events</b> delivered
 * to, which the programmer can act upon by means of
 * evas_object_event_callback_add() usage.
 *
 * @note Most users wouldn't be dealing directly with Evas' focused
 * objects. Instead, they would be using a higher level library for
 * that (like a toolkit, as Elementary) to handle focus and who's
 * receiving input for them.
 *
 * This call returns the object that currently has focus on the canvas
 * @p e or @c NULL, if none.
 *
 * @see evas_object_focus_set
 * @see evas_object_focus_get
 * @see evas_object_key_grab
 * @see evas_object_key_ungrab
 *
 * Example:
 * @dontinclude evas-events.c
 * @skip evas_event_callback_add(d.canvas, EVAS_CALLBACK_CANVAS_OBJECT_FOCUS_IN,
 * @until evas_object_focus_set(d.bg, EINA_TRUE);
 * @dontinclude evas-events.c
 * @skip called when our rectangle gets focus
 * @until }
 *
 * In this example the @c event_info is exactly a pointer to that
 * focused rectangle. See the full @ref Example_Evas_Events "example".
 *
 * @ingroup Evas_Object_Group_Find
 *
 *
 */
EOAPI Evas_Object * evas_canvas_focus_get(void);

/**
 *
 * Get the highest (stacked) Evas object on the canvas @p e.
 *
 * @return a pointer to the highest object on it, if any, or @c NULL,
 * otherwise
 *
 * This function will take all populated layers in the canvas into
 * account, getting the highest object for the highest layer,
 * naturally.
 *
 * @see evas_object_layer_get()
 * @see evas_object_layer_set()
 * @see evas_object_below_get()
 * @see evas_object_above_get()
 *
 * @warning This function will @b skip objects parented by smart
 * objects, acting only on the ones at the "top level", with regard to
 * object parenting.
 *
 *
 */
EOAPI Evas_Object * evas_canvas_object_top_get(void);

/**
 *
 * Returns a handle to the list of lock keys registered in the canvas
 * @p e. This is required to check for which locks are set at a given
 * time with the evas_key_lock_is_set() function.
 *
 * @see evas_key_lock_add
 * @see evas_key_lock_del
 * @see evas_key_lock_on
 * @see evas_key_lock_off
 * @see evas_key_lock_is_set
 *
 * @return An .Evas_Lock handle to query Evas' keys subsystem with
 * evas_key_lock_is_set(), or @c NULL on error.
 *
 *
 */
EOAPI const Evas_Lock * evas_canvas_key_lock_get(void);

/**
 *
 * This function returns the current known pointer co-ordinates
 *
 * This function returns the current known canvas unit co-ordinates of
 * the mouse pointer and sets the contents of the Evas_Coords pointed
 * to by @p x and @p y to contain these co-ordinates. If @p e is not a
 * valid canvas the results of this function are undefined.
 *
 * Example:
 * @code
 * extern Evas *evas;
 * Evas_Coord mouse_x, mouse_y;
 *
 * evas_pointer_output_xy_get(evas, &mouse_x, &mouse_y);
 * printf("Mouse is at canvas position %d, %d\n", mouse_x, mouse_y);
 * @endcode
 *
 * @param[out] x The pointer to a Evas_Coord to be filled in
 * @param[out] y The pointer to a Evas_Coord to be filled in
@ingroup Evas_Pointer_Group
 *
 */
EOAPI void  evas_canvas_pointer_canvas_xy_get(Evas_Coord *x, Evas_Coord *y);

/**
 *
 * Get the number of mouse or multi presses currently active
 *
 * @p e The given canvas pointer.
 * @return The number of presses (0 if none active).
 *
 * @since 1.2
 *
 *
 */
EOAPI int  evas_canvas_event_down_count_get(void);

/**
 *
 * This gets the internal counter that counts the number of smart calculations
 *
 * Whenever evas performs smart object calculations on the whole canvas
 * it increments a counter by 1. This is the smart object calculate counter
 * that this function returns the value of. It starts at the value of 0 and
 * will increase (and eventually wrap around to negative values and so on) by
 * 1 every time objects are calculated. You can use this counter to ensure
 * you don't re-do calculations withint the same calculation generation/run
 * if the calculations maybe cause self-feeding effects.
 *
 * @ingroup Evas_Smart_Object_Group
 * @since 1.1
 *
 *
 */
EOAPI int  evas_canvas_smart_objects_calculate_count_get(void);

/**
 *
 * Get the focus state known by the given evas
 *
 * @return @c EINA_TRUE if it got the focus, @c EINA_FALSE otherwise.
 * @ingroup Evas_Canvas
 *
 *
 */
EOAPI Eina_Bool  evas_canvas_focus_state_get(void);

/**
 *
 * Get the changed marker for the canvas
 *
 * @return @c EINA_TRUE if something has been marked as changed, @c EINA_FALSE otherwise.
 * @ingroup Evas_Canvas
 * @since 1.11
 *
 *
 */
EOAPI Eina_Bool  evas_canvas_changed_get(void);

/**
 *
 * This function returns the current known pointer co-ordinates
 *
 * This function returns the current known screen/output co-ordinates
 * of the mouse pointer and sets the contents of the integers pointed
 * to by @p x and @p y to contain these co-ordinates. If @p e is not a
 * valid canvas the results of this function are undefined.
 *
 * Example:
 * @code
 * extern Evas *evas;
 * int mouse_x, mouse_y;
 *
 * evas_pointer_output_xy_get(evas, &mouse_x, &mouse_y);
 * printf("Mouse is at screen position %i, %i\n", mouse_x, mouse_y);
 * @endcode
 *
 * @param[out] x The pointer to an integer to be filled in
 * @param[out] y The pointer to an integer to be filled in
@ingroup Evas_Pointer_Group
 *
 */
EOAPI void  evas_canvas_pointer_output_xy_get(int *x, int *y);

/**
 *
 * Returns whether the mouse pointer is logically inside the canvas
 *
 * @return An integer that is 1 if the mouse is inside the canvas, 0 otherwise
 * @ingroup Evas_Pointer_Group
 *
 * When this function is called it will return a value of either 0 or
 * 1, depending on if evas_event_feed_mouse_in(),
 * evas_event_feed_mouse_in_data(), or evas_event_feed_mouse_out(),
 * evas_event_feed_mouse_out_data() have been called to feed in a
 * mouse enter event into the canvas.
 *
 * A return value of 1 indicates the mouse is logically inside the
 * canvas, and 0 implies it is logically outside the canvas.
 *
 * A canvas begins with the mouse being assumed outside (0).
 *
 * If @p e is not a valid canvas, the return value is undefined.
 *
 * Example:
 * @code
 * extern Evas *evas;
 *
 * if (evas_pointer_inside_get(evas)) printf("Mouse is in!\n");
 * else printf("Mouse is out!\n");
 * @endcode
 *
 *
 */
EOAPI Eina_Bool  evas_canvas_pointer_inside_get(void);

/**
 *
 * Get the maximum image size evas can possibly handle
 *
 * This function returns the larges image or surface size that evas can handle
 * in pixels, and if there is one, returns @c EINA_TRUE. It returns
 * @c EINA_FALSE if no extra constraint on maximum image size exists. You still
 * should check the return values of @p maxw and @p maxh as there may still be
 * a limit, just a much higher one.
 *
 * @since 1.1
 *
 * @param[out] maxw Pointer to hold the return value in pixels of the maximum width
 * @param[out] maxh Pointer to hold the return value in pixels of the maximum height
 *
 */
EOAPI Eina_Bool  evas_canvas_image_max_size_get(int *maxw, int *maxh);

/**
 *
 * Get the lowest (stacked) Evas object on the canvas @p e.
 *
 * @return a pointer to the lowest object on it, if any, or @c NULL,
 * otherwise
 *
 * This function will take all populated layers in the canvas into
 * account, getting the lowest object for the lowest layer, naturally.
 *
 * @see evas_object_layer_get()
 * @see evas_object_layer_set()
 * @see evas_object_below_get()
 * @see evas_object_above_get()
 *
 * @warning This function will @b skip objects parented by smart
 * objects, acting only on the ones at the "top level", with regard to
 * object parenting.
 *
 *
 */
EOAPI Evas_Object * evas_canvas_object_bottom_get(void);

/**
 *
 * Returns a handle to the list of modifier keys registered in the
 * canvas @p e. This is required to check for which modifiers are set
 * at a given time with the evas_key_modifier_is_set() function.
 *
 * @see evas_key_modifier_add
 * @see evas_key_modifier_del
 * @see evas_key_modifier_on
 * @see evas_key_modifier_off
 * @see evas_key_modifier_is_set
 *
 * @return An .Evas_Modifier handle to query Evas' keys subsystem
 * with evas_key_modifier_is_set(), or @c NULL on error.
 *
 *
 */
EOAPI const Evas_Modifier * evas_canvas_key_modifier_get(void);

/**
 *
 * Returns a bitmask with the mouse buttons currently pressed, set to 1
 *
 * @return A bitmask of the currently depressed buttons on the canvas
 * @ingroup Evas_Pointer_Group
 *
 * Calling this function will return a 32-bit integer with the
 * appropriate bits set to 1 that correspond to a mouse button being
 * depressed. This limits Evas to a mouse devices with a maximum of 32
 * buttons, but that is generally in excess of any host system's
 * pointing device abilities.
 *
 * A canvas by default begins with no mouse buttons being pressed and
 * only calls to evas_event_feed_mouse_down(),
 * evas_event_feed_mouse_down_data(), evas_event_feed_mouse_up() and
 * evas_event_feed_mouse_up_data() will alter that.
 *
 * The least significant bit corresponds to the first mouse button
 * (button 1) and the most significant bit corresponds to the last
 * mouse button (button 32).
 *
 * If @p e is not a valid canvas, the return value is undefined.
 *
 * Example:
 * @code
 * extern Evas *evas;
 * int button_mask, i;
 *
 * button_mask = evas_pointer_button_down_mask_get(evas);
 * printf("Buttons currently pressed:\n");
 * for (i = 0; i < 32; i++)
 * {
 * if ((button_mask & (1 << i)) != 0) printf("Button %i\n", i + 1);
 * }
 * @endcode
 *
 *
 */
EOAPI int  evas_canvas_pointer_button_down_mask_get(void);

/**
 *
 * Retrieve a list of Evas objects lying over a given position in
 * a canvas.
 *
 * This function will traverse all the layers of the given canvas,
 * from top to bottom, querying for objects with areas covering the
 * given position. It will enter the smart objects.
 * It will not append to the list pass events as hidden objects.
 * Call eina_list_free on the returned list after usage.
 *
 * @param[in] stop An Evas Object where to stop searching.
 * @param[in] x The horizontal coordinate of the position.
 * @param[in] y The vertical coordinate of the position.
 *
 */
EOAPI Eina_List * evas_canvas_tree_objects_at_xy_get(Evas_Object *stop, int x, int y);

/**
 *
 * Mouse wheel event feed.
 *
 * This function will set some evas properties that is necessary when
 * the mouse wheel is scrolled up or down. It prepares information to
 * be treated by the callback function.
 *
 * @param[in] direction The wheel mouse direction.
 * @param[in] z How much mouse wheel was scrolled up or down.
 * @param[in] timestamp The timestamp of the mouse up event.
 * @param[in] data The data for canvas.
 *
 */
EOAPI void  evas_canvas_event_feed_mouse_wheel(int direction, int z, unsigned int timestamp, const void *data);

/**
 *
 * Enables or turns on programmatically the lock key with name @p
 * keyname.
 *
 * The effect will be as if the key was put on its active state after
 * this call.
 *
 * @see evas_key_lock_get
 * @see evas_key_lock_add
 * @see evas_key_lock_del
 * @see evas_key_lock_off
 *
 * @param[in] keyname The name of the lock to enable.
 *
 */
EOAPI void  evas_canvas_key_lock_on(const char *keyname);

/**
 *
 * Key down event feed
 *
 * This function will set some evas properties that is necessary when
 * a key is pressed. It prepares information to be treated by the
 * callback function.
 *
 * @param[in] keyname Name of the key
 * @param[in] key The key pressed.
 * @param[in] string A String
 * @param[in] compose The compose string
 * @param[in] timestamp Timestamp of the mouse up event
 * @param[in] data Data for canvas.
 *
 */
EOAPI void  evas_canvas_event_feed_key_down(const char *keyname, const char *key, const char *string, const char *compose, unsigned int timestamp, const void *data);

/**
 *
 * Creates a bit mask from the @p keyname @b modifier key. Values
 * returned from different calls to it may be ORed together,
 * naturally.
 *
 * @returns the bit mask or 0 if the @p keyname key wasn't registered as a
 * modifier for canvas @p e.
 *
 * This function is meant to be using in conjunction with
 * evas_object_key_grab()/evas_object_key_ungrab(). Go check their
 * documentation for more information.
 *
 * @see evas_key_modifier_add
 * @see evas_key_modifier_get
 * @see evas_key_modifier_on
 * @see evas_key_modifier_off
 * @see evas_key_modifier_is_set
 * @see evas_object_key_grab
 * @see evas_object_key_ungrab
 *
 * @param[in] keyname The name of the modifier key to create the mask for.
 *
 */
EOAPI Evas_Modifier_Mask  evas_canvas_key_modifier_mask_get(const char *keyname);

/**
 *
 * Adds the @p keyname key to the current list of modifier keys.
 *
 * Modifiers are keys like shift, alt and ctrl, i.e., keys which are
 * meant to be pressed together with others, altering the behavior of
 * the secondly pressed keys somehow. Evas is so that these keys can
 * be user defined.
 *
 * This call allows custom modifiers to be added to the Evas system at
 * run time. It is then possible to set and unset modifier keys
 * programmatically for other parts of the program to check and act
 * on. Programmers using Evas would check for modifier keys on key
 * event callbacks using evas_key_modifier_is_set().
 *
 * @see evas_key_modifier_del
 * @see evas_key_modifier_get
 * @see evas_key_modifier_on
 * @see evas_key_modifier_off
 * @see evas_key_modifier_is_set
 *
 * @note If the programmer instantiates the canvas by means of the
 * ecore_evas_new() family of helper functions, Ecore will take
 * care of registering on it all standard modifiers: "Shift",
 * "Control", "Alt", "Meta", "Hyper", "Super".
 *
 * @param[in] keyname The name of the modifier key to add to the list of
Evas modifiers.
 *
 */
EOAPI void  evas_canvas_key_modifier_add(const char *keyname);

/**
 *
 * Disables or turns off programmatically the modifier key with name
 * @p keyname.
 *
 * @see evas_key_modifier_add
 * @see evas_key_modifier_get
 * @see evas_key_modifier_on
 * @see evas_key_modifier_is_set
 *
 * @param[in] keyname The name of the modifier to disable.
 *
 */
EOAPI void  evas_canvas_key_modifier_off(const char *keyname);

/**
 *
 * Hold event feed
 *
 * This function makes the object to stop sending events.
 *
 * @param[in] hold The hold.
 * @param[in] timestamp The timestamp of the mouse up event.
 * @param[in] data The data for canvas.
 *
 */
EOAPI void  evas_canvas_event_feed_hold(int hold, unsigned int timestamp, const void *data);

/**
 *
 * Mouse move event feed.
 *
 * This function will set some evas properties that is necessary when
 * the mouse is moved from its last position. It prepares information
 * to be treated by the callback function.
 *
 * @param[in] x The horizontal position of the mouse pointer.
 * @param[in] y The vertical position of the mouse pointer.
 * @param[in] timestamp The timestamp of the mouse up event.
 * @param[in] data The data for canvas.
 *
 */
EOAPI void  evas_canvas_event_feed_mouse_move(int x, int y, unsigned int timestamp, const void *data);

/**
 *
 * Key up event feed
 *
 * This function will set some evas properties that is necessary when
 * a key is released. It prepares information to be treated by the
 * callback function.
 *
 * @param[in] keyname Name of the key
 * @param[in] key The key released.
 * @param[in] string string
 * @param[in] compose compose
 * @param[in] timestamp Timestamp of the mouse up event
 * @param[in] data Data for canvas.
 *
 */
EOAPI void  evas_canvas_event_feed_key_up(const char *keyname, const char *key, const char *string, const char *compose, unsigned int timestamp, const void *data);

/**
 *
 * Mouse out event feed.
 *
 * This function will set some evas properties that is necessary when
 * the mouse out event happens. It prepares information to be treated
 * by the callback function.
 *
 * @param[in] timestamp Timestamp of the mouse up event.
 * @param[in] data The data for canvas.
 *
 */
EOAPI void  evas_canvas_event_feed_mouse_out(unsigned int timestamp, const void *data);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] d No description supplied.
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] rad No description supplied.
 * @param[in] radx No description supplied.
 * @param[in] rady No description supplied.
 * @param[in] pres No description supplied.
 * @param[in] ang No description supplied.
 * @param[in] fx No description supplied.
 * @param[in] fy No description supplied.
 * @param[in] timestamp No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  evas_canvas_event_input_multi_move(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, unsigned int timestamp, const void *data);

/**
 *
 * Retrieve a list of Evas objects lying over a given position in
 * a canvas
 *
 * @return  The list of Evas objects that are over the given position
 * in @p e
 *
 * This function will traverse all the layers of the given canvas,
 * from top to bottom, querying for objects with areas covering the
 * given position. The user can remove from query
 * objects which are hidden and/or which are set to pass events.
 *
 * @warning This function will @b skip objects parented by smart
 * objects, acting only on the ones at the "top level", with regard to
 * object parenting.
 *
 * @param[in] x The horizontal coordinate of the position
 * @param[in] y The vertical coordinate of the position
 * @param[in] include_pass_events_objects Boolean flag to include or not
objects which pass events in this calculation
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
objects in this calculation
 *
 */
EOAPI Eina_List * evas_canvas_objects_at_xy_get(Evas_Coord x, Evas_Coord y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] d No description supplied.
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] rad No description supplied.
 * @param[in] radx No description supplied.
 * @param[in] rady No description supplied.
 * @param[in] pres No description supplied.
 * @param[in] ang No description supplied.
 * @param[in] fx No description supplied.
 * @param[in] fy No description supplied.
 * @param[in] flags No description supplied.
 * @param[in] timestamp No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  evas_canvas_event_input_multi_up(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, Evas_Button_Flags flags, unsigned int timestamp, const void *data);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] d No description supplied.
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] rad No description supplied.
 * @param[in] radx No description supplied.
 * @param[in] rady No description supplied.
 * @param[in] pres No description supplied.
 * @param[in] ang No description supplied.
 * @param[in] fx No description supplied.
 * @param[in] fy No description supplied.
 * @param[in] flags No description supplied.
 * @param[in] timestamp No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  evas_canvas_event_feed_multi_down(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, Evas_Button_Flags flags, unsigned int timestamp, const void *data);

/**
 *
 * Render the given Evas canvas asynchronously.
 *
 * @return EINA_TRUE if the canvas will render, EINA_FALSE otherwise.
 *
 * This function only returns EINA_TRUE when a frame will be rendered. If the
 * previous frame is still rendering, EINA_FALSE will be returned so the users
 * know not to wait for the updates callback and just return to their main
 * loop.
 *
 * If a @p func callback is given, a list of updated areas will be generated
 * and the function will be called from the main thread after the rendered
 * frame is flushed to the screen. The resulting list should be freed with
 * @f evas_render_updates_free().
 * The list is given in the @p event_info parameter of the callback function.
 *
 * @ingroup Evas_Canvas
 * @since 1.8
 *
 *
 */
EOAPI Eina_Bool  evas_canvas_render_async(void);

/**
 *
 * Inform to the evas that it lost the focus.
 *
 * @ingroup Evas_Canvas
 *
 *
 */
EOAPI void  evas_canvas_focus_out(void);

/**
 *
 * Mouse move event feed from input.
 *
 * Similar to the evas_event_feed_mouse_move(), this function will inform Evas
 * about mouse move events which were received by the input system, relative to
 * the 0,0 of the window, not to the canvas 0,0. It will take care of doing any
 * special transformation like adding the framespace offset to the mouse event.
 *
 * @since 1.8
 * @see evas_event_feed_mouse_move
 *
 * @param[in] x The horizontal position of the mouse pointer relative to the 0,0 of
the window/surface.
 * @param[in] y The vertical position of the mouse pointer relative to the 0,0 of
the window/surface.
 * @param[in] timestamp The timestamp of the mouse move event.
 * @param[in] data The data for canvas.
 *
 */
EOAPI void  evas_canvas_event_input_mouse_move(int x, int y, unsigned int timestamp, const void *data);

/**
 *
 * Update the canvas internal objects but not triggering immediate
 * renderization.
 *
 * This function updates the canvas internal objects not triggering
 * renderization. To force renderization function evas_render() should
 * be used.
 *
 * @see evas_render.
 *
 * @ingroup Evas_Canvas
 *
 *
 */
EOAPI void  evas_canvas_norender(void);

/**
 *
 * Get the number of touched point in the evas.
 *
 * @return The number of touched point on the evas.
 *
 * New touched point is added to the list whenever touching the evas
 * and point is removed whenever removing touched point from the evas.
 *
 * Example:
 * @code
 * extern Evas *evas;
 * int count;
 *
 * count = evas_touch_point_list_count(evas);
 * printf("The count of touch points: %i\n", count);
 * @endcode
 *
 * @see evas_touch_point_list_nth_xy_get()
 * @see evas_touch_point_list_nth_id_get()
 * @see evas_touch_point_list_nth_state_get()
 *
 *
 */
EOAPI unsigned int  evas_canvas_touch_point_list_count(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] d No description supplied.
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] rad No description supplied.
 * @param[in] radx No description supplied.
 * @param[in] rady No description supplied.
 * @param[in] pres No description supplied.
 * @param[in] ang No description supplied.
 * @param[in] fx No description supplied.
 * @param[in] fy No description supplied.
 * @param[in] flags No description supplied.
 * @param[in] timestamp No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  evas_canvas_event_input_multi_down(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, Evas_Button_Flags flags, unsigned int timestamp, const void *data);

/**
 *
 * Pop the nochange flag down 1
 *
 * This tells evas, that while the nochange flag is greater than 0, do not
 * mark objects as "changed" when making changes.
 *
 * @ingroup Evas_Canvas
 *
 *
 */
EOAPI void  evas_canvas_nochange_pop(void);

/**
 *
 * Disables or turns off programmatically the lock key with name @p
 * keyname.
 *
 * The effect will be as if the key was put on its inactive state
 * after this call.
 *
 * @see evas_key_lock_get
 * @see evas_key_lock_add
 * @see evas_key_lock_del
 * @see evas_key_lock_on
 *
 * @param[in] keyname The name of the lock to disable.
 *
 */
EOAPI void  evas_canvas_key_lock_off(const char *keyname);

/**
 *
 * Push the nochange flag up 1
 *
 * This tells evas, that while the nochange flag is greater than 0, do not
 * mark objects as "changed" when making changes.
 *
 * @ingroup Evas_Canvas
 *
 *
 */
EOAPI void  evas_canvas_nochange_push(void);

/**
 *
 * Force the given evas and associated engine to flush its font cache.
 *
 * @ingroup Evas_Font_Group
 *
 *
 */
EOAPI void  evas_canvas_font_cache_flush(void);

/**
 *
 * Checks if the font hinting is supported by the given evas.
 *
 * #EVAS_FONT_HINTING_AUTO, #EVAS_FONT_HINTING_BYTECODE.
 * @return @c EINA_TRUE if it is supported, @c EINA_FALSE otherwise.
 * @ingroup Evas_Font_Group
 *
 * @param[in] hinting The hinting to use, one of #EVAS_FONT_HINTING_NONE,
 *
 */
EOAPI Eina_Bool  evas_canvas_font_hinting_can_hint(Evas_Font_Hinting_Flags hinting);

/**
 *
 * Retrieve the Evas object stacked at the top of a given position in
 * a canvas
 *
 * @return  The Evas object that is over all other objects at the given
 * position.
 *
 * This function will traverse all the layers of the given canvas,
 * from top to bottom, querying for objects with areas covering the
 * given position. The user can remove from the query
 * objects which are hidden and/or which are set to pass events.
 *
 * @warning This function will @b skip objects parented by smart
 * objects, acting only on the ones at the "top level", with regard to
 * object parenting.
 *
 * @param[in] x The horizontal coordinate of the position
 * @param[in] y The vertical coordinate of the position
 * @param[in] include_pass_events_objects Boolean flag to include or not
objects which pass events in this calculation
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
objects in this calculation
 *
 */
EOAPI Evas_Object * evas_canvas_object_top_at_xy_get(Evas_Coord x, Evas_Coord y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);

/**
 *
 * Enables or turns on programmatically the modifier key with name @p
 * keyname.
 *
 * The effect will be as if the key was pressed for the whole time
 * between this call and a matching evas_key_modifier_off().
 *
 * @see evas_key_modifier_add
 * @see evas_key_modifier_get
 * @see evas_key_modifier_off
 * @see evas_key_modifier_is_set
 *
 * @param[in] keyname The name of the modifier to enable.
 *
 */
EOAPI void  evas_canvas_key_modifier_on(const char *keyname);

/**
 *
 * Mouse up event feed.
 *
 * This function will set some evas properties that is necessary when
 * the mouse button is released. It prepares information to be treated
 * by the callback function.
 *
 * @param[in] b The button number.
 * @param[in] flags evas button flags.
 * @param[in] timestamp The timestamp of the mouse up event.
 * @param[in] data The data for canvas.
 *
 */
EOAPI void  evas_canvas_event_feed_mouse_up(int b, Evas_Button_Flags flags, unsigned int timestamp, const void *data);

/**
 *
 * Mouse down event feed.
 *
 * This function will set some evas properties that is necessary when
 * the mouse button is pressed. It prepares information to be treated
 * by the callback function.
 *
 * @param[in] b The button number.
 * @param[in] flags The evas button flags.
 * @param[in] timestamp The timestamp of the mouse down event.
 * @param[in] data The data for canvas.
 *
 */
EOAPI void  evas_canvas_event_feed_mouse_down(int b, Evas_Button_Flags flags, unsigned int timestamp, const void *data);

/**
 *
 * Re feed event.
 *
 * This function re-feeds the event pointed by event_copy
 *
 * This function call evas_event_feed_* functions, so it can
 * cause havoc if not used wisely. Please use it responsibly.
 *
 * @param[in] event_copy the event to refeed
 * @param[in] event_type Event type
 *
 */
EOAPI void  evas_canvas_event_refeed_event(void *event_copy, Evas_Callback_Type event_type);

/**
 *
 * List of available font descriptions known or found by this evas.
 *
 * The list depends on Evas compile time configuration, such as
 * fontconfig support, and the paths provided at runtime as explained
 * in @ref Evas_Font_Path_Group.
 *
 * @return a newly allocated list of strings. Do not change the
 * strings.  Be sure to call evas_font_available_list_free()
 * after you're done.
 *
 * @ingroup Evas_Font_Group
 *
 *
 */
EOAPI Eina_List * evas_canvas_font_available_list(void);

/**
 *
 * No description supplied.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 * @param[in] include_pass_events_objects No description supplied.
 * @param[in] include_hidden_objects No description supplied.
 *
 */
EOAPI Eina_List * evas_canvas_objects_in_rectangle_get(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);

/**
 *
 * Retrieves the object on the given evas with the given name.
 * @return  If successful, the Evas object with the given name.  Otherwise,
 * @c NULL.
 *
 * This looks for the evas object given a name by evas_object_name_set(). If
 * the name is not unique canvas-wide, then which one of the many objects
 * with that name is returned is undefined, so only use this if you can ensure
 * the object name is unique.
 *
 * @ingroup Evas_Object_Group_Find
 *
 * @param[in] name The given name.
 *
 */
EOAPI Evas_Object * evas_canvas_object_name_find(const char *name);

/**
 *
 * Appends a font path to the list of font paths used by the given evas.
 * @ingroup Evas_Font_Path_Group
 *
 * @param[in] path The new font path.
 *
 */
EOAPI void  evas_canvas_font_path_append(const char *path);

/**
 *
 * This function returns the @p id of nth touch point.
 *
 * @return id of nth touch point, if the call succeeded, -1 otherwise.
 *
 * The point which comes from Mouse Event has @p id 0 and The point
 * which comes from Multi Event has @p id that is same as Multi
 * Event's device id.
 *
 * Example:
 * @code
 * extern Evas *evas;
 * int id;
 *
 * if (evas_touch_point_list_count(evas))
 * {
 * id = evas_touch_point_nth_id_get(evas, 0);
 * printf("The first touch point's id: %i\n", id);
 * }
 * @endcode
 *
 * @see evas_touch_point_list_count()
 * @see evas_touch_point_list_nth_xy_get()
 * @see evas_touch_point_list_nth_state_get()
 *
 * @param[in] n The number of the touched point (0 being the first).
 *
 */
EOAPI int  evas_canvas_touch_point_list_nth_id_get(unsigned int n);

/**
 *
 * Removes all font paths loaded into memory for the given evas.
 * @ingroup Evas_Font_Path_Group
 *
 *
 */
EOAPI void  evas_canvas_font_path_clear(void);

/**
 *
 * Call user-provided @c calculate() smart functions and unset the
 * flag signalling that the object needs to get recalculated to @b all
 * smart objects in the canvas.
 *
 * @see evas_object_smart_need_recalculate_set()
 *
 * @ingroup Evas_Smart_Object_Group
 *
 *
 */
EOAPI void  evas_canvas_smart_objects_calculate(void);

/**
 *
 * This function returns the nth touch point's co-ordinates.
 *
 * Touch point's co-ordinates is updated whenever moving that point
 * on the canvas.
 *
 * Example:
 * @code
 * extern Evas *evas;
 * Evas_Coord x, y;
 *
 * if (evas_touch_point_list_count(evas))
 * {
 * evas_touch_point_nth_xy_get(evas, 0, &x, &y);
 * printf("The first touch point's co-ordinate: (%i, %i)\n", x, y);
 * }
 * @endcode
 *
 * @see evas_touch_point_list_count()
 * @see evas_touch_point_list_nth_id_get()
 * @see evas_touch_point_list_nth_state_get()
 *
 * @param[in] n The number of the touched point (0 being the first).
 * @param[out] x The pointer to a Evas_Coord to be filled in.
 * @param[out] y The pointer to a Evas_Coord to be filled in.
 *
 */
EOAPI void  evas_canvas_touch_point_list_nth_xy_get(unsigned int n, Evas_Coord *x, Evas_Coord *y);

/**
 *
 * Removes the @p keyname key from the current list of lock keys on
 * canvas @p e.
 *
 * @see evas_key_lock_get
 * @see evas_key_lock_add
 * @see evas_key_lock_on
 * @see evas_key_lock_off
 *
 * @param[in] keyname The name of the key to remove from the locks list.
 *
 */
EOAPI void  evas_canvas_key_lock_del(const char *keyname);

/**
 *
 * Add a damage rectangle.
 *
 * This is the function by which one tells evas that a part of the
 * canvas has to be repainted.
 *
 * @note All newly created Evas rectangles get the default color values of 255 255 255 255 (opaque white).
 *
 * @ingroup Evas_Canvas
 *
 * @param[in] x The rectangle's left position.
 * @param[in] y The rectangle's top position.
 * @param[in] w The rectangle's width.
 * @param[in] h The rectangle's height.
 *
 */
EOAPI void  evas_canvas_damage_rectangle_add(int x, int y, int w, int h);

/**
 *
 * No description supplied by the EAPI.
 *
 *
 */
EOAPI void  evas_canvas_sync(void);

/**
 *
 * Retrieves the list of font paths used by the given evas.
 * @return  The list of font paths used.
 * @ingroup Evas_Font_Path_Group
 *
 *
 */
EOAPI const Eina_List * evas_canvas_font_path_list(void);

/**
 *
 * Reload the image cache
 *
 * This function reloads the image cache of canvas.
 *
 *
 */
EOAPI void  evas_canvas_image_cache_reload(void);

/**
 *
 * Convert/scale a canvas co-ordinate into output screen co-ordinates
 *
 * @return The output/screen co-ordinate translated to output co-ordinates
 * @ingroup Evas_Coord_Mapping_Group
 *
 * This function takes in a horizontal co-ordinate as the @p x
 * parameter and converts it into output units, accounting for output
 * size, viewport size and location, returning it as the function
 * return value. If @p e is invalid, the results are undefined.
 *
 * Example:
 * @code
 * extern Evas *evas;
 * int screen_x;
 * extern Evas_Coord canvas_x;
 *
 * screen_x = evas_coord_world_x_to_screen(evas, canvas_x);
 * @endcode
 *
 * @param[in] x The canvas x co-ordinate
 *
 */
EOAPI int  evas_canvas_coord_world_x_to_screen(Evas_Coord x);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] d No description supplied.
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] rad No description supplied.
 * @param[in] radx No description supplied.
 * @param[in] rady No description supplied.
 * @param[in] pres No description supplied.
 * @param[in] ang No description supplied.
 * @param[in] fx No description supplied.
 * @param[in] fy No description supplied.
 * @param[in] timestamp No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  evas_canvas_event_feed_multi_move(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, unsigned int timestamp, const void *data);

/**
 *
 * Force immediate renderization of the given Evas canvas.
 *
 * @return A newly allocated list of updated rectangles of the canvas
 * (@c Eina.Rectangle structs). Free this list with
 * evas_render_updates_free().
 *
 * This function forces an immediate renderization update of the given
 * canvas @p e.
 *
 * @note This is a <b>very low level function</b>, which most of
 * Evas' users wouldn't care about. One would use it, for example, to
 * grab an Evas' canvas update regions and paint them back, using the
 * canvas' pixmap, on a displaying system working below Evas.
 *
 * @note Evas is a stateful canvas. If no operations changing its
 * state took place since the last rendering action, you won't see no
 * changes and this call will be a no-op.
 *
 * Example code follows.
 * @dontinclude evas-events.c
 * @skip add an obscured
 * @until d.obscured = !d.obscured;
 *
 * See the full @ref Example_Evas_Events "example".
 *
 * @ingroup Evas_Canvas
 *
 *
 */
EOAPI Eina_List * evas_canvas_render_updates(void);

/**
 *
 * Flush the image cache of the canvas.
 *
 * This function flushes image cache of canvas.
 *
 *
 */
EOAPI void  evas_canvas_image_cache_flush(void);

/**
 *
 * Convert/scale an output screen co-ordinate into canvas co-ordinates
 *
 * @return The screen co-ordinate translated to canvas unit co-ordinates
 * @ingroup Evas_Coord_Mapping_Group
 *
 * This function takes in a vertical co-ordinate as the @p y parameter
 * and converts it into canvas units, accounting for output size,
 * viewport size and location, returning it as the function return
 * value. If @p e is invalid, the results are undefined.
 *
 * Example:
 * @code
 * extern Evas *evas;
 * extern int screen_y;
 * Evas_Coord canvas_y;
 *
 * canvas_y = evas_coord_screen_y_to_world(evas, screen_y);
 * @endcode
 *
 * @param[in] y The screen/output y co-ordinate
 *
 */
EOAPI Evas_Coord  evas_canvas_coord_screen_y_to_world(int y);

/**
 *
 * Removes the @p keyname key from the current list of modifier keys
 * on canvas @p e.
 *
 * @see evas_key_modifier_add
 * @see evas_key_modifier_get
 * @see evas_key_modifier_on
 * @see evas_key_modifier_off
 * @see evas_key_modifier_is_set
 *
 * @param[in] keyname The name of the key to remove from the modifiers list.
 *
 */
EOAPI void  evas_canvas_key_modifier_del(const char *keyname);

/**
 *
 * This function returns the @p state of nth touch point.
 *
 * @return @p state of nth touch point, if the call succeeded,
 * EVAS_TOUCH_POINT_CANCEL otherwise.
 *
 * The point's @p state is EVAS_TOUCH_POINT_DOWN when pressed,
 * EVAS_TOUCH_POINT_STILL when the point is not moved after pressed,
 * EVAS_TOUCH_POINT_MOVE when moved at least once after pressed and
 * EVAS_TOUCH_POINT_UP when released.
 *
 * Example:
 * @code
 * extern Evas *evas;
 * Evas_Touch_Point_State state;
 *
 * if (evas_touch_point_list_count(evas))
 * {
 * state = evas_touch_point_nth_state_get(evas, 0);
 * printf("The first touch point's state: %i\n", state);
 * }
 * @endcode
 *
 * @see evas_touch_point_list_count()
 * @see evas_touch_point_list_nth_xy_get()
 * @see evas_touch_point_list_nth_id_get()
 *
 * @param[in] n The number of the touched point (0 being the first).
 *
 */
EOAPI Evas_Touch_Point_State  evas_canvas_touch_point_list_nth_state_get(unsigned int n);

/**
 *
 * Inform to the evas that it got the focus.
 *
 * @ingroup Evas_Canvas
 *
 *
 */
EOAPI void  evas_canvas_focus_in(void);

/**
 *
 * Add an "obscured region" to an Evas canvas.
 *
 * This is the function by which one tells an Evas canvas that a part
 * of it <b>must not</b> be repainted. The region must be
 * rectangular and its coordinates inside the canvas viewport are
 * passed in the call. After this call, the region specified won't
 * participate in any form in Evas' calculations and actions during
 * its rendering updates, having its displaying content frozen as it
 * was just after this function took place.
 *
 * We call it "obscured region" because the most common use case for
 * this rendering (partial) freeze is something else (most probably
 * other canvas) being on top of the specified rectangular region,
 * thus shading it completely from the user's final scene in a
 * display. To avoid unnecessary processing, one should indicate to the
 * obscured canvas not to bother about the non-important area.
 *
 * The majority of users won't have to worry about this function, as
 * they'll be using just one canvas in their applications, with
 * nothing inset or on top of it in any form.
 *
 * To make this region one that @b has to be repainted again, call the
 * function evas_obscured_clear().
 *
 * @note This is a <b>very low level function</b>, which most of
 * Evas' users wouldn't care about.
 *
 * @note This function does @b not flag the canvas as having its state
 * changed. If you want to re-render it afterwards expecting new
 * contents, you have to add "damage" regions yourself (see
 * evas_damage_rectangle_add()).
 *
 * @see evas_obscured_clear()
 * @see evas_render_updates()
 *
 * Example code follows.
 * @dontinclude evas-events.c
 * @skip add an obscured
 * @until evas_obscured_clear(evas);
 *
 * In that example, pressing the "Ctrl" and "o" keys will impose or
 * remove an obscured region in the middle of the canvas. You'll get
 * the same contents at the time the key was pressed, if toggling it
 * on, until you toggle it off again (make sure the animation is
 * running on to get the idea better). See the full @ref
 * Example_Evas_Events "example".
 *
 * @ingroup Evas_Canvas
 *
 * @param[in] x The rectangle's top left corner's horizontal coordinate.
 * @param[in] y The rectangle's top left corner's vertical coordinate
 * @param[in] w The rectangle's width.
 * @param[in] h The rectangle's height.
 *
 */
EOAPI void  evas_canvas_obscured_rectangle_add(int x, int y, int w, int h);

/**
 *
 * Make the canvas discard as much data as possible used by the engine at
 * runtime.
 *
 * This function will unload images, delete textures and much more, where
 * possible. You may also want to call evas_render_idle_flush() immediately
 * prior to this to perhaps discard a little more, though evas_render_dump()
 * should implicitly delete most of what evas_render_idle_flush() might
 * discard too.
 *
 * @ingroup Evas_Canvas
 *
 *
 */
EOAPI void  evas_canvas_render_dump(void);

/**
 *
 * Mouse in event feed.
 *
 * This function will set some evas properties that is necessary when
 * the mouse in event happens. It prepares information to be treated
 * by the callback function.
 *
 * @param[in] timestamp The timestamp of the mouse up event.
 * @param[in] data The data for canvas.
 *
 */
EOAPI void  evas_canvas_event_feed_mouse_in(unsigned int timestamp, const void *data);

/**
 *
 * Retrieve the Evas object stacked at the top of a given rectangular
 * region in a canvas
 *
 * @return  The Evas object that is over all other objects at the given
 * rectangular region.
 *
 * This function will traverse all the layers of the given canvas,
 * from top to bottom, querying for objects with areas overlapping
 * with the given rectangular region inside @p e. The user can remove
 * from the query objects which are hidden and/or which are set to
 * pass events.
 *
 * @warning This function will @b skip objects parented by smart
 * objects, acting only on the ones at the "top level", with regard to
 * object parenting.
 *
 * @param[in] x The top left corner's horizontal coordinate for the
rectangular region
 * @param[in] y The top left corner's vertical coordinate for the
rectangular region
 * @param[in] w The width of the rectangular region
 * @param[in] h The height of the rectangular region
 * @param[in] include_pass_events_objects Boolean flag to include or not
objects which pass events in this calculation
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
objects in this calculation
 *
 */
EOAPI Evas_Object * evas_canvas_object_top_in_rectangle_get(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);

/**
 *
 * Force renderization of the given canvas.
 *
 * @ingroup Evas_Canvas
 *
 *
 */
EOAPI void  evas_canvas_render(void);

/**
 *
 * No description supplied by the EAPI.
 *
 * @param[in] d No description supplied.
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] rad No description supplied.
 * @param[in] radx No description supplied.
 * @param[in] rady No description supplied.
 * @param[in] pres No description supplied.
 * @param[in] ang No description supplied.
 * @param[in] fx No description supplied.
 * @param[in] fy No description supplied.
 * @param[in] flags No description supplied.
 * @param[in] timestamp No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  evas_canvas_event_feed_multi_up(int d, int x, int y, double rad, double radx, double rady, double pres, double ang, double fx, double fy, Evas_Button_Flags flags, unsigned int timestamp, const void *data);

/**
 *
 * Prepends a font path to the list of font paths used by the given evas.
 * @ingroup Evas_Font_Path_Group
 *
 * @param[in] path The new font path.
 *
 */
EOAPI void  evas_canvas_font_path_prepend(const char *path);

/**
 *
 * Remove all "obscured regions" from an Evas canvas.
 *
 * This function removes all the rectangles from the obscured regions
 * list of the canvas @p e. It takes obscured areas added with
 * evas_obscured_rectangle_add() and make them again a regions that @b
 * have to be repainted on rendering updates.
 *
 * @note This is a <b>very low level function</b>, which most of
 * Evas' users wouldn't care about.
 *
 * @note This function does @b not flag the canvas as having its state
 * changed. If you want to re-render it afterwards expecting new
 * contents, you have to add "damage" regions yourself (see
 * evas_damage_rectangle_add()).
 *
 * @see evas_obscured_rectangle_add() for an example
 * @see evas_render_updates()
 *
 * @ingroup Evas_Canvas
 *
 *
 */
EOAPI void  evas_canvas_obscured_clear(void);

/**
 *
 * Mouse cancel event feed.
 *
 * This function will call evas_event_feed_mouse_up() when a
 * mouse cancel event happens.
 *
 * @param[in] timestamp The timestamp of the mouse up event.
 * @param[in] data The data for canvas.
 *
 */
EOAPI void  evas_canvas_event_feed_mouse_cancel(unsigned int timestamp, const void *data);

/**
 *
 * Convert/scale an output screen co-ordinate into canvas co-ordinates
 *
 * @return The screen co-ordinate translated to canvas unit co-ordinates
 * @ingroup Evas_Coord_Mapping_Group
 *
 * This function takes in a horizontal co-ordinate as the @p x
 * parameter and converts it into canvas units, accounting for output
 * size, viewport size and location, returning it as the function
 * return value. If @p e is invalid, the results are undefined.
 *
 * Example:
 * @code
 * extern Evas *evas;
 * extern int screen_x;
 * Evas_Coord canvas_x;
 *
 * canvas_x = evas_coord_screen_x_to_world(evas, screen_x);
 * @endcode
 *
 * @param[in] x The screen/output x co-ordinate
 *
 */
EOAPI Evas_Coord  evas_canvas_coord_screen_x_to_world(int x);

/**
 *
 * Adds the @p keyname key to the current list of lock keys.
 *
 * Locks are keys like caps lock, num lock or scroll lock, i.e., keys
 * which are meant to be pressed once -- toggling a binary state which
 * is bound to it -- and thus altering the behavior of all
 * subsequently pressed keys somehow, depending on its state. Evas is
 * so that these keys can be defined by the user.
 *
 * This allows custom locks to be added to the evas system at run
 * time. It is then possible to set and unset lock keys
 * programmatically for other parts of the program to check and act
 * on. Programmers using Evas would check for lock keys on key event
 * callbacks using evas_key_lock_is_set().
 *
 * @see evas_key_lock_get
 * @see evas_key_lock_del
 * @see evas_key_lock_on
 * @see evas_key_lock_off
 * @see evas_key_lock_is_set
 *
 * @note If the programmer instantiates the canvas by means of the
 * ecore_evas_new() family of helper functions, Ecore will take
 * care of registering on it all standard lock keys: "Caps_Lock",
 * "Num_Lock", "Scroll_Lock".
 *
 * @param[in] keyname The name of the key to add to the locks list.
 *
 */
EOAPI void  evas_canvas_key_lock_add(const char *keyname);

/**
 *
 * Make the canvas discard internally cached data used for rendering.
 *
 * This function flushes the arrays of delete, active and render objects.
 * Other things it may also discard are: shared memory segments,
 * temporary scratch buffers, cached data to avoid re-compute of that data etc.
 *
 * @ingroup Evas_Canvas
 *
 *
 */
EOAPI void  evas_canvas_render_idle_flush(void);

/**
 *
 * Convert/scale a canvas co-ordinate into output screen co-ordinates
 *
 * @return The output/screen co-ordinate translated to output co-ordinates
 * @ingroup Evas_Coord_Mapping_Group
 *
 * This function takes in a vertical co-ordinate as the @p x parameter
 * and converts it into output units, accounting for output size,
 * viewport size and location, returning it as the function return
 * value. If @p e is invalid, the results are undefined.
 *
 * Example:
 * @code
 * extern Evas *evas;
 * int screen_y;
 * extern Evas_Coord canvas_y;
 *
 * screen_y = evas_coord_world_y_to_screen(evas, canvas_y);
 * @endcode
 *
 * @param[in] y The canvas y co-ordinate
 *
 */
EOAPI int  evas_canvas_coord_world_y_to_screen(Evas_Coord y);

/**
 *
 * Key down event feed with keycode
 *
 * This function will set some evas properties that is necessary when
 * a key is pressed. It prepares information to be treated by the
 * callback function.
 *
 * @since 1.10
 *
 * @param[in] keyname Name of the key
 * @param[in] key The key pressed.
 * @param[in] string A String
 * @param[in] compose The compose string
 * @param[in] timestamp Timestamp of the mouse up event
 * @param[in] data Data for canvas.
 * @param[in] keycode Key scan code numeric value for canvas.
 *
 */
EOAPI void  evas_canvas_event_feed_key_down_with_keycode(const char *keyname, const char *key, const char *string, const char *compose, unsigned int timestamp, const void *data, unsigned int keycode);

/**
 *
 * Key up event feed with keycode
 *
 * This function will set some evas properties that is necessary when
 * a key is released. It prepares information to be treated by the
 * callback function.
 *
 * @since 1.10
 *
 * @param[in] keyname Name of the key
 * @param[in] key The key released.
 * @param[in] string string
 * @param[in] compose compose
 * @param[in] timestamp Timestamp of the mouse up event
 * @param[in] data Data for canvas.
 * @param[in] keycode Key scan code numeric value for canvas.
 *
 */
EOAPI void  evas_canvas_event_feed_key_up_with_keycode(const char *keyname, const char *key, const char *string, const char *compose, unsigned int timestamp, const void *data, unsigned int keycode);


#endif
