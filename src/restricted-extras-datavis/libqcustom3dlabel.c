#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "libqcustom3ditem.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqquaternion.hpp"
#include "../libqvectornd.hpp"
#include "libqcustom3dlabel.hpp"
#include "libqcustom3dlabel.h"

QCustom3DLabel* q_custom3dlabel_new() {
    return QCustom3DLabel_New();
}

QCustom3DLabel* q_custom3dlabel_new2(const char* text, const void* font, const void* position, const void* scaling, const void* rotation) {
    return QCustom3DLabel_New2(qstring(text), (QFont*)font, (QVector3D*)position, (QVector3D*)scaling, (QQuaternion*)rotation);
}

QCustom3DLabel* q_custom3dlabel_new3(void* parent) {
    return QCustom3DLabel_New3((QObject*)parent);
}

QCustom3DLabel* q_custom3dlabel_new4(const char* text, const void* font, const void* position, const void* scaling, const void* rotation, void* parent) {
    return QCustom3DLabel_New4(qstring(text), (QFont*)font, (QVector3D*)position, (QVector3D*)scaling, (QQuaternion*)rotation, (QObject*)parent);
}

const QMetaObject* q_custom3dlabel_meta_object(const void* self) {
    return QCustom3DLabel_MetaObject((QCustom3DLabel*)self);
}

void q_custom3dlabel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QCustom3DLabel_OnMetaObject((QCustom3DLabel*)self, (intptr_t)callback);
}

const QMetaObject* q_custom3dlabel_super_meta_object(const void* self) {
    return QCustom3DLabel_SuperMetaObject((QCustom3DLabel*)self);
}

void* q_custom3dlabel_metacast(void* self, const char* param1) {
    return QCustom3DLabel_Metacast((QCustom3DLabel*)self, param1);
}

void q_custom3dlabel_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QCustom3DLabel_OnMetacast((QCustom3DLabel*)self, (intptr_t)callback);
}

void* q_custom3dlabel_super_metacast(void* self, const char* param1) {
    return QCustom3DLabel_SuperMetacast((QCustom3DLabel*)self, param1);
}

int32_t q_custom3dlabel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCustom3DLabel_Metacall((QCustom3DLabel*)self, param1, param2, param3);
}

void q_custom3dlabel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QCustom3DLabel_OnMetacall((QCustom3DLabel*)self, (intptr_t)callback);
}

int32_t q_custom3dlabel_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCustom3DLabel_SuperMetacall((QCustom3DLabel*)self, param1, param2, param3);
}

const char* q_custom3dlabel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3dlabel_set_text(void* self, const char* text) {
    QCustom3DLabel_SetText((QCustom3DLabel*)self, qstring(text));
}

const char* q_custom3dlabel_text(const void* self) {
    libqt_string _str = QCustom3DLabel_Text((QCustom3DLabel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3dlabel_set_font(void* self, const void* font) {
    QCustom3DLabel_SetFont((QCustom3DLabel*)self, (QFont*)font);
}

QFont* q_custom3dlabel_font(const void* self) {
    return QCustom3DLabel_Font((QCustom3DLabel*)self);
}

void q_custom3dlabel_set_text_color(void* self, const void* color) {
    QCustom3DLabel_SetTextColor((QCustom3DLabel*)self, (QColor*)color);
}

QColor* q_custom3dlabel_text_color(const void* self) {
    return QCustom3DLabel_TextColor((QCustom3DLabel*)self);
}

void q_custom3dlabel_set_background_color(void* self, const void* color) {
    QCustom3DLabel_SetBackgroundColor((QCustom3DLabel*)self, (QColor*)color);
}

QColor* q_custom3dlabel_background_color(const void* self) {
    return QCustom3DLabel_BackgroundColor((QCustom3DLabel*)self);
}

void q_custom3dlabel_set_border_enabled(void* self, bool enabled) {
    QCustom3DLabel_SetBorderEnabled((QCustom3DLabel*)self, enabled);
}

bool q_custom3dlabel_is_border_enabled(const void* self) {
    return QCustom3DLabel_IsBorderEnabled((QCustom3DLabel*)self);
}

void q_custom3dlabel_set_background_enabled(void* self, bool enabled) {
    QCustom3DLabel_SetBackgroundEnabled((QCustom3DLabel*)self, enabled);
}

bool q_custom3dlabel_is_background_enabled(const void* self) {
    return QCustom3DLabel_IsBackgroundEnabled((QCustom3DLabel*)self);
}

void q_custom3dlabel_set_facing_camera(void* self, bool enabled) {
    QCustom3DLabel_SetFacingCamera((QCustom3DLabel*)self, enabled);
}

bool q_custom3dlabel_is_facing_camera(const void* self) {
    return QCustom3DLabel_IsFacingCamera((QCustom3DLabel*)self);
}

void q_custom3dlabel_text_changed(void* self, const char* text) {
    QCustom3DLabel_TextChanged((QCustom3DLabel*)self, qstring(text));
}

void q_custom3dlabel_on_text_changed(void* self, void (*callback)(void*, const char*)) {
    QCustom3DLabel_Connect_TextChanged((QCustom3DLabel*)self, (intptr_t)callback);
}

void q_custom3dlabel_font_changed(void* self, const void* font) {
    QCustom3DLabel_FontChanged((QCustom3DLabel*)self, (QFont*)font);
}

void q_custom3dlabel_on_font_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DLabel_Connect_FontChanged((QCustom3DLabel*)self, (intptr_t)callback);
}

void q_custom3dlabel_text_color_changed(void* self, const void* color) {
    QCustom3DLabel_TextColorChanged((QCustom3DLabel*)self, (QColor*)color);
}

void q_custom3dlabel_on_text_color_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DLabel_Connect_TextColorChanged((QCustom3DLabel*)self, (intptr_t)callback);
}

void q_custom3dlabel_background_color_changed(void* self, const void* color) {
    QCustom3DLabel_BackgroundColorChanged((QCustom3DLabel*)self, (QColor*)color);
}

void q_custom3dlabel_on_background_color_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DLabel_Connect_BackgroundColorChanged((QCustom3DLabel*)self, (intptr_t)callback);
}

