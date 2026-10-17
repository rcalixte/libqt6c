#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQ3DTHEME_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQ3DTHEME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html)

/// q_3dtheme_new constructs a new Q3DTheme object.
///
Q3DTheme* q_3dtheme_new();

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html)

/// q_3dtheme_new2 constructs a new Q3DTheme object.
///
/// @param themeType enum Q3DTheme__Theme
///
Q3DTheme* q_3dtheme_new2(int32_t themeType);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html)

/// q_3dtheme_new3 constructs a new Q3DTheme object.
///
/// @param parent QObject*
///
Q3DTheme* q_3dtheme_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html)

/// q_3dtheme_new4 constructs a new Q3DTheme object.
///
/// @param themeType enum Q3DTheme__Theme
/// @param parent QObject*
///
Q3DTheme* q_3dtheme_new4(int32_t themeType, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const Q3DTheme*
///
const QMetaObject* q_3dtheme_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self Q3DTheme*
/// @param callback const QMetaObject* func(const Q3DTheme* self)
///
void q_3dtheme_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const Q3DTheme*
///
const QMetaObject* q_3dtheme_super_meta_object(const void* self);

/// @param self Q3DTheme*
/// @param param1 const char*
///
void* q_3dtheme_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Q3DTheme*
/// @param callback void* func(Q3DTheme* self, const char* param1)
///
void q_3dtheme_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Q3DTheme*
/// @param param1 const char*
///
void* q_3dtheme_super_metacast(void* self, const char* param1);

/// @param self Q3DTheme*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_3dtheme_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Q3DTheme*
/// @param callback int32_t func(Q3DTheme* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_3dtheme_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Q3DTheme*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_3dtheme_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_3dtheme_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setType)
///
/// @param self Q3DTheme*
/// @param themeType enum Q3DTheme__Theme
///
void q_3dtheme_set_type(void* self, int32_t themeType);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#type)
///
/// @param self const Q3DTheme*
///
/// @return enum Q3DTheme__Theme
///
int32_t q_3dtheme_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setBaseColors)
///
/// @param self Q3DTheme*
/// @param colors libqt_list of QColor*
///
void q_3dtheme_set_base_colors(void* self, libqt_list colors);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#baseColors)
///
/// @param self const Q3DTheme*
///
/// @return libqt_list of QColor*
///
libqt_list q_3dtheme_base_colors(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setBackgroundColor)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_set_background_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#backgroundColor)
///
/// @param self const Q3DTheme*
///
QColor* q_3dtheme_background_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setWindowColor)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_set_window_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#windowColor)
///
/// @param self const Q3DTheme*
///
QColor* q_3dtheme_window_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setLabelTextColor)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_set_label_text_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelTextColor)
///
/// @param self const Q3DTheme*
///
QColor* q_3dtheme_label_text_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setLabelBackgroundColor)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_set_label_background_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBackgroundColor)
///
/// @param self const Q3DTheme*
///
QColor* q_3dtheme_label_background_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setGridLineColor)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_set_grid_line_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#gridLineColor)
///
/// @param self const Q3DTheme*
///
QColor* q_3dtheme_grid_line_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setSingleHighlightColor)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_set_single_highlight_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#singleHighlightColor)
///
/// @param self const Q3DTheme*
///
QColor* q_3dtheme_single_highlight_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setMultiHighlightColor)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_set_multi_highlight_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#multiHighlightColor)
///
/// @param self const Q3DTheme*
///
QColor* q_3dtheme_multi_highlight_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setLightColor)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_set_light_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#lightColor)
///
/// @param self const Q3DTheme*
///
QColor* q_3dtheme_light_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setBaseGradients)
///
/// @param self Q3DTheme*
/// @param gradients libqt_list of QLinearGradient*
///
void q_3dtheme_set_base_gradients(void* self, libqt_list gradients);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#baseGradients)
///
/// @param self const Q3DTheme*
///
/// @return libqt_list of QLinearGradient*
///
libqt_list q_3dtheme_base_gradients(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setSingleHighlightGradient)
///
/// @param self Q3DTheme*
/// @param gradient QLinearGradient*
///
void q_3dtheme_set_single_highlight_gradient(void* self, const void* gradient);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#singleHighlightGradient)
///
/// @param self const Q3DTheme*
///
QLinearGradient* q_3dtheme_single_highlight_gradient(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setMultiHighlightGradient)
///
/// @param self Q3DTheme*
/// @param gradient QLinearGradient*
///
void q_3dtheme_set_multi_highlight_gradient(void* self, const void* gradient);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#multiHighlightGradient)
///
/// @param self const Q3DTheme*
///
QLinearGradient* q_3dtheme_multi_highlight_gradient(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setLightStrength)
///
/// @param self Q3DTheme*
/// @param strength float
///
void q_3dtheme_set_light_strength(void* self, float strength);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#lightStrength)
///
/// @param self const Q3DTheme*
///
float q_3dtheme_light_strength(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setAmbientLightStrength)
///
/// @param self Q3DTheme*
/// @param strength float
///
void q_3dtheme_set_ambient_light_strength(void* self, float strength);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#ambientLightStrength)
///
/// @param self const Q3DTheme*
///
float q_3dtheme_ambient_light_strength(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setHighlightLightStrength)
///
/// @param self Q3DTheme*
/// @param strength float
///
void q_3dtheme_set_highlight_light_strength(void* self, float strength);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#highlightLightStrength)
///
/// @param self const Q3DTheme*
///
float q_3dtheme_highlight_light_strength(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setLabelBorderEnabled)
///
/// @param self Q3DTheme*
/// @param enabled bool
///
void q_3dtheme_set_label_border_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#isLabelBorderEnabled)
///
/// @param self const Q3DTheme*
///
bool q_3dtheme_is_label_border_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setFont)
///
/// @param self Q3DTheme*
/// @param font QFont*
///
void q_3dtheme_set_font(void* self, const void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#font)
///
/// @param self const Q3DTheme*
///
QFont* q_3dtheme_font(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setBackgroundEnabled)
///
/// @param self Q3DTheme*
/// @param enabled bool
///
void q_3dtheme_set_background_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#isBackgroundEnabled)
///
/// @param self const Q3DTheme*
///
bool q_3dtheme_is_background_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setGridEnabled)
///
/// @param self Q3DTheme*
/// @param enabled bool
///
void q_3dtheme_set_grid_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#isGridEnabled)
///
/// @param self const Q3DTheme*
///
bool q_3dtheme_is_grid_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setLabelBackgroundEnabled)
///
/// @param self Q3DTheme*
/// @param enabled bool
///
void q_3dtheme_set_label_background_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#isLabelBackgroundEnabled)
///
/// @param self const Q3DTheme*
///
bool q_3dtheme_is_label_background_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#setColorStyle)
///
/// @param self Q3DTheme*
/// @param style enum Q3DTheme__ColorStyle
///
void q_3dtheme_set_color_style(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#colorStyle)
///
/// @param self const Q3DTheme*
///
/// @return enum Q3DTheme__ColorStyle
///
int32_t q_3dtheme_color_style(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#typeChanged)
///
/// @param self Q3DTheme*
/// @param themeType enum Q3DTheme__Theme
///
void q_3dtheme_type_changed(void* self, int32_t themeType);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#typeChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, enum Q3DTheme__Theme themeType)
///
void q_3dtheme_on_type_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#baseColorsChanged)
///
/// @param self Q3DTheme*
/// @param colors libqt_list of QColor*
///
void q_3dtheme_base_colors_changed(void* self, libqt_list colors);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#baseColorsChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, libqt_list of QColor* colors)
///
void q_3dtheme_on_base_colors_changed(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#backgroundColorChanged)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_background_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#backgroundColorChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QColor* color)
///
void q_3dtheme_on_background_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#windowColorChanged)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_window_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#windowColorChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QColor* color)
///
void q_3dtheme_on_window_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelTextColorChanged)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_label_text_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelTextColorChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QColor* color)
///
void q_3dtheme_on_label_text_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBackgroundColorChanged)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_label_background_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBackgroundColorChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QColor* color)
///
void q_3dtheme_on_label_background_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#gridLineColorChanged)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_grid_line_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#gridLineColorChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QColor* color)
///
void q_3dtheme_on_grid_line_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#singleHighlightColorChanged)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_single_highlight_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#singleHighlightColorChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QColor* color)
///
void q_3dtheme_on_single_highlight_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#multiHighlightColorChanged)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_multi_highlight_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#multiHighlightColorChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QColor* color)
///
void q_3dtheme_on_multi_highlight_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#lightColorChanged)
///
/// @param self Q3DTheme*
/// @param color QColor*
///
void q_3dtheme_light_color_changed(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#lightColorChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QColor* color)
///
void q_3dtheme_on_light_color_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#baseGradientsChanged)
///
/// @param self Q3DTheme*
/// @param gradients libqt_list of QLinearGradient*
///
void q_3dtheme_base_gradients_changed(void* self, libqt_list gradients);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#baseGradientsChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, libqt_list of QLinearGradient* gradients)
///
void q_3dtheme_on_base_gradients_changed(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#singleHighlightGradientChanged)
///
/// @param self Q3DTheme*
/// @param gradient QLinearGradient*
///
void q_3dtheme_single_highlight_gradient_changed(void* self, const void* gradient);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#singleHighlightGradientChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QLinearGradient* gradient)
///
void q_3dtheme_on_single_highlight_gradient_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#multiHighlightGradientChanged)
///
/// @param self Q3DTheme*
/// @param gradient QLinearGradient*
///
void q_3dtheme_multi_highlight_gradient_changed(void* self, const void* gradient);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#multiHighlightGradientChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QLinearGradient* gradient)
///
void q_3dtheme_on_multi_highlight_gradient_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#lightStrengthChanged)
///
/// @param self Q3DTheme*
/// @param strength float
///
void q_3dtheme_light_strength_changed(void* self, float strength);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#lightStrengthChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, float strength)
///
void q_3dtheme_on_light_strength_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#ambientLightStrengthChanged)
///
/// @param self Q3DTheme*
/// @param strength float
///
void q_3dtheme_ambient_light_strength_changed(void* self, float strength);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#ambientLightStrengthChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, float strength)
///
void q_3dtheme_on_ambient_light_strength_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#highlightLightStrengthChanged)
///
/// @param self Q3DTheme*
/// @param strength float
///
void q_3dtheme_highlight_light_strength_changed(void* self, float strength);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#highlightLightStrengthChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, float strength)
///
void q_3dtheme_on_highlight_light_strength_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBorderEnabledChanged)
///
/// @param self Q3DTheme*
/// @param enabled bool
///
void q_3dtheme_label_border_enabled_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBorderEnabledChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, bool enabled)
///
void q_3dtheme_on_label_border_enabled_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#fontChanged)
///
/// @param self Q3DTheme*
/// @param font QFont*
///
void q_3dtheme_font_changed(void* self, const void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#fontChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QFont* font)
///
void q_3dtheme_on_font_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#backgroundEnabledChanged)
///
/// @param self Q3DTheme*
/// @param enabled bool
///
void q_3dtheme_background_enabled_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#backgroundEnabledChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, bool enabled)
///
void q_3dtheme_on_background_enabled_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#gridEnabledChanged)
///
/// @param self Q3DTheme*
/// @param enabled bool
///
void q_3dtheme_grid_enabled_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#gridEnabledChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, bool enabled)
///
void q_3dtheme_on_grid_enabled_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBackgroundEnabledChanged)
///
/// @param self Q3DTheme*
/// @param enabled bool
///
void q_3dtheme_label_background_enabled_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#labelBackgroundEnabledChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, bool enabled)
///
void q_3dtheme_on_label_background_enabled_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#colorStyleChanged)
///
/// @param self Q3DTheme*
/// @param style enum Q3DTheme__ColorStyle
///
void q_3dtheme_color_style_changed(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#colorStyleChanged)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, enum Q3DTheme__ColorStyle style)
///
void q_3dtheme_on_color_style_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_3dtheme_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_3dtheme_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Q3DTheme*
///
const char* q_3dtheme_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Q3DTheme*
/// @param name const char*
///
void q_3dtheme_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const Q3DTheme*
///
bool q_3dtheme_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const Q3DTheme*
///
bool q_3dtheme_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const Q3DTheme*
///
bool q_3dtheme_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const Q3DTheme*
///
bool q_3dtheme_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Q3DTheme*
/// @param b bool
///
bool q_3dtheme_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const Q3DTheme*
///
QThread* q_3dtheme_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Q3DTheme*
/// @param thread QThread*
///
bool q_3dtheme_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DTheme*
/// @param interval int
///
int32_t q_3dtheme_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DTheme*
/// @param time int64_t of nanoseconds
///
int32_t q_3dtheme_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Q3DTheme*
/// @param id int
///
void q_3dtheme_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Q3DTheme*
/// @param id enum Qt__TimerId
///
void q_3dtheme_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const Q3DTheme*
///
/// @return libqt_list of QObject*
///
libqt_list q_3dtheme_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Q3DTheme*
/// @param parent QObject*
///
void q_3dtheme_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Q3DTheme*
/// @param filterObj QObject*
///
void q_3dtheme_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Q3DTheme*
/// @param obj QObject*
///
void q_3dtheme_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_3dtheme_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_3dtheme_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Q3DTheme*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_3dtheme_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dtheme_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_3dtheme_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DTheme*
///
bool q_3dtheme_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DTheme*
/// @param receiver QObject*
///
bool q_3dtheme_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_3dtheme_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const Q3DTheme*
///
void q_3dtheme_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const Q3DTheme*
///
void q_3dtheme_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Q3DTheme*
/// @param name const char*
/// @param value QVariant*
///
bool q_3dtheme_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const Q3DTheme*
/// @param name const char*
///
QVariant* q_3dtheme_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Q3DTheme*
///
const char** q_3dtheme_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Q3DTheme*
///
QBindingStorage* q_3dtheme_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const Q3DTheme*
///
const QBindingStorage* q_3dtheme_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DTheme*
///
void q_3dtheme_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self)
///
void q_3dtheme_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const Q3DTheme*
///
QObject* q_3dtheme_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const Q3DTheme*
/// @param classname const char*
///
bool q_3dtheme_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Q3DTheme*
///
void q_3dtheme_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DTheme*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_3dtheme_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Q3DTheme*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_3dtheme_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_3dtheme_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_3dtheme_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Q3DTheme*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_3dtheme_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DTheme*
/// @param signal const char*
///
bool q_3dtheme_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DTheme*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_3dtheme_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DTheme*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dtheme_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Q3DTheme*
/// @param receiver QObject*
/// @param member const char*
///
bool q_3dtheme_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DTheme*
/// @param param1 QObject*
///
void q_3dtheme_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QObject* param1)
///
void q_3dtheme_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DTheme*
/// @param event QEvent*
///
bool q_3dtheme_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param event QEvent*
///
bool q_3dtheme_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param callback bool func(Q3DTheme* self, QEvent* event)
///
void q_3dtheme_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DTheme*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_3dtheme_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_3dtheme_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param callback bool func(Q3DTheme* self, QObject* watched, QEvent* event)
///
void q_3dtheme_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DTheme*
/// @param event QTimerEvent*
///
void q_3dtheme_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param event QTimerEvent*
///
void q_3dtheme_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QTimerEvent* event)
///
void q_3dtheme_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DTheme*
/// @param event QChildEvent*
///
void q_3dtheme_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param event QChildEvent*
///
void q_3dtheme_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QChildEvent* event)
///
void q_3dtheme_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DTheme*
/// @param event QEvent*
///
void q_3dtheme_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param event QEvent*
///
void q_3dtheme_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QEvent* event)
///
void q_3dtheme_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DTheme*
/// @param signal QMetaMethod*
///
void q_3dtheme_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param signal QMetaMethod*
///
void q_3dtheme_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QMetaMethod* signal)
///
void q_3dtheme_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Q3DTheme*
/// @param signal QMetaMethod*
///
void q_3dtheme_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param signal QMetaMethod*
///
void q_3dtheme_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, QMetaMethod* signal)
///
void q_3dtheme_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DTheme*
///
QObject* q_3dtheme_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DTheme*
///
QObject* q_3dtheme_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param callback QObject* func(Q3DTheme* self)
///
void q_3dtheme_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DTheme*
///
int32_t q_3dtheme_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DTheme*
///
int32_t q_3dtheme_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param callback int32_t func(Q3DTheme* self)
///
void q_3dtheme_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DTheme*
/// @param signal const char*
///
int32_t q_3dtheme_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DTheme*
/// @param signal const char*
///
int32_t q_3dtheme_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param callback int32_t func(Q3DTheme* self, const char* signal)
///
void q_3dtheme_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Q3DTheme*
/// @param signal QMetaMethod*
///
bool q_3dtheme_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Q3DTheme*
/// @param signal QMetaMethod*
///
bool q_3dtheme_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Q3DTheme*
/// @param callback bool func(Q3DTheme* self, QMetaMethod* signal)
///
void q_3dtheme_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Q3DTheme*
/// @param callback void func(Q3DTheme* self, const char* objectName)
///
void q_3dtheme_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#dtor.Q3DTheme)
///
/// Delete this object from C++ memory.
///
/// @param self Q3DTheme*
///
void q_3dtheme_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#public-types)

typedef enum {
    Q3DTHEME_COLORSTYLE_COLORSTYLEUNIFORM = 0,
    Q3DTHEME_COLORSTYLE_COLORSTYLEOBJECTGRADIENT = 1,
    Q3DTHEME_COLORSTYLE_COLORSTYLERANGEGRADIENT = 2
} Q3DTheme__ColorStyle;

/// [Upstream resources](https://doc.qt.io/qt-6/q3dtheme-qtdatavis.html#public-types)

typedef enum {
    Q3DTHEME_THEME_THEMEQT = 0,
    Q3DTHEME_THEME_THEMEPRIMARYCOLORS = 1,
    Q3DTHEME_THEME_THEMEDIGIA = 2,
    Q3DTHEME_THEME_THEMESTONEMOSS = 3,
    Q3DTHEME_THEME_THEMEARMYBLUE = 4,
    Q3DTHEME_THEME_THEMERETRO = 5,
    Q3DTHEME_THEME_THEMEEBONY = 6,
    Q3DTHEME_THEME_THEMEISABELLE = 7,
    Q3DTHEME_THEME_THEMEUSERDEFINED = 8
} Q3DTheme__Theme;

#endif
