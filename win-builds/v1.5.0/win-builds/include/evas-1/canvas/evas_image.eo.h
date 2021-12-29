#ifndef _EVAS_IMAGE_EO_H_
#define _EVAS_IMAGE_EO_H_

#ifndef _EVAS_IMAGE_EO_TYPES
#define _EVAS_IMAGE_EO_TYPES


#endif
#define EVAS_IMAGE_CLASS evas_image_class_get()

const Eo_Class *evas_image_class_get(void) EINA_CONST;

/**
 *
 * Set the DPI resolution of an image object's source image.
 *
 * This function sets the DPI resolution of a given loaded canvas
 * image. Most useful for the SVG image loader.
 *
 * @see evas_object_image_load_dpi_get()
 *
 * @param[in] dpi The new DPI resolution.
 *
 */
EOAPI void  evas_obj_image_load_dpi_set(double dpi);

/**
 *
 * Get the DPI resolution of a loaded image object in the canvas.
 *
 * @return The DPI resolution of the given canvas image.
 *
 * This function returns the DPI resolution of the given canvas image.
 *
 * @see evas_object_image_load_dpi_set() for more details
 *
 *
 */
EOAPI double  evas_obj_image_load_dpi_get(void);

/**
 *
 * Clip the proxy object with the source object's clipper.
 *
 * @see evas_object_clip_set()
 * @see evas_object_image_source_set()
 * @since 1.8
 *
 * @param[in] source_clip whether @p obj is clipped by the source clipper.
(@c EINA_TRUE) or not (@c EINA_FALSE)
 *
 */
EOAPI void  evas_obj_image_source_clip_set(Eina_Bool source_clip);

/**
 *
 * Determine whether an object is clipped by source object's clipper.
 *
 * @return @c EINA_TRUE if source clip is enabled, @c EINA_FALSE otherwise.
 *
 * @see evas_object_clip_set()
 * @see evas_object_image_source_set()
 * @see evas_object_image_source_clip_set()
 * @since 1.8
 *
 *
 */
EOAPI Eina_Bool  evas_obj_image_source_clip_get(void);

/**
 *
 * Set the source object on an image object to used as a @b proxy.
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE on error.
 *
 * If an image object is set to behave as a @b proxy, it will mirror
 * the rendering contents of a given @b source object in its drawing
 * region, without affecting that source in any way. The source must
 * be another valid Evas object. Other effects may be applied to the
 * proxy, such as a map (see evas_object_map_set()) to create a
 * reflection of the original object (for example).
 *
 * Any existing source object on @p obj will be removed after this
 * call. Setting @p src to @c NULL clears the proxy object (not in
 * "proxy state" anymore).
 *
 * @warning You cannot set a proxy as another proxy's source.
 *
 * @see evas_object_image_source_get()
 * @see evas_object_image_source_unset()
 * @see evas_object_image_source_visible_set()
 *
 * @param[in] src Source object to use for the proxy.
 *
 */
EOAPI Eina_Bool  evas_obj_image_source_set(Evas_Object *src);

/**
 *
 * Get the current source object of an image object.
 *
 * @return Source object (if any), or @c NULL, if not in "proxy mode"
 * (or on errors).
 *
 * @see evas_object_image_source_set() for more details
 *
 *
 */
EOAPI Evas_Object * evas_obj_image_source_get(void);

/**
 *
 * Set whether the image object's fill property should track the
 * object's size.
 *
 * If @p setting is @c EINA_TRUE, then every evas_object_resize() will
 * @b automatically trigger a call to evas_object_image_fill_set()
 * with the that new size (and @c 0, @c 0 as source image's origin),
 * so the bound image will fill the whole object's area.
 *
 * @see evas_object_image_filled_add()
 * @see evas_object_image_fill_get()
 *
 * @param[in] filled @c EINA_TRUE, to make the fill property follow
object size or @c EINA_FALSE, otherwise.
 *
 */
EOAPI void  evas_obj_image_filled_set(Eina_Bool filled);

/**
 *
 * Retrieve whether the image object's fill property should track the
 * object's size.
 *
 * @return @c EINA_TRUE if it is tracking, @c EINA_FALSE, if not (and
 * evas_object_fill_set() must be called manually).
 *
 * @see evas_object_image_filled_set() for more information
 *
 *
 */
EOAPI Eina_Bool  evas_obj_image_filled_get(void);

/**
 *
 * Set the content hint setting of a given image object of the canvas.
 *
 * This function sets the content hint value of the given image of the
 * canvas. For example, if you're on the GL engine and your driver
 * implementation supports it, setting this hint to
 * #EVAS_IMAGE_CONTENT_HINT_DYNAMIC will make it need @b zero copies
 * at texture upload time, which is an "expensive" operation.
 *
 * @see evas_object_image_content_hint_get()
 *
 * @param[in] hint The content hint value, one of the
#Evas_Image_Content_Hint ones.
 *
 */
EOAPI void  evas_obj_image_content_hint_set(Evas_Image_Content_Hint hint);

/**
 *
 * Get the content hint setting of a given image object of the canvas.
 *
 * @return hint The content hint value set on it, one of the
 * #Evas_Image_Content_Hint ones (#EVAS_IMAGE_CONTENT_HINT_NONE means
 * an error).
 *
 * This function returns the content hint value of the given image of
 * the canvas.
 *
 * @see evas_object_image_content_hint_set()
 *
 *
 */
