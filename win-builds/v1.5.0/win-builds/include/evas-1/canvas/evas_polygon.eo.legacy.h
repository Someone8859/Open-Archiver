#ifndef _EVAS_POLYGON_EO_LEGACY_H_
#define _EVAS_POLYGON_EO_LEGACY_H_


/**
 *
 * Adds the given point to the given evas polygon object.
 * @ingroup Evas_Polygon_Group
 *
 * @param[in] x The X coordinate of the given point.
 * @param[in] y The Y coordinate of the given point.
 */
EAPI void evas_object_polygon_point_add(Eo *obj, Evas_Coord x, Evas_Coord y);

/**
 *
 * Removes all of the points from the given evas polygon object.
 *
 */
EAPI void evas_object_polygon_points_clear(Eo *obj);

#endif
