#ifndef _ELC_HOVERSEL_EO_LEGACY_H_
#define _ELC_HOVERSEL_EO_LEGACY_H_


/**
 *
 * @brief This sets the hoversel to expand horizontally.
 *
 * @note The initial button will display horizontally regardless of this
 * setting.
 *
 * @ingroup Hoversel
 *
 * @param[in] horizontal If true, the hover will expand horizontally to the
right.
 */
EAPI void elm_hoversel_horizontal_set(Eo *obj, Eina_Bool horizontal);

/**
 *
 * @brief This returns whether the hoversel is set to expand horizontally.
 *
 * @return If true, the hover will expand horizontally to the right.
 *
 * @see elm_hoversel_horizontal_set()
 *
 * @ingroup Hoversel
 *
 */
EAPI Eina_Bool elm_hoversel_horizontal_get(const Eo *obj);

/**
 *
 * @brief Set the Hover parent
 *
 * Sets the hover parent object, the area that will be darkened when the
 * hoversel is clicked. Should probably be the window that the hoversel is
 * in. See @ref Hover objects for more information.
 *
 * @ingroup Hoversel
 *
 * @param[in] parent The parent to use
 */
EAPI void elm_hoversel_hover_parent_set(Eo *obj, Evas_Object *parent);

/**
 *
 * @brief Get the Hover parent
 *
 * @return The used parent
 *
 * Get the hover parent object.
 *
 * @see elm_hoversel_hover_parent_set()
 *
 * @ingroup Hoversel
 *
 */
EAPI Evas_Object *elm_hoversel_hover_parent_get(const Eo *obj);

/**
 *
 * @brief Returns whether the hoversel is expanded.
 *
 * @return This will return @c EINA_TRUE if the hoversel is expanded or
 * @c EINA_FALSE if it is not expanded.
 *
 * @ingroup Hoversel
 *
 */
EAPI Eina_Bool elm_hoversel_expanded_get(const Eo *obj);

/**
 *
 * @brief Get the list of items within the given hoversel.
 *
 * @return Returns a list of Elm_Object_Item
 *
 * @see elm_hoversel_item_add()
 *
 * @ingroup Hoversel
 *
 */
EAPI const Eina_List *elm_hoversel_items_get(const Eo *obj);

/**
 *
 * @brief This triggers the hoversel popup from code, the same as if the user
 * had clicked the button.
 *
 * @ingroup Hoversel
 *
 */
EAPI void elm_hoversel_hover_begin(Eo *obj);

/**
 *
 * @brief This will remove all the children items from the hoversel.
 *
 * @warning Should @b not be called while the hoversel is active; use
 * elm_hoversel_expanded_get() to check first.
 *
 * @see elm_object_item_del()
 *
 * @ingroup Hoversel
 *
 */
EAPI void elm_hoversel_clear(Eo *obj);

/**
 *
 * @brief This dismisses the hoversel popup as if the user had clicked
 * outside the hover.
 *
 * @ingroup Hoversel
 *
 */
EAPI void elm_hoversel_hover_end(Eo *obj);

/**
 *
 * @brief Add an item to the hoversel button
 *
 * @return A handle to the item added.
 *
 * This adds an item to the hoversel to show when it is clicked. Note: if you
 * need to use an icon from an edje file then use
 * elm_hoversel_item_icon_set() right after this function, and set
 * icon_file to NULL here.
 *
 * For more information on what @p icon_file and @p icon_type are, see the
 * @ref Icon "icon documentation".
 *
 * @ingroup Hoversel
 *
 * @param[in] label The text label to use for the item (NULL if not desired)
 * @param[in] icon_file An image file path on disk to use for the icon or standard
icon name (NULL if not desired)
 * @param[in] icon_type The icon type if relevant
 * @param[in] func Convenience function to call when this item is selected. The last
parameter @p event_info of @c func is the selected item pointer.
 * @param[in] data Data to pass to item-related functions
 */
EAPI Elm_Object_Item *elm_hoversel_item_add(Eo *obj, const char *label, const char *icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void *data);

#endif