EOAPI Evas_Image_Content_Hint  evas_obj_image_content_hint_get(void);

/**
 *
 * Inform a given image object to load a selective region of its
 * source image.
 *
 * This function is useful when one is not showing all of an image's
 * area on its image object.
 *
 * @note The image loader for the image format in question has to
 * support selective region loading in order to this function to take
 * effect.
 *
 * @see evas_object_image_load_region_get()
 *
 * @param[in] x X-offset of the region to be loaded.
 * @param[in] y Y-offset of the region to be loaded.
 * @param[in] w Width of the region to be loaded.
 * @param[in] h Height of the region to be loaded.
 *
 */
EOAPI void  evas_obj_image_load_region_set(int x, int y, int w, int h);

/**
 *
 * Retrieve the coordinates of a given image object's selective
 * (source image) load region.
 *
 * @note Use @c NULL pointers on the coordinates you're not interested
 * in: they'll be ignored by the function.
 *
 * @see evas_object_image_load_region_get()
 *
 * @param[out] x X-offset of the region to be loaded.
 * @param[out] y Y-offset of the region to be loaded.
 * @param[out] w Width of the region to be loaded.
 * @param[out] h Height of the region to be loaded.
 *
 */
EOAPI void  evas_obj_image_load_region_get(int *x, int *y, int *w, int *h);

/**
 *
 * Enable or disable alpha channel usage on the given image object.
 *
 * This function sets a flag on an image object indicating whether or
 * not to use alpha channel data. A value of @c EINA_TRUE makes it use
 * alpha channel data, and @c EINA_FALSE makes it ignore that
 * data. Note that this has nothing to do with an object's color as
 * manipulated by evas_object_color_set().
 *
 * @see evas_object_image_alpha_get()
 *
 * @param[in] alpha Whether to use alpha channel (@c EINA_TRUE) data
or not (@c EINA_FALSE).
 *
 */
EOAPI void  evas_obj_image_alpha_set(Eina_Bool alpha);

/**
 *
 * Retrieve whether alpha channel data is being used on the given
 * image object.
 *
 * @return Whether the alpha channel data is being used (@c EINA_TRUE)
 * or not (@c EINA_FALSE).
 *
 * This function returns @c EINA_TRUE if the image object's alpha
 * channel is being used, or @c EINA_FALSE otherwise.
 *
 * See @ref evas_object_image_alpha_set() for more details.
 *
 *
 */
EOAPI Eina_Bool  evas_obj_image_alpha_get(void);

/**
 *
 * Set the size of a given image object's source image, when loading
 * it.
 *
 * This function sets a new (loading) size for the given canvas
 * image.
 *
 * @see evas_object_image_load_size_get()
 *
 * @param[in] w The new width of the image's load size.
 * @param[in] h The new height of the image's load size.
 *
 */
EOAPI void  evas_obj_image_load_size_set(int w, int h);

/**
 *
 * Get the size of a given image object's source image, when loading
 * it.
 *
 * @note Use @c NULL pointers on the size components you're not
 * interested in: they'll be ignored by the function.
 *
 * @see evas_object_image_load_size_set() for more details
 *
 * @param[out] w The new width of the image's load size.
 * @param[out] h The new height of the image's load size.
 *
 */
EOAPI void  evas_obj_image_load_size_get(int *w, int *h);

/**
 *
 * Set the dimensions for an image object's border, a region which @b
 * won't ever be scaled together with its center.
 *
 * When Evas is rendering, an image source may be scaled to fit the
 * size of its image object. This function sets an area from the
 * borders of the image inwards which is @b not to be scaled. This
 * function is useful for making frames and for widget theming, where,
 * for example, buttons may be of varying sizes, but their border size
 * must remain constant.
 *
 * The units used for @p l, @p r, @p t and @p b are canvas units.
 *
 * @note The border region itself @b may be scaled by the
 * evas_object_image_border_scale_set() function.
 *
 * @note By default, image objects have no borders set, i. e. @c l, @c
 * r, @c t and @c b start as @c 0.
 *
 * See the following figures for visual explanation:\n
 * @htmlonly
 * <img src="image-borders.png" style="max-width: 100%;" />
 * <a href="image-borders.png">Full-size</a>
 * @endhtmlonly
 * @image rtf image-borders.png
 * @image latex image-borders.eps width=\textwidth
 * @htmlonly
 * <img src="border-effect.png" style="max-width: 100%;" />
 * <a href="border-effect.png">Full-size</a>
 * @endhtmlonly
 * @image rtf border-effect.png
 * @image latex border-effect.eps width=\textwidth
 *
 * @see evas_object_image_border_get()
 * @see evas_object_image_border_center_fill_set()
 *
 * @param[in] l The border's left width.
 * @param[in] r The border's right width.
 * @param[in] t The border's top width.
 * @param[in] b The border's bottom width.
 *
 */
EOAPI void  evas_obj_image_border_set(int l, int r, int t, int b);

