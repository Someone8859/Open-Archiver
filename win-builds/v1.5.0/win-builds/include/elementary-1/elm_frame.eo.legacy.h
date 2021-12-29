#ifndef _ELM_FRAME_EO_LEGACY_H_
#define _ELM_FRAME_EO_LEGACY_H_


/**
 *
 * @brief Manually collapse a frame without animations
 * Use this to toggle the collapsed state of a frame, bypassing animations.
 *
 * @ingroup Frame
 *
 * @param[in] collapse true to collapse, false to expand
 */
EAPI void elm_frame_collapse_set(Eo *obj, Eina_Bool collapse);

/**
 *
 * @brief Determine the collapse state of a frame
 * @return true if collapsed, false otherwise
 *
 * Use this to determine the collapse state of a frame.
 *
 * @ingroup Frame
 *
 */
EAPI Eina_Bool elm_frame_collapse_get(const Eo *obj);

/**
 *
 * @brief Toggle autocollapsing of a frame
 * When @p enable is EINA_TRUE, clicking a frame's label will collapse the frame
 * vertically, shrinking it to the height of the label.
 * By default, this is DISABLED.
 *
 * @ingroup Frame
 *
 * @param[in] autocollapse Whether to enable autocollapse
 */
EAPI void elm_frame_autocollapse_set(Eo *obj, Eina_Bool autocollapse);

/**
 *
 * @brief Determine autocollapsing of a frame
 * @return Whether autocollapse is enabled
 *
 * When this returns EINA_TRUE, clicking a frame's label will collapse the frame
 * vertically, shrinking it to the height of the label.
 * By default, this is DISABLED.
 *
 * @ingroup Frame
 *
 */
EAPI Eina_Bool elm_frame_autocollapse_get(const Eo *obj);

/**
 *
 * @brief Manually collapse a frame with animations
 * Use this to toggle the collapsed state of a frame, triggering animations.
 *
 * @ingroup Frame
 *
 * @param[in] collapse true to collapse, false to expand
 */
EAPI void elm_frame_collapse_go(Eo *obj, Eina_Bool collapse);

#endif
