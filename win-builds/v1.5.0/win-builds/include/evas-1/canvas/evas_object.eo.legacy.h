#ifndef _EVAS_OBJECT_EO_LEGACY_H_
#define _EVAS_OBJECT_EO_LEGACY_H_


/**
 *
 * Sets the hints for an object's maximum size.
 *
 * This is not a size enforcement in any way, it's just a hint that
 * should be used whenever appropriate.
 *
 * Values @c -1 will be treated as unset hint components, when queried
 * by managers.
 *
 * Example:
 * @dontinclude evas-hints.c
 * @skip evas_object_size_hint_max_set
 * @until return
 *
 * In this example the maximum size hints change the behavior of an
 * Evas box when layouting its children. See the full @ref
 * Example_Evas_Size_Hints "example".
 *
 * @see evas_object_size_hint_max_get()
 *
 * @param[in] w Integer to use as the maximum width hint.
 * @param[in] h Integer to use as the maximum height hint.
 */
EAPI void evas_object_size_hint_max_set(Eo *obj, Evas_Coord w, Evas_Coord h);

/**
 *
 * Retrieves the hints for an object's maximum size.
 *
 * These are hints on the maximum sizes @p obj should have. This is
 * not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @note Use @c NULL pointers on the hint components you're not
 * interested in: they'll be ignored by the function.
 *
 * @see evas_object_size_hint_max_set()
 *
 * @param[out] w Integer to use as the maximum width hint.
 * @param[out] h Integer to use as the maximum height hint.
 */