/**
 *
 * Retrieve the dimensions for an image object's border, a region
 * which @b won't ever be scaled together with its center.
 *
 * @note Use @c NULL pointers on the border components you're not
 * interested in: they'll be ignored by the function.
 *
 * See @ref evas_object_image_border_set() for more details.
 *
 * @param[out] l The border's left width.
 * @param[out] r The border's right width.
 * @param[out] t The border's top width.
 * @param[out] b The border's bottom width.
 *
 */
EOAPI void  evas_obj_image_border_get(int *l, int *r, int *t, int *b);

/**
 *
 * Sets whether to use high-quality image scaling algorithm on the
 * given image object.
 *
 * When enabled, a higher quality image scaling algorithm is used when
 * scaling images to sizes other than the source image's original
 * one. This gives better results but is more computationally
 * expensive.
 *
 * @note Image objects get created originally with smooth scaling @b
 * on.
 *
 * @see evas_object_image_smooth_scale_get()
 *
 * @param[in] smooth_scale Whether to use smooth scale or not.
 *
 */
EOAPI void  evas_obj_image_smooth_scale_set(Eina_Bool smooth_scale);

/**
 *
 * Retrieves whether the given image object is using high-quality
 * image scaling algorithm.
 *
 * @return Whether smooth scale is being used.
 *
 * See @ref evas_object_image_smooth_scale_set() for more details.
 *
 *
 */
EOAPI Eina_Bool  evas_obj_image_smooth_scale_get(void);

/**
 *
 * Sets the scaling factor (multiplier) for the borders of an image
 * object.
 *
 * @see evas_object_image_border_set()
 * @see evas_object_image_border_scale_get()
 *
 * @param[in] scale The scale factor (default is @c 1.0 - i.e. no scaling)
 *
 */
EOAPI void  evas_obj_image_border_scale_set(double scale);

/**
 *
 * Retrieves the scaling factor (multiplier) for the borders of an
 * image object.
 *
 * @return The scale factor set for its borders
 *
 * @see evas_object_image_border_set()
 * @see evas_object_image_border_scale_set()
 *
 *
 */
EOAPI double  evas_obj_image_border_scale_get(void);

/**
 *
 * Mark whether the given image object is dirty and needs to request its pixels.
 *
 * This function will only properly work if a pixels get callback has been set.
 *
 * @warning use this function if you really know what you are doing.
 *
 * @see evas_object_image_pixels_get_callback_set()
 *
 * @param[in] dirty Whether the image is dirty.
 *
 */
EOAPI void  evas_obj_image_pixels_dirty_set(Eina_Bool dirty);

/**
 *
 * Retrieves whether the given image object is dirty (needs to be redrawn).
 *
 * @return Whether the image is dirty.
 *
 *
 */
EOAPI Eina_Bool  evas_obj_image_pixels_dirty_get(void);

/**
 *
 * Set the video surface linked to a given image of the canvas
 *
 * This function links a video surface to a given canvas image.
 *
 * @param[in] surf The new video surface.
@since 1.1
 *
 */
EOAPI void  evas_obj_image_video_surface_set(Evas_Video_Surface *surf);

/**
 *
 * Get the video surface linekd to a given image of the canvas
 *
 * @return The video surface of the given canvas image.
 * @since 1.1
 *
 * This function returns the video surface linked to a given canvas image.
 *
 *
 */
EOAPI const Evas_Video_Surface * evas_obj_image_video_surface_get(void);

/**
 *
 * Set the video surface capabilities to a given image of the canvas
 *
 * @param[in] caps in
 *
 */
EOAPI void  evas_obj_image_video_surface_caps_set(unsigned int caps);

/**
 *
 * Get the video surface capabilities to a given image of the canvas
 *
 *
 */
EOAPI unsigned int  evas_obj_image_video_surface_caps_get(void);

/**
 *
 * Define if the orientation information in the image file should be honored.
 *
 * @since 1.1
 *
 * @param[in] enable @c EINA_TRUE means that it should honor the orientation information
 *
 */
EOAPI void  evas_obj_image_load_orientation_set(Eina_Bool enable);

/**
 *
 * Get if the orientation information in the image file should be honored.
 *
 * @since 1.1
 *
 *
 */
EOAPI Eina_Bool  evas_obj_image_load_orientation_get(void);

/**
 *
 * Sets the tiling mode for the given evas image object's fill.
 * EVAS_TEXTURE_RESTRICT, or EVAS_TEXTURE_PAD.
 *
 * @param[in] spread One of EVAS_TEXTURE_REFLECT, EVAS_TEXTURE_REPEAT,
 *
 */
EOAPI void  evas_obj_image_fill_spread_set(Evas_Fill_Spread spread);

/**
 *
 * Retrieves the spread (tiling mode) for the given image object's
 * fill.
 *
 * @return  The current spread mode of the image object.
 *
 *
 */
EOAPI Evas_Fill_Spread  evas_obj_image_fill_spread_get(void);

/**
 *
 * Set the source file from where an image object must fetch the real
 * image data (it may be an Eet file, besides pure image ones).
 *
 * If the file supports multiple data stored in it (as Eet files do),
 * you can specify the key to be used as the index of the image in
 * this file.
 *
 * Example:
 * @code
 * img = evas_object_image_add(canvas);
 * evas_object_image_file_set(img, "/path/to/img", NULL);
 * err = evas_object_image_load_error_get(img);
 * if (err != EVAS_LOAD_ERROR_NONE)
 * {
 * fprintf(stderr, "could not load image '%s'. error string is \"%s\"\n",
 * valid_path, evas_load_error_str(err));
 * }
 * else
 * {
 * evas_object_image_fill_set(img, 0, 0, w, h);
 * evas_object_resize(img, w, h);
 * evas_object_show(img);
 * }
 * @endcode
 *
 * @param[in] file The image file path.
 * @param[in] key The image key in @p file (if its an Eet one), or @c
NULL, otherwise.
 *
 */
