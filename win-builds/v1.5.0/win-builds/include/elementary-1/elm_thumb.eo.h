#ifndef _ELM_THUMB_EO_H_
#define _ELM_THUMB_EO_H_

#ifndef _ELM_THUMB_EO_TYPES
#define _ELM_THUMB_EO_TYPES


#endif
#define ELM_THUMB_CLASS elm_thumb_class_get()

const Eo_Class *elm_thumb_class_get(void) EINA_CONST;

/**
 *
 * Set the compression for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] compress The compression of the thumb.
 *
 */
EOAPI void  elm_obj_thumb_compress_set(int compress);

/**
 *
 * Get the compression of the thumb object.
 * @since 1.8
 *
 * @return getting The compress setting.
 *
 * @see elm_thumb_compress_set()
 *
 * @ingroup Thumb
 *
 * @param[out] compress The compression of the thumb.
 *
 */
EOAPI void  elm_obj_thumb_compress_get(int *compress);

/**
 *
 * Set the format for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] format The format setting.
 *
 */
EOAPI void  elm_obj_thumb_format_set(Ethumb_Thumb_Format format);

/**
 *
 * Get the format of the thumb object.
 * @since 1.8
 *
 * @return getting The Format setting.
 *
 * @see elm_thumb_format_set()
 *
 * @ingroup Thumb
 *
 *
 */
EOAPI Ethumb_Thumb_Format  elm_obj_thumb_format_get(void);

/**
 *
 * Set the animation state for the thumb object. If its content is an animated
 * video, you may start/stop the animation or tell it to play continuously and
 * looping.
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] setting The animation setting.
 *
 */
EOAPI void  elm_obj_thumb_animate_set(Elm_Thumb_Animation_Setting setting);

/**
 *
 * Get the animation state for the thumb object.
 *
 * @return getting The animation setting or @c ELM_THUMB_ANIMATION_LAST,
 * on errors.
 *
 * @see elm_thumb_animate_set()
 *
 * @ingroup Thumb
 *
 *
 */
EOAPI Elm_Thumb_Animation_Setting  elm_obj_thumb_animate_get(void);

/**
 *
 * Set the FDO size for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] size The FDO size setting.
 *
 */
EOAPI void  elm_obj_thumb_fdo_size_set(Ethumb_Thumb_FDO_Size size);

/**
 *
 * Get the fdo size of the thumb object.
 * @since 1.8
 *
 * @return getting The FDO size setting.
 *
 * @see elm_thumb_fdo_size_set()
 *
 * @ingroup Thumb
 *
 *
 */
EOAPI Ethumb_Thumb_FDO_Size  elm_obj_thumb_fdo_size_get(void);

/**
 *
 * Set the file that will be used as thumbnail @b source.
 *
 * The file can be an image or a video (in that case, acceptable
 * extensions are: avi, mp4, ogv, mov, mpg and wmv). To start the
 * video animation, use the function elm_thumb_animate().
 *
 * @see elm_thumb_file_get()
 * @see elm_thumb_reload()
 * @see elm_thumb_animate()
 *
 * @ingroup Thumb
 *
 * @param[in] file The path to file that will be used as thumbnail source.
 * @param[in] key The key used in case of an EET file.
 *
 */
EOAPI void  elm_obj_thumb_file_set(const char *file, const char *key);

/**
 *
 * Get the image or video path and key used to generate the thumbnail.
 *
 * @see elm_thumb_file_set()
 * @see elm_thumb_path_get()
 *
 * @ingroup Thumb
 *
 * @param[out] file The path to file that will be used as thumbnail source.
 * @param[out] key The key used in case of an EET file.
 *
 */
EOAPI void  elm_obj_thumb_file_get(const char **file, const char **key);

/**
 *
 * Set the orientation for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] orient The orientation setting.
 *
 */
EOAPI void  elm_obj_thumb_orientation_set(Ethumb_Thumb_Orientation orient);

/**
 *
 * Get the orientation of the thumb object.
 * @since 1.8
 *
 * @return getting The orientation setting.
 *
 * @see elm_thumb_orientation_set()
 *
 * @ingroup Thumb
 *
 *
 */
EOAPI Ethumb_Thumb_Orientation  elm_obj_thumb_orientation_get(void);

/**
 *
 * Make the thumbnail 'editable'.
 *
 * This means the thumbnail is a valid drag target for drag and drop, and can be
 * cut or pasted too.
 *
 * @see elm_thumb_editable_get()
 *
 * @ingroup Thumb
 *
 * @param[in] edit Turn on or off editability. Default is @c EINA_FALSE.
 *
 */
EOAPI Eina_Bool  elm_obj_thumb_editable_set(Eina_Bool edit);

/**
 *
 * Make the thumbnail 'editable'.
 *
 * @return Editability.
 *
 * This means the thumbnail is a valid drag target for drag and drop, and can be
 * cut or pasted too.
 *
 * @see elm_thumb_editable_set()
 *
 * @ingroup Thumb
 *
 *
 */
EOAPI Eina_Bool  elm_obj_thumb_editable_get(void);

/**
 *
 * Set the aspect for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] aspect The aspect setting.
 *
 */
