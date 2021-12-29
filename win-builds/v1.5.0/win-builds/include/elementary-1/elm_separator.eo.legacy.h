#ifndef _ELM_SEPARATOR_EO_LEGACY_H_
#define _ELM_SEPARATOR_EO_LEGACY_H_


/**
 *
 * @brief Set the horizontal mode of a separator object
 *
 * @ingroup Separator
 *
 * @param[in] horizontal If true, the separator is horizontal
 */
EAPI void elm_separator_horizontal_set(Eo *obj, Eina_Bool horizontal);

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
 */
EAPI Eina_Bool elm_separator_horizontal_get(const Eo *obj);

#endif