EOAPI void  evas_obj_image_file_set(const char *file, const char *key);

/**
 *
 * Retrieve the source file from where an image object is to fetch the
 * real image data (it may be an Eet file, besides pure image ones).
 *
 * You must @b not modify the strings on the returned pointers.
 *
 * @note Use @c NULL pointers on the file components you're not
 * interested in: they'll be ignored by the function.
 *
 * @param[out] file The image file path.
 * @param[out] key The image key in @p file (if its an Eet one), or @c
NULL, otherwise.
 *
 */
EOAPI void  evas_obj_image_file_get(const char **file, const char **key);

/**
 *
 * Sets @b how the center part of the given image object (not the
 * borders) should be drawn when Evas is rendering it.
 *
 * This function sets how the center part of the image object's source
 * image is to be drawn, which must be one of the values in
 * #Evas_Border_Fill_Mode. By center we mean the complementary part of
 * that defined by evas_object_image_border_set(). This one is very
 * useful for making frames and decorations. You would most probably
 * also be using a filled image (as in evas_object_image_filled_set())
 * to use as a frame.
 *
 * @see evas_object_image_border_center_fill_get()
 *
 * @param[in] fill Fill mode of the center region of @p obj (a value in
#Evas_Border_Fill_Mode).
 *
 */
EOAPI void  evas_obj_image_border_center_fill_set(Evas_Border_Fill_Mode fill);

/**
 *
 * Retrieves @b how the center part of the given image object (not the
 * borders) is to be drawn when Evas is rendering it.
 *
 * @return fill Fill mode of the center region of @p obj (a value in
 * #Evas_Border_Fill_Mode).
 *
 * See @ref evas_object_image_fill_set() for more details.
 *
 *
 */
EOAPI Evas_Border_Fill_Mode  evas_obj_image_border_center_fill_get(void);

/**
 *
 * Sets the size of the given image object.
 *
 * This function will scale down or crop the image so that it is
 * treated as if it were at the given size. If the size given is
 * smaller than the image, it will be cropped. If the size given is
 * larger, then the image will be treated as if it were in the upper
 * left hand corner of a larger image that is otherwise transparent.
 *
 * @param[in] w The new width of the image.
 * @param[in] h The new height of the image.
 *
 */
EOAPI void  evas_obj_image_size_set(int w, int h);

/**
 *
 * Retrieves the size of the given image object.
 *
 * See @ref evas_object_image_size_set() for more details.
 *
 * @param[out] w The new width of the image.
 * @param[out] h The new height of the image.
 *
 */
EOAPI void  evas_obj_image_size_get(int *w, int *h);

/**
 *
 * Set the source object to be visible or not.
 *
 * If the @p visible set to @c EINA_FALSE, the source object of the proxy(@p obj
 * ) will be invisible.
 *
 * This API works differently to evas_object_show() and evas_object_hide().
 * Once source object is hidden by evas_object_hide() then the proxy object will
 * be hidden as well. Actually in this case both objects are excluded from the
 * Evas internal update circle.
 *
 * By this API, instead, one can toggle the visibility of a proxy's source
 * object remaining the proxy visibility untouched.
 *
 * @warning If the all of proxies are deleted, then the source visibility of the
 * source object will be cancelled.
 *
 * @see evas_object_image_source_visible_get()
 * @see evas_object_image_source_set()
 * @see evas_object_show()
 * @see evas_object_hide()
 * @since 1.8
 *
 * @param[in] visible @c EINA_TRUE is source object to be shown, @c EINA_FALSE
otherwise.
 *
 */
EOAPI void  evas_obj_image_source_visible_set(Eina_Bool visible);

/**
 *
 * Get the state of the source object visibility.
 *
 * @return @c EINA_TRUE if source object is visible, @c EINA_FALSE otherwise.
 *
 * @see evas_object_image_source_visible_set()
 * @see evas_object_image_source_set()
 * @see evas_object_show()
 * @see evas_object_hide()
 * @since 1.8
 *
 *
 */
EOAPI Eina_Bool  evas_obj_image_source_visible_get(void);

/**
 *
 * Set how to fill an image object's drawing rectangle given the
 * (real) image bound to it.
 *
 * Note that if @p w or @p h are smaller than the dimensions of
 * @p obj, the displayed image will be @b tiled around the object's
 * area. To have only one copy of the bound image drawn, @p x and @p y
 * must be 0 and @p w and @p h need to be the exact width and height
 * of the image object itself, respectively.
 *
 * See the following image to better understand the effects of this
 * call. On this diagram, both image object and original image source
 * have @c a x @c a dimensions and the image itself is a circle, with
 * empty space around it:
 *
 * @image html image-fill.png
 * @image rtf image-fill.png
 * @image latex image-fill.eps
 *
 * @warning The default values for the fill parameters are @p x = 0,
 * @p y = 0, @p w = 0 and @p h = 0. Thus, if you're not using the
 * evas_object_image_filled_add() helper and want your image
 * displayed, you'll have to set valid values with this function on
 * your object.
 *
 * @note evas_object_image_filled_set() is a helper function which
 * will @b override the values set here automatically, for you, in a
 * given way.
 *
 * @param[in] x The x coordinate (from the top left corner of the bound
image) to start drawing from.
 * @param[in] y The y coordinate (from the top left corner of the bound
image) to start drawing from.
 * @param[in] w The width the bound image will be displayed at.
 * @param[in] h The height the bound image will be displayed at.
 *
 */
