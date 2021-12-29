#ifndef _ECORE_AUDIO_EO_H_
#define _ECORE_AUDIO_EO_H_

#ifndef _ECORE_AUDIO_EO_TYPES
#define _ECORE_AUDIO_EO_TYPES


#endif
#define ECORE_AUDIO_CLASS ecore_audio_class_get()

const Eo_Class *ecore_audio_class_get(void) EINA_CONST;

/**
 *
 * Set the name of the object
 *
 * @since 1.8
 *
 * @param[in] name No description supplied.
 *
 */
EOAPI void  ecore_audio_obj_name_set(const char *name);

/**
 *
 * Get the name of the object
 *
 * @since 1.8
 *
 *
 */
EOAPI const char * ecore_audio_obj_name_get(void);

/**
 *
 * Set the pause state of the object
 *
 * @since 1.8
 *
 * @param[in] paused No description supplied.
 *
 */
EOAPI void  ecore_audio_obj_paused_set(Eina_Bool paused);

/**
 *
 * Get the pause state of the object
 *
 * @since 1.8
 *
 *
 */
EOAPI Eina_Bool  ecore_audio_obj_paused_get(void);

/**
 *
 * Set the volume of the object
 *
 * @since 1.8
 *
 * @param[in] volume No description supplied.
 *
 */
EOAPI void  ecore_audio_obj_volume_set(double volume);

/**
 *
 * Get the volume of the object
 *
 * @since 1.8
 *
 *
 */
EOAPI double  ecore_audio_obj_volume_get(void);

/**
 *
 * Set the source of the object
 *
 * What sources are supported depends on the actual object. For example,
 * the libsndfile class accepts WAV, OGG, FLAC files as source.
 *
 * @since 1.8
 *
 * @param[in] source No description supplied.
 *
 */
EOAPI Eina_Bool  ecore_audio_obj_source_set(const char *source);

/**
 *
 * Get the source of the object
 *
 * @since 1.8
 *
 *
 */
EOAPI const char * ecore_audio_obj_source_get(void);

/**
 *
 * Set the format of the object
 *
 * What formats are supported depends on the actual object. Default is
 * ECORE_AUDIO_FORMAT_AUTO
 *
 * @since 1.8
 *
 * @param[in] format No description supplied.
 *
 */
EOAPI Eina_Bool  ecore_audio_obj_format_set(Ecore_Audio_Format format);

/**
 *
 * Get the format of the object
 *
 * After setting the source if the format was ECORE_AUDIO_FORMAT_AUTO this
 * function will now return the actual format.
 *
 * @since 1.8
 *
 *
 */
EOAPI Ecore_Audio_Format  ecore_audio_obj_format_get(void);

/**
 *
 * Set the virtual IO functions
 *
 * @since 1.8
 *
 * @param[in] vio No description supplied.
 * @param[in] data No description supplied.
 * @param[in] free_func No description supplied.
 *
 */
EOAPI void  ecore_audio_obj_vio_set(Ecore_Audio_Vio *vio, void *data, eo_key_data_free_func free_func);


#endif