EAPI void evas_object_size_hint_max_get(const Eo *obj, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Sets the hints for an object's optimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that
 * should be used whenever appropriate.
 *
 * Values @c 0 will be treated as unset hint components, when queried
 * by managers.
 *
 * @see evas_object_size_hint_request_get()
 *
 * @param[in] w Integer to use as the preferred width hint.
 * @param[in] h Integer to use as the preferred height hint.
 */
EAPI void evas_object_size_hint_request_set(Eo *obj, Evas_Coord w, Evas_Coord h);

/**
 *
 * Retrieves the hints for an object's optimum size.
 *
 * These are hints on the optimum sizes @p obj should have. This is
 * not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @note Use @c NULL pointers on the hint components you're not
 * interested in: they'll be ignored by the function.
 *
 * @see evas_object_size_hint_request_set()
 *
 * @param[out] w Integer to use as the preferred width hint.
 * @param[out] h Integer to use as the preferred height hint.
 */
EAPI void evas_object_size_hint_request_get(const Eo *obj, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Retrieves whether or not the given Evas object is visible.
 *
 */
EAPI Eina_Bool evas_object_visible_get(const Eo *obj);

/**
 *
 * Retrieves the type of the given Evas object.
 *
 * @return The type of the object.
 *
 * For Evas' builtin types, the return strings will be one of:
 * - <c>"rectangle"</c>,
 * - <c>"line"</c>,
 * - <c>"polygon"</c>,
 * - <c>"text"</c>,
 * - <c>"textblock"</c> and
 * - <c>"image"</c>.
 *
 * For Evas smart objects (see @ref Evas_Smart_Group), the name of the
 * smart class itself is returned on this call. For the built-in smart
 * objects, these names are:
 * - <c>"EvasObjectSmartClipped"</c>, for the clipped smart object
 * - <c>"Evas_Object_Box"</c>, for the box object and
 * - <c>"Evas_Object_Table"</c>, for the table object.
 *
 * Example:
 * @dontinclude evas-object-manipulation.c
 * @skip d.img = evas_object_image_filled_add(d.canvas);
 * @until border on the
 *
 * See the full @ref Example_Evas_Object_Manipulation "example".
 *
 */
EAPI const char *evas_object_type_get(const Eo *obj);

/**
 *
 * Sets the hints for an object's minimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that
 * should be used whenever appropriate.
 *
 * Values @c 0 will be treated as unset hint components, when queried
 * by managers.
 *
 * Example:
 * @dontinclude evas-hints.c
 * @skip evas_object_size_hint_min_set
 * @until return
 *
 * In this example the minimum size hints change the behavior of an
 * Evas box when layouting its children. See the full @ref
 * Example_Evas_Size_Hints "example".
 *
 * @see evas_object_size_hint_min_get()
 *
 * @param[in] w Integer to use as the minimum width hint.
 * @param[in] h Integer to use as the minimum height hint.
 */
EAPI void evas_object_size_hint_min_set(Eo *obj, Evas_Coord w, Evas_Coord h);

/**
 *
 * Retrieves the hints for an object's minimum size.
 *
 * These are hints on the minimum sizes @p obj should have. This is
 * not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @note Use @c NULL pointers on the hint components you're not
 * interested in: they'll be ignored by the function.
 *
 * @see evas_object_size_hint_min_set() for an example
 *
 * @param[out] w Integer to use as the minimum width hint.
 * @param[out] h Integer to use as the minimum height hint.
 */
EAPI void evas_object_size_hint_min_get(const Eo *obj, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Set pointer behavior.
 *
 * This function has direct effect on event callbacks related to
 * mouse.
 *
 * If @p setting is EVAS_OBJECT_POINTER_MODE_AUTOGRAB, then when mouse
 * is down at this object, events will be restricted to it as source,
 * mouse moves, for example, will be emitted even if outside this
 * object area.
 *
 * If @p setting is EVAS_OBJECT_POINTER_MODE_NOGRAB, then events will
 * be emitted just when inside this object area.
 *
 * The default value is EVAS_OBJECT_POINTER_MODE_AUTOGRAB.
 *
 * @ingroup Evas_Object_Group_Extras
 *
 * @param[in] pointer_mode desired behavior.
 */
EAPI void evas_object_pointer_mode_set(Eo *obj, Evas_Object_Pointer_Mode pointer_mode);

/**
 *
 * Determine how pointer will behave.
 * @return pointer behavior.
 * @ingroup Evas_Object_Group_Extras
 *
 */
EAPI Evas_Object_Pointer_Mode evas_object_pointer_mode_get(const Eo *obj);

/**
 *
 * Sets the render_op to be used for rendering the Evas object.
 * @ingroup Evas_Object_Group_Extras
 *
 * @param[in] render_op one of the Evas_Render_Op values.
 */
EAPI void evas_object_render_op_set(Eo *obj, Evas_Render_Op render_op);

/**
 *
 * Retrieves the current value of the operation used for rendering the Evas object.
 * @return  one of the enumerated values in Evas_Render_Op.
 * @ingroup Evas_Object_Group_Extras
 *
 */
EAPI Evas_Render_Op evas_object_render_op_get(const Eo *obj);

/**
 *
 * Set whether an Evas object is to freeze (discard) events.
 *
 * If @p freeze is @c EINA_TRUE, it will make events on @p obj to be @b
 * discarded. Unlike evas_object_pass_events_set(), events will not be
 * passed to @b next lower object. This API can be used for blocking
 * events while @p obj is on transiting.
 *
 * If @p freeze is @c EINA_FALSE, events will be processed on that
 * object as normal.
 *
 * @warning If you block only key/mouse up events with this API, we won't
 * guarantee the state of the object, that only had key/mouse down
 * events, will be.
 *
 * @see evas_object_freeze_events_get()
 * @see evas_object_pass_events_set()
 * @see evas_object_repeat_events_set()
 * @see evas_object_propagate_events_set()
 * @since 1.1
 *
 * @param[in] freeze pass whether @p obj is to freeze events (@c EINA_TRUE) or not
(@c EINA_FALSE)
 */
EAPI void evas_object_freeze_events_set(Eo *obj, Eina_Bool freeze);

/**
 *
 * Determine whether an object is set to freeze (discard) events.
 *
 * @return freeze whether @p obj is set to freeze events (@c EINA_TRUE) or
 * not (@c EINA_FALSE)
 *
 * @see evas_object_freeze_events_set()
 * @see evas_object_pass_events_get()
 * @see evas_object_repeat_events_get()
 * @see evas_object_propagate_events_get()
 * @since 1.1
 *
 */
EAPI Eina_Bool evas_object_freeze_events_get(const Eo *obj);

/**
 *
 * Set current object transformation map.
 *
 * This sets the map on a given object. It is copied from the @p map pointer,
 * so there is no need to keep the @p map object if you don't need it anymore.
 *
 * A map is a set of 4 points which have canvas x, y coordinates per point,
 * with an optional z point value as a hint for perspective correction, if it
 * is available. As well each point has u and v coordinates. These are like
 * "texture coordinates" in OpenGL in that they define a point in the source
 * image that is mapped to that map vertex/point. The u corresponds to the x
 * coordinate of this mapped point and v, the y coordinate. Note that these
 * coordinates describe a bounding region to sample. If you have a 200x100
 * source image and want to display it at 200x100 with proper pixel
 * precision, then do:
 *
 * @code
 * Evas_Map *m = evas_map_new(4);
 * evas_map_point_coord_set(m, 0,   0,   0, 0);
 * evas_map_point_coord_set(m, 1, 200,   0, 0);
 * evas_map_point_coord_set(m, 2, 200, 100, 0);
 * evas_map_point_coord_set(m, 3,   0, 100, 0);
 * evas_map_point_image_uv_set(m, 0,   0,   0);
 * evas_map_point_image_uv_set(m, 1, 200,   0);
 * evas_map_point_image_uv_set(m, 2, 200, 100);
 * evas_map_point_image_uv_set(m, 3,   0, 100);
 * evas_object_map_set(obj, m);
 * evas_map_free(m);
 * @endcode
 *
 * Note that the map points a uv coordinates match the image geometry. If
 * the @p map parameter is NULL, the stored map will be freed and geometry
 * prior to enabling/setting a map will be restored.
 *
 * @see evas_map_new()
 *
 * @param[in] map new map to use
 */
EAPI void evas_object_map_set(Eo *obj, const Evas_Map *map);

/**
 *
 * Get current object transformation map.
 *
 * This returns the current internal map set on the indicated object. It is
 * intended for read-only access and is only valid as long as the object is
 * not deleted or the map on the object is not changed. If you wish to modify
 * the map and set it back do the following:
 *
 * @code
 * const Evas_Map *m = evas_object_map_get(obj);
 * Evas_Map *m2 = evas_map_dup(m);
 * evas_map_util_rotate(m2, 30.0, 0, 0);
 * evas_object_map_set(obj, m2);
 * evas_map_free(m2);
 * @endcode
 *
 * @return map reference to map in use. This is an internal data structure, so
 * do not modify it.
 *
 * @see evas_object_map_set()
 *
 */
EAPI const Evas_Map *evas_object_map_get(const Eo *obj);

/**
 *
 * Sets the hints for an object's aspect ratio.
 *
 * This is not a size enforcement in any way, it's just a hint that should
 * be used whenever appropriate.
 *
 * If any of the given aspect ratio terms are @c 0,
 * the object's container will ignore the aspect and scale @p obj to
 * occupy the whole available area, for any given policy.
 *
 * @see evas_object_size_hint_aspect_get() for more information.
 *
 * @param[in] aspect The policy/type of aspect ratio to apply to @p obj.
 * @param[in] w Integer to use as aspect width ratio term.
 * @param[in] h Integer to use as aspect height ratio term.
 */
EAPI void evas_object_size_hint_aspect_set(Eo *obj, Evas_Aspect_Control aspect, Evas_Coord w, Evas_Coord h);

/**
 *
 * Retrieves the hints for an object's aspect ratio.
 *
 * The different aspect ratio policies are documented in the
 * #Evas_Aspect_Control type. A container respecting these size hints
 * would @b resize its children accordingly to those policies.
 *
 * For any policy, if any of the given aspect ratio terms are @c 0,
 * the object's container should ignore the aspect and scale @p obj to
 * occupy the whole available area. If they are both positive
 * integers, that proportion will be respected, under each scaling
 * policy.
 *
 * These images illustrate some of the #Evas_Aspect_Control policies:
 *
 * @image html any-policy.png
 * @image rtf any-policy.png
 * @image latex any-policy.eps
 *
 * @image html aspect-control-none-neither.png
 * @image rtf aspect-control-none-neither.png
 * @image latex aspect-control-none-neither.eps
 *
 * @image html aspect-control-both.png
 * @image rtf aspect-control-both.png
 * @image latex aspect-control-both.eps
 *
 * @image html aspect-control-horizontal.png
 * @image rtf aspect-control-horizontal.png
 * @image latex aspect-control-horizontal.eps
 *
 * This is not a size enforcement in any way, it's just a hint that
 * should be used whenever appropriate.
 *
 * @note Use @c NULL pointers on the hint components you're not
 * interested in: they'll be ignored by the function.
 *
 * Example:
 * @dontinclude evas-aspect-hints.c
 * @skip if (strcmp(ev->key, "c") == 0)
 * @until }
 *
 * See the full @ref Example_Evas_Aspect_Hints "example".
 *
 * @see evas_object_size_hint_aspect_set()
 *
 * @param[out] aspect The policy/type of aspect ratio to apply to @p obj.
 * @param[out] w Integer to use as aspect width ratio term.
 * @param[out] h Integer to use as aspect height ratio term.
 */
EAPI void evas_object_size_hint_aspect_get(const Eo *obj, Evas_Aspect_Control *aspect, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Sets the layer of its canvas that the given object will be part of.
 *
 * If you don't use this function, you'll be dealing with an @b unique
 * layer of objects, the default one. Additional layers are handy when
 * you don't want a set of objects to interfere with another set with
 * regard to @b stacking. Two layers are completely disjoint in that
 * matter.
 *
 * This is a low-level function, which you'd be using when something
 * should be always on top, for example.
 *
 * @warning Be careful, it doesn't make sense to change the layer of
 * smart objects' children. Smart objects have a layer of their own,
 * which should contain all their children objects.
 *
 * @see evas_object_layer_get()
 *
 * @param[in] l The number of the layer to place the object on.
Must be between #EVAS_LAYER_MIN and #EVAS_LAYER_MAX.
 */
EAPI void evas_object_layer_set(Eo *obj, short l);

/**
 *
 * Retrieves the layer of its canvas that the given object is part of.
 *
 * @return  Number of its layer
 *
 * @see evas_object_layer_set()
 *
 */
EAPI short evas_object_layer_get(const Eo *obj);

/**
 *
 * Clip one object to another.
 *
 * This function will clip the object @p obj to the area occupied by
 * the object @p clip. This means the object @p obj will only be
 * visible within the area occupied by the clipping object (@p clip).
 *
 * The color of the object being clipped will be multiplied by the
 * color of the clipping one, so the resulting color for the former
 * will be <code>RESULT = (OBJ * CLIP) / (255 * 255)</code>, per color
 * element (red, green, blue and alpha).
 *
 * Clipping is recursive, so clipping objects may be clipped by
 * others, and their color will in term be multiplied. You may @b not
 * set up circular clipping lists (i.e. object 1 clips object 2, which
 * clips object 1): the behavior of Evas is undefined in this case.
 *
 * Objects which do not clip others are visible in the canvas as
 * normal; <b>those that clip one or more objects become invisible
 * themselves</b>, only affecting what they clip. If an object ceases
 * to have other objects being clipped by it, it will become visible
 * again.
 *
 * The visibility of an object affects the objects that are clipped by
 * it, so if the object clipping others is not shown (as in
 * evas_object_show()), the objects clipped by it will not be shown
 * either.
 *
 * If @p obj was being clipped by another object when this function is
 * called, it gets implicitly removed from the old clipper's domain
 * and is made now to be clipped by its new clipper.
 *
 * The following figure illustrates some clipping in Evas:
 *
 * @image html clipping.png
 * @image rtf clipping.png
 * @image latex clipping.eps
 *
 * @note At the moment the <b>only objects that can validly be used to
 * clip other objects are rectangle objects</b>. All other object
 * types are invalid and the result of using them is undefined. The
 * clip object @p clip must be a valid object, but can also be @c
 * NULL, in which case the effect of this function is the same as
 * calling evas_object_clip_unset() on the @p obj object.
 *
 * Example:
 * @dontinclude evas-object-manipulation.c
 * @skip solid white clipper (note that it's the default color for a
 * @until evas_object_show(d.clipper);
 *
 * See the full @ref Example_Evas_Object_Manipulation "example".
 *
 * @param[in] clip The object to clip @p obj by
 */
EAPI void evas_object_clip_set(Eo *obj, Evas_Object *clip) EINA_ARG_NONNULL(2);

/**
 *
 * Get the object clipping @p obj (if any).
 *
 * This function returns the object clipping @p obj. If @p obj is
 * not being clipped at all, @c NULL is returned. The object @p obj
 * must be a valid .Evas_Object.
 *
 * See also evas_object_clip_set(), evas_object_clip_unset() and
 * evas_object_clipees_get().
 *
 * Example:
 * @dontinclude evas-object-manipulation.c
 * @skip if (evas_object_clip_get(d.img) == d.clipper)
 * @until return
 *
 * See the full @ref Example_Evas_Object_Manipulation "example".
 *
 */
EAPI Evas_Object *evas_object_clip_get(const Eo *obj);

/**
 *
 * Sets the hints for an object's padding space.
 *
 * This is not a size enforcement in any way, it's just a hint that
 * should be used whenever appropriate.
 *
 * @see evas_object_size_hint_padding_get() for more information
 *
 * @param[in] l Integer to specify left padding.
 * @param[in] r Integer to specify right padding.
 * @param[in] t Integer to specify top padding.
 * @param[in] b Integer to specify bottom padding.
 */
EAPI void evas_object_size_hint_padding_set(Eo *obj, Evas_Coord l, Evas_Coord r, Evas_Coord t, Evas_Coord b);

/**
 *
 * Retrieves the hints for an object's padding space.
 *
 * Padding is extra space an object takes on each of its delimiting
 * rectangle sides, in canvas units. This space will be rendered
 * transparent, naturally, as in the following figure:
 *
 * @image html padding-hints.png
 * @image rtf padding-hints.png
 * @image latex padding-hints.eps
 *
 * This is not a size enforcement in any way, it's just a hint that
 * should be used whenever appropriate.
 *
 * @note Use @c NULL pointers on the hint components you're not
 * interested in: they'll be ignored by the function.
 *
 * Example:
 * @dontinclude evas-hints.c
 * @skip evas_object_size_hint_padding_set
 * @until return
 *
 * In this example the padding hints change the behavior of an Evas box
 * when layouting its children. See the full @ref
 * Example_Evas_Size_Hints "example".
 *
 * @see evas_object_size_hint_padding_set()
 *
 * @param[out] l Integer to specify left padding.
 * @param[out] r Integer to specify right padding.
 * @param[out] t Integer to specify top padding.
 * @param[out] b Integer to specify bottom padding.
 */
EAPI void evas_object_size_hint_padding_get(const Eo *obj, Evas_Coord *l, Evas_Coord *r, Evas_Coord *t, Evas_Coord *b);

/**
 *
 * Set whether an Evas object is to repeat events.
 *
 * If @p repeat is @c EINA_TRUE, it will make events on @p obj to also
 * be repeated for the @b next lower object in the objects' stack (see
 * see evas_object_below_get()).
 *
 * If @p repeat is @c EINA_FALSE, events occurring on @p obj will be
 * processed only on it.
 *
 * Example:
 * @dontinclude evas-stacking.c
 * @skip if (strcmp(ev->key, "r") == 0)
 * @until }
 *
 * See the full @ref Example_Evas_Stacking "example".
 *
 * @see evas_object_repeat_events_get()
 * @see evas_object_pass_events_set()
 * @see evas_object_propagate_events_set()
 * @see evas_object_freeze_events_set()
 *
 * @param[in] repeat whether @p obj is to repeat events (@c EINA_TRUE) or not
(@c EINA_FALSE)
 */
EAPI void evas_object_repeat_events_set(Eo *obj, Eina_Bool repeat);

/**
 *
 * Determine whether an object is set to repeat events.
 *
 * @return whether @p obj is set to repeat events (@c EINA_TRUE)
 * or not (@c EINA_FALSE)
 *
 * @see evas_object_repeat_events_set() for an example
 * @see evas_object_pass_events_get()
 * @see evas_object_propagate_events_get()
 * @see evas_object_freeze_events_get()
 *
 */
EAPI Eina_Bool evas_object_repeat_events_get(const Eo *obj);

/**
 *
 * Sets the hints for an object's weight.
 *
 * This is not a size enforcement in any way, it's just a hint that
 * should be used whenever appropriate.
 *
 * This is a hint on how a container object should @b resize a given
 * child within its area. Containers may adhere to the simpler logic
 * of just expanding the child object's dimensions to fit its own (see
 * the #EVAS_HINT_EXPAND helper weight macro) or the complete one of
 * taking each child's weight hint as real @b weights to how much of
 * its size to allocate for them in each axis. A container is supposed
 * to, after @b normalizing the weights of its children (with weight
 * hints), distribute the space it has to layout them by those factors
 * -- most weighted children get larger in this process than the least
 * ones.
 *
 * Example:
 * @dontinclude evas-hints.c
 * @skip evas_object_size_hint_weight_set
 * @until return
 *
 * In this example the weight hints change the behavior of an Evas box
 * when layouting its children. See the full @ref
 * Example_Evas_Size_Hints "example".
 *
 * @note Default weight hint values are 0.0, for both axis.
 *
 * @see evas_object_size_hint_weight_get() for more information
 *
 * @param[in] x Nonnegative double value to use as horizontal weight hint.
 * @param[in] y Nonnegative double value to use as vertical weight hint.
 */
EAPI void evas_object_size_hint_weight_set(Eo *obj, double x, double y);

/**
 *
 * Retrieves the hints for an object's weight.
 *
 * Accepted values are zero or positive values. Some users might use
 * this hint as a boolean, but some might consider it as a @b
 * proportion, see documentation of possible users, which in Evas are
 * the @ref Evas_Object_Box "box" and @ref Evas_Object_Table "table"
 * smart objects.
 *
 * This is not a size enforcement in any way, it's just a hint that
 * should be used whenever appropriate.
 *
 * @note Use @c NULL pointers on the hint components you're not
 * interested in: they'll be ignored by the function.
 * @note If @c obj is invalid, then the hint components will be set with 0.0
 *
 * @see evas_object_size_hint_weight_set() for an example
 *
 * @param[out] x Nonnegative double value to use as horizontal weight hint.
 * @param[out] y Nonnegative double value to use as vertical weight hint.
 */
EAPI void evas_object_size_hint_weight_get(const Eo *obj, double *x, double *y);

/**
 *
 * Sets the name of the given Evas object to the given name.
 *
 * There might be occasions where one would like to name his/her
 * objects.
 *
 * Example:
 * @dontinclude evas-events.c
 * @skip d.bg = evas_object_rectangle_add(d.canvas);
 * @until evas_object_name_set(d.bg, "our dear rectangle");
 *
 * See the full @ref Example_Evas_Events "example".
 *
 * @param[in] name The given name.
 */
EAPI void evas_object_name_set(Eo *obj, const char *name);

/**
 *
 * Retrieves the name of the given Evas object.
 *
 * @return  The name of the object or @c NULL, if no name has been given
 * to it.
 *
 * Example:
 * @dontinclude evas-events.c
 * @skip fprintf(stdout, "An object got focused: %s\n",
 * @until evas_focus_get
 *
 * See the full @ref Example_Evas_Events "example".
 *
 */
EAPI const char *evas_object_name_get(const Eo *obj);

/**
 *
 * Sets the scaling factor for an Evas object. Does not affect all
 * objects.
 *
 * This will multiply the object's dimension by the given factor, thus
 * altering its geometry (width and height). Useful when you want
 * scalable UI elements, possibly at run time.
 *
 * @note Only text and textblock objects have scaling change
 * handlers. Other objects won't change visually on this call.
 *
 * @see evas_object_scale_get()
 *
 * @ingroup Evas_Object_Group_Extras
 *
 * @param[in] scale The scaling factor. <c>1.0</c> means no scaling,
default size.
 */
EAPI void evas_object_scale_set(Eo *obj, double scale);

/**
 *
 * Retrieves the scaling factor for the given Evas object.
 *
 * @return  The scaling factor.
 *
 * @ingroup Evas_Object_Group_Extras
 *
 * @see evas_object_scale_set()
 *
 */
EAPI double evas_object_scale_get(const Eo *obj);

/**
 *
 * Set a hint flag on the given Evas object that it's used as a "static
 * clipper".
 *
 * This is a hint to Evas that this object is used as a big static
 * clipper and shouldn't be moved with children and otherwise
 * considered specially. The default value for new objects is
 * @c EINA_FALSE.
 *
 * @see evas_object_static_clip_get()
 *
 * @ingroup Evas_Object_Group_Extras
 *
 * @param[in] is_static_clip @c EINA_TRUE if it's to be used as a static
clipper, @c EINA_FALSE otherwise.
 */
EAPI void evas_object_static_clip_set(Eo *obj, Eina_Bool is_static_clip);

/**
 *
 * Get the "static clipper" hint flag for a given Evas object.
 *
 * @return @c EINA_TRUE if it's set as a static clipper,
 * @c EINA_FALSE otherwise.
 *
 * @see evas_object_static_clip_set() for more details
 *
 * @ingroup Evas_Object_Group_Extras
 *
 */
EAPI Eina_Bool evas_object_static_clip_get(const Eo *obj);

/**
 *
 * Changes the size of the given Evas object.
 *
 * @param[in] w in
 * @param[in] h in
 */
EAPI void evas_object_resize(Eo *obj, Evas_Coord w, Evas_Coord h);

/**
 *
 * Sets or unsets a given object as the currently focused one on its
 * canvas.
 *
 * Changing focus only affects where (key) input events go. There can
 * be only one object focused at any time. If @p focus is @c EINA_TRUE,
 * @p obj will be set as the currently focused object and it will
 * receive all keyboard events that are not exclusive key grabs on
 * other objects.
 *
 * Example:
 * @dontinclude evas-events.c
 * @skip evas_object_focus_set
 * @until evas_object_focus_set
 *
 * See the full example @ref Example_Evas_Events "here".
 *
 * @see evas_object_focus_get
 * @see evas_focus_get
 * @see evas_object_key_grab
 * @see evas_object_key_ungrab
 *
 * @param[in] focus @c EINA_TRUE, to set it as focused or @c EINA_FALSE,
to take away the focus from it.
 */
EAPI void evas_object_focus_set(Eo *obj, Eina_Bool focus);

/**
 *
 * Retrieve whether an object has the focus.
 *
 * @return @c EINA_TRUE if the object has the focus, @c EINA_FALSE otherwise.
 *
 * If the passed object is the currently focused one, @c EINA_TRUE is
 * returned. @c EINA_FALSE is returned, otherwise.
 *
 * Example:
 * @dontinclude evas-events.c
 * @skip And again
 * @until something is bad
 *
 * See the full example @ref Example_Evas_Events "here".
 *
 * @see evas_object_focus_set
 * @see evas_focus_get
 * @see evas_object_key_grab
 * @see evas_object_key_ungrab
 *
 */
EAPI Eina_Bool evas_object_focus_get(const Eo *obj);

/**
 *
 * @since 1.2
 *
 * @param[in] is_frame in
 */
EAPI void evas_object_is_frame_object_set(Eo *obj, Eina_Bool is_frame);

/**
 *
 * @since 1.2
 *
 */
EAPI Eina_Bool evas_object_is_frame_object_get(const Eo *obj);

/**
 *
 * Enable or disable the map that is set.
 *
 * Enable or disable the use of map for the object @p obj.
 * On enable, the object geometry will be saved, and the new geometry will
 * change (position and size) to reflect the map geometry set.
 *
 * If the object doesn't have a map set (with evas_object_map_set()), the
 * initial geometry will be undefined. It is advised to always set a map
 * to the object first, and then call this function to enable its use.
 *
 * @param[in] enabled enabled state
 */
EAPI void evas_object_map_enable_set(Eo *obj, Eina_Bool enabled);

/**
 *
 * Get the map enabled state
 *
 * This returns the currently enabled state of the map on the object indicated.
 * The default map enable state is off. You can enable and disable it with
 * evas_object_map_enable_set().
 *
 * @return the map enabled state
 *
 */
EAPI Eina_Bool evas_object_map_enable_get(const Eo *obj);

/**
 *
 * Set whether to use precise (usually expensive) point collision
 * detection for a given Evas object.
 *
 * Use this function to make Evas treat objects' transparent areas as
 * @b not belonging to it with regard to mouse pointer events. By
 * default, all of the object's boundary rectangle will be taken in
 * account for them.
 *
 * @warning By using precise point collision detection you'll be
 * making Evas more resource intensive.
 *
 * Example code follows.
 * @dontinclude evas-events.c
 * @skip if (strcmp(ev->key, "p") == 0)
 * @until }
 *
 * See the full example @ref Example_Evas_Events "here".
 *
 * @see evas_object_precise_is_inside_get()
 * @ingroup Evas_Object_Group_Extras
 *
 * @param[in] precise Whether to use precise point collision detection or
not. The default value is false.
 */
EAPI void evas_object_precise_is_inside_set(Eo *obj, Eina_Bool precise);

/**
 *
 * Determine whether an object is set to use precise point collision
 * detection.
 *
 * @return whether @p obj is set to use precise point collision
 * detection or not The default value is false.
 *
 * @see evas_object_precise_is_inside_set() for an example
 *
 * @ingroup Evas_Object_Group_Extras
 *
 */
EAPI Eina_Bool evas_object_precise_is_inside_get(const Eo *obj);

/**
 *
 * Sets the hints for an object's alignment.
 *
 * These are hints on how to align an object <b>inside the boundaries
 * of a container/manager</b>. Accepted values are in the @c 0.0 to @c
 * 1.0 range, with the special value #EVAS_HINT_FILL used to specify
 * "justify" or "fill" by some users. In this case, maximum size hints
 * should be enforced with higher priority, if they are set. Also, any
 * padding hint set on objects should add up to the alignment space on
 * the final scene composition.
 *
 * See documentation of possible users: in Evas, they are the @ref
 * Evas_Object_Box "box" and @ref Evas_Object_Table "table" smart
 * objects.
 *
 * For the horizontal component, @c 0.0 means to the left, @c 1.0
 * means to the right. Analogously, for the vertical component, @c 0.0
 * to the top, @c 1.0 means to the bottom.
 *
 * See the following figure:
 *
 * @image html alignment-hints.png
 * @image rtf alignment-hints.png
 * @image latex alignment-hints.eps
 *
 * This is not a size enforcement in any way, it's just a hint that
 * should be used whenever appropriate.
 *
 * @note Default alignment hint values are 0.5, for both axis.
 *
 * Example:
 * @dontinclude evas-hints.c
 * @skip evas_object_size_hint_align_set
 * @until return
 *
 * In this example the alignment hints change the behavior of an Evas
 * box when layouting its children. See the full @ref
 * Example_Evas_Size_Hints "example".
 *
 * @see evas_object_size_hint_align_get()
 * @see evas_object_size_hint_max_set()
 * @see evas_object_size_hint_padding_set()
 *
 * @param[in] x Double, ranging from @c 0.0 to @c 1.0 or with the
special value #EVAS_HINT_FILL, to use as horizontal alignment hint.
 * @param[in] y Double, ranging from @c 0.0 to @c 1.0 or with the
special value #EVAS_HINT_FILL, to use as vertical alignment hint.
 */
EAPI void evas_object_size_hint_align_set(Eo *obj, double x, double y);

/**
 *
 * Retrieves the hints for on object's alignment.
 *
 * This is not a size enforcement in any way, it's just a hint that
 * should be used whenever appropriate.
 *
 * @note Use @c NULL pointers on the hint components you're not
 * interested in: they'll be ignored by the function.
 * @note If @c obj is invalid, then the hint components will be set with 0.5
 *
 * @see evas_object_size_hint_align_set() for more information
 *
 * @param[out] x Double, ranging from @c 0.0 to @c 1.0 or with the
special value #EVAS_HINT_FILL, to use as horizontal alignment hint.
 * @param[out] y Double, ranging from @c 0.0 to @c 1.0 or with the
special value #EVAS_HINT_FILL, to use as vertical alignment hint.
 */
EAPI void evas_object_size_hint_align_get(const Eo *obj, double *x, double *y);

/**
 *
 * Set whether events on a smart object's member should get propagated
 * up to its parent.
 *
 * This function has @b no effect if @p obj is not a member of a smart
 * object.
 *
 * If @p prop is @c EINA_TRUE, events occurring on this object will be
 * propagated on to the smart object of which @p obj is a member.  If
 * @p prop is @c EINA_FALSE, events occurring on this object will @b
 * not be propagated on to the smart object of which @p obj is a
 * member.  The default value is @c EINA_TRUE.
 *
 * @see evas_object_propagate_events_get()
 * @see evas_object_repeat_events_set()
 * @see evas_object_pass_events_set()
 * @see evas_object_freeze_events_set()
 *
 * @param[in] propagate whether to propagate events (@c EINA_TRUE) or not
(@c EINA_FALSE)
 */
EAPI void evas_object_propagate_events_set(Eo *obj, Eina_Bool propagate);

/**
 *
 * Retrieve whether an Evas object is set to propagate events.
 *
 * @return whether @p obj is set to propagate events (@c EINA_TRUE)
 * or not (@c EINA_FALSE)
 *
 * @see evas_object_propagate_events_set()
 * @see evas_object_repeat_events_get()
 * @see evas_object_pass_events_get()
 * @see evas_object_freeze_events_get()
 *
 */
EAPI Eina_Bool evas_object_propagate_events_get(const Eo *obj);

/**
 *
 * Set whether an Evas object is to pass (ignore) events.
 *
 * If @p pass is @c EINA_TRUE, it will make events on @p obj to be @b
 * ignored. They will be triggered on the @b next lower object (that
 * is not set to pass events), instead (see evas_object_below_get()).
 *
 * If @p pass is @c EINA_FALSE, events will be processed on that
 * object as normal.
 *
 * @see evas_object_pass_events_get() for an example
 * @see evas_object_repeat_events_set()
 * @see evas_object_propagate_events_set()
 * @see evas_object_freeze_events_set()
 *
 * @param[in] pass whether @p obj is to pass events (@c EINA_TRUE) or not
(@c EINA_FALSE)
 */
EAPI void evas_object_pass_events_set(Eo *obj, Eina_Bool pass);

/**
 *
 * Determine whether an object is set to pass (ignore) events.
 *
 * @return pass whether @p obj is set to pass events (@c EINA_TRUE) or not
 * (@c EINA_FALSE)
 *
 * Example:
 * @dontinclude evas-stacking.c
 * @skip if (strcmp(ev->key, "p") == 0)
 * @until }
 *
 * See the full @ref Example_Evas_Stacking "example".
 *
 * @see evas_object_pass_events_set()
 * @see evas_object_repeat_events_get()
 * @see evas_object_propagate_events_get()
 * @see evas_object_freeze_events_get()
 *
 */
EAPI Eina_Bool evas_object_pass_events_get(const Eo *obj);

/**
 *
 * Move the given Evas object to the given location inside its canvas' viewport.
 *
 * @param[in] x in
 * @param[in] y in
 */
EAPI void evas_object_move(Eo *obj, Evas_Coord x, Evas_Coord y);

/**
 *
 * Sets whether or not the given Evas object is to be drawn anti-aliased.
 *
 * @ingroup Evas_Object_Group_Extras
 *
 * @param[in] anti_alias 1 if the object is to be anti_aliased, 0 otherwise.
 */
EAPI void evas_object_anti_alias_set(Eo *obj, Eina_Bool anti_alias);

/**
 *
 * Retrieves whether or not the given Evas object is to be drawn anti_aliased.
 * @return  @c 1 if the object is to be anti_aliased.  @c 0 otherwise.
 * @ingroup Evas_Object_Group_Extras
 *
 */
EAPI Eina_Bool evas_object_anti_alias_get(const Eo *obj);

/**
 *
 * Sets the general/main color of the given Evas object to the given
 * one.
 *
 * @see evas_object_color_get() (for an example)
 * @note These color values are expected to be premultiplied by @p a.
 *
 * @ingroup Evas_Object_Group_Basic
 *
 * @param[in] r The red component of the given color.
 * @param[in] g The green component of the given color.
 * @param[in] b The blue component of the given color.
 * @param[in] a The alpha component of the given color.
 */
EAPI void evas_object_color_set(Eo *obj, int r, int g, int b, int a);

/**
 *
 * Retrieves the general/main color of the given Evas object.
 *
 * Retrieves the “main” color's RGB component (and alpha channel)
 * values, <b>which range from 0 to 255</b>. For the alpha channel,
 * which defines the object's transparency level, 0 means totally
 * transparent, while 255 means opaque. These color values are
 * premultiplied by the alpha value.
 *
 * Usually you’ll use this attribute for text and rectangle objects,
 * where the “main” color is their unique one. If set for objects
 * which themselves have colors, like the images one, those colors get
 * modulated by this one.
 *
 * @note All newly created Evas rectangles get the default color
 * values of <code>255 255 255 255</code> (opaque white).
 *
 * @note Use @c NULL pointers on the components you're not interested
 * in: they'll be ignored by the function.
 *
 * Example:
 * @dontinclude evas-object-manipulation.c
 * @skip int alpha, r, g, b;
 * @until return
 *
 * See the full @ref Example_Evas_Object_Manipulation "example".
 *
 * @ingroup Evas_Object_Group_Basic
 *
 * @param[out] r The red component of the given color.
 * @param[out] g The green component of the given color.
 * @param[out] b The blue component of the given color.
 * @param[out] a The alpha component of the given color.
 */
EAPI void evas_object_color_get(const Eo *obj, int *r, int *g, int *b, int *a);

/**
 *
 * Retrieve user data stored on a given smart object.
 *
 * @return A pointer to data stored using
 * evas_object_smart_data_set(), or @c NULL, if none has been
 * set.
 *
 * @see evas_object_smart_data_set()
 *
 * @ingroup Evas_Smart_Object_Group
 *
 */
EAPI void *evas_object_smart_data_get(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Get the clipper object for the given clipped smart object.
 *
 * @return the clipper object.
 *
 * Use this function if you want to change any of this clipper's
 * properties, like colors.
 *
 * @see evas_object_smart_clipped_smart_add()
 *
 */
EAPI Evas_Object *evas_object_smart_clipped_clipper_get(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Get the Evas object stacked right below @p obj
 *
 * @return the #Evas_Object directly below @p obj, if any, or @c NULL,
 * if none
 *
 * This function will traverse layers in its search, if there are
 * objects on layers below the one @p obj is placed at.
 *
 * @see evas_object_layer_get()
 * @see evas_object_layer_set()
 * @see evas_object_below_get()
 *
 */
EAPI Evas_Object *evas_object_below_get(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Return a list of objects currently clipped by @p obj.
 *
 * @return a list of objects being clipped by @p obj
 *
 * This returns the internal list handle that contains all objects
 * clipped by the object @p obj. If none are clipped by it, the call
 * returns @c NULL. This list is only valid until the clip list is
 * changed and should be fetched again with another call to
 * evas_object_clipees_get() if any objects being clipped by this
 * object are unclipped, clipped by a new object, deleted or get the
 * clipper deleted. These operations will invalidate the list
 * returned, so it should not be used anymore after that point. Any
 * use of the list after this may have undefined results, possibly
 * leading to crashes. The object @p obj must be a valid
 * .Evas_Object.
 *
 * See also evas_object_clip_set(), evas_object_clip_unset() and
 * evas_object_clip_get().
 *
 * Example:
 * @code
 * extern Evas_Object *obj;
 * Evas_Object *clipper;
 *
 * clipper = evas_object_clip_get(obj);
 * if (clipper)
 * {
 * Eina.List *clippees, *l;
 * Evas_Object *obj_tmp;
 *
 * clippees = evas_object_clipees_get(clipper);
 * printf("Clipper clips %i objects\n", eina_list_count(clippees));
 * EINA_LIST_FOREACH(clippees, l, obj_tmp)
 * evas_object_show(obj_tmp);
 * }
 * @endcode
 *
 */
EAPI const Eina_List *evas_object_clipees_get(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Gets the parent smart object of a given Evas object, if it has one.
 *
 * @return Returns the parent smart object of @a obj or @c NULL, if @a
 * obj is not a smart member of any
 *
 * @ingroup Evas_Smart_Object_Group
 *
 */
EAPI Evas_Object *evas_object_smart_parent_get(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Get the Evas object stacked right above @p obj
 *
 * @return the #Evas_Object directly above @p obj, if any, or @c NULL,
 * if none
 *
 * This function will traverse layers in its search, if there are
 * objects on layers above the one @p obj is placed at.
 *
 * @see evas_object_layer_get()
 * @see evas_object_layer_set()
 * @see evas_object_below_get()
 *
 */
EAPI Evas_Object *evas_object_above_get(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Sets the hints for an object's disply mode
 *
 * This is not a size enforcement in any way, it's just a hint that
 * can be used whenever appropriate.
 *
 * @param[in] dispmode display mode hint
 */
EAPI void evas_object_size_hint_display_mode_set(Eo *obj, Evas_Display_Mode dispmode);

/**
 *
 * Retrieves the hints for an object's display mode
 *
 * These are hints on the display mode @p obj. This is
 * not a size enforcement in any way, it's just a hint that can be
 * used whenever appropriate.
 * This mode can be used object's display mode like commpress or expand
 *
 */
EAPI Evas_Display_Mode evas_object_size_hint_display_mode_get(const Eo *obj);

/**
 *
 * Test if any object is clipped by @p obj.
 *
 * @return EINA_TRUE if @p obj clip any object.
 * @since 1.8
 *
 */
EAPI Eina_Bool evas_object_clipees_has(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Requests @p keyname key events be directed to @p obj.
 *
 * @return @c EINA_TRUE, if the call succeeded, @c EINA_FALSE otherwise.
 *
 * Key grabs allow one or more objects to receive key events for
 * specific key strokes even if other objects have focus. Whenever a
 * key is grabbed, only the objects grabbing it will get the events
 * for the given keys.
 *
 * @p keyname is a platform dependent symbolic name for the key
 * pressed (see @ref Evas_Keys for more information).
 *
 * @p modifiers and @p not_modifiers are bit masks of all the
 * modifiers that must and mustn't, respectively, be pressed along
 * with @p keyname key in order to trigger this new key
 * grab. Modifiers can be things such as Shift and Ctrl as well as
 * user defined types via evas_key_modifier_add(). Retrieve them with
 * evas_key_modifier_mask_get() or use @c 0 for empty masks.
 *
 * @p exclusive will make the given object the only one permitted to
 * grab the given key. If given @c EINA_TRUE, subsequent calls on this
 * function with different @p obj arguments will fail, unless the key
 * is ungrabbed again.
 *
 * Example code follows.
 * @dontinclude evas-events.c
 * @skip if (d.focus)
 * @until else
 *
 * See the full example @ref Example_Evas_Events "here".
 *
 * @warning Providing impossible modifier sets creates undefined behavior
 *
 * @see evas_object_key_ungrab
 * @see evas_object_focus_set
 * @see evas_object_focus_get
 * @see evas_focus_get
 * @see evas_key_modifier_add
 *
 * @param[in] keyname the key to request events for.
 * @param[in] modifiers a mask of modifiers that must be present to
trigger the event.
 * @param[in] not_modifiers a mask of modifiers that must @b not be present
to trigger the event.
 * @param[in] exclusive request that the @p obj is the only object
receiving the @p keyname events.
 */
EAPI Eina_Bool evas_object_key_grab(Eo *obj, const char *keyname, Evas_Modifier_Mask modifiers, Evas_Modifier_Mask not_modifiers, Eina_Bool exclusive) EINA_WARN_UNUSED_RESULT EINA_ARG_NONNULL(2);

/**
 *
 * Stack @p obj immediately below @p below
 *
 * Objects, in a given canvas, are stacked in the order they get added
 * to it.  This means that, if they overlap, the highest ones will
 * cover the lowest ones, in that order. This function is a way to
 * change the stacking order for the objects.
 *
 * This function is intended to be used with <b>objects belonging to
 * the same layer</b> in a given canvas, otherwise it will fail (and
 * accomplish nothing).
 *
 * If you have smart objects on your canvas and @p obj is a member of
 * one of them, then @p below must also be a member of the same
 * smart object.
 *
 * Similarly, if @p obj is not a member of a smart object, @p below
 * must not be either.
 *
 * @see evas_object_layer_get()
 * @see evas_object_layer_set()
 * @see evas_object_stack_below()
 *
 * @param[in] below the object below which to stack
 */
EAPI void evas_object_stack_below(Eo *obj, Evas_Object *below) EINA_ARG_NONNULL(2);

/**
 *
 * Raise @p obj to the top of its layer.
 *
 * @p obj will, then, be the highest one in the layer it belongs
 * to. Object on other layers won't get touched.
 *
 * @see evas_object_stack_above()
 * @see evas_object_stack_below()
 * @see evas_object_lower()
 *
 */
EAPI void evas_object_raise(Eo *obj);

/**
 *
 * Stack @p obj immediately above @p above
 *
 * Objects, in a given canvas, are stacked in the order they get added
 * to it.  This means that, if they overlap, the highest ones will
 * cover the lowest ones, in that order. This function is a way to
 * change the stacking order for the objects.
 *
 * This function is intended to be used with <b>objects belonging to
 * the same layer</b> in a given canvas, otherwise it will fail (and
 * accomplish nothing).
 *
 * If you have smart objects on your canvas and @p obj is a member of
 * one of them, then @p above must also be a member of the same
 * smart object.
 *
 * Similarly, if @p obj is not a member of a smart object, @p above
 * must not be either.
 *
 * @see evas_object_layer_get()
 * @see evas_object_layer_set()
 * @see evas_object_stack_below()
 *
 * @param[in] above the object above which to stack
 */
EAPI void evas_object_stack_above(Eo *obj, Evas_Object *above) EINA_ARG_NONNULL(2);

/**
 *
 * Checks whether a given smart object or any of its smart object
 * parents is of a given smart class.
 *
 * @return @c EINA_TRUE, if @a obj or any of its parents is of type @a
 * type, @c EINA_FALSE otherwise
 *
 * If @p obj is not a smart object, this call will fail
 * immediately.
 *
 * This function supports Eo and legacy inheritance mechanisms. However,
 * it is recommended to use eo_isa instead if your object is using Eo from
 * top to bottom.
 *
 * The checks use smart classes names and <b>string
 * comparison</b>. There is a version of this same check using
 * <b>pointer comparison</b>, since a smart class' name is a single
 * string in Evas.
 *
 * @see evas_object_smart_type_check_ptr()
 * @see eo_isa
 *
 * @ingroup Evas_Smart_Object_Group
 *
 * @param[in] type The @b name (type) of the smart class to check for
 */
EAPI Eina_Bool evas_object_smart_type_check(const Eo *obj, const char *type) EINA_WARN_UNUSED_RESULT EINA_ARG_NONNULL(2);

/**
 *
 * Retrieves the object from children of the given object with the given name.
 * @return  If successful, the Evas object with the given name.  Otherwise,
 * @c NULL.
 *
 * This looks for the evas object given a name by evas_object_name_set(), but
 * it ONLY looks at the children of the object *p obj, and will only recurse
 * into those children if @p recurse is greater than 0. If the name is not
 * unique within immediate children (or the whole child tree) then it is not
 * defined which child object will be returned. If @p recurse is set to -1 then
 * it will recurse without limit.
 *
 * @since 1.2
 *
 * @ingroup Evas_Object_Group_Find
 *
 * @param[in] name The given name.
 * @param[in] recurse Set to the number of child levels to recurse (0 == don't recurse, 1 == only look at the children of @p obj or their immediate children, but no further etc.).
 */
EAPI Evas_Object *evas_object_name_child_find(const Eo *obj, const char *name, int recurse) EINA_WARN_UNUSED_RESULT;

/**
 *
 * Removes the grab on @p keyname key events by @p obj.
 *
 * Removes a key grab on @p obj if @p keyname, @p modifiers, and @p
 * not_modifiers match.
 *
 * Example code follows.
 * @dontinclude evas-events.c
 * @skip got here by key grabs
 * @until }
 *
 * See the full example @ref Example_Evas_Events "here".
 *
 * @see evas_object_key_grab
 * @see evas_object_focus_set
 * @see evas_object_focus_get
 * @see evas_focus_get
 *
 * @param[in] keyname the key the grab is set for.
 * @param[in] modifiers a mask of modifiers that must be present to
trigger the event.
 * @param[in] not_modifiers a mask of modifiers that must not not be
present to trigger the event.
 */
EAPI void evas_object_key_ungrab(Eo *obj, const char *keyname, Evas_Modifier_Mask modifiers, Evas_Modifier_Mask not_modifiers) EINA_ARG_NONNULL(2);

/**
 *
 * Lower @p obj to the bottom of its layer.
 *
 * @p obj will, then, be the lowest one in the layer it belongs
 * to. Objects on other layers won't get touched.
 *
 * @see evas_object_stack_above()
 * @see evas_object_stack_below()
 * @see evas_object_raise()
 *
 */
EAPI void evas_object_lower(Eo *obj);

/**
 *
 * Disable/cease clipping on a clipped @p obj object.
 *
 * This function disables clipping for the object @p obj, if it was
 * already clipped, i.e., its visibility and color get detached from
 * the previous clipper. If it wasn't, this has no effect. The object
 * @p obj must be a valid .Evas_Object.
 *
 * See also evas_object_clip_set() (for an example),
 * evas_object_clipees_get() and evas_object_clip_get().
 *
 */
EAPI void evas_object_clip_unset(Eo *obj);

/**
 *
 * Moves all children objects of a given smart object relative to a
 * given offset.
 *
 * This will make each of @p obj object's children to move, from where
 * they before, with those delta values (offsets) on both directions.
 *
 * @note This is most useful on custom smart @c move() functions.
 *
 * @note Clipped smart objects already make use of this function on
 * their @c move() smart function definition.
 *
 * @param[in] dx horizontal offset (delta).
 * @param[in] dy vertical offset (delta).
 */
EAPI void evas_object_smart_move_children_relative(Eo *obj, Evas_Coord dx, Evas_Coord dy);

/**
 *
 * Checks whether a given smart object or any of its smart object
 * parents is of a given smart class, <b>using pointer comparison</b>.
 *
 * @return @c EINA_TRUE, if @a obj or any of its parents is of type @a
 * type, @c EINA_FALSE otherwise
 *
 * @see evas_object_smart_type_check() for more details
 * @see eo_isa
 *
 * @ingroup Evas_Smart_Object_Group
 *
 * @param[in] type The type (name string) to check for. Must be the name
 */
EAPI Eina_Bool evas_object_smart_type_check_ptr(const Eo *obj, const char *type) EINA_WARN_UNUSED_RESULT EINA_ARG_NONNULL(2);

#endif
