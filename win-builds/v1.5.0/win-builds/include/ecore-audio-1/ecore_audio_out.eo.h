#ifndef _ECORE_AUDIO_OUT_EO_H_
#define _ECORE_AUDIO_OUT_EO_H_

#ifndef _ECORE_AUDIO_OUT_EO_TYPES
#define _ECORE_AUDIO_OUT_EO_TYPES


#endif
#define ECORE_AUDIO_OUT_CLASS ecore_audio_out_class_get()

const Eo_Class *ecore_audio_out_class_get(void) EINA_CONST;

/**
 *
 * Attach an input to an output
 *
 * @since 1.8
 *
 * @param[in] input No description supplied.
 *
 */
EOAPI Eina_Bool  ecore_audio_obj_out_input_attach(Eo *input);

/**
 *
 * Detach an input from an output
 *
 * @since 1.8
 *
 * @param[in] input No description supplied.
 *
 */
EOAPI Eina_Bool  ecore_audio_obj_out_input_detach(Eo *input);

/**
 *
 * Returns the list of all attached inputs
 *
 * @since 1.8
 *
 *
 */
EOAPI Eina_List * ecore_audio_obj_out_inputs_get(void);


#endif
