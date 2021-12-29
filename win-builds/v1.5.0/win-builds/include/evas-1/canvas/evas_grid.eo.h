#ifndef _EVAS_GRID_EO_H_
#define _EVAS_GRID_EO_H_

#ifndef _EVAS_GRID_EO_TYPES
#define _EVAS_GRID_EO_TYPES


#endif
#define EVAS_GRID_CLASS evas_grid_class_get()

const Eo_Class *evas_grid_class_get(void) EINA_CONST;

/**
 *
 * Sets the mirrored mode of the grid. In mirrored mode the grid items go
 * from right to left instead of left to right. That is, 0,0 is top right, not
 * to left.
 *
 * @since 1.1
 *
 * @param[in] mirrored the mirrored mode to set
 *
 */
EOAPI void  evas_obj_grid_mirrored_set(Eina_Bool mirrored);

/**
 *
 * Gets the mirrored mode of the grid.
 *
 * @return @c EINA_TRUE if it's a mirrored grid, @c EINA_FALSE otherwise.
 * @see evas_object_grid_mirrored_set()
 * @since 1.1
 *
 *
 */
EOAPI Eina_Bool  evas_obj_grid_mirrored_get(void);

/**
 *
 * Set the virtual resolution for the grid
 *
 * @since 1.1
 *
 * @param[in] w The virtual horizontal size (resolution) in integer units
 * @param[in] h The virtual vertical size (resolution) in integer units
 *
 */
EOAPI void  evas_obj_grid_size_set(int w, int h);

/**
 *
 * Get the current virtual resolution
 *
 * @see evas_object_grid_size_set()
 * @since 1.1
 *
 * @param[out] w The virtual horizontal size (resolution) in integer units
 * @param[out] h The virtual vertical size (resolution) in integer units
 *
 */
EOAPI void  evas_obj_grid_size_get(int *w, int *h);

/**
 *
 * Get the list of children for the grid.
 *
 * @note This is a duplicate of the list kept by the grid internally.
 * It's up to the user to destroy it when it no longer needs it.
 * It's possible to remove objects from the grid when walking this
 * list, but these removals won't be reflected on it.
 * @since 1.1
 *
 *
 */
EOAPI Eina_List * evas_obj_grid_children_get(void);

/**
 *
 * Get an accessor to get random access to the list of children for the grid.
 *
 * @note Do not remove or delete objects while walking the list.
 * @since 1.1
 *
 *
 */
EOAPI Eina_Accessor * evas_obj_grid_accessor_new(void);

/**
 *
 * Faster way to remove all child objects from a grid object.
 *
 * @since 1.1
 *
 * @param[in] clear if true, it will delete just removed children.
 *
 */
EOAPI void  evas_obj_grid_clear(Eina_Bool clear);

/**
 *
 * Get an iterator to walk the list of children for the grid.
 *
 * @note Do not remove or delete objects while walking the list.
 * @since 1.1
 *
 *
 */
EOAPI Eina_Iterator * evas_obj_grid_iterator_new(void);

/**
 *
 * Create a grid that is child of a given element @a parent.
 *
 * @see evas_object_grid_add()
 * @since 1.1
 *
 *
 */
EOAPI Evas_Object * evas_obj_grid_add_to(void);

/**
 *
 * Remove child from grid.
 *
 * @note removing a child will immediately call a walk over children in order
 * to recalculate numbers of columns and rows. If you plan to remove
 * all children, use evas_object_grid_clear() instead.
 *
 * @return 1 on success, 0 on failure.
 * @since 1.1
 *
 * @param[in] child No description supplied.
 *
 */
EOAPI Eina_Bool  evas_obj_grid_unpack(Evas_Object *child);

/**
 *
 * Get the pack options for a grid child
 *
 * Get the pack x, y, width and height in virtual coordinates set by
 * evas_object_grid_pack()
 * @return 1 on success, 0 on failure.
 * @since 1.1
 *
 * @param[in] child The grid child to query for coordinates
 * @param[out] x The pointer to where the x coordinate will be returned
 * @param[out] y The pointer to where the y coordinate will be returned
 * @param[out] w The pointer to where the width will be returned
 * @param[out] h The pointer to where the height will be returned
 *
 */
EOAPI Eina_Bool  evas_obj_grid_pack_get(Evas_Object *child, int *x, int *y, int *w, int *h);

/**
 *
 * Add a new child to a grid object.
 *
 * @return 1 on success, 0 on failure.
 * @since 1.1
 *
 * @param[in] child The child object to add.
 * @param[in] x The virtual x coordinate of the child
 * @param[in] y The virtual y coordinate of the child
 * @param[in] w The virtual width of the child
 * @param[in] h The virtual height of the child
 *
 */
EOAPI Eina_Bool  evas_obj_grid_pack(Evas_Object *child, int x, int y, int w, int h);


#endif
