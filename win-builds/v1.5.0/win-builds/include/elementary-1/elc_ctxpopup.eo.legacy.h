#ifndef _ELC_CTXPOPUP_EO_LEGACY_H_
#define _ELC_CTXPOPUP_EO_LEGACY_H_


/**
 *
 * @brief Change the ctxpopup's orientation to horizontal or vertical.
 *
 * @ingroup Ctxpopup
 *
 * @param[in] horizontal @c EINA_TRUE for horizontal mode, @c EINA_FALSE for vertical
 */
EAPI void elm_ctxpopup_horizontal_set(Eo *obj, Eina_Bool horizontal);

/**
 *
 * @brief Get the value of current ctxpopup object's orientation.
 *
 * @return @c EINA_TRUE for horizontal mode, @c EINA_FALSE for vertical mode (or errors)
 *
 * @see elm_ctxpopup_horizontal_set()
 *
 * @ingroup Ctxpopup
 *
 */
EAPI Eina_Bool elm_ctxpopup_horizontal_get(const Eo *obj);

/**
 *
 * @brief Set ctxpopup auto hide mode triggered by ctxpopup policy.
 * @since 1.9
 *
 * Use this function when user wants ctxpopup not to hide automatically.
 * By default, ctxpopup is dismissed whenever mouse clicked its background area, language is changed,
 * and its parent geometry is updated(changed).
 * Not to hide ctxpopup automatically, disable auto hide function by calling this API,
 * then ctxpopup won't be dismissed in those scenarios.
 *
 * Default value of disabled is @c EINA_FALSE.
 *
 * @see elm_ctxpopup_auto_hide_disabled_get()
 *
 * @ingroup Ctxpopup
 *
 * @param[in] disabled auto hide enable/disable.
 */
EAPI void elm_ctxpopup_auto_hide_disabled_set(Eo *obj, Eina_Bool disabled);

/**
 *
 * @brief Get ctxpopup auto hide mode triggered by ctxpopup policy.
 * @since 1.9
 *
 * @return auto hide mode's state of a ctxpopup
 *
 * @see elm_ctxpopup_auto_hide_disabled_set() for more information.
 *
 * @ingroup Ctxpopup
 *
 */
EAPI Eina_Bool elm_ctxpopup_auto_hide_disabled_get(const Eo *obj);

/**
 *
 * @brief Set the Ctxpopup's parent
 *
 * Set the parent object.
 *
 * @note elm_ctxpopup_add() will automatically call this function
 * with its @c parent argument.
 *
 * @see elm_ctxpopup_add()
 * @see elm_hover_parent_set()
 *
 * @ingroup Ctxpopup
 *
 * @param[in] parent The parent to use
 */
EAPI void elm_ctxpopup_hover_parent_set(Eo *obj, Evas_Object *parent);

/**
 *
 * @brief Get the Ctxpopup's parent
 *
 * @see elm_ctxpopup_hover_parent_set() for more information
 *
 * @ingroup Ctxpopup
 *
 */
EAPI Evas_Object *elm_ctxpopup_hover_parent_get(const Eo *obj);

/**
 *
 * @brief Set the direction priority of a ctxpopup.
 *
 * This functions gives a chance to user to set the priority of ctxpopup
 * showing direction. This doesn't guarantee the ctxpopup will appear in the
 * requested direction.
 *
 * @see Elm_Ctxpopup_Direction
 *
 * @ingroup Ctxpopup
 *
 * @param[in] first 1st priority of direction
 * @param[in] second 2nd priority of direction
 * @param[in] third 3th priority of direction
 * @param[in] fourth 4th priority of direction
 */
EAPI void elm_ctxpopup_direction_priority_set(Eo *obj, Elm_Ctxpopup_Direction first, Elm_Ctxpopup_Direction second, Elm_Ctxpopup_Direction third, Elm_Ctxpopup_Direction fourth);

/**
 *
 * @brief Get the direction priority of a ctxpopup.
 *
 * @see elm_ctxpopup_direction_priority_set() for more information.
 *
 * @ingroup Ctxpopup
 *
 * @param[out] first 1st priority of direction
 * @param[out] second 2nd priority of direction
 * @param[out] third 3th priority of direction
 * @param[out] fourth 4th priority of direction
 */
