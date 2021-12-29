#ifndef _EVAS_3D_SCENE_EO_H_
#define _EVAS_3D_SCENE_EO_H_

#ifndef _EVAS_3D_SCENE_EO_TYPES
#define _EVAS_3D_SCENE_EO_TYPES


#endif
#define EVAS_3D_SCENE_CLASS evas_3d_scene_class_get()

const Eo_Class *evas_3d_scene_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] node A node which will be used as a root node for the scene.
 *
 */
EOAPI void  evas_3d_scene_root_node_set(Evas_3D_Node *node);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Evas_3D_Node * evas_3d_scene_root_node_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] node A node which will be used as a camera node for the scene.
 *
 */
EOAPI void  evas_3d_scene_camera_node_set(Evas_3D_Node *node);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Evas_3D_Node * evas_3d_scene_camera_node_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] w Width of the resolution.
 * @param[in] h Height of the resolution.
 *
 */
EOAPI void  evas_3d_scene_size_set(int w, int h);

/**
 *
 * No description supplied.
 *
 * @param[out] w Pointer to receive width of the resolution.
 * @param[out] h Pointer to receive height of the resolution.
 *
 */
EOAPI void  evas_3d_scene_size_get(int *w, int *h);

/**
 *
 * No description supplied.
 *
 * @param[in] r Red component of the background color.
 * @param[in] g Green component of the background color.
 * @param[in] b Blue component of the background color.
 * @param[in] a Alpha component of the background color.
 *
 */
EOAPI void  evas_3d_scene_background_color_set(Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

/**
 *
 * No description supplied.
 *
 * @param[out] r Pointer to receive red component of the background color.
 * @param[out] g Pointer to receive green component of the background color.
 * @param[out] b Pointer to receive blue component of the background color.
 * @param[out] a Pointer to receive alpha component of the background color.
 *
 */
EOAPI void  evas_3d_scene_background_color_get(Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

/**
 *
 * No description supplied.
 *
 * @param[in] x X coordinate of the picking position.
 * @param[in] y Y coordinate of the picking position.
 * @param[out] node Pointer to receive the node contains the picked mesh.
 * @param[out] mesh Pointer to receive the picked mesh.
 * @param[out] s Pointer to receive the texture "s" coordinate.
 * @param[out] t Pointer to receive the texture "t" coordinate.
 *
 */
EOAPI Eina_Bool  evas_3d_scene_pick(Evas_Real x, Evas_Real y, Evas_3D_Node **node, Evas_3D_Mesh **mesh, Evas_Real *s, Evas_Real *t);

/**
 *
 * No description supplied.
 *
 * @param[in] x X coordinate of the picking position.
 * @param[in] y Y coordinate of the picking position.
 * @param[in] node Node for search.
 *
 */
EOAPI Evas_3D_Node * evas_3d_scene_exist(Evas_Real x, Evas_Real y, Evas_3D_Node *node);

/**
 *
 * No description supplied.
 *
 * @param[in] x X coordinate of the picking position.
 * @param[in] y Y coordinate of the picking position.
 *
 */
EOAPI Eina_List * evas_3d_scene_pick_member_list_get(Evas_Real x, Evas_Real y);


#endif
