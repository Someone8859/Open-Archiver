#ifndef _EVAS_3D_NODE_EO_H_
#define _EVAS_3D_NODE_EO_H_

#ifndef _EVAS_3D_NODE_EO_TYPES
#define _EVAS_3D_NODE_EO_TYPES


#endif
#define EVAS_3D_NODE_CLASS evas_3d_node_class_get()

const Eo_Class *evas_3d_node_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] type No description supplied.
 *
 */
EOAPI void  evas_3d_node_constructor(Evas_3D_Node_Type type);

/**
 *
 * No description supplied.
 *
 * @param[in] inherit Whether to inherit parent position
 *
 */
EOAPI void  evas_3d_node_position_inherit_set(Eina_Bool inherit);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Eina_Bool  evas_3d_node_position_inherit_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] inherit Whether to inherit parent orientation
 *
 */
EOAPI void  evas_3d_node_orientation_inherit_set(Eina_Bool inherit);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Eina_Bool  evas_3d_node_orientation_inherit_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] inherit Whether to inherit parent scale
 *
 */
EOAPI void  evas_3d_node_scale_inherit_set(Eina_Bool inherit);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Eina_Bool  evas_3d_node_scale_inherit_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] camera The camera
 *
 */
EOAPI void  evas_3d_node_camera_set(Evas_3D_Camera *camera);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Evas_3D_Camera * evas_3d_node_camera_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] light The light
 *
 */
EOAPI void  evas_3d_node_light_set(Evas_3D_Light *light);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Evas_3D_Light * evas_3d_node_light_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] mesh The given mesh.
 * @param[in] frame The animation frame number.
 *
 */
EOAPI void  evas_3d_node_mesh_frame_set(Evas_3D_Mesh * mesh, int frame);

/**
 *
 * No description supplied.
 *
 * @param[in] mesh The given mesh.
 *
 */
EOAPI int  evas_3d_node_mesh_frame_get(Evas_3D_Mesh * mesh);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Evas_3D_Node_Type  evas_3d_node_type_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] member Node object to be added.
 *
 */
EOAPI void  evas_3d_node_member_add(Evas_3D_Node *member);

/**
 *
 * No description supplied.
 *
 * @param[in] member Member node to be deleted from the given node.
 *
 */
EOAPI void  evas_3d_node_member_del(Evas_3D_Node *member);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Evas_3D_Node * evas_3d_node_parent_get(void);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI const Eina_List * evas_3d_node_member_list_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] x X coordinate of the position.
 * @param[in] y Y coordinate of the position.
 * @param[in] z Z coordinate of the position.
 *
 */
EOAPI void  evas_3d_node_position_set(Evas_Real x, Evas_Real y, Evas_Real z);

/**
 *
 * No description supplied.
 *
 * @param[in] x X term of the orientation quaternion (w, x, y, z)
 * @param[in] y Y term of the orientation quaternion (w, x, y, z)
 * @param[in] z Z term of the orientation quaternion (w, x, y, z)
 * @param[in] w W term of the orientation quaternion (w, x, y, z)
 *
 */
EOAPI void  evas_3d_node_orientation_set(Evas_Real x, Evas_Real y, Evas_Real z, Evas_Real w);

/**
 *
 * No description supplied.
 *
 * @param[in] angle Rotation angle.
 * @param[in] x X term of the rotation axis.
 * @param[in] y Y term of the rotation axis.
 * @param[in] z Z term of the rotation axis.
 *
 */
EOAPI void  evas_3d_node_orientation_angle_axis_set(Evas_Real angle, Evas_Real x, Evas_Real y, Evas_Real z);

/**
 *
 * No description supplied.
 *
 * @param[in] x Scale factor along X-axis.
 * @param[in] y Scale factor along Y-axis.
 * @param[in] z Scale factor along Z-axis.
 *
 */
EOAPI void  evas_3d_node_scale_set(Evas_Real x, Evas_Real y, Evas_Real z);

/**
 *
 * No description supplied.
 *
 * @param[in] space 
 * @param[out] x Pointer to receive X coordinate of the position.
 * @param[out] y Pointer to receive Y coordinate of the position.
 * @param[out] z Pointer to receive Z coordinate of the position.
 *
 */
EOAPI void  evas_3d_node_position_get(Evas_3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z);

/**
 *
 * No description supplied.
 *
 * @param[in] space 
 * @param[out] x Pointer to receive X term of the orientation quaternion.
 * @param[out] y Pointer to receive Y term of the orientation quaternion.
 * @param[out] z Pointer to receive Z term of the orientation quaternion.
 * @param[out] w Pointer to receive W term of the orientation quaternion.
 *
 */
EOAPI void  evas_3d_node_orientation_get(Evas_3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z, Evas_Real *w);

/**
 *
 * No description supplied.
 *
 * @param[in] space 
 * @param[out] x Pointer to receive Scale factor along X-axis.
 * @param[out] y Pointer to receive Scale factor along X-axis.
 * @param[out] z Pointer to receive Scale factor along X-axis.
 *
 */
EOAPI void  evas_3d_node_scale_get(Evas_3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z);

/**
 *
 * No description supplied.
 *
 * @param[in] target_space Space where the target position belongs to.
 * @param[in] x X coordinate of the target position.
 * @param[in] y Y coordinate of the target position.
 * @param[in] z Z coordinate of the target position.
 * @param[in] up_space Space where the up vector belongs to.
 * @param[in] ux X term of the up vector.
 * @param[in] uy Y term of the up vector.
 * @param[in] uz Z term of the up vector.
 *
 */
EOAPI void  evas_3d_node_look_at_set(Evas_3D_Space target_space, Evas_Real x, Evas_Real y, Evas_Real z, Evas_3D_Space up_space, Evas_Real ux, Evas_Real uy, Evas_Real uz);

/**
 *
 * No description supplied.
 *
 * @param[in] mesh The mesh to be added.
 *
 */
EOAPI void  evas_3d_node_mesh_add(Evas_3D_Mesh *mesh);

/**
 *
 * No description supplied.
 *
 * @param[in] mesh The mesh to be deleted.
 *
 */
EOAPI void  evas_3d_node_mesh_del(Evas_3D_Mesh *mesh);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI const Eina_List * evas_3d_node_mesh_list_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] x Coordinates of vector.
 * @param[in] y No description supplied.
 * @param[in] z No description supplied.
 * @param[in] x2 No description supplied.
 * @param[in] y2 No description supplied.
 * @param[in] z2 No description supplied.
 *
 */
EOAPI void  evas_3d_node_bounding_box_get(Evas_Real *x, Evas_Real *y, Evas_Real *z, Evas_Real *x2, Evas_Real *y2, Evas_Real *z2);

/**
 *
 * No description supplied.
 *
 * @param[in] camera_node No description supplied.
 *
 */
EOAPI int  evas_3d_node_obb_frustum_check(Evas_3D_Node *camera_node);


#endif
