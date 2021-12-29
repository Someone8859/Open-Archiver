#ifndef _ELM_GRID_EO_LEGACY_H_
#define _ELM_GRID_EO_LEGACY_H_


/**
 *
 * Set the virtual size of the grid
 *
 * @ingroup Grid
 *
 * @param[in] w The virtual width of the grid
 * @param[in] h The virtual height of the grid
 */
EAPI void elm_grid_size_set(Eo *obj, Evas_Coord w, Evas_Coord h);

/**
 *
 * Get the virtual size of the grid
 *
 * @ingroup Grid
 *
 * @param[out] w The virtual width of the grid
 * @param[out] h The virtual height of the grid
 */
EAPI void elm_grid_size_get(const Eo *obj, Evas_Coord *w, Evas_Coord *h);

/**
 *
 * Get the list of the children for the grid.
 *
 * @note This is a duplicate of the list kept by the grid internally.
 * It's up to the user to destroy it when it no longer needs it.
 * It's possible to remove objects from the grid when walking this
 * list, but these removals won't be reflected on it.
 *
 * @ingroup Grid
 *
 */
EAPI Eina_List *elm_grid_children_get(const Eo *obj);

/**
 *
 * Faster way to remove all child objects from a grid object.
 *
 * @ingroup Grid
 *
 * @param[in] clear If true, it will delete just removed children
 */
EAPI void elm_grid_clear(Eo *obj, Eina_Bool clear);

/**
 *
 * Unpack a child from a grid object
 *
 * @ingroup Grid
 *
 * @param[in] subobj The child to unpack
 */
EAPI void elm_grid_unpack(Eo *obj, Evas_Object *subobj);

/**
 *
 * Pack child at given position and size
 *
 * @ingroup Grid
 *
 * @param[in] subobj The child to pack
 * @param[in] x The virtual x coord at which to pack it
 * @param[in] y The virtual y coord at which to pack it
 * @param[in] w The virtual width at which to pack it
 * @param[in] h The virtual height at which to pack it
 */
EAPI void elm_grid_pack(Eo *obj, Evas_Object *subobj, Evas_Coord x, Evas_Coord y, Evas_Coord w, Evas_Coord h);

#endif