EAPI void elm_ctxpopup_direction_priority_get(const Eo *obj, Elm_Ctxpopup_Direction *first, Elm_Ctxpopup_Direction *second, Elm_Ctxpopup_Direction *third, Elm_Ctxpopup_Direction *fourth);

/**
 *
 * @brief Get the current direction of a ctxpopup.
 *
 * @return current direction of a ctxpopup
 *
 * @warning Once the ctxpopup showed up, the direction would be determined
 *
 * @ingroup Ctxpopup
 *
 */
EAPI Elm_Ctxpopup_Direction elm_ctxpopup_direction_get(const Eo *obj);

/**
 *
 * @brief Get the internal list of items in a given ctxpopup widget.
 * @since 1.11
 *
 * @return The list of items (#Elm_Object_Item as data) or
 * @c NULL on errors.
 *
 * This list is @b not to be modified in any way and must not be
 * freed. Use the list members with functions like
 * elm_object_item_text_set(),
 * elm_object_item_text_get(),
 * elm_object_item_del().
 *
 * @warning This list is only valid until @p obj object's internal
 * items list is changed. It should be fetched again with another
 * call to this function when changes happen.
 *
 * @ingroup Ctxpopup
 *
 */
EAPI const Eina_List *elm_ctxpopup_items_get(const Eo *obj);

/**
 *
 * Get the first item in the given ctxpopup widget's list of
 * items.
 * @since 1.11
 *
 * @return The first item or @c NULL, if it has no items (and on
 * errors)
 *
 * @see elm_ctxpopup_item_append()
 * @see elm_ctxpopup_last_item_get()
 *
 * @ingroup Ctxpopup
 *
 */
EAPI Elm_Object_Item *elm_ctxpopup_first_item_get(const Eo *obj);

/**
 *
 * Get the last item in the given ctxpopup widget's list of
 * items.
 * @since 1.11
 *
 * @return The last item or @c NULL, if it has no items (and on
 * errors)
 *
 * @see elm_ctxpopup_item_prepend()
 * @see elm_ctxpopup_first_item_get()
 *
 * @ingroup Ctxpopup
 *
 */
EAPI Elm_Object_Item *elm_ctxpopup_last_item_get(const Eo *obj);

/**
 *
 * @brief Dismiss a ctxpopup object
 *
 * Use this function to simulate clicking outside of the ctxpopup to dismiss it.
 * In this way, the ctxpopup will be hidden and the "clicked" signal will be
 * emitted.
 *
 */
EAPI void elm_ctxpopup_dismiss(Eo *obj);

/**
 *
 * @brief Clear all items in the given ctxpopup object.
 *
 * @ingroup Ctxpopup
 *
 */
EAPI void elm_ctxpopup_clear(Eo *obj);

/**
 *
 * @brief Add a new item to a ctxpopup object.
 *
 * @return A handle to the item added or @c NULL, on errors
 *
 * @warning Ctxpopup can't hold both an item list and a content at the same
 * time. When an item is added, any previous content will be removed.
 *
 * @see elm_object_content_set()
 *
 * @ingroup Ctxpopup
 *
 * @param[in] label The Label of the new item
 * @param[in] icon Icon to be set on new item
 * @param[in] func Convenience function called when item selected
 * @param[in] data Data passed to @p func
 */
EAPI Elm_Object_Item *elm_ctxpopup_item_append(Eo *obj, const char *label, Evas_Object *icon, Evas_Smart_Cb func, const void *data);

/**
 *
 * @brief Prepend a new item to a ctxpopup object.
 * @since 1.11
 *
 * @return A handle to the item added or @c NULL, on errors
 *
 * @warning Ctxpopup can't hold both an item list and a content at the same
 * time. When an item is added, any previous content will be removed.
 *
 * @see elm_object_content_set()
 *
 * @ingroup Ctxpopup
 *
 * @param[in] label The Label of the new item
 * @param[in] icon Icon to be set on new item
 * @param[in] func Convenience function called when item selected
 * @param[in] data Data passed to @p func
 */
EAPI Elm_Object_Item *elm_ctxpopup_item_prepend(Eo *obj, const char *label, Evas_Object *icon, Evas_Smart_Cb func, const void *data);

#endif
