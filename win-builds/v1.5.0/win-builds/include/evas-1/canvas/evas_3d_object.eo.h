#ifndef _EVAS_3D_OBJECT_EO_H_
#define _EVAS_3D_OBJECT_EO_H_

#ifndef _EVAS_3D_OBJECT_EO_TYPES
#define _EVAS_3D_OBJECT_EO_TYPES


#endif
#define EVAS_3D_OBJECT_CLASS evas_3d_object_class_get()

const Eo_Class *evas_3d_object_class_get(void) EINA_CONST;

/**
 *
 * Notify the object regarding its  state change.
 *
 * @param[in] state State that is changed
 * @param[in] ref The Object that caused the change
 *
 */
EOAPI void  evas_3d_object_change(Evas_3D_State state, Evas_3D_Object *ref);

/**
 *
 * Returns the type of the object.
 *
 *
 */
EOAPI Evas_3D_Object_Type  evas_3d_object_type_get(void);

/**
 *
 * Returns the type of the object.
 *
 * @param[in] type No description supplied.
 *
 */
EOAPI void  evas_3d_object_type_set(Evas_3D_Object_Type type);

/**
 *
 * Returns the status of a particular state of the object.
 *
 * @param[in] state State whose status is being asked
 *
 */
EOAPI Eina_Bool  evas_3d_object_dirty_get(Evas_3D_State state);

/**
 *
 * Update request for the object.
 *
 *
 */
EOAPI void  evas_3d_object_update(void);

/**
 *
 * Pure virtual update_notify function..
 * Update request for the object.
 *
 *
 */
EOAPI void  evas_3d_object_update_notify(void);

/**
 *
 * Pure virtual change_notify function..
 * Update request for the object.
 *
 * @param[in] state State that is changed
 * @param[in] ref The Object that caused the change
 *
 */
EOAPI void  evas_3d_object_change_notify(Evas_3D_State state, Evas_3D_Object *ref);


#endif
