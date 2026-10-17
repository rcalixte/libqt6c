#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqbrush.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libq3dtheme.hpp"
#include "libq3dtheme.h"

Q3DTheme* q_3dtheme_new() {
    return Q3DTheme_New();
}

Q3DTheme* q_3dtheme_new2(int32_t themeType) {
    return Q3DTheme_New2(themeType);
}

Q3DTheme* q_3dtheme_new3(void* parent) {
    return Q3DTheme_New3((QObject*)parent);
}

Q3DTheme* q_3dtheme_new4(int32_t themeType, void* parent) {
    return Q3DTheme_New4(themeType, (QObject*)parent);
}

const QMetaObject* q_3dtheme_meta_object(const void* self) {
    return Q3DTheme_MetaObject((Q3DTheme*)self);
}

void q_3dtheme_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    Q3DTheme_OnMetaObject((Q3DTheme*)self, (intptr_t)callback);
}

const QMetaObject* q_3dtheme_super_meta_object(const void* self) {
    return Q3DTheme_SuperMetaObject((Q3DTheme*)self);
}

void* q_3dtheme_metacast(void* self, const char* param1) {
    return Q3DTheme_Metacast((Q3DTheme*)self, param1);
}

void q_3dtheme_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Q3DTheme_OnMetacast((Q3DTheme*)self, (intptr_t)callback);
}

void* q_3dtheme_super_metacast(void* self, const char* param1) {
    return Q3DTheme_SuperMetacast((Q3DTheme*)self, param1);
}

int32_t q_3dtheme_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Q3DTheme_Metacall((Q3DTheme*)self, param1, param2, param3);
}

void q_3dtheme_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Q3DTheme_OnMetacall((Q3DTheme*)self, (intptr_t)callback);
}

int32_t q_3dtheme_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Q3DTheme_SuperMetacall((Q3DTheme*)self, param1, param2, param3);
}

const char* q_3dtheme_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dtheme_set_type(void* self, int32_t themeType) {
    Q3DTheme_SetType((Q3DTheme*)self, themeType);
}

int32_t q_3dtheme_type(const void* self) {
    return Q3DTheme_Type((Q3DTheme*)self);
}

void q_3dtheme_set_base_colors(void* self, libqt_list /* of QColor* */ colors) {
    Q3DTheme_SetBaseColors((Q3DTheme*)self, colors);
}

libqt_list /* of QColor* */ q_3dtheme_base_colors(const void* self) {
    libqt_list _arr = Q3DTheme_BaseColors((Q3DTheme*)self);
    return _arr;
}

void q_3dtheme_set_background_color(void* self, const void* color) {
    Q3DTheme_SetBackgroundColor((Q3DTheme*)self, (QColor*)color);
}

QColor* q_3dtheme_background_color(const void* self) {
    return Q3DTheme_BackgroundColor((Q3DTheme*)self);
}

void q_3dtheme_set_window_color(void* self, const void* color) {
    Q3DTheme_SetWindowColor((Q3DTheme*)self, (QColor*)color);
}

QColor* q_3dtheme_window_color(const void* self) {
    return Q3DTheme_WindowColor((Q3DTheme*)self);
}

void q_3dtheme_set_label_text_color(void* self, const void* color) {
    Q3DTheme_SetLabelTextColor((Q3DTheme*)self, (QColor*)color);
}

QColor* q_3dtheme_label_text_color(const void* self) {
    return Q3DTheme_LabelTextColor((Q3DTheme*)self);
}

void q_3dtheme_set_label_background_color(void* self, const void* color) {
    Q3DTheme_SetLabelBackgroundColor((Q3DTheme*)self, (QColor*)color);
}

QColor* q_3dtheme_label_background_color(const void* self) {
    return Q3DTheme_LabelBackgroundColor((Q3DTheme*)self);
}

void q_3dtheme_set_grid_line_color(void* self, const void* color) {
    Q3DTheme_SetGridLineColor((Q3DTheme*)self, (QColor*)color);
}

QColor* q_3dtheme_grid_line_color(const void* self) {
    return Q3DTheme_GridLineColor((Q3DTheme*)self);
}

