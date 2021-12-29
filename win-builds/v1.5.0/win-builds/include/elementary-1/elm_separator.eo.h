#ifndef _ELM_SEPARATOR_EO_H_
#define _ELM_SEPARATOR_EO_H_

#ifndef _ELM_SEPARATOR_EO_TYPES
#define _ELM_SEPARATOR_EO_TYPES


#endif
#define ELM_SEPARATOR_CLASS elm_separator_class_get()

const Eo_Class *elm_separator_class_get(void) EINA_CONST;

/**
 *
 * @brief Set the horizontal mode of a separator object
 *
 * @ingroup Separator
 *
 * @param[in] horizontal If true, the separator is horizontal
 *
 */
EOAPI void  elm_obj_separator_horizontal_set(Eina_Bool horizontal);

/**
 *
 * @brief Get the horizontal mode of a separator object
 *
 * @return If true, the separator is horizontal
 *
 * @see elm_separator_horizontal_set()
 *
 * @ingroup Separator
 *
 *
 */
EOAPI Eina_Bool  elm_obj_separator_horizontal_get(void);


#endif
