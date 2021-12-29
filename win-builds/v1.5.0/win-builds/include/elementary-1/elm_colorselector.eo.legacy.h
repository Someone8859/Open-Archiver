#ifndef _ELM_COLORSELECTOR_EO_LEGACY_H_
#define _ELM_COLORSELECTOR_EO_LEGACY_H_


/**
 *
 * Set color to colorselector
 *
 * @ingroup Colorselector
 *
 * @param[in] r r-value of color
 * @param[in] g g-value of color
 * @param[in] b b-value of color
 * @param[in] a a-value of color
 */
EAPI void elm_colorselector_color_set(Eo *obj, int r, int g, int b, int a);

/**
 *
 * Get current color from colorselector
 *
 * @ingroup Colorselector
 *
 * @param[out] r r-value of color
 * @param[out] g g-value of color
 * @param[out] b b-value of color
 * @param[out] a a-value of color
 */
EAPI void elm_colorselector_color_get(const Eo *obj, int *r, int *g, int *b, int *a);

/**
 *
 * Set current palette's name
 *
 * When colorpalette name is set, colors will be loaded from and saved to config
 * using the set name. If no name is set then colors will be loaded from or
 * saved to "default" config.
 *
 * @ingroup Colorselector
 *
 * @param[in] palette_name Name of palette
 */
EAPI void elm_colorselector_palette_name_set(Eo *obj, const char *palette_name);

/**
 *
 * Get current palette's name
 *
 * @return Name of palette
 *
 * Returns the currently set palette name using which colors will be
 * saved/loaded in to config.
 *
 * @ingroup Colorselector
 *
 */
EAPI const char *elm_colorselector_palette_name_get(const Eo *obj);

/**
 *
 * Set Colorselector's mode.
 *
 * Colorselector supports three modes palette only, selector only and both.
 *
 * @ingroup Colorselector
 *
 * @param[in] mode Elm_Colorselector_Mode
 */
EAPI void elm_colorselector_mode_set(Eo *obj, Elm_Colorselector_Mode mode);

/**
 *
 * Get Colorselector's mode.
 *
 * @return mode The current mode of colorselector
 *
 * @ingroup Colorselector
 *
 */
EAPI Elm_Colorselector_Mode elm_colorselector_mode_get(const Eo *obj);

/**
 *
 * Get list of palette items.
 *
 * @return The list of color palette items.
 *
 * Note That palette item list is internally managed by colorselector widget and
 * it should not be freed/modified by application.
 *
 * @since 1.9
 *
 * @ingroup Colorselector
 *
 */
EAPI const Eina_List *elm_colorselector_palette_items_get(const Eo *obj);

/**
 *
 * Get the selected item in colorselector palette.
 *
 * @return The selected item, or NULL if none is selected.
 *
 * @since 1.9
 * @ingroup Colorselector
 *
 */
EAPI Elm_Object_Item *elm_colorselector_palette_selected_item_get(const Eo *obj);

/**
 *
 * Add a new color item to palette.
 *
 * @return A new color palette Item.
 *
 * @ingroup Colorselector
 *
 * @param[in] r r-value of color
 * @param[in] g g-value of color
 * @param[in] b b-value of color
 * @param[in] a a-value of color
 */
EAPI Elm_Object_Item *elm_colorselector_palette_color_add(Eo *obj, int r, int g, int b, int a);

/**
 *
 * Clear the palette items.
 *
 * @ingroup Colorselector
 *
 */
EAPI void elm_colorselector_palette_clear(Eo *obj);

#endif
