#ifndef _ECORE_ANIMATOR_EO_H_
#define _ECORE_ANIMATOR_EO_H_

#ifndef _ECORE_ANIMATOR_EO_TYPES
#define _ECORE_ANIMATOR_EO_TYPES


#endif
#define ECORE_ANIMATOR_CLASS ecore_animator_class_get()

const Eo_Class *ecore_animator_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] runtime No description supplied.
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  ecore_animator_timeline_constructor(double runtime, Ecore_Timeline_Cb func, const void *data);

/**
 *
 * No description supplied.
 *
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  ecore_animator_constructor(Ecore_Task_Cb func, const void *data);


#endif
