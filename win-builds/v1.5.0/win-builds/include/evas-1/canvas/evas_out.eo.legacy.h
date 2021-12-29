#ifndef _EVAS_OUT_EO_LEGACY_H_
#define _EVAS_OUT_EO_LEGACY_H_


/**
 *
 * Sets the viewport region of the canvas that the output displays This sets both the viewport region in the canvas that displays on the given output, but also the viewport size will match the output resolution 1:1.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 */
EAPI void evas_output_view_set(Eo *obj, Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

/**
 *
 * Gets the viewport region of the canvas that the output displays
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 */
EAPI void evas_output_view_get(const Eo *obj, Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Sets the engine specific output parameters for a given output.
 *
 * @param[in] info The engine parameters
 */
EAPI Eina_Bool evas_output_engine_info_set(Eo *obj, Evas_Engine_Info *info);

/**
 *
 * Gets the engine specific output parameters for a given output.
 *
 */
EAPI Evas_Engine_Info *evas_output_engine_info_get(const Eo *obj);

#endif
