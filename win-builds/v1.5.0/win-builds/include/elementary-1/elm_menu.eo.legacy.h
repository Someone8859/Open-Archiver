#ifndef _ELM_MENU_EO_LEGACY_H_
#define _ELM_MENU_EO_LEGACY_H_


/**
 *
 * @brief Get the selected item in the menu
 *
 * @return The selected item, or NULL if none
 *
 * @see elm_menu_item_selected_get()
 * @see elm_menu_item_selected_set()
 *
 * @ingroup Menu
 *
 */
EAPI Elm_Object_Item *elm_menu_selected_item_get(const Eo *obj);

/**
 *
 * @brief Returns a list of @p item's items.
 *
 * @return An Eina_List* of @p item's items
 *
 * @ingroup Menu
 *
 */
EAPI const Eina_List *elm_menu_items_get(const Eo *obj);

/**
 *
 * @brief Get the first item in the menu
 *
 * @return The first item, or NULL if none
 *
 * @ingroup Menu
 *
 */
EAPI Elm_Object_Item *elm_menu_first_item_get(const Eo *obj);

/**
 *
 * @brief Get the last item in the menu
 *
 * @return The last item, or NULL if none
 *
 * @ingroup Menu
 *
 */
EAPI Elm_Object_Item *elm_menu_last_item_get(const Eo *obj);

/**
 *
 * @brief Move the menu to a new position
 *
 * Sets the top-left position of the menu to (@p x,@p y).
 *
 * @note @p x and @p y coordinates are relative to parent.
 *
 * @ingroup Menu
 *
 * @param[in] x The new position.
 * @param[in] y The new position.
 */
EAPI void elm_menu_move(Eo *obj, Evas_Coord x, Evas_Coord y);

/**
 *
 * @brief Add an item at the end of the given menu widget
 *
 * @return Returns the new item.
 *
 * @note This function does not accept relative icon path.
 *
 * @ingroup Menu
 *
 * @param[in] parent The parent menu item (optional)
 * @param[in] icon An icon display on the item. The icon will be destroyed by the menu.
 * @param[in] label The label of the item.
 * @param[in] func Function called when the user select the item.
 * @param[in] data Data sent by the callback.
 */
EAPI Elm_Object_Item *elm_menu_item_add(Eo *obj, Elm_Object_Item *parent, const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

/**
 *
 * @brief Close a opened menu
 *
 * @return void
 *
 * Hides the menu and all it's sub-menus.
 *
 * @ingroup Menu
 *
 */
EAPI void elm_menu_close(Eo *obj);

/**
 *
 * @brief Add a separator item to menu @p obj under @p parent.
 *
 * @return The created item or NULL on failure
 *
 * This is item is a @ref Separator.
 *
 * @ingroup Menu
 *
 * @param[in] parent The item to add the separator under
 */
EAPI Elm_Object_Item *elm_menu_item_separator_add(Eo *obj, Elm_Object_Item *parent);

#endif