EOAPI void  evas_obj_image_fill_set(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

/**
 *
 * Retrieve how an image object is to fill its drawing rectangle,
 * given the (real) image bound to it.
 *
 * @note Use @c NULL pointers on the fill components you're not
 * interested in: they'll be ignored by the function.
 *
 * See @ref evas_object_image_fill_set() for more details.
 *
 * @param[out] x The x coordinate (from the top left corner of the bound
image) to start drawing from.
 * @param[out] y The y coordinate (from the top left corner of the bound
image) to start drawing from.
 * @param[out] w The width the bound image will be displayed at.
 * @param[out] h The height the bound image will be displayed at.
 *
 */
EOAPI void  evas_obj_image_fill_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Set the native surface of a given image of the canvas
 *
 * This function sets a native surface of a given canvas image.
 *
 * @param[in] surf The new native surface.
 *
 */
EOAPI void  evas_obj_image_native_surface_set(Evas_Native_Surface *surf);

/**
 *
 * Get the native surface of a given image of the canvas
 *
 * @return The native surface of the given canvas image.
 *
 * This function returns the native surface of a given canvas image.
 *
 *
 */
EOAPI Evas_Native_Surface * evas_obj_image_native_surface_get(void);

/**
 *
 * Set the scale down factor of a given image object's source image,
 * when loading it.
 *
 * This function sets the scale down factor of a given canvas
 * image. Most useful for the SVG image loader.
 *
 * @see evas_object_image_load_scale_down_get()
 *
 * @param[in] scale_down The scale down factor.
 *
 */
EOAPI void  evas_obj_image_load_scale_down_set(int scale_down);

/**
 *
 * get the scale down factor of a given image object's source image,
 * when loading it.
 *
 * @see evas_object_image_load_scale_down_set() for more details
 *
 *
 */
EOAPI int  evas_obj_image_load_scale_down_get(void);

/**
 *
 * Set the scale hint of a given image of the canvas.
 *
 * This function sets the scale hint value of the given image object
 * in the canvas, which will affect how Evas is to cache scaled
 * versions of its original source image.
 *
 * @see evas_object_image_scale_hint_get()
 *
 * @param[in] hint The scale hint, a value in
#Evas_Image_Scale_Hint.
 *
 */
EOAPI void  evas_obj_image_scale_hint_set(Evas_Image_Scale_Hint hint);

/**
 *
 * Get the scale hint of a given image of the canvas.
 *
 * @return The scale hint value set on @p obj, a value in
 * #Evas_Image_Scale_Hint.
 *
 * This function returns the scale hint value of the given image
 * object of the canvas.
 *
 * @see evas_object_image_scale_hint_set() for more details.
 *
 *
 */
EOAPI Evas_Image_Scale_Hint  evas_obj_image_scale_hint_get(void);

/**
 *
 * Set whether an Evas object is to source events.
 *
 * Set whether an Evas object is to repeat events to source.
 *
 * If @p source is @c EINA_TRUE, it will make events on @p obj to also be
 * repeated for the source object (see evas_object_image_source_set()). Even the
 * @p obj and source geometries are different, the event position will be
 * transformed to the source object's space.
 *
 * If @p source is @c EINA_FALSE, events occurring on @p obj will be
 * processed only on it.
 *
 * @see evas_object_image_source_get()
 * @see evas_object_image_source_visible_set()
 * @see evas_object_image_source_events_get()
 * @since 1.8
 *
 * @param[in] source whether @p obj is to pass events (@c EINA_TRUE) or not
(@c EINA_FALSE)
 *
 */
EOAPI void  evas_obj_image_source_events_set(Eina_Bool source);

/**
 *
 * Determine whether an object is set to source events.
 *
 * @return @c EINA_TRUE if source object has events, @c EINA_FALSE otherwise.
 *
 * @see evas_object_image_source_set()
 * @see evas_object_image_source_visible_set()
 * @see evas_object_image_source_events_set()
 * @since 1.8
 *
 *
 */
EOAPI Eina_Bool  evas_obj_image_source_events_get(void);

/**
 *
 * Set the colorspace of a given image of the canvas.
 *
 * This function sets the colorspace of given canvas image.
 *
 * @param[in] cspace The new color space.
 *
 */
EOAPI void  evas_obj_image_colorspace_set(Evas_Colorspace cspace);

/**
 *
 * Get the colorspace of a given image of the canvas.
 *
 * @return The colorspace of the image.
 *
 * This function returns the colorspace of given canvas image.
 *
 *
 */
EOAPI Evas_Colorspace  evas_obj_image_colorspace_get(void);

/**
 *
 * Set the callback function to get pixels from a canvas' image.
 *
 * This functions sets a function to be the callback function that get
 * pixels from a image of the canvas.
 *
 * @param[in] func The callback function.
 * @param[in] data The data pointer to be passed to @a func.
 *
 */
EOAPI void  evas_obj_image_pixels_get_callback_set(Evas_Object_Image_Pixels_Get_Cb func, void *data);

/**
 *
 * Set the source mmaped file from where an image object must fetch the real
 * image data (it must be an Eina_File).
 *
 * If the file supports multiple data stored in it (as Eet files do),
 * you can specify the key to be used as the index of the image in
 * this file.
 *
 * @since 1.8
 *
 * @param[in] f The mmaped file
 * @param[in] key The image key in @p file (if its an Eet one), or @c
NULL, otherwise.
 *
 */
EOAPI void  evas_obj_image_mmap_set(const Eina_File *f, const char *key);

/**
 *
 * Get the source mmaped file from where an image object must fetch the real
 * image data (it must be an Eina_File).
 *
 * If the file supports multiple data stored in it (as Eet files do),
 * you can get the key to be used as the index of the image in
 * this file.
 *
 * @since 1.10
 *
 * @param[out] f The mmaped file
 * @param[out] key The image key in @p file (if its an Eet one), or @c
NULL, otherwise.
 *
 */
EOAPI void  evas_obj_image_mmap_get(const Eina_File **f, const char **key);

/**
 *
 * Replaces the raw image data of the given image object.
 *
 * This function lets the application replace an image object's
 * internal pixel buffer with an user-allocated one. For best results,
 * you should generally first call evas_object_image_size_set() with
 * the width and height for the new buffer.
 *
 * This call is best suited for when you will be using image data with
 * different dimensions than the existing image data, if any. If you
 * only need to modify the existing image in some fashion, then using
 * evas_object_image_data_get() is probably what you are after.
 *
 * Note that the caller is responsible for freeing the buffer when
 * finished with it, as user-set image data will not be automatically
 * freed when the image object is deleted.
 *
 * See @ref evas_object_image_data_get() for more details.
 *
 * @param[in] data The raw data to replace.
 *
 */
EOAPI void  evas_obj_image_data_copy_set(void *data);

/**
 *
 * Set the frame to current frame of an image object
 *
 * This set image object's current frame to frame_num with 1 being the first
 * frame.
 *
 * @see evas_object_image_animated_get()
 * @see evas_object_image_animated_frame_count_get()
 * @see evas_object_image_animated_loop_type_get()
 * @see evas_object_image_animated_loop_count_get()
 * @see evas_object_image_animated_frame_duration_get()
 * @see evas_object_image_animated_frame_set()
 * @since 1.1
 *
 * @param[in] frame_index The index of current frame
 *
 */
EOAPI void  evas_obj_image_animated_frame_set(int frame_index);

/**
 *
 * Get the support state of a given image
 *
 * @return The region support state
 * @since 1.2
 *
 * This function returns the state of the region support of given image
 *
 *
 */
EOAPI Eina_Bool  evas_obj_image_region_support_get(void);

/**
 *
 * Retrieves a number representing any error that occurred during the
 * last loading of the given image object's source image.
 *
 * @return A value giving the last error that occurred. It should be
 * one of the #Evas_Load_Error values. #EVAS_LOAD_ERROR_NONE
 * is returned if there was no error.
 *
 *
 */
EOAPI Evas_Load_Error  evas_obj_image_load_error_get(void);

/**
 *
 * Get the total number of frames of the image object.
 *
 * @return The number of frames
 *
 * This returns total number of frames the image object supports (if animated)
 *
 * @see evas_object_image_animated_get()
 * @see evas_object_image_animated_frame_count_get()
 * @see evas_object_image_animated_loop_type_get()
 * @see evas_object_image_animated_loop_count_get()
 * @see evas_object_image_animated_frame_duration_get()
 * @see evas_object_image_animated_frame_set()
 * @since 1.1
 *
 *
 */
EOAPI int  evas_obj_image_animated_frame_count_get(void);

/**
 *
 * Retrieves the row stride of the given image object.
 *
 * @return The stride of the image (<b>in bytes</b>).
 *
 * The row stride is the number of bytes between the start of a row
 * and the start of the next row for image data.
 *
 *
 */
EOAPI int  evas_obj_image_stride_get(void);

/**
 *
 * Check if an image object can be animated (have multiple frames)
 *
 * @return whether obj support animation
 *
 * This returns if the image file of an image object is capable of animation
 * such as an animated gif file might. This is only useful to be called once
 * the image object file has been set.
 *
 * Example:
 * @code
 * extern Evas_Object *obj;
 *
 * if (evas_object_image_animated_get(obj))
 * {
 * int frame_count;
 * int loop_count;
 * Evas_Image_Animated_Loop_Hint loop_type;
 * double duration;
 *
 * frame_count = evas_object_image_animated_frame_count_get(obj);
 * printf("This image has %d frames\n",frame_count);
 *
 * duration = evas_object_image_animated_frame_duration_get(obj,1,0);
 * printf("Frame 1's duration is %f. You had better set object's frame to 2 after this duration using timer\n");
 *
 * loop_count = evas_object_image_animated_loop_count_get(obj);
 * printf("loop count is %d. You had better run loop %d times\n",loop_count,loop_count);
 *
 * loop_type = evas_object_image_animated_loop_type_get(obj);
 * if (loop_type == EVAS_IMAGE_ANIMATED_HINT_LOOP)
 * printf("You had better set frame like 1->2->3->1->2->3...\n");
 * else if (loop_type == EVAS_IMAGE_ANIMATED_HINT_PINGPONG)
 * printf("You had better set frame like 1->2->3->2->1->2...\n");
 * else
 * printf("Unknown loop type\n");
 *
 * evas_object_image_animated_frame_set(obj,1);
 * printf("You set image object's frame to 1. You can see frame 1\n");
 * }
 * @endcode
 *
 * @see evas_object_image_animated_get()
 * @see evas_object_image_animated_frame_count_get()
 * @see evas_object_image_animated_loop_type_get()
 * @see evas_object_image_animated_loop_count_get()
 * @see evas_object_image_animated_frame_duration_get()
 * @see evas_object_image_animated_frame_set()
 * @since 1.1
 *
 *
 */
EOAPI Eina_Bool  evas_obj_image_animated_get(void);

/**
 *
 * Get the kind of looping the image object does.
 *
 * @return Loop type of the image object
 *
 * This returns the kind of looping the image object wants to do.
 *
 * If it returns EVAS_IMAGE_ANIMATED_HINT_LOOP, you should display frames in a sequence like:
 * 1->2->3->1->2->3->1...
 * If it returns EVAS_IMAGE_ANIMATED_HINT_PINGPONG, it is better to
 * display frames in a sequence like: 1->2->3->2->1->2->3->1...
 *
 * The default type is EVAS_IMAGE_ANIMATED_HINT_LOOP.
 *
 * @see evas_object_image_animated_get()
 * @see evas_object_image_animated_frame_count_get()
 * @see evas_object_image_animated_loop_type_get()
 * @see evas_object_image_animated_loop_count_get()
 * @see evas_object_image_animated_frame_duration_get()
 * @see evas_object_image_animated_frame_set()
 * @since 1.1
 *
 *
 */
EOAPI Evas_Image_Animated_Loop_Hint  evas_obj_image_animated_loop_type_get(void);

/**
 *
 * Get the number times the animation of the object loops.
 *
 * @return The number of loop of an animated image object
 *
 * This returns loop count of image. The loop count is the number of times
 * the animation will play fully from first to last frame until the animation
 * should stop (at the final frame).
 *
 * If 0 is returned, then looping should happen indefinitely (no limit to
 * the number of times it loops).
 *
 * @see evas_object_image_animated_get()
 * @see evas_object_image_animated_frame_count_get()
 * @see evas_object_image_animated_loop_type_get()
 * @see evas_object_image_animated_loop_count_get()
 * @see evas_object_image_animated_frame_duration_get()
 * @see evas_object_image_animated_frame_set()
 * @since 1.1
 *
 *
 */
EOAPI int  evas_obj_image_animated_loop_count_get(void);

/**
 *
 * Set the 3D scene of a given image of the canvas.
 *
 * This function sets a 3d scene of a given canvas image.
 *
 * @see evas_object_image_scene_set
 * @since 1.10
 *
 * @param[in] scene 3D scene on an image object.
 *
 */
EOAPI void  evas_obj_image_scene_set(Evas_3D_Scene *scene);

/**
 *
 * Get the 3D scene of a given image of the canvas.
 *
 * @return The 3d scene of the given canvas image.
 *
 * This function returns the 3d scene of a given canvas image.
 *
 * @see evas_object_image_scene_get
 * @since 1.10
 *
 *
 */
EOAPI Evas_3D_Scene * evas_obj_image_scene_get(void);

/**
 *
 * Set an Evas filter program on this Text Object.
 *
 * If the program fails to compile (syntax error, invalid
 * buffer name, etc...), the standard text effects will be
 * applied instead (SHADOW, etc...). switch back to the
 * standard text effects.
 *
 * @since 1.9
 * @note EXPERIMENTAL FEATURE. This is an unstable API,
 * please use only for testing purposes.
 * @see @ref evasfiltersref "Evas filters reference"
 *
 * @param[in] program The program code, as defined
by the @ref evasfiltersref "Evas filters script language".
Pass NULL to remove the former program and switch back
to the standard text effect

@since 1.9
@note EXPERIMENTAL FEATURE. This is an unstable API,
please use only for testing purposes.
@see @ref evasfiltersref "Evas filters reference"
 *
 */
EOAPI void  evas_obj_image_filter_program_set(const char *program);

/**
 *
 * Bind an object to use as a mask or texture with Evas Filters.
 *
 * This will create automatically a new RGBA buffer containing
 * the source object's pixels (as it is rendered).
 *
 * @param[in] name Object name as used in the program code
 * @param[in] eobj Eo object to use through proxy rendering
 *
 */
EOAPI void  evas_obj_image_filter_source_set(const char *name, Eo *eobj);

/**
 *
 * Get the value of the extra padding set when a filter is used.
 *
 * @param[out] l Left padding in pixels
 * @param[out] r Right padding in pixels
 * @param[out] t Top padding in pixels
 * @param[out] b Bottom padding in pixels
 *
 */
EOAPI Eina_Bool  evas_obj_image_filter_padding_get(int *l, int *r, int *t, int *b);

/**
 *
 * Begin preloading an image object's image data in the background
 *
 *
 */
EOAPI void  evas_obj_image_preload_begin(void);

/**
 *
 * Mark a sub-region of the given image object to be redrawn.
 *
 * This function schedules a particular rectangular region of an image
 * object to be updated (redrawn) at the next rendering cycle.
 *
 * @param[in] x X-offset of the region to be updated.
 * @param[in] y Y-offset of the region to be updated.
 * @param[in] w Width of the region to be updated.
 * @param[in] h Height of the region to be updated.
 *
 */
EOAPI void  evas_obj_image_data_update_add(int x, int y, int w, int h);

/**
 *
 * Get the duration of a sequence of frames.
 *
 * This returns total duration that the specified sequence of frames should
 * take in seconds.
 *
 * If you set start_frame to 1 and frame_num 0, you get frame 1's duration
 * If you set start_frame to 1 and frame_num 1, you get frame 1's duration +
 * frame2's duration
 *
 * @see evas_object_image_animated_get()
 * @see evas_object_image_animated_frame_count_get()
 * @see evas_object_image_animated_loop_type_get()
 * @see evas_object_image_animated_loop_count_get()
 * @see evas_object_image_animated_frame_duration_get()
 * @see evas_object_image_animated_frame_set()
 * @since 1.1
 *
 * @param[in] start_frame The first frame
 * @param[in] frame_num Number of frames in the sequence
 *
 */
EOAPI double  evas_obj_image_animated_frame_duration_get(int start_frame, int frame_num);

/**
 *
 * Save the given image object's contents to an (image) file.
 *
 * The extension suffix on @p file will determine which <b>saver
 * module</b> Evas is to use when saving, thus the final file's
 * format. If the file supports multiple data stored in it (Eet ones),
 * you can specify the key to be used as the index of the image in it.
 *
 * You can specify some flags when saving the image.  Currently
 * acceptable flags are @c quality and @c compress. Eg.: @c
 * "quality=100 compress=9"
 *
 * @param[in] file The filename to be used to save the image (extension
obligatory).
 * @param[in] key The image key in the file (if an Eet one), or @c NULL,
otherwise.
 * @param[in] flags String containing the flags to be used (@c NULL for
none).
 *
 */
EOAPI Eina_Bool  evas_obj_image_save(const char *file, const char *key, const char *flags);

/**
 *
 * Sets the raw image data of the given image object.
 *
 * Note that the raw data must be of the same size (see
 * evas_object_image_size_set(), which has to be called @b before this
 * one) and colorspace (see evas_object_image_colorspace_set()) of the
 * image. If data is @c NULL, the current image data will be
 * freed. Naturally, if one does not set an image object's data
 * manually, it will still have one, allocated by Evas.
 *
 * @see evas_object_image_data_get()
 *
 * @param[in] data The raw data, or @c NULL.
 *
 */
EOAPI void  evas_obj_image_data_set(void *data);

/**
 *
 * Get a pointer to the raw image data of the given image object.
 *
 * @return The raw image data.
 *
 * This function returns a pointer to an image object's internal pixel
 * buffer, for reading only or read/write. If you request it for
 * writing, the image will be marked dirty so that it gets redrawn at
 * the next update.
 *
 * Each time you call this function on an image object, its data
 * buffer will have an internal reference counter
 * incremented. Decrement it back by using
 * evas_object_image_data_set().
 *
 * This is best suited for when you want to modify an existing image,
 * without changing its dimensions.
 *
 * @note The contents' format returned by it depend on the color
 * space of the given image object.
 *
 * @note You may want to use evas_object_image_data_update_add() to
 * inform data changes, if you did any.
 *
 * @see evas_object_image_data_set()
 *
 * @param[in] for_writing Whether the data being retrieved will be
modified (@c EINA_TRUE) or not (@c EINA_FALSE).
 *
 */
EOAPI void * evas_obj_image_data_get(Eina_Bool for_writing);

/**
 *
 * Cancel preloading an image object's image data in the background
 *
 *
 */
EOAPI void  evas_obj_image_preload_cancel(void);

/**
 *
 * Converts the raw image data of the given image object to the
 * specified colorspace.
 *
 * Note that this function does not modify the raw image data.  If the
 * requested colorspace is the same as the image colorspace nothing is
 * done and @c NULL is returned. You should use
 * evas_object_image_colorspace_get() to check the current image
 * colorspace.
 *
 * See @ref evas_object_image_colorspace_get.
 *
 * @return data A newly allocated data in the format specified by to_cspace.
 *
 * @param[in] to_cspace The colorspace to which the image raw data will be converted.
 *
 */
EOAPI void * evas_obj_image_data_convert(Evas_Colorspace to_cspace);

/**
 *
 * Import pixels from given source to a given canvas image object.
 *
 * This function imports pixels from a given source to a given canvas image.
 *
 * @param[in] pixels The pixel's source to be imported.
 *
 */
EOAPI Eina_Bool  evas_obj_image_pixels_import(Evas_Pixel_Import_Source *pixels);

/**
 *
 * Reload an image object's image data.
 *
 * This function reloads the image data bound to image object @p obj.
 *
 *
 */
EOAPI void  evas_obj_image_reload(void);


#endif