void q_3dtheme_set_single_highlight_color(void* self, const void* color) {
    Q3DTheme_SetSingleHighlightColor((Q3DTheme*)self, (QColor*)color);
}

QColor* q_3dtheme_single_highlight_color(const void* self) {
    return Q3DTheme_SingleHighlightColor((Q3DTheme*)self);
}

void q_3dtheme_set_multi_highlight_color(void* self, const void* color) {
    Q3DTheme_SetMultiHighlightColor((Q3DTheme*)self, (QColor*)color);
}

QColor* q_3dtheme_multi_highlight_color(const void* self) {
    return Q3DTheme_MultiHighlightColor((Q3DTheme*)self);
}

void q_3dtheme_set_light_color(void* self, const void* color) {
    Q3DTheme_SetLightColor((Q3DTheme*)self, (QColor*)color);
}

QColor* q_3dtheme_light_color(const void* self) {
    return Q3DTheme_LightColor((Q3DTheme*)self);
}

void q_3dtheme_set_base_gradients(void* self, libqt_list /* of QLinearGradient* */ gradients) {
    Q3DTheme_SetBaseGradients((Q3DTheme*)self, gradients);
}

libqt_list /* of QLinearGradient* */ q_3dtheme_base_gradients(const void* self) {
    libqt_list _arr = Q3DTheme_BaseGradients((Q3DTheme*)self);
    return _arr;
}

void q_3dtheme_set_single_highlight_gradient(void* self, const void* gradient) {
    Q3DTheme_SetSingleHighlightGradient((Q3DTheme*)self, (QLinearGradient*)gradient);
}

QLinearGradient* q_3dtheme_single_highlight_gradient(const void* self) {
    return Q3DTheme_SingleHighlightGradient((Q3DTheme*)self);
}

void q_3dtheme_set_multi_highlight_gradient(void* self, const void* gradient) {
    Q3DTheme_SetMultiHighlightGradient((Q3DTheme*)self, (QLinearGradient*)gradient);
}

QLinearGradient* q_3dtheme_multi_highlight_gradient(const void* self) {
    return Q3DTheme_MultiHighlightGradient((Q3DTheme*)self);
}

void q_3dtheme_set_light_strength(void* self, float strength) {
    Q3DTheme_SetLightStrength((Q3DTheme*)self, strength);
}

float q_3dtheme_light_strength(const void* self) {
    return Q3DTheme_LightStrength((Q3DTheme*)self);
}

void q_3dtheme_set_ambient_light_strength(void* self, float strength) {
    Q3DTheme_SetAmbientLightStrength((Q3DTheme*)self, strength);
}

float q_3dtheme_ambient_light_strength(const void* self) {
    return Q3DTheme_AmbientLightStrength((Q3DTheme*)self);
}

void q_3dtheme_set_highlight_light_strength(void* self, float strength) {
    Q3DTheme_SetHighlightLightStrength((Q3DTheme*)self, strength);
}

float q_3dtheme_highlight_light_strength(const void* self) {
    return Q3DTheme_HighlightLightStrength((Q3DTheme*)self);
}

void q_3dtheme_set_label_border_enabled(void* self, bool enabled) {
    Q3DTheme_SetLabelBorderEnabled((Q3DTheme*)self, enabled);
}

bool q_3dtheme_is_label_border_enabled(const void* self) {
    return Q3DTheme_IsLabelBorderEnabled((Q3DTheme*)self);
}

void q_3dtheme_set_font(void* self, const void* font) {
    Q3DTheme_SetFont((Q3DTheme*)self, (QFont*)font);
}

QFont* q_3dtheme_font(const void* self) {
    return Q3DTheme_Font((Q3DTheme*)self);
}

void q_3dtheme_set_background_enabled(void* self, bool enabled) {
    Q3DTheme_SetBackgroundEnabled((Q3DTheme*)self, enabled);
}

bool q_3dtheme_is_background_enabled(const void* self) {
    return Q3DTheme_IsBackgroundEnabled((Q3DTheme*)self);
}

void q_3dtheme_set_grid_enabled(void* self, bool enabled) {
    Q3DTheme_SetGridEnabled((Q3DTheme*)self, enabled);
}

