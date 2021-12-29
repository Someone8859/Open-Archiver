#ifndef _ELM_PHOTO_EO_LEGACY_H_
#define _ELM_PHOTO_EO_LEGACY_H_


/**
 *
 * Set editability of the photo.
 *
 * An editable photo can be dragged to or from, and can be cut or
 * pasted too. Note that pasting an image or dropping an item on
 * the image will delete the existing content.
 *
 * @param[in] set To set of clear editability.
 */
EAPI void elm_photo_editable_set(Eo *obj, Eina_Bool set);

/**
 *
 * Get editability of the photo.
 *
 */
EAPI Eina_Bool elm_photo_editable_get(const Eo *obj);

/**
 *
 * Set if the photo should be completely visible or not.
 *
 * @ingroup Photo
 *
 * @param[in] fill if true the photo will be completely visible
 */
EAPI void elm_photo_fill_inside_set(Eo *obj, Eina_Bool fill);

/**
 *
 * Get if the photo should be completely visible or not.
 *
 */
EAPI Eina_Bool elm_photo_fill_inside_get(const Eo *obj);

/**
 *
 * Set whether the original aspect ratio of the photo should be kept on resize.
 *
 * The original aspect ratio (width / height) of the photo is usually
 * distorted to match the object's size. Enabling this option will fix
 * this original aspect, and the way that the photo is fit into
 * the object's area
 *
 * @see elm_photo_aspect_fixed_get()
 *
 * @ingroup Photo
 *
 * @param[in] fixed @c EINA_TRUE if the photo should fix the aspect,
@c EINA_FALSE otherwise.
 */
EAPI void elm_photo_aspect_fixed_set(Eo *obj, Eina_Bool fixed);

/**
 *
 * Get if the object keeps the original aspect ratio.
 *
 * @return @c EINA_TRUE if the object keeps the original aspect, @c EINA_FALSE
 * otherwise.
 *
 * @ingroup Photo
 *
 */
EAPI Eina_Bool elm_photo_aspect_fixed_get(const Eo *obj);

/**
 *
 * Set the size that will be used on the photo
 *
 * @ingroup Photo
 *
 * @param[in] size The size of the photo
 */
EAPI void elm_photo_size_set(Eo *obj, int size);

/**
 *
 * Get the size that will be used on the photo
 *
 */
EAPI int elm_photo_size_get(const Eo *obj);

/**
 *
 * Set the file that will be used as the photo widget's image.
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * @note Use @c NULL on @a file to set the photo widget back to it's
 * initial state, which indicates "no photo".
 *
 * @ingroup Photo
 *
 * @param[in] file The path to file that will be used as @a obj's image.
 */
EAPI Eina_Bool elm_photo_file_set(Eo *obj, const char *file);

/**
 *
 * Set the file that will be used as thumbnail in the photo.
 *
 * @ingroup Photo
 *
 * @param[in] file The path to file that will be used as thumbnail.
 * @param[in] group The key used in case of an EET file.
 */
EAPI void elm_photo_thumb_set(const Eo *obj, const char *file, const char *group);

#endif
