#ifndef _ELM_PANEL_EO_LEGACY_H_
#define _ELM_PANEL_EO_LEGACY_H_


/**
 *
 * @brief Sets the orientation of the panel
 *
 * Sets from where the panel will (dis)appear.
 *
 * @ingroup Panel
 *
 * @param[in] orient The panel orientation. Can be one of the following:
@li ELM_PANEL_ORIENT_TOP
@li ELM_PANEL_ORIENT_LEFT
@li ELM_PANEL_ORIENT_RIGHT
 */
EAPI void elm_panel_orient_set(Eo *obj, Elm_Panel_Orient orient);

/**
 *
 * @brief Get the orientation of the panel.
 *
 * @return The Elm_Panel_Orient, or ELM_PANEL_ORIENT_LEFT on failure.
 *
 * @ingroup Panel
 *
 */
EAPI Elm_Panel_Orient elm_panel_orient_get(const Eo *obj);

/**
 *
 * @brief Set the state of the panel.
 *
 * @ingroup Panel
 *
 * @param[in] hidden If true, the panel will run the animation to disappear.
 */
EAPI void elm_panel_hidden_set(Eo *obj, Eina_Bool hidden);

/**
 *
 * @brief Get the state of the panel.
 *
 * @return EINA_TRUE if it is hidden state
 *
 * @ingroup Panel
 *
 */
EAPI Eina_Bool elm_panel_hidden_get(const Eo *obj);

/**
 *
 * @brief Set the scrollability of the panel.
 *
 * @ingroup Panel
 *
 * @param[in] scrollable No description supplied.
 */
EAPI void elm_panel_scrollable_set(Eo *obj, Eina_Bool scrollable);

/**
 *
 * @brief Set the size of the scrollable panel.
 *
 * @ingroup Panel
 *
 * @param[in] ratio No description supplied.
 */
EAPI void elm_panel_scrollable_content_size_set(Eo *obj, double ratio);

/**
 *
 * @brief Toggle the hidden state of the panel from code
 *
 * @ingroup Panel
 *
 */
EAPI void elm_panel_toggle(Eo *obj);

#endif