bool q_3dtheme_is_grid_enabled(const void* self) {
    return Q3DTheme_IsGridEnabled((Q3DTheme*)self);
}

void q_3dtheme_set_label_background_enabled(void* self, bool enabled) {
    Q3DTheme_SetLabelBackgroundEnabled((Q3DTheme*)self, enabled);
}

bool q_3dtheme_is_label_background_enabled(const void* self) {
    return Q3DTheme_IsLabelBackgroundEnabled((Q3DTheme*)self);
}

void q_3dtheme_set_color_style(void* self, int32_t style) {
    Q3DTheme_SetColorStyle((Q3DTheme*)self, style);
}

int32_t q_3dtheme_color_style(const void* self) {
    return Q3DTheme_ColorStyle((Q3DTheme*)self);
}

void q_3dtheme_type_changed(void* self, int32_t themeType) {
    Q3DTheme_TypeChanged((Q3DTheme*)self, themeType);
}

void q_3dtheme_on_type_changed(void* self, void (*callback)(void*, int32_t)) {
    Q3DTheme_Connect_TypeChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_base_colors_changed(void* self, libqt_list /* of QColor* */ colors) {
    Q3DTheme_BaseColorsChanged((Q3DTheme*)self, colors);
}

void q_3dtheme_on_base_colors_changed(void* self, void (*callback)(void*, libqt_list /* of QColor* */)) {
    Q3DTheme_Connect_BaseColorsChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_background_color_changed(void* self, const void* color) {
    Q3DTheme_BackgroundColorChanged((Q3DTheme*)self, (QColor*)color);
}

void q_3dtheme_on_background_color_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DTheme_Connect_BackgroundColorChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_window_color_changed(void* self, const void* color) {
    Q3DTheme_WindowColorChanged((Q3DTheme*)self, (QColor*)color);
}

void q_3dtheme_on_window_color_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DTheme_Connect_WindowColorChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_label_text_color_changed(void* self, const void* color) {
    Q3DTheme_LabelTextColorChanged((Q3DTheme*)self, (QColor*)color);
}

void q_3dtheme_on_label_text_color_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DTheme_Connect_LabelTextColorChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_label_background_color_changed(void* self, const void* color) {
    Q3DTheme_LabelBackgroundColorChanged((Q3DTheme*)self, (QColor*)color);
}

void q_3dtheme_on_label_background_color_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DTheme_Connect_LabelBackgroundColorChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_grid_line_color_changed(void* self, const void* color) {
    Q3DTheme_GridLineColorChanged((Q3DTheme*)self, (QColor*)color);
}

void q_3dtheme_on_grid_line_color_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DTheme_Connect_GridLineColorChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_single_highlight_color_changed(void* self, const void* color) {
    Q3DTheme_SingleHighlightColorChanged((Q3DTheme*)self, (QColor*)color);
}

void q_3dtheme_on_single_highlight_color_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DTheme_Connect_SingleHighlightColorChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_multi_highlight_color_changed(void* self, const void* color) {
    Q3DTheme_MultiHighlightColorChanged((Q3DTheme*)self, (QColor*)color);
}

void q_3dtheme_on_multi_highlight_color_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DTheme_Connect_MultiHighlightColorChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_light_color_changed(void* self, const void* color) {
    Q3DTheme_LightColorChanged((Q3DTheme*)self, (QColor*)color);
}

void q_3dtheme_on_light_color_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DTheme_Connect_LightColorChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_base_gradients_changed(void* self, libqt_list /* of QLinearGradient* */ gradients) {
    Q3DTheme_BaseGradientsChanged((Q3DTheme*)self, gradients);
}

void q_3dtheme_on_base_gradients_changed(void* self, void (*callback)(void*, libqt_list /* of QLinearGradient* */)) {
    Q3DTheme_Connect_BaseGradientsChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_single_highlight_gradient_changed(void* self, const void* gradient) {
    Q3DTheme_SingleHighlightGradientChanged((Q3DTheme*)self, (QLinearGradient*)gradient);
}

void q_3dtheme_on_single_highlight_gradient_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DTheme_Connect_SingleHighlightGradientChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_multi_highlight_gradient_changed(void* self, const void* gradient) {
    Q3DTheme_MultiHighlightGradientChanged((Q3DTheme*)self, (QLinearGradient*)gradient);
}

void q_3dtheme_on_multi_highlight_gradient_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DTheme_Connect_MultiHighlightGradientChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_light_strength_changed(void* self, float strength) {
    Q3DTheme_LightStrengthChanged((Q3DTheme*)self, strength);
}

void q_3dtheme_on_light_strength_changed(void* self, void (*callback)(void*, float)) {
    Q3DTheme_Connect_LightStrengthChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_ambient_light_strength_changed(void* self, float strength) {
    Q3DTheme_AmbientLightStrengthChanged((Q3DTheme*)self, strength);
}

void q_3dtheme_on_ambient_light_strength_changed(void* self, void (*callback)(void*, float)) {
    Q3DTheme_Connect_AmbientLightStrengthChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_highlight_light_strength_changed(void* self, float strength) {
    Q3DTheme_HighlightLightStrengthChanged((Q3DTheme*)self, strength);
}

void q_3dtheme_on_highlight_light_strength_changed(void* self, void (*callback)(void*, float)) {
    Q3DTheme_Connect_HighlightLightStrengthChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_label_border_enabled_changed(void* self, bool enabled) {
    Q3DTheme_LabelBorderEnabledChanged((Q3DTheme*)self, enabled);
}

void q_3dtheme_on_label_border_enabled_changed(void* self, void (*callback)(void*, bool)) {
    Q3DTheme_Connect_LabelBorderEnabledChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_font_changed(void* self, const void* font) {
    Q3DTheme_FontChanged((Q3DTheme*)self, (QFont*)font);
}

void q_3dtheme_on_font_changed(void* self, void (*callback)(void*, const void*)) {
    Q3DTheme_Connect_FontChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_background_enabled_changed(void* self, bool enabled) {
    Q3DTheme_BackgroundEnabledChanged((Q3DTheme*)self, enabled);
}

void q_3dtheme_on_background_enabled_changed(void* self, void (*callback)(void*, bool)) {
    Q3DTheme_Connect_BackgroundEnabledChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_grid_enabled_changed(void* self, bool enabled) {
    Q3DTheme_GridEnabledChanged((Q3DTheme*)self, enabled);
}

void q_3dtheme_on_grid_enabled_changed(void* self, void (*callback)(void*, bool)) {
    Q3DTheme_Connect_GridEnabledChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_label_background_enabled_changed(void* self, bool enabled) {
    Q3DTheme_LabelBackgroundEnabledChanged((Q3DTheme*)self, enabled);
}

void q_3dtheme_on_label_background_enabled_changed(void* self, void (*callback)(void*, bool)) {
    Q3DTheme_Connect_LabelBackgroundEnabledChanged((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_color_style_changed(void* self, int32_t style) {
    Q3DTheme_ColorStyleChanged((Q3DTheme*)self, style);
}

void q_3dtheme_on_color_style_changed(void* self, void (*callback)(void*, int32_t)) {
    Q3DTheme_Connect_ColorStyleChanged((Q3DTheme*)self, (intptr_t)callback);
}

const char* q_3dtheme_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_3dtheme_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_3dtheme_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_3dtheme_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_3dtheme_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_3dtheme_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_3dtheme_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_3dtheme_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_3dtheme_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_3dtheme_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_3dtheme_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_3dtheme_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_3dtheme_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_3dtheme_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_3dtheme_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_3dtheme_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_3dtheme_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_3dtheme_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_3dtheme_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_3dtheme_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_3dtheme_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_3dtheme_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_3dtheme_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_3dtheme_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_3dtheme_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_3dtheme_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_3dtheme_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_3dtheme_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_3dtheme_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_3dtheme_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_3dtheme_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_3dtheme_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_3dtheme_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_3dtheme_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_3dtheme_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_3dtheme_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_3dtheme_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_3dtheme_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_3dtheme_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_3dtheme_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_3dtheme_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_3dtheme_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_3dtheme_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_3dtheme_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_3dtheme_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_3dtheme_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_3dtheme_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_3dtheme_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_3dtheme_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_3dtheme_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_3dtheme_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_3dtheme_event(void* self, void* event) {
    return Q3DTheme_Event((Q3DTheme*)self, (QEvent*)event);
}

bool q_3dtheme_super_event(void* self, void* event) {
    return Q3DTheme_SuperEvent((Q3DTheme*)self, (QEvent*)event);
}

void q_3dtheme_on_event(void* self, bool (*callback)(void*, void*)) {
    Q3DTheme_OnEvent((Q3DTheme*)self, (intptr_t)callback);
}

bool q_3dtheme_event_filter(void* self, void* watched, void* event) {
    return Q3DTheme_EventFilter((Q3DTheme*)self, (QObject*)watched, (QEvent*)event);
}

bool q_3dtheme_super_event_filter(void* self, void* watched, void* event) {
    return Q3DTheme_SuperEventFilter((Q3DTheme*)self, (QObject*)watched, (QEvent*)event);
}

void q_3dtheme_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Q3DTheme_OnEventFilter((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_timer_event(void* self, void* event) {
    Q3DTheme_TimerEvent((Q3DTheme*)self, (QTimerEvent*)event);
}

void q_3dtheme_super_timer_event(void* self, void* event) {
    Q3DTheme_SuperTimerEvent((Q3DTheme*)self, (QTimerEvent*)event);
}

void q_3dtheme_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Q3DTheme_OnTimerEvent((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_child_event(void* self, void* event) {
    Q3DTheme_ChildEvent((Q3DTheme*)self, (QChildEvent*)event);
}

void q_3dtheme_super_child_event(void* self, void* event) {
    Q3DTheme_SuperChildEvent((Q3DTheme*)self, (QChildEvent*)event);
}

void q_3dtheme_on_child_event(void* self, void (*callback)(void*, void*)) {
    Q3DTheme_OnChildEvent((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_custom_event(void* self, void* event) {
    Q3DTheme_CustomEvent((Q3DTheme*)self, (QEvent*)event);
}

void q_3dtheme_super_custom_event(void* self, void* event) {
    Q3DTheme_SuperCustomEvent((Q3DTheme*)self, (QEvent*)event);
}

void q_3dtheme_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Q3DTheme_OnCustomEvent((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_connect_notify(void* self, const void* signal) {
    Q3DTheme_ConnectNotify((Q3DTheme*)self, (QMetaMethod*)signal);
}

void q_3dtheme_super_connect_notify(void* self, const void* signal) {
    Q3DTheme_SuperConnectNotify((Q3DTheme*)self, (QMetaMethod*)signal);
}

void q_3dtheme_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    Q3DTheme_OnConnectNotify((Q3DTheme*)self, (intptr_t)callback);
}

void q_3dtheme_disconnect_notify(void* self, const void* signal) {
    Q3DTheme_DisconnectNotify((Q3DTheme*)self, (QMetaMethod*)signal);
}

void q_3dtheme_super_disconnect_notify(void* self, const void* signal) {
    Q3DTheme_SuperDisconnectNotify((Q3DTheme*)self, (QMetaMethod*)signal);
}

void q_3dtheme_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    Q3DTheme_OnDisconnectNotify((Q3DTheme*)self, (intptr_t)callback);
}

QObject* q_3dtheme_sender(const void* self) {
    return Q3DTheme_Sender((Q3DTheme*)self);
}

int32_t q_3dtheme_sender_signal_index(const void* self) {
    return Q3DTheme_SenderSignalIndex((Q3DTheme*)self);
}

int32_t q_3dtheme_receivers(const void* self, const char* signal) {
    return Q3DTheme_Receivers((Q3DTheme*)self, signal);
}

bool q_3dtheme_is_signal_connected(const void* self, const void* signal) {
    return Q3DTheme_IsSignalConnected((Q3DTheme*)self, (QMetaMethod*)signal);
}

void q_3dtheme_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_3dtheme_delete(void* self) {
    Q3DTheme_Delete((Q3DTheme*)(self));
}
