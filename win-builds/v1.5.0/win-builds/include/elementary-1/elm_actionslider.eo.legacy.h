#ifndef _ELM_ACTIONSLIDER_EO_LEGACY_H_
#define _ELM_ACTIONSLIDER_EO_LEGACY_H_


/**
 *
 * Set actionslider indicator position.
 *
 * @ingroup Actionslider
 *
 * @param[in] pos The position of the indicator.
 */
EAPI void elm_actionslider_indicator_pos_set(Eo *obj, Elm_Actionslider_Pos pos);

/**
 *
 * Get actionslider indicator position.
 *
 * @return The position of the indicator.
 *
 * @ingroup Actionslider
 *
 */
EAPI Elm_Actionslider_Pos elm_actionslider_indicator_pos_get(const Eo *obj);

/**
 *
 * Set actionslider magnet position. To make multiple positions magnets @c or
 * them together(e.g.: ELM_ACTIONSLIDER_LEFT | ELM_ACTIONSLIDER_RIGHT)
 *
 * @ingroup Actionslider
 *
 * @param[in] pos Bit mask indicating the magnet positions.
 */
EAPI void elm_actionslider_magnet_pos_set(Eo *obj, Elm_Actionslider_Pos pos);

/**
 *
 * Get actionslider magnet position.
 *
 * @return The positions with magnet property.
 *
 * @ingroup Actionslider
 *
 */
EAPI Elm_Actionslider_Pos elm_actionslider_magnet_pos_get(const Eo *obj);

/**
 *
 * Set actionslider enabled position. To set multiple positions as enabled @c or
 * them together(e.g.: ELM_ACTIONSLIDER_LEFT | ELM_ACTIONSLIDER_RIGHT).
 *
 * @note All the positions are enabled by default.
 *
 * @ingroup Actionslider
 *
 * @param[in] pos Bit mask indicating the enabled positions.
 */
EAPI void elm_actionslider_enabled_pos_set(Eo *obj, Elm_Actionslider_Pos pos);

/**
 *
 * Get actionslider enabled position.
 *
 * @return The enabled positions.
 *
 * @ingroup Actionslider
 *
 */
EAPI Elm_Actionslider_Pos elm_actionslider_enabled_pos_get(const Eo *obj);

/**
 *
 * Get actionslider selected label.
 *
 * @return The selected label
 *
 * @ingroup Actionslider
 *
 */
EAPI const char *elm_actionslider_selected_label_get(const Eo *obj);

#endif
