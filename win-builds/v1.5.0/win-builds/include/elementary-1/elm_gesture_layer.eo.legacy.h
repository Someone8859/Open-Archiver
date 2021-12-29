#ifndef _ELM_GESTURE_LAYER_EO_LEGACY_H_
#define _ELM_GESTURE_LAYER_EO_LEGACY_H_


/**
 *
 * This function sets step-value for zoom action.
 * Set step to any positive value.
 * Cancel step setting by setting to 0
 *
 * @see elm_gesture_layer_zoom_step_get()
 *
 * @param[in] step new zoom step value.
 */
EAPI void elm_gesture_layer_zoom_step_set(Eo *obj, double step);

/**
 *
 * This function returns step-value for zoom action.
 *
 * @return zoom step value.
 *
 * @see elm_gesture_layer_zoom_step_set()
 *
 */
EAPI double elm_gesture_layer_zoom_step_get(const Eo *obj);

/**
 *
 * @since 1.8
 * This function sets the gesture layer finger-size for taps
 * If not set, this size taken from elm_config.
 * Set to ZERO if you want GLayer to use system finger size value (default)
 *
 * @param[in] sz Finger size
 */
EAPI void elm_gesture_layer_tap_finger_size_set(Eo *obj, Evas_Coord sz);

/**
 *
 * @since 1.8
 * This function returns the gesture layer finger-size for taps
 *
 * @return Finger size that is currently used by Gesture Layer for taps.
 *
 */
EAPI Evas_Coord elm_gesture_layer_tap_finger_size_get(const Eo *obj);

/**
 *
 * This function is to make gesture-layer repeat events.
 * Set this if you like to get the raw events only if gestures were not
 * detected.
 * Clear this if you like gesture layer to forward events as testing gestures.
 *
 * @param[in] hold_events hold events or not.
 */
EAPI void elm_gesture_layer_hold_events_set(Eo *obj, Eina_Bool hold_events);

/**
 *
 * Call this function to get repeat-events settings.
 *
 * @return repeat events settings.
 * @see elm_gesture_layer_hold_events_set()
 *
 */
EAPI Eina_Bool elm_gesture_layer_hold_events_get(const Eo *obj);

/**
 *
 * This function sets step-value for rotate action.
 * Set step to any positive value.
 * Cancel step setting by setting to 0
 *
 * @param[in] step new rotate step value.
 */
EAPI void elm_gesture_layer_rotate_step_set(Eo *obj, double step);

/**
 *
 * This function returns step-value for rotate action.
 *
 * @return rotate step value.
 *
 */
EAPI double elm_gesture_layer_rotate_step_get(const Eo *obj);

/**
 *
 * Use function to set callbacks to be notified about
 * change of state of gesture.
 * When a user registers a callback with this function
 * this means this gesture has to be tested.
 *
 * When ALL callbacks for a gesture are set to NULL
 * it means user isn't interested in gesture-state
 * and it will not be tested.
 *
 * @param[in] idx The gesture you would like to track its state.
 * @param[in] cb_type what event this callback tracks: START, MOVE, END, ABORT.
 * @param[in] cb callback function pointer.
 * @param[in] data user info to be sent to callback (usually, Smart Data)
 */
EAPI void elm_gesture_layer_cb_set(Eo *obj, Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void *data);

/**
 *
 * Attach a given gesture layer widget to an Evas object, thus setting
 * the widget's @b target.
 *
 * A gesture layer target may be whichever Evas object one
 * chooses. This will be object @a obj will listen all mouse and key
 * events from, to report the gestures made upon it back.
 *
 * @return @c EINA_TRUE, on success, @c EINA_FALSE otherwise.
 *
 * @param[in] target Object to attach to @a obj (target)
 */
EAPI Eina_Bool elm_gesture_layer_attach(Eo *obj, Evas_Object *target);

/**
 *
 * Use this function to remove a callback that has been added
 * to be notified about change of state of gesture.
 *
 * @param[in] idx The gesture you would like to track its state.
 * @param[in] cb_type what event this callback tracks: START, MOVE, END, ABORT.
 * @param[in] cb callback function pointer.
 * @param[in] data user info for the callback (usually, Smart Data)
 */
EAPI void elm_gesture_layer_cb_del(Eo *obj, Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void *data);

/**
 *
 * Use function to add callbacks to be notified about
 * change of state of gesture.
 * When a user registers a callback with this function
 * this means this gesture has to be tested.
 *
 * When ALL callbacks for a gesture are set to NULL
 * it means user isn't interested in gesture-state
 * and it will not be tested.
 *
 * If a function was already set for this gesture/type/state, it will be
 * replaced by the new one. For ABI compat, callbacks added by
 * elm_gesture_layer_cb_add will be removed. It is recommended to
 * use only one of these functions for a gesture object.
 *
 * @param[in] idx The gesture you would like to track its state.
 * @param[in] cb_type what event this callback tracks: START, MOVE, END, ABORT.
 * @param[in] cb callback function pointer.
 * @param[in] data user info to be sent to callback (usually, Smart Data)
 */
EAPI void elm_gesture_layer_cb_add(Eo *obj, Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void *data);

#endif
