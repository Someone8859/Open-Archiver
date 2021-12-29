#ifndef _ELM_BUBBLE_EO_LEGACY_H_
#define _ELM_BUBBLE_EO_LEGACY_H_


/**
 *
 * Set the corner of the bubble
 *
 * This function sets the corner of the bubble. The corner will be used to
 * determine where the arrow in the frame points to and where label, icon and
 * info are shown.
 *
 *
 * @ingroup Bubble
 *
 * @param[in] pos The given corner for the bubble.
 */
EAPI void elm_bubble_pos_set(Eo *obj, Elm_Bubble_Pos pos);

/**
 *
 * Get the corner of the bubble
 *
 * @return The given corner for the bubble.
 *
 * This function gets the selected corner of the bubble.
 *
 * @ingroup Bubble
 *
 */
EAPI Elm_Bubble_Pos elm_bubble_pos_get(const Eo *obj);

#endif
