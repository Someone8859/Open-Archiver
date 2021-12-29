#ifndef _ECORE_AUDIO_IN_EO_H_
#define _ECORE_AUDIO_IN_EO_H_

#ifndef _ECORE_AUDIO_IN_EO_TYPES
#define _ECORE_AUDIO_IN_EO_TYPES


#endif
#define ECORE_AUDIO_IN_CLASS ecore_audio_in_class_get()

const Eo_Class *ecore_audio_in_class_get(void) EINA_CONST;

/**
 *
 * Set the playback speed of the input.
 *
 * @since 1.8
 *
 * @param[in] speed No description supplied.
 *
 */
EOAPI void  ecore_audio_obj_in_speed_set(double speed);

/**
 *
 * Get the playback speed of the input.
 *
 * @since 1.8
 *
 *
 */
EOAPI double  ecore_audio_obj_in_speed_get(void);

/**
 *
 * Set the sample-rate of the input
 *
 * @since 1.8
 *
 * @param[in] samplerate No description supplied.
 *
 */
EOAPI void  ecore_audio_obj_in_samplerate_set(int samplerate);

/**
 *
 * Get the he sample-rate of the input
 *
 * @since 1.8
 *
 *
 */
EOAPI int  ecore_audio_obj_in_samplerate_get(void);

/**
 *
 * Set the amount of channels the input has
 *
 * @since 1.8
 *
 * @param[in] channels No description supplied.
 *
 */
EOAPI void  ecore_audio_obj_in_channels_set(int channels);

/**
 *
 * Get the amount of channels the input has
 *
 * @since 1.8
 *
 *
 */
EOAPI int  ecore_audio_obj_in_channels_get(void);

/**
 *
 * Set the preloaded state of the input
 *
 * @since 1.8
 *
 * @param[in] preloaded No description supplied.
 *
 */
EOAPI void  ecore_audio_obj_in_preloaded_set(Eina_Bool preloaded);

/**
 *
 * Get the the preloaded state of the input
 *
 * @since 1.8
 *
 *
 */
EOAPI Eina_Bool  ecore_audio_obj_in_preloaded_get(void);

/**
 *
 * Set the looped state of the input
 *
 * If the input is looped and reaches the end it will start from the
 * beginning again. At the same time the event @ref ECORE_AUDIO_EV_IN_LOOPED
 * will be emitted
 *
 * @since 1.8
 *
 * @param[in] looped No description supplied.
 *
 */
EOAPI void  ecore_audio_obj_in_looped_set(Eina_Bool looped);

/**
 *
 * Get the looped state of the input
 *
 * @since 1.8
 *
 *
 */
EOAPI Eina_Bool  ecore_audio_obj_in_looped_get(void);

/**
 *
 * Set the length of the input
 *
 * This function is only implemented by some classes
 * (i.e. ECORE_AUDIO_OBJ_IN_TONE_CLASS)
 *
 * @since 1.8
 *
 * @param[in] length No description supplied.
 *
 */
EOAPI void  ecore_audio_obj_in_length_set(double length);

/**
 *
 * Get the length of the input
 *
 * @since 1.8
 *
 *
 */
EOAPI double  ecore_audio_obj_in_length_get(void);

/**
 *
 * Get the output that this input is attached to
 *
 * @since 1.8
 *
 *
 */
EOAPI Eo * ecore_audio_obj_in_output_get(void);

/**
 *
 * Get the remaining time of the input
 *
 * @since 1.8
 *
 *
 */
EOAPI double  ecore_audio_obj_in_remaining_get(void);

/**
 *
 * Read from the input
 *
 * @since 1.8
 *
 * @param[in] buf No description supplied.
 * @param[in] len No description supplied.
 *
 */
EOAPI ssize_t  ecore_audio_obj_in_read(void *buf, size_t len);

/**
 *
 * Internal read function
 *
 * @since 1.8
 *
 * @param[in] buf No description supplied.
 * @param[in] len No description supplied.
 *
 */
EOAPI ssize_t  ecore_audio_obj_in_read_internal(void *buf, size_t len);

/**
 *
 * Seek within the input
 *
 * @since 1.8
 *
 * @param[in] offs No description supplied.
 * @param[in] mode No description supplied.
 *
 */
EOAPI double  ecore_audio_obj_in_seek(double offs, int mode);

EOAPI extern const Eo_Event_Description _ECORE_AUDIO_IN_EVENT_IN_LOOPED;
EOAPI extern const Eo_Event_Description _ECORE_AUDIO_IN_EVENT_IN_STOPPED;
EOAPI extern const Eo_Event_Description _ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED;

/**
 * Called when an input has looped.
 */
#define ECORE_AUDIO_IN_EVENT_IN_LOOPED (&(_ECORE_AUDIO_IN_EVENT_IN_LOOPED))

/**
 * Called when an input has stopped playing.
 */
#define ECORE_AUDIO_IN_EVENT_IN_STOPPED (&(_ECORE_AUDIO_IN_EVENT_IN_STOPPED))

/**
 * Called when the input samplerate has changed.
 */
#define ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED (&(_ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED))

#endif
