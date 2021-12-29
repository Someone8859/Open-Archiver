#ifndef _ELM_PHOTO_EO_H_
#define _ELM_PHOTO_EO_H_

#ifndef _ELM_PHOTO_EO_TYPES
#define _ELM_PHOTO_EO_TYPES


#endif
#define ELM_PHOTO_CLASS elm_photo_class_get()

const Eo_Class *elm_photo_class_get(void) EINA_CONST;

/**
 *
 * Set editability of the photo.
 *
 * An editable photo can be dragged to or from, and can be cut or
 * pasted too. Note that pasting an image or dropping an item on
 * the image will delete the existing content.
 *
 * @param[in] set To set of clear editability.
 *
 */
EOAPI void  elm_obj_photo_editable_set(Eina_Bool set);

/**
 *
 * Get editability of the photo.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_photo_editable_get(void);

/**
 *
 * Set if the photo should be completely visible or not.
 *
 * @ingroup Photo
 *
 * @param[in] fill if true the photo will be completely visible
 *
 */
EOAPI void  elm_obj_photo_fill_inside_set(Eina_Bool fill);

/**
 *
 * Get if the photo should be completely visible or not.
 *
 *
 */
EOAPI Eina_Bool  elm_obj_photo_fill_inside_get(void);

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
 *
 */
EOAPI void  elm_obj_photo_aspect_fixed_set(Eina_Bool fixed);

/**
 *
 * Get if the object keeps the original aspect ratio.
 *
 * @return @c EINA_TRUE if the object keeps the original aspect, @c EINA_FALSE
 * otherwise.
 *
 * @ingroup Photo
 *
 *
 */
EOAPI Eina_Bool  elm_obj_photo_aspect_fixed_get(void);

/**
 *
 * Set the size that will be used on the photo
 *
 * @ingroup Photo
 *
 * @param[in] size The size of the photo
 *
 */
EOAPI void  elm_obj_photo_size_set(int size);

/**
 *
 * Get the size that will be used on the photo
 *
 *
 */
EOAPI int  elm_obj_photo_size_get(void);

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
 *
 */
EOAPI Eina_Bool  elm_obj_photo_file_set(const char *file);

/**
 *
 * Set the file that will be used as thumbnail in the photo.
 *
 * @ingroup Photo
 *
 * @param[in] file The path to file that will be used as thumbnail.
 * @param[in] group The key used in case of an EET file.
 *
 */
EOAPI void  elm_obj_photo_thumb_set(const char *file, const char *group);

EOAPI extern const Eo_Event_Description _ELM_PHOTO_EVENT_CLICKED;
EOAPI extern const Eo_Event_Description _ELM_PHOTO_EVENT_DRAG_START;
EOAPI extern const Eo_Event_Description _ELM_PHOTO_EVENT_DRAG_END;

/**
 * No description
 */
#define ELM_PHOTO_EVENT_CLICKED (&(_ELM_PHOTO_EVENT_CLICKED))

/**
 * No description
 */
#define ELM_PHOTO_EVENT_DRAG_START (&(_ELM_PHOTO_EVENT_DRAG_START))

/**
 * No description
 */
#define ELM_PHOTO_EVENT_DRAG_END (&(_ELM_PHOTO_EVENT_DRAG_END))

#endif
