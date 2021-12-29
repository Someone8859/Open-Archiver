#ifndef _ECORE_JOB_EO_H_
#define _ECORE_JOB_EO_H_

#ifndef _ECORE_JOB_EO_TYPES
#define _ECORE_JOB_EO_TYPES


#endif
#define ECORE_JOB_CLASS ecore_job_class_get()

const Eo_Class *ecore_job_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] func No description supplied.
 * @param[in] data No description supplied.
 *
 */
EOAPI void  ecore_job_constructor(Ecore_Cb func, const void *data);


#endif
