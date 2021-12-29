#ifndef _ELM_SCROLLER_EO_LEGACY_H_
#define _ELM_SCROLLER_EO_LEGACY_H_


/**
 *
 * @brief Set event propagation on a scroller
 *
 * This enables or disables event propagation from the scroller
 * content to the scroller and its parent. By default event
 * propagation is @b enabled.
 *
 * @ingroup Scroller
 *
 * @param[in] propagation If propagation is enabled or not
 */
EAPI void elm_scroller_propagate_events_set(Eo *obj, Eina_Bool propagation);

/**
 *
 * @brief Get event propagation for a scroller
 *
 * @return The propagation state
 *
 * This gets the event propagation for a scroller.
 *
 * @see elm_scroller_propagate_events_set()
 *
 * @ingroup Scroller
 *
 */
EAPI Eina_Bool elm_scroller_propagate_events_get(const Eo *obj);

/**
 *
 * Set custom theme elements for the scroller
 *
 * @param[in] klass No description supplied.
 * @param[in] group No description supplied.
 */
EAPI void elm_scroller_custom_widget_base_theme_set(Eo *obj, const char *klass, const char *group);

/**
 *
 * @brief Set the maximum of the movable page at a flicking.
 *
 * The value of maximum movable page should be more than 1.
 *
 * @see elm_scroller_page_scroll_limit_get()
 *
 * @since 1.8
 *
 * @ingroup Scroller
 *
 * @param[in] page_limit_h The maximum of the movable horizontal page
 * @param[in] page_limit_v The maximum of the movable vertical page
 */
EAPI void elm_scroller_page_scroll_limit_set(const Eo *obj, int page_limit_h, int page_limit_v);

/**
 *
 * @brief Get the maximum of the movable page at a flicking.
 *
 * @see elm_scroller_page_scroll_limit_set()
 *
 * @since 1.8
 *
 * @ingroup Scroller
 *
 * @param[in] page_limit_h The maximum of the movable horizontal page
 * @param[in] page_limit_v The maximum of the movable vertical page
 */
EAPI void elm_scroller_page_scroll_limit_get(const Eo *obj, int *page_limit_h, int *page_limit_v);

#endif
