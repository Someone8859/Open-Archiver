#ifndef _EVAS_POLYGON_EO_H_
#define _EVAS_POLYGON_EO_H_

#ifndef _EVAS_POLYGON_EO_TYPES
#define _EVAS_POLYGON_EO_TYPES


#endif
#define EVAS_POLYGON_CLASS evas_polygon_class_get()

const Eo_Class *evas_polygon_class_get(void) EINA_CONST;

/**
 *
 * Adds the given point to the given evas polygon object.
 * @ingroup Evas_Polygon_Group
 *
 * @param[in] x The X coordinate of the given point.
 * @param[in] y The Y coordinate of the given point.
 *
 */
EOAPI void  evas_obj_polygon_point_add(Evas_Coord x, Evas_Coord y);

/**
 *
 * Removes all of the points from the given evas polygon object.
 *
 *
 */
EOAPI void  evas_obj_polygon_points_clear(void);


#endif