void q_custom3dlabel_border_enabled_changed(void* self, bool enabled) {
    QCustom3DLabel_BorderEnabledChanged((QCustom3DLabel*)self, enabled);
}

void q_custom3dlabel_on_border_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DLabel_Connect_BorderEnabledChanged((QCustom3DLabel*)self, (intptr_t)callback);
}

void q_custom3dlabel_background_enabled_changed(void* self, bool enabled) {
    QCustom3DLabel_BackgroundEnabledChanged((QCustom3DLabel*)self, enabled);
}

void q_custom3dlabel_on_background_enabled_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DLabel_Connect_BackgroundEnabledChanged((QCustom3DLabel*)self, (intptr_t)callback);
}

void q_custom3dlabel_facing_camera_changed(void* self, bool enabled) {
    QCustom3DLabel_FacingCameraChanged((QCustom3DLabel*)self, enabled);
}

void q_custom3dlabel_on_facing_camera_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DLabel_Connect_FacingCameraChanged((QCustom3DLabel*)self, (intptr_t)callback);
}

const char* q_custom3dlabel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_custom3dlabel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3dlabel_set_mesh_file(void* self, const char* meshFile) {
    QCustom3DItem_SetMeshFile((QCustom3DItem*)self, qstring(meshFile));
}

const char* q_custom3dlabel_mesh_file(const void* self) {
    libqt_string _str = QCustom3DItem_MeshFile((QCustom3DItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3dlabel_set_texture_file(void* self, const char* textureFile) {
    QCustom3DItem_SetTextureFile((QCustom3DItem*)self, qstring(textureFile));
}

const char* q_custom3dlabel_texture_file(const void* self) {
    libqt_string _str = QCustom3DItem_TextureFile((QCustom3DItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3dlabel_set_position(void* self, const void* position) {
    QCustom3DItem_SetPosition((QCustom3DItem*)self, (QVector3D*)position);
}

QVector3D* q_custom3dlabel_position(const void* self) {
    return QCustom3DItem_Position((QCustom3DItem*)self);
}

void q_custom3dlabel_set_position_absolute(void* self, bool positionAbsolute) {
    QCustom3DItem_SetPositionAbsolute((QCustom3DItem*)self, positionAbsolute);
}

bool q_custom3dlabel_is_position_absolute(const void* self) {
    return QCustom3DItem_IsPositionAbsolute((QCustom3DItem*)self);
}

void q_custom3dlabel_set_scaling(void* self, const void* scaling) {
    QCustom3DItem_SetScaling((QCustom3DItem*)self, (QVector3D*)scaling);
}

QVector3D* q_custom3dlabel_scaling(const void* self) {
    return QCustom3DItem_Scaling((QCustom3DItem*)self);
}

void q_custom3dlabel_set_scaling_absolute(void* self, bool scalingAbsolute) {
    QCustom3DItem_SetScalingAbsolute((QCustom3DItem*)self, scalingAbsolute);
}

bool q_custom3dlabel_is_scaling_absolute(const void* self) {
    return QCustom3DItem_IsScalingAbsolute((QCustom3DItem*)self);
}

void q_custom3dlabel_set_rotation(void* self, const void* rotation) {
    QCustom3DItem_SetRotation((QCustom3DItem*)self, (QQuaternion*)rotation);
}

QQuaternion* q_custom3dlabel_rotation(void* self) {
    return QCustom3DItem_Rotation((QCustom3DItem*)self);
}

void q_custom3dlabel_set_visible(void* self, bool visible) {
    QCustom3DItem_SetVisible((QCustom3DItem*)self, visible);
}

bool q_custom3dlabel_is_visible(const void* self) {
    return QCustom3DItem_IsVisible((QCustom3DItem*)self);
}

void q_custom3dlabel_set_shadow_casting(void* self, bool enabled) {
    QCustom3DItem_SetShadowCasting((QCustom3DItem*)self, enabled);
}

bool q_custom3dlabel_is_shadow_casting(const void* self) {
    return QCustom3DItem_IsShadowCasting((QCustom3DItem*)self);
}

void q_custom3dlabel_set_rotation_axis_and_angle(void* self, const void* axis, float angle) {
    QCustom3DItem_SetRotationAxisAndAngle((QCustom3DItem*)self, (QVector3D*)axis, angle);
}

void q_custom3dlabel_set_texture_image(void* self, const void* textureImage) {
    QCustom3DItem_SetTextureImage((QCustom3DItem*)self, (QImage*)textureImage);
}

void q_custom3dlabel_mesh_file_changed(void* self, const char* meshFile) {
    QCustom3DItem_MeshFileChanged((QCustom3DItem*)self, qstring(meshFile));
}

void q_custom3dlabel_on_mesh_file_changed(void* self, void (*callback)(void*, const char*)) {
    QCustom3DItem_Connect_MeshFileChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dlabel_texture_file_changed(void* self, const char* textureFile) {
    QCustom3DItem_TextureFileChanged((QCustom3DItem*)self, qstring(textureFile));
}

void q_custom3dlabel_on_texture_file_changed(void* self, void (*callback)(void*, const char*)) {
    QCustom3DItem_Connect_TextureFileChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dlabel_position_changed(void* self, const void* position) {
    QCustom3DItem_PositionChanged((QCustom3DItem*)self, (QVector3D*)position);
}

void q_custom3dlabel_on_position_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DItem_Connect_PositionChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dlabel_position_absolute_changed(void* self, bool positionAbsolute) {
    QCustom3DItem_PositionAbsoluteChanged((QCustom3DItem*)self, positionAbsolute);
}

void q_custom3dlabel_on_position_absolute_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DItem_Connect_PositionAbsoluteChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dlabel_scaling_changed(void* self, const void* scaling) {
    QCustom3DItem_ScalingChanged((QCustom3DItem*)self, (QVector3D*)scaling);
}

void q_custom3dlabel_on_scaling_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DItem_Connect_ScalingChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dlabel_rotation_changed(void* self, const void* rotation) {
    QCustom3DItem_RotationChanged((QCustom3DItem*)self, (QQuaternion*)rotation);
}

void q_custom3dlabel_on_rotation_changed(void* self, void (*callback)(void*, const void*)) {
    QCustom3DItem_Connect_RotationChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dlabel_visible_changed(void* self, bool visible) {
    QCustom3DItem_VisibleChanged((QCustom3DItem*)self, visible);
}

void q_custom3dlabel_on_visible_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DItem_Connect_VisibleChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dlabel_shadow_casting_changed(void* self, bool shadowCasting) {
    QCustom3DItem_ShadowCastingChanged((QCustom3DItem*)self, shadowCasting);
}

void q_custom3dlabel_on_shadow_casting_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DItem_Connect_ShadowCastingChanged((QCustom3DItem*)self, (intptr_t)callback);
}

void q_custom3dlabel_scaling_absolute_changed(void* self, bool scalingAbsolute) {
    QCustom3DItem_ScalingAbsoluteChanged((QCustom3DItem*)self, scalingAbsolute);
}

void q_custom3dlabel_on_scaling_absolute_changed(void* self, void (*callback)(void*, bool)) {
    QCustom3DItem_Connect_ScalingAbsoluteChanged((QCustom3DItem*)self, (intptr_t)callback);
}

const char* q_custom3dlabel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_custom3dlabel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_custom3dlabel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_custom3dlabel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_custom3dlabel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_custom3dlabel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_custom3dlabel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_custom3dlabel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_custom3dlabel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_custom3dlabel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_custom3dlabel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_custom3dlabel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_custom3dlabel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_custom3dlabel_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_custom3dlabel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_custom3dlabel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_custom3dlabel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_custom3dlabel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_custom3dlabel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_custom3dlabel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_custom3dlabel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_custom3dlabel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_custom3dlabel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_custom3dlabel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_custom3dlabel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_custom3dlabel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_custom3dlabel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_custom3dlabel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_custom3dlabel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_custom3dlabel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_custom3dlabel_dynamic_property_names\n");
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

QBindingStorage* q_custom3dlabel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_custom3dlabel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_custom3dlabel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_custom3dlabel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_custom3dlabel_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_custom3dlabel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_custom3dlabel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_custom3dlabel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_custom3dlabel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_custom3dlabel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_custom3dlabel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_custom3dlabel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_custom3dlabel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_custom3dlabel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_custom3dlabel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_custom3dlabel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_custom3dlabel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_custom3dlabel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_custom3dlabel_event(void* self, void* event) {
    return QCustom3DLabel_Event((QCustom3DLabel*)self, (QEvent*)event);
}

bool q_custom3dlabel_super_event(void* self, void* event) {
    return QCustom3DLabel_SuperEvent((QCustom3DLabel*)self, (QEvent*)event);
}

void q_custom3dlabel_on_event(void* self, bool (*callback)(void*, void*)) {
    QCustom3DLabel_OnEvent((QCustom3DLabel*)self, (intptr_t)callback);
}

bool q_custom3dlabel_event_filter(void* self, void* watched, void* event) {
    return QCustom3DLabel_EventFilter((QCustom3DLabel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_custom3dlabel_super_event_filter(void* self, void* watched, void* event) {
    return QCustom3DLabel_SuperEventFilter((QCustom3DLabel*)self, (QObject*)watched, (QEvent*)event);
}

void q_custom3dlabel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QCustom3DLabel_OnEventFilter((QCustom3DLabel*)self, (intptr_t)callback);
}

void q_custom3dlabel_timer_event(void* self, void* event) {
    QCustom3DLabel_TimerEvent((QCustom3DLabel*)self, (QTimerEvent*)event);
}

void q_custom3dlabel_super_timer_event(void* self, void* event) {
    QCustom3DLabel_SuperTimerEvent((QCustom3DLabel*)self, (QTimerEvent*)event);
}

void q_custom3dlabel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QCustom3DLabel_OnTimerEvent((QCustom3DLabel*)self, (intptr_t)callback);
}

void q_custom3dlabel_child_event(void* self, void* event) {
    QCustom3DLabel_ChildEvent((QCustom3DLabel*)self, (QChildEvent*)event);
}

void q_custom3dlabel_super_child_event(void* self, void* event) {
    QCustom3DLabel_SuperChildEvent((QCustom3DLabel*)self, (QChildEvent*)event);
}

void q_custom3dlabel_on_child_event(void* self, void (*callback)(void*, void*)) {
    QCustom3DLabel_OnChildEvent((QCustom3DLabel*)self, (intptr_t)callback);
}

void q_custom3dlabel_custom_event(void* self, void* event) {
    QCustom3DLabel_CustomEvent((QCustom3DLabel*)self, (QEvent*)event);
}

void q_custom3dlabel_super_custom_event(void* self, void* event) {
    QCustom3DLabel_SuperCustomEvent((QCustom3DLabel*)self, (QEvent*)event);
}

void q_custom3dlabel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QCustom3DLabel_OnCustomEvent((QCustom3DLabel*)self, (intptr_t)callback);
}

void q_custom3dlabel_connect_notify(void* self, const void* signal) {
    QCustom3DLabel_ConnectNotify((QCustom3DLabel*)self, (QMetaMethod*)signal);
}

void q_custom3dlabel_super_connect_notify(void* self, const void* signal) {
    QCustom3DLabel_SuperConnectNotify((QCustom3DLabel*)self, (QMetaMethod*)signal);
}

void q_custom3dlabel_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QCustom3DLabel_OnConnectNotify((QCustom3DLabel*)self, (intptr_t)callback);
}

void q_custom3dlabel_disconnect_notify(void* self, const void* signal) {
    QCustom3DLabel_DisconnectNotify((QCustom3DLabel*)self, (QMetaMethod*)signal);
}

void q_custom3dlabel_super_disconnect_notify(void* self, const void* signal) {
    QCustom3DLabel_SuperDisconnectNotify((QCustom3DLabel*)self, (QMetaMethod*)signal);
}

void q_custom3dlabel_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QCustom3DLabel_OnDisconnectNotify((QCustom3DLabel*)self, (intptr_t)callback);
}

QObject* q_custom3dlabel_sender(const void* self) {
    return QCustom3DLabel_Sender((QCustom3DLabel*)self);
}

int32_t q_custom3dlabel_sender_signal_index(const void* self) {
    return QCustom3DLabel_SenderSignalIndex((QCustom3DLabel*)self);
}

int32_t q_custom3dlabel_receivers(const void* self, const char* signal) {
    return QCustom3DLabel_Receivers((QCustom3DLabel*)self, signal);
}

bool q_custom3dlabel_is_signal_connected(const void* self, const void* signal) {
    return QCustom3DLabel_IsSignalConnected((QCustom3DLabel*)self, (QMetaMethod*)signal);
}

void q_custom3dlabel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_custom3dlabel_delete(void* self) {
    QCustom3DLabel_Delete((QCustom3DLabel*)(self));
}