EOAPI void  elm_obj_thumb_aspect_set(Ethumb_Thumb_Aspect aspect);

/**
 *
 * Get the aspect of the thumb object.
 * @since 1.8
 *
 * @return getting The aspect setting.
 *
 * @see elm_thumb_aspect_set()
 *
 * @ingroup Thumb
 *
 *
 */
EOAPI Ethumb_Thumb_Aspect  elm_obj_thumb_aspect_get(void);

/**
 *
 * Set the quality for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] quality The quality of the thumb.
 *
 */
EOAPI void  elm_obj_thumb_quality_set(int quality);

/**
 *
 * Get the quality of the thumb object.
 * @since 1.8
 *
 * @return getting The quality setting.
 *
 * @see elm_thumb_quality_set()
 *
 * @ingroup Thumb
 *
 * @param[out] quality The quality of the thumb.
 *
 */
EOAPI void  elm_obj_thumb_quality_get(int *quality);

/**
 *
 * Set the size for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] tw The width of the thumb.
 * @param[in] th The height of the thumb.
 *
 */
EOAPI void  elm_obj_thumb_size_set(int tw, int th);

/**
 *
 * Get the size of the thumb object.
 * @since 1.8
 *
 * @return getting The size setting.
 *
 * @see elm_thumb_size_set()
 *
 * @ingroup Thumb
 *
 * @param[out] tw The width of the thumb.
 * @param[out] th The height of the thumb.
 *
 */
EOAPI void  elm_obj_thumb_size_get(int *tw, int *th);

/**
 *
 * Set the crop alignment for the thumb object.
 * @since 1.8
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 * @param[in] cropx The x coordinate of the crop.
 * @param[in] cropy The y coordinate of the crop.
 *
 */
EOAPI void  elm_obj_thumb_crop_align_set(double cropx, double cropy);

/**
 *
 * Get the crop alignment of the thumb object.
 * @since 1.8
 *
 * @return getting The crop align setting.
 *
 * @see elm_thumb_crop_align_set()
 *
 * @ingroup Thumb
 *
 * @param[out] cropx The x coordinate of the crop.
 * @param[out] cropy The y coordinate of the crop.
 *
 */
EOAPI void  elm_obj_thumb_crop_align_get(double *cropx, double *cropy);

/**
 *
 * Get the path and key to the image or video thumbnail generated by ethumb.
 *
 * One just needs to make sure that the thumbnail was generated before getting
 * its path; otherwise, the path will be NULL. One way to do that is by asking
 * for the path when/after the "generate,stop" smart callback is called.
 *
 * @see elm_thumb_file_get()
 *
 * @ingroup Thumb
 *
 * @param[out] file Pointer to thumb path.
 * @param[out] key Pointer to thumb key.
 *
 */
EOAPI void  elm_obj_thumb_path_get(const char **file, const char **key);

/**
 *
 * Reload thumbnail if it was generated before.
 *
 * This is useful if the ethumb client configuration changed, like its
 * size, aspect or any other property one set in the handle returned
 * by elm_thumb_ethumb_client_get().
 *
 * If the options didn't change, the thumbnail won't be generated again, but
 * the old one will still be used.
 *
 * @see elm_thumb_file_set()
 *
 * @ingroup Thumb
 *
 *
 */
EOAPI void  elm_obj_thumb_reload(void);

EOAPI extern const Eo_Event_Description _ELM_THUMB_EVENT_CLICKED;
EOAPI extern const Eo_Event_Description _ELM_THUMB_EVENT_CLICKED_DOUBLE;
EOAPI extern const Eo_Event_Description _ELM_THUMB_EVENT_GENERATE_ERROR;
EOAPI extern const Eo_Event_Description _ELM_THUMB_EVENT_GENERATE_START;
EOAPI extern const Eo_Event_Description _ELM_THUMB_EVENT_GENERATE_STOP;
EOAPI extern const Eo_Event_Description _ELM_THUMB_EVENT_LOAD_ERROR;
EOAPI extern const Eo_Event_Description _ELM_THUMB_EVENT_PRESS;

/**
 * No description
 */
#define ELM_THUMB_EVENT_CLICKED (&(_ELM_THUMB_EVENT_CLICKED))

/**
 * No description
 */
#define ELM_THUMB_EVENT_CLICKED_DOUBLE (&(_ELM_THUMB_EVENT_CLICKED_DOUBLE))

/**
 * No description
 */
#define ELM_THUMB_EVENT_GENERATE_ERROR (&(_ELM_THUMB_EVENT_GENERATE_ERROR))

/**
 * No description
 */
#define ELM_THUMB_EVENT_GENERATE_START (&(_ELM_THUMB_EVENT_GENERATE_START))

/**
 * No description
 */
#define ELM_THUMB_EVENT_GENERATE_STOP (&(_ELM_THUMB_EVENT_GENERATE_STOP))

/**
 * No description
 */
#define ELM_THUMB_EVENT_LOAD_ERROR (&(_ELM_THUMB_EVENT_LOAD_ERROR))

/**
 * No description
 */
#define ELM_THUMB_EVENT_PRESS (&(_ELM_THUMB_EVENT_PRESS))

#endif
