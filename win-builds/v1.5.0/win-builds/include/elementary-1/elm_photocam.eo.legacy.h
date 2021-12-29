#ifndef _ELM_PHOTOCAM_EO_LEGACY_H_
#define _ELM_PHOTOCAM_EO_LEGACY_H_


/**
 *
 * @brief Set the paused state for photocam
 *
 * This sets the paused state to on(@c EINA_TRUE) or off (@c EINA_FALSE) for
 * photocam. The default is off. This will stop zooming using animation on
 * zoom level changes and change instantly. This will stop any existing
 * animations that are running.
 *
 * @ingroup Photocam
 *
 * @param[in] paused The pause state to set
 */
EAPI void elm_photocam_paused_set(Eo *obj, Eina_Bool paused);

/**
 *
 * @brief Get the paused state for photocam
 *
 * @return The current paused state
 *
 * This gets the current paused state for the photocam object.
 *
 * @see elm_photocam_paused_set()
 *
 * @ingroup Photocam
 *
 */
EAPI Eina_Bool elm_photocam_paused_get(const Eo *obj);

/**
 *
 * @brief Set the photo file to be shown
 *
 * @return The return error (see EVAS_LOAD_ERROR_NONE, EVAS_LOAD_ERROR_GENERIC etc.)
 *
 * This sets (and shows) the specified file (with a relative or absolute
 * path) and will return a load error (same error that
 * evas_object_image_load_error_get() will return). The image will change and
 * adjust its size at this point and begin a background load process for this
 * photo that at some time in the future will be displayed at the full
 * quality needed.
 *
 * @ingroup Photocam
 *
 * @param[in] file The photo file
 */
EAPI Evas_Load_Error elm_photocam_file_set(Eo *obj, const char *file);

/**
 *
 * @brief Returns the path of the current image file
 *
 * @return Returns the path
 *
 * @see elm_photocam_file_set()
 *
 * @ingroup Photocam
 *
 */
EAPI const char *elm_photocam_file_get(const Eo *obj);

/**
 *
 * @brief Set the gesture state for photocam.
 *
 * This sets the gesture state to on(@c EINA_TRUE) or off (@c EINA_FALSE) for
 * photocam. The default is off. This will start multi touch zooming.
 *
 * @ingroup Photocam
 *
 * @param[in] gesture The gesture state to set
 */
EAPI void elm_photocam_gesture_enabled_set(Eo *obj, Eina_Bool gesture);

/**
 *
 * @brief Get the gesture state for photocam.
 *
 * @return The current gesture state
 *
 * This gets the current gesture state for the photocam object.
 *
 * @see elm_photocam_gesture_enabled_set()
 *
 * @ingroup Photocam
 *
 */
EAPI Eina_Bool elm_photocam_gesture_enabled_get(const Eo *obj);

/**
 *
 * @brief Set the zoom level of the photo
 *
 * This sets the zoom level. If @p zoom is 1, it means no zoom. If it's smaller
 * than 1, it means zoom in. If it's bigger than 1, it means zoom out. For
 * example, @p zoom 1 will be 1:1 pixel for pixel. @p zoom 2 will be 2:1
 * (that is 2x2 photo pixels will display as 1 on-screen pixel) which is a zoom
 * out. 4:1 will be 4x4 photo pixels as 1 screen pixel, and so on. The @p zoom
 * parameter must be greater than 0. It is suggested to stick to powers of 2.
 * (1, 2, 4, 8, 16, 32, etc.).
 *
 * @ingroup Photocam
 *
 * @param[in] zoom The zoom level to set
 */
EAPI void elm_photocam_zoom_set(Eo *obj, double zoom);

/**
 *
 * @brief Get the zoom level of the photo
 *
 * @return The current zoom level
 *
 * This returns the current zoom level of the photocam object. Note that if
 * you set the fill mode to other than ELM_PHOTOCAM_ZOOM_MODE_MANUAL
 * (which is the default), the zoom level may be changed at any time by the
 * photocam object itself to account for photo size and photocam viewport
 * size.
 *
 * @see elm_photocam_zoom_set()
 * @see elm_photocam_zoom_mode_set()
 *
 * @ingroup Photocam
 *
 */
EAPI double elm_photocam_zoom_get(const Eo *obj);

/**
 *
 * @brief Set the zoom mode
 *
 * This sets the zoom mode to manual or one of several automatic levels.
 * Manual (ELM_PHOTOCAM_ZOOM_MODE_MANUAL) means that zoom is set manually by
 * elm_photocam_zoom_set() and will stay at that level until changed by code
 * or until zoom mode is changed. This is the default mode. The Automatic
 * modes will allow the photocam object to automatically adjust zoom mode
 * based on properties. ELM_PHOTOCAM_ZOOM_MODE_AUTO_FIT) will adjust zoom so
 * the photo fits EXACTLY inside the scroll frame with no pixels outside this
 * region. ELM_PHOTOCAM_ZOOM_MODE_AUTO_FILL will be similar but ensure no
 * pixels within the frame are left unfilled.
 *
 * @ingroup Photocam
 *
 * @param[in] mode The desired mode
 */
EAPI void elm_photocam_zoom_mode_set(Eo *obj, Elm_Photocam_Zoom_Mode mode);

/**
 *
 * @brief Get the zoom mode
 *
 * @return The current zoom mode
 *
 * This gets the current zoom mode of the photocam object.
 *
 * @see elm_photocam_zoom_mode_set()
 *
 * @ingroup Photocam
 *
 */
EAPI Elm_Photocam_Zoom_Mode elm_photocam_zoom_mode_get(const Eo *obj);

/**
 *
 * @brief Get the region of the image that is currently shown
 *
 * @see elm_photocam_image_region_show()
 * @see elm_photocam_image_region_bring_in()
 *
 * @ingroup Photocam
 *
 * @param[out] x A pointer to the X-coordinate of region
 * @param[out] y A pointer to the Y-coordinate of region
 * @param[out] w A pointer to the width
 * @param[out] h A pointer to the height
 */
EAPI void elm_photocam_image_region_get(const Eo *obj, int *x, int *y, int *w, int *h);

/**
 *
 * @brief Get the internal low-res image used for photocam
 *
 * @return The internal image object handle, or NULL if none exists
 *
 * This gets the internal image object inside photocam. Do not modify it. It
 * is for inspection only, and hooking callbacks to. Nothing else. It may be
 * deleted at any time as well.
 *
 * @ingroup Photocam
 *
 */
EAPI Evas_Object *elm_photocam_internal_image_get(const Eo *obj);

/**
 *
 * @brief Get the current image pixel width and height
 *
 * This gets the current photo pixel width and height (for the original).
 * The size will be returned in the integers @p w and @p h that are pointed
 * to.
 *
 * @ingroup Photocam
 *
 * @param[out] w A pointer to the width return
 * @param[out] h A pointer to the height return
 */
EAPI void elm_photocam_image_size_get(const Eo *obj, int *w, int *h);

/**
 *
 * @brief Set the viewed region of the image
 *
 * This shows the region of the image without using animation.
 *
 * @ingroup Photocam
 *
 * @param[in] x X-coordinate of region in image original pixels
 * @param[in] y Y-coordinate of region in image original pixels
 * @param[in] w Width of region in image original pixels
 * @param[in] h Height of region in image original pixels
 */
EAPI void elm_photocam_image_region_show(Eo *obj, int x, int y, int w, int h);

#endif
