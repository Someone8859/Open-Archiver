#ifndef _EVAS_OUT_EO_H_
#define _EVAS_OUT_EO_H_

#ifndef _EVAS_OUT_EO_TYPES
#define _EVAS_OUT_EO_TYPES


#endif
#define EVAS_OUT_CLASS evas_out_class_get()

const Eo_Class *evas_out_class_get(void) EINA_CONST;

/**
 *
 * Sets the viewport region of the canvas that the output displays This sets both the viewport region in the canvas that displays on the given output, but also the viewport size will match the output resolution 1:1.
 *
 * @param[in] x No description supplied.
 * @param[in] y No description supplied.
 * @param[in] w No description supplied.
 * @param[in] h No description supplied.
 *
 */
EOAPI void  evas_out_view_set(Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

/**
 *
 * Gets the viewport region of the canvas that the output displays
 *
 * @param[out] x No description supplied.
 * @param[out] y No description supplied.
 * @param[out] w No description supplied.
 * @param[out] h No description supplied.
 *
 */
EOAPI void  evas_out_view_get(Evas_Coord *x, Evas_Coord *y, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Sets the engine specific output parameters for a given output.
 *
 * @param[in] info The engine parameters
 *
 */
EOAPI Eina_Bool  evas_out_engine_info_set(Evas_Engine_Info *info);

/**
 *
 * Gets the engine specific output parameters for a given output.
 *
 *
 */
EOAPI Evas_Engine_Info * evas_out_engine_info_get(void);


#endif
