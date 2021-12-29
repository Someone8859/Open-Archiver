#ifndef _ELC_HOVERSEL_EO_H_
#define _ELC_HOVERSEL_EO_H_

#ifndef _ELC_HOVERSEL_EO_TYPES
#define _ELC_HOVERSEL_EO_TYPES


#endif
#define ELM_HOVERSEL_CLASS elm_hoversel_class_get()

const Eo_Class *elm_hoversel_class_get(void) EINA_CONST;

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
 *
 */
EOAPI void  elm_obj_hoversel_horizontal_set(Eina_Bool horizontal);

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
 *
 */
EOAPI Eina_Bool  elm_obj_hoversel_horizontal_get(void);

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
 *
 */
EOAPI void  elm_obj_hoversel_hover_parent_set(Evas_Object *parent);

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
 *
 */
EOAPI Evas_Object * elm_obj_hoversel_hover_parent_get(void);

/**
 *
 * @brief Returns whether the hoversel is expanded.
 *
 * @return This will return @c EINA_TRUE if the hoversel is expanded or
 * @c EINA_FALSE if it is not expanded.
 *
 * @ingroup Hoversel
 *
 *
 */
EOAPI Eina_Bool  elm_obj_hoversel_expanded_get(void);

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
 *
 */
EOAPI const Eina_List * elm_obj_hoversel_items_get(void);

/**
 *
 * @brief This triggers the hoversel popup from code, the same as if the user
 * had clicked the button.
 *
 * @ingroup Hoversel
 *
 *
 */
EOAPI void  elm_obj_hoversel_hover_begin(void);

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
 *
 */
EOAPI void  elm_obj_hoversel_clear(void);

/**
 *
 * @brief This dismisses the hoversel popup as if the user had clicked
 * outside the hover.
 *
 * @ingroup Hoversel
 *
 *
 */
EOAPI void  elm_obj_hoversel_hover_end(void);

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
 *
 */
EOAPI Elm_Object_Item * elm_obj_hoversel_item_add(const char *label, const char *icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void *data);

EOAPI extern const Eo_Event_Description _ELM_HOVERSEL_EVENT_SELECTED;
EOAPI extern const Eo_Event_Description _ELM_HOVERSEL_EVENT_DISMISSED;
EOAPI extern const Eo_Event_Description _ELM_HOVERSEL_EVENT_EXPANDED;
EOAPI extern const Eo_Event_Description _ELM_HOVERSEL_EVENT_ITEM_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_HOVERSEL_EVENT_ITEM_UNFOCUSED;
EOAPI extern const Eo_Event_Description _ELM_HOVERSEL_EVENT_CLICKED;
EOAPI extern const Eo_Event_Description _ELM_HOVERSEL_EVENT_LANGUAGE_CHANGED;
EOAPI extern const Eo_Event_Description _ELM_HOVERSEL_EVENT_ACCESS_CHANGED;

/**
 * No description
 */
#define ELM_HOVERSEL_EVENT_SELECTED (&(_ELM_HOVERSEL_EVENT_SELECTED))

/**
 * No description
 */
#define ELM_HOVERSEL_EVENT_DISMISSED (&(_ELM_HOVERSEL_EVENT_DISMISSED))

/**
 * No description
 */
#define ELM_HOVERSEL_EVENT_EXPANDED (&(_ELM_HOVERSEL_EVENT_EXPANDED))

/**
 * No description
 */
#define ELM_HOVERSEL_EVENT_ITEM_FOCUSED (&(_ELM_HOVERSEL_EVENT_ITEM_FOCUSED))

/**
 * No description
 */
#define ELM_HOVERSEL_EVENT_ITEM_UNFOCUSED (&(_ELM_HOVERSEL_EVENT_ITEM_UNFOCUSED))

/**
 * No description
 */
#define ELM_HOVERSEL_EVENT_CLICKED (&(_ELM_HOVERSEL_EVENT_CLICKED))

/**
 * No description
 */
#define ELM_HOVERSEL_EVENT_LANGUAGE_CHANGED (&(_ELM_HOVERSEL_EVENT_LANGUAGE_CHANGED))

/**
 * No description
 */
#define ELM_HOVERSEL_EVENT_ACCESS_CHANGED (&(_ELM_HOVERSEL_EVENT_ACCESS_CHANGED))

#endif
