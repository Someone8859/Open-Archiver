#ifndef _EVAS_3D_CAMERA_EO_H_
#define _EVAS_3D_CAMERA_EO_H_

#ifndef _EVAS_3D_CAMERA_EO_TYPES
#define _EVAS_3D_CAMERA_EO_TYPES


#endif
#define EVAS_3D_CAMERA_CLASS evas_3d_camera_class_get()

const Eo_Class *evas_3d_camera_class_get(void) EINA_CONST;

/**
 *
 * Set the projection matrix of the given camera.
 *
 * @param camera     The given camera.
 * @param matrix     Pointer to the array of 16 Evas_Real values in column major order.
 *
 * Default projection matrix is identity matrix.
 *
 * @see evas_3d_camera_projection_perspective_set()
 * @see evas_3d_camera_projection_ortho_set()
 * @see evas_3d_camera_projection_frustum_set()
 *
 * @ingroup Evas_3D_Camera
 *
 * @param[in] matrix Projection Matrix
 *
 */
EOAPI void  evas_3d_camera_projection_matrix_set(const Evas_Real *matrix);

/**
 *
 * Get the projection matrix of the given camera.
 *
 * @param camera     The given camera.
 * @param matrix     Pointer to receive the 16 Evas_Real values in column major order.
 *
 * @see evas_3d_camera_projection_matrix_set()
 *
 * @ingroup Evas_3D_Camera
 *
 * @param[out] matrix Projection Matrix
 *
 */
EOAPI void  evas_3d_camera_projection_matrix_get(Evas_Real *matrix);

/**
 *
 * Set the projection matrix of the given camera with perspective projection.
 *
 * @param camera     The given camera.
 * @param fovy       Field of view angle in Y direction.
 * @param aspect     Aspect ratio.
 * @param dnear      Distance to near clipping plane.
 * @param dfar       Distance to far clipping plane.
 *
 * @see evas_3d_camera_projection_matrix_set()
 *
 * @ingroup Evas_3D_Camera
 *
 * @param[in] fovy Field of view angle in Y direction.
 * @param[in] aspect Aspect ratio.
 * @param[in] dnear Distance to near clipping plane.
 * @param[in] dfar Distance to far clipping plane.
 *
 */
EOAPI void  evas_3d_camera_projection_perspective_set(Evas_Real fovy, Evas_Real aspect, Evas_Real dnear, Evas_Real dfar);

/**
 *
 * Set the projection matrix of the given camera with frustum projection.
 *
 * @see evas_3d_camera_projection_matrix_set()
 *
 * @ingroup Evas_3D_Camera
 *
 * @param[in] left Left X coordinate of the near clipping plane.
 * @param[in] right Right X coordinate of the near clipping plane..
 * @param[in] bottom Bottom Y coordinate of the near clipping plane.
 * @param[in] top Top Y coordinate of the near clipping plane
 * @param[in] dnear Distance to near clipping plane.
 * @param[in] dfar Distance to far clipping plane.
 *
 */
EOAPI void  evas_3d_camera_projection_frustum_set(Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);

/**
 *
 * Set the projection matrix of the given camera with orthogonal projection.
 *
 * @see evas_3d_camera_projection_matrix_set()
 *
 * @ingroup Evas_3D_Camera
 *
 * @param[in] left Left X coordinate of the near clipping plane.
 * @param[in] right Right X coordinate of the near clipping plane..
 * @param[in] bottom Bottom Y coordinate of the near clipping plane.
 * @param[in] top Top Y coordinate of the near clipping plane
 * @param[in] dnear Distance to near clipping plane.
 * @param[in] dfar Distance to far clipping plane.
 *
 */
EOAPI void  evas_3d_camera_projection_ortho_set(Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);


#endif
