#ifndef _ELM_BG_EO_LEGACY_H_
#define _ELM_BG_EO_LEGACY_H_


/**
 *
 * Set the mode of display for a given background widget's image
 *
 * This sets how the background widget will display its image. This
 * will only work if the elm_bg_file_set() was previously called with
 * an image file on @a obj. The image can be display tiled, scaled,
 * centered or stretched.
 *
 * @see elm_bg_option_get()
 *
 * @ingroup Bg
 *
 * @param[in] option The desired background option (see #Elm_Bg_Option)
 */
EAPI void elm_bg_option_set(Eo *obj, Elm_Bg_Option option);

/**
 *
 * Get the mode of display for a given background widget's image
 *
 * @return The image displaying mode in use for @a obj or #ELM_BG_OPTION_LAST,
 * on errors.
 *
 * @see elm_bg_option_set() for more details
 *
 * @ingroup Bg
 *
 */
EAPI Elm_Bg_Option elm_bg_option_get(const Eo *obj);

/**
 *
 * Set the file (image or edje collection) to give life for the
 * background
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * This sets the image file used in the background object. If the
 * image comes from an Edje group, it will be stretched to completely
 * fill the background object. If it comes from a traditional image file, it
 * will by default be centered in this widget's are (thus retaining
 * its aspect), what could lead to some parts being not visible. You
 * may change the mode of exhibition for a real image file with
 * elm_bg_option_set().
 *
 * @note Once the image of @p obj is set, a previously set one will be
 * deleted, even if @p file is @c NULL.
 *
 * @note This will only affect the contents of one of the background's
 * swallow spots, namely @c "elm.swallow.background". If you want to
 * achieve the @c Layout's file setting behavior, you'll have to call
 * that method on this object.
 *
 * @ingroup Bg
 *
 * @param[in] file The file path
 * @param[in] group Optional key (group in Edje) within the file
 */
EAPI Eina_Bool elm_bg_file_set(Eo *obj, const char *file, const char *group);

/**
 *
 * Get the file (image or edje collection) set on a given background
 * widget
 *
 * @note Use @c NULL pointers on the file components you're not
 * interested in: they'll be ignored by the function.
 *
 * @ingroup Bg
 *
 * @param[out] file The file path
 * @param[out] group Optional key (group in Edje) within the file
 */
EAPI void elm_bg_file_get(const Eo *obj, const char **file, const char **group);

/**
 *
 * Set the size of the pixmap representation of the image set on a
 * given background widget.
 *
 * @warning This function just makes sense if an image file was set on
 * @p obj, with elm_bg_file_set().
 *
 * This function sets a new size for pixmap representation of the
 * given bg image. It allows for the image to be loaded already in the
 * specified size, reducing the memory usage and load time (for
 * example, when loading a big image file with its load size set to a
 * smaller size)
 *
 * @note This is just a hint for the underlying system. The real size
 * of the pixmap may differ depending on the type of image being
 * loaded, being bigger than requested.
 *
 * @ingroup Bg
 *
 * @param[in] w The new width of the image pixmap representation.
 * @param[in] h The new height of the image pixmap representation.
 */
EAPI void elm_bg_load_size_set(Eo *obj, Evas_Coord w, Evas_Coord h);

#endif
