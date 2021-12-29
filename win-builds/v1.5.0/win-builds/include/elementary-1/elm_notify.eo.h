#ifndef _ELM_NOTIFY_EO_H_
#define _ELM_NOTIFY_EO_H_

#ifndef _ELM_NOTIFY_EO_TYPES
#define _ELM_NOTIFY_EO_TYPES


#endif
#define ELM_NOTIFY_CLASS elm_notify_class_get()

const Eo_Class *elm_notify_class_get(void) EINA_CONST;

/**
 *
 * @brief Set the alignment of the notify object
 *
 * Sets the alignment in which the notify will appear in its parent.
 *
 * @note To fill the notify box in the parent area, please pass the
 * @c ELM_NOTIFY_ALIGN_FILL to @p horizontal, @p vertical.
 *
 * @since 1.8
 * @ingroup Notify
 *
 * @param[in] horizontal The horizontal alignment of the notification
 * @param[in] vertical The vertical alignment of the notification
 *
 */
EOAPI void  elm_obj_notify_align_set(double horizontal, double vertical);

/**
 *
 * @brief Get the alignment of the notify object
 * @see elm_notify_align_set()
 *
 * @since 1.8
 * @ingroup Notify
 *
 * @param[out] horizontal The horizontal alignment of the notification
 * @param[out] vertical The vertical alignment of the notification
 *
 */
EOAPI void  elm_obj_notify_align_get(double *horizontal, double *vertical);

/**
 *
 * @brief Sets whether events should be passed to by a click outside
 * its area.
 *
 * When true if the user clicks outside the window the events will be caught
 * by the others widgets, else the events are blocked.
 *
 * @note The default value is EINA_TRUE.
 *
 * @ingroup Notify
 *
 * @param[in] allow EINA_TRUE If events are allowed, otherwise not
 *
 */
EOAPI void  elm_obj_notify_allow_events_set(Eina_Bool allow);

/**
 *
 * @brief Return true if events are allowed below the notify object
 * @see elm_notify_allow_events_set()
 *
 * @ingroup Notify
 *
 *
 */
EOAPI Eina_Bool  elm_obj_notify_allow_events_get(void);

/**
 *
 * @brief Set the time interval after which the notify window is going to be
 * hidden.
 *
 * This function sets a timeout and starts the timer controlling when the
 * notify is hidden. Since calling evas_object_show() on a notify restarts
 * the timer controlling when the notify is hidden, setting this before the
 * notify is shown will in effect mean starting the timer when the notify is
 * shown.
 *
 * @note Set a value <= 0.0 to disable a running timer.
 *
 * @note If the value > 0.0 and the notify is previously visible, the
 * timer will be started with this value, canceling any running timer.
 *
 * @ingroup Notify
 *
 * @param[in] timeout The timeout in seconds
 *
 */
EOAPI void  elm_obj_notify_timeout_set(double timeout);

/**
 *
 * @brief Return the timeout value (in seconds)
 * @see elm_notify_timeout_set()
 *
 * @ingroup Notify
 *
 *
 */
EOAPI double  elm_obj_notify_timeout_get(void);

EOAPI extern const Eo_Event_Description _ELM_NOTIFY_EVENT_BLOCK_CLICKED;
EOAPI extern const Eo_Event_Description _ELM_NOTIFY_EVENT_TIMEOUT;

/**
 * No description
 */
#define ELM_NOTIFY_EVENT_BLOCK_CLICKED (&(_ELM_NOTIFY_EVENT_BLOCK_CLICKED))

/**
 * No description
 */
#define ELM_NOTIFY_EVENT_TIMEOUT (&(_ELM_NOTIFY_EVENT_TIMEOUT))

#endif
