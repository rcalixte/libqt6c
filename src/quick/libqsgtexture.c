#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "libqsgtexture.hpp"
#include "libqsgtexture.h"

QSGTexture* q_sgtexture_new() {
    return QSGTexture_New();
}

const QMetaObject* q_sgtexture_meta_object(const void* self) {
    return QSGTexture_MetaObject((QSGTexture*)self);
}

void q_sgtexture_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QSGTexture_OnMetaObject((QSGTexture*)self, (intptr_t)callback);
}

const QMetaObject* q_sgtexture_super_meta_object(const void* self) {
    return QSGTexture_SuperMetaObject((QSGTexture*)self);
}

void* q_sgtexture_metacast(void* self, const char* param1) {
    return QSGTexture_Metacast((QSGTexture*)self, param1);
}

void q_sgtexture_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSGTexture_OnMetacast((QSGTexture*)self, (intptr_t)callback);
}

void* q_sgtexture_super_metacast(void* self, const char* param1) {
    return QSGTexture_SuperMetacast((QSGTexture*)self, param1);
}

int32_t q_sgtexture_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSGTexture_Metacall((QSGTexture*)self, param1, param2, param3);
}

void q_sgtexture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSGTexture_OnMetacall((QSGTexture*)self, (intptr_t)callback);
}

int32_t q_sgtexture_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSGTexture_SuperMetacall((QSGTexture*)self, param1, param2, param3);
}

const char* q_sgtexture_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_sgtexture_comparison_key(const void* self) {
    return QSGTexture_ComparisonKey((QSGTexture*)self);
}

void q_sgtexture_on_comparison_key(const void* self, int64_t (*callback)(const void*)) {
    QSGTexture_OnComparisonKey((QSGTexture*)self, (intptr_t)callback);
}

QSize* q_sgtexture_texture_size(const void* self) {
    return QSGTexture_TextureSize((QSGTexture*)self);
}

void q_sgtexture_on_texture_size(const void* self, QSize* (*callback)(const void*)) {
    QSGTexture_OnTextureSize((QSGTexture*)self, (intptr_t)callback);
}

bool q_sgtexture_has_alpha_channel(const void* self) {
    return QSGTexture_HasAlphaChannel((QSGTexture*)self);
}

void q_sgtexture_on_has_alpha_channel(const void* self, bool (*callback)(const void*)) {
    QSGTexture_OnHasAlphaChannel((QSGTexture*)self, (intptr_t)callback);
}

bool q_sgtexture_has_mipmaps(const void* self) {
    return QSGTexture_HasMipmaps((QSGTexture*)self);
}

void q_sgtexture_on_has_mipmaps(const void* self, bool (*callback)(const void*)) {
    QSGTexture_OnHasMipmaps((QSGTexture*)self, (intptr_t)callback);
}

QRectF* q_sgtexture_normalized_texture_sub_rect(const void* self) {
    return QSGTexture_NormalizedTextureSubRect((QSGTexture*)self);
}

void q_sgtexture_on_normalized_texture_sub_rect(const void* self, QRectF* (*callback)(const void*)) {
    QSGTexture_OnNormalizedTextureSubRect((QSGTexture*)self, (intptr_t)callback);
}

QRectF* q_sgtexture_super_normalized_texture_sub_rect(const void* self) {
    return QSGTexture_SuperNormalizedTextureSubRect((QSGTexture*)self);
}

bool q_sgtexture_is_atlas_texture(const void* self) {
    return QSGTexture_IsAtlasTexture((QSGTexture*)self);
}

void q_sgtexture_on_is_atlas_texture(const void* self, bool (*callback)(const void*)) {
    QSGTexture_OnIsAtlasTexture((QSGTexture*)self, (intptr_t)callback);
}

bool q_sgtexture_super_is_atlas_texture(const void* self) {
    return QSGTexture_SuperIsAtlasTexture((QSGTexture*)self);
}

void q_sgtexture_set_mipmap_filtering(void* self, int32_t filter) {
    QSGTexture_SetMipmapFiltering((QSGTexture*)self, filter);
}

int32_t q_sgtexture_mipmap_filtering(const void* self) {
    return QSGTexture_MipmapFiltering((QSGTexture*)self);
}

void q_sgtexture_set_filtering(void* self, int32_t filter) {
    QSGTexture_SetFiltering((QSGTexture*)self, filter);
}

int32_t q_sgtexture_filtering(const void* self) {
    return QSGTexture_Filtering((QSGTexture*)self);
}

void q_sgtexture_set_anisotropy_level(void* self, int32_t level) {
    QSGTexture_SetAnisotropyLevel((QSGTexture*)self, level);
}

int32_t q_sgtexture_anisotropy_level(const void* self) {
    return QSGTexture_AnisotropyLevel((QSGTexture*)self);
}

void q_sgtexture_set_horizontal_wrap_mode(void* self, int32_t hwrap) {
    QSGTexture_SetHorizontalWrapMode((QSGTexture*)self, hwrap);
}

int32_t q_sgtexture_horizontal_wrap_mode(const void* self) {
    return QSGTexture_HorizontalWrapMode((QSGTexture*)self);
}

void q_sgtexture_set_vertical_wrap_mode(void* self, int32_t vwrap) {
    QSGTexture_SetVerticalWrapMode((QSGTexture*)self, vwrap);
}

int32_t q_sgtexture_vertical_wrap_mode(const void* self) {
    return QSGTexture_VerticalWrapMode((QSGTexture*)self);
}

QRectF* q_sgtexture_convert_to_normalized_source_rect(const void* self, const void* rect) {
    return QSGTexture_ConvertToNormalizedSourceRect((QSGTexture*)self, (QRectF*)rect);
}

void* q_sgtexture_resolve_interface(const void* self, const char* name, int revision) {
    return QSGTexture_ResolveInterface((QSGTexture*)self, name, revision);
}

const char* q_sgtexture_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sgtexture_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sgtexture_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sgtexture_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sgtexture_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sgtexture_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sgtexture_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sgtexture_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sgtexture_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sgtexture_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sgtexture_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sgtexture_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_sgtexture_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_sgtexture_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sgtexture_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sgtexture_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sgtexture_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sgtexture_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sgtexture_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sgtexture_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_sgtexture_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sgtexture_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sgtexture_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_sgtexture_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sgtexture_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_sgtexture_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_sgtexture_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_sgtexture_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sgtexture_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sgtexture_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sgtexture_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sgtexture_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sgtexture_dynamic_property_names\n");
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

QBindingStorage* q_sgtexture_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sgtexture_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sgtexture_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sgtexture_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_sgtexture_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sgtexture_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sgtexture_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_sgtexture_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_sgtexture_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_sgtexture_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_sgtexture_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sgtexture_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_sgtexture_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_sgtexture_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_sgtexture_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_sgtexture_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_sgtexture_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sgtexture_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_sgtexture_event(void* self, void* event) {
    return QSGTexture_Event((QSGTexture*)self, (QEvent*)event);
}

bool q_sgtexture_super_event(void* self, void* event) {
    return QSGTexture_SuperEvent((QSGTexture*)self, (QEvent*)event);
}

void q_sgtexture_on_event(void* self, bool (*callback)(void*, void*)) {
    QSGTexture_OnEvent((QSGTexture*)self, (intptr_t)callback);
}

bool q_sgtexture_event_filter(void* self, void* watched, void* event) {
    return QSGTexture_EventFilter((QSGTexture*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sgtexture_super_event_filter(void* self, void* watched, void* event) {
    return QSGTexture_SuperEventFilter((QSGTexture*)self, (QObject*)watched, (QEvent*)event);
}

void q_sgtexture_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSGTexture_OnEventFilter((QSGTexture*)self, (intptr_t)callback);
}

void q_sgtexture_timer_event(void* self, void* event) {
    QSGTexture_TimerEvent((QSGTexture*)self, (QTimerEvent*)event);
}

void q_sgtexture_super_timer_event(void* self, void* event) {
    QSGTexture_SuperTimerEvent((QSGTexture*)self, (QTimerEvent*)event);
}

void q_sgtexture_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSGTexture_OnTimerEvent((QSGTexture*)self, (intptr_t)callback);
}

void q_sgtexture_child_event(void* self, void* event) {
    QSGTexture_ChildEvent((QSGTexture*)self, (QChildEvent*)event);
}

void q_sgtexture_super_child_event(void* self, void* event) {
    QSGTexture_SuperChildEvent((QSGTexture*)self, (QChildEvent*)event);
}

void q_sgtexture_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSGTexture_OnChildEvent((QSGTexture*)self, (intptr_t)callback);
}

void q_sgtexture_custom_event(void* self, void* event) {
    QSGTexture_CustomEvent((QSGTexture*)self, (QEvent*)event);
}

void q_sgtexture_super_custom_event(void* self, void* event) {
    QSGTexture_SuperCustomEvent((QSGTexture*)self, (QEvent*)event);
}

void q_sgtexture_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSGTexture_OnCustomEvent((QSGTexture*)self, (intptr_t)callback);
}

void q_sgtexture_connect_notify(void* self, const void* signal) {
    QSGTexture_ConnectNotify((QSGTexture*)self, (QMetaMethod*)signal);
}

void q_sgtexture_super_connect_notify(void* self, const void* signal) {
    QSGTexture_SuperConnectNotify((QSGTexture*)self, (QMetaMethod*)signal);
}

void q_sgtexture_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QSGTexture_OnConnectNotify((QSGTexture*)self, (intptr_t)callback);
}

void q_sgtexture_disconnect_notify(void* self, const void* signal) {
    QSGTexture_DisconnectNotify((QSGTexture*)self, (QMetaMethod*)signal);
}

void q_sgtexture_super_disconnect_notify(void* self, const void* signal) {
    QSGTexture_SuperDisconnectNotify((QSGTexture*)self, (QMetaMethod*)signal);
}

void q_sgtexture_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QSGTexture_OnDisconnectNotify((QSGTexture*)self, (intptr_t)callback);
}

QObject* q_sgtexture_sender(const void* self) {
    return QSGTexture_Sender((QSGTexture*)self);
}

int32_t q_sgtexture_sender_signal_index(const void* self) {
    return QSGTexture_SenderSignalIndex((QSGTexture*)self);
}

int32_t q_sgtexture_receivers(const void* self, const char* signal) {
    return QSGTexture_Receivers((QSGTexture*)self, signal);
}

bool q_sgtexture_is_signal_connected(const void* self, const void* signal) {
    return QSGTexture_IsSignalConnected((QSGTexture*)self, (QMetaMethod*)signal);
}

void q_sgtexture_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sgtexture_delete(void* self) {
    QSGTexture_Delete((QSGTexture*)(self));
}

QSGDynamicTexture* q_sgdynamictexture_new() {
    return QSGDynamicTexture_New();
}

const QMetaObject* q_sgdynamictexture_meta_object(const void* self) {
    return QSGDynamicTexture_MetaObject((QSGDynamicTexture*)self);
}

void q_sgdynamictexture_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QSGDynamicTexture_OnMetaObject((QSGDynamicTexture*)self, (intptr_t)callback);
}

const QMetaObject* q_sgdynamictexture_super_meta_object(const void* self) {
    return QSGDynamicTexture_SuperMetaObject((QSGDynamicTexture*)self);
}

void* q_sgdynamictexture_metacast(void* self, const char* param1) {
    return QSGDynamicTexture_Metacast((QSGDynamicTexture*)self, param1);
}

void q_sgdynamictexture_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSGDynamicTexture_OnMetacast((QSGDynamicTexture*)self, (intptr_t)callback);
}

void* q_sgdynamictexture_super_metacast(void* self, const char* param1) {
    return QSGDynamicTexture_SuperMetacast((QSGDynamicTexture*)self, param1);
}

int32_t q_sgdynamictexture_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSGDynamicTexture_Metacall((QSGDynamicTexture*)self, param1, param2, param3);
}

void q_sgdynamictexture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSGDynamicTexture_OnMetacall((QSGDynamicTexture*)self, (intptr_t)callback);
}

int32_t q_sgdynamictexture_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSGDynamicTexture_SuperMetacall((QSGDynamicTexture*)self, param1, param2, param3);
}

const char* q_sgdynamictexture_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sgdynamictexture_update_texture(void* self) {
    return QSGDynamicTexture_UpdateTexture((QSGDynamicTexture*)self);
}

void q_sgdynamictexture_on_update_texture(void* self, bool (*callback)(void*)) {
    QSGDynamicTexture_OnUpdateTexture((QSGDynamicTexture*)self, (intptr_t)callback);
}

const char* q_sgdynamictexture_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sgdynamictexture_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sgdynamictexture_set_mipmap_filtering(void* self, int32_t filter) {
    QSGTexture_SetMipmapFiltering((QSGTexture*)self, filter);
}

int32_t q_sgdynamictexture_mipmap_filtering(const void* self) {
    return QSGTexture_MipmapFiltering((QSGTexture*)self);
}

void q_sgdynamictexture_set_filtering(void* self, int32_t filter) {
    QSGTexture_SetFiltering((QSGTexture*)self, filter);
}

int32_t q_sgdynamictexture_filtering(const void* self) {
    return QSGTexture_Filtering((QSGTexture*)self);
}

void q_sgdynamictexture_set_anisotropy_level(void* self, int32_t level) {
    QSGTexture_SetAnisotropyLevel((QSGTexture*)self, level);
}

int32_t q_sgdynamictexture_anisotropy_level(const void* self) {
    return QSGTexture_AnisotropyLevel((QSGTexture*)self);
}

void q_sgdynamictexture_set_horizontal_wrap_mode(void* self, int32_t hwrap) {
    QSGTexture_SetHorizontalWrapMode((QSGTexture*)self, hwrap);
}

int32_t q_sgdynamictexture_horizontal_wrap_mode(const void* self) {
    return QSGTexture_HorizontalWrapMode((QSGTexture*)self);
}

void q_sgdynamictexture_set_vertical_wrap_mode(void* self, int32_t vwrap) {
    QSGTexture_SetVerticalWrapMode((QSGTexture*)self, vwrap);
}

int32_t q_sgdynamictexture_vertical_wrap_mode(const void* self) {
    return QSGTexture_VerticalWrapMode((QSGTexture*)self);
}

QRectF* q_sgdynamictexture_convert_to_normalized_source_rect(const void* self, const void* rect) {
    return QSGTexture_ConvertToNormalizedSourceRect((QSGTexture*)self, (QRectF*)rect);
}

const char* q_sgdynamictexture_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sgdynamictexture_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sgdynamictexture_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sgdynamictexture_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sgdynamictexture_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sgdynamictexture_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sgdynamictexture_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sgdynamictexture_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sgdynamictexture_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sgdynamictexture_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_sgdynamictexture_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_sgdynamictexture_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sgdynamictexture_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sgdynamictexture_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sgdynamictexture_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sgdynamictexture_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sgdynamictexture_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sgdynamictexture_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_sgdynamictexture_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sgdynamictexture_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sgdynamictexture_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_sgdynamictexture_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sgdynamictexture_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_sgdynamictexture_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_sgdynamictexture_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_sgdynamictexture_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sgdynamictexture_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sgdynamictexture_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sgdynamictexture_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sgdynamictexture_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sgdynamictexture_dynamic_property_names\n");
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

QBindingStorage* q_sgdynamictexture_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sgdynamictexture_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sgdynamictexture_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sgdynamictexture_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_sgdynamictexture_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sgdynamictexture_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sgdynamictexture_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_sgdynamictexture_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_sgdynamictexture_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_sgdynamictexture_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_sgdynamictexture_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sgdynamictexture_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_sgdynamictexture_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_sgdynamictexture_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_sgdynamictexture_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_sgdynamictexture_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_sgdynamictexture_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sgdynamictexture_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int64_t q_sgdynamictexture_comparison_key(const void* self) {
    return QSGDynamicTexture_ComparisonKey((QSGDynamicTexture*)self);
}

void q_sgdynamictexture_on_comparison_key(const void* self, int64_t (*callback)(const void*)) {
    QSGDynamicTexture_OnComparisonKey((const QSGDynamicTexture*)self, (intptr_t)callback);
}

QSize* q_sgdynamictexture_texture_size(const void* self) {
    return QSGDynamicTexture_TextureSize((QSGDynamicTexture*)self);
}

void q_sgdynamictexture_on_texture_size(const void* self, QSize* (*callback)(const void*)) {
    QSGDynamicTexture_OnTextureSize((const QSGDynamicTexture*)self, (intptr_t)callback);
}

bool q_sgdynamictexture_has_alpha_channel(const void* self) {
    return QSGDynamicTexture_HasAlphaChannel((QSGDynamicTexture*)self);
}

void q_sgdynamictexture_on_has_alpha_channel(const void* self, bool (*callback)(const void*)) {
    QSGDynamicTexture_OnHasAlphaChannel((const QSGDynamicTexture*)self, (intptr_t)callback);
}

bool q_sgdynamictexture_has_mipmaps(const void* self) {
    return QSGDynamicTexture_HasMipmaps((QSGDynamicTexture*)self);
}

void q_sgdynamictexture_on_has_mipmaps(const void* self, bool (*callback)(const void*)) {
    QSGDynamicTexture_OnHasMipmaps((const QSGDynamicTexture*)self, (intptr_t)callback);
}

QRectF* q_sgdynamictexture_normalized_texture_sub_rect(const void* self) {
    return QSGDynamicTexture_NormalizedTextureSubRect((QSGDynamicTexture*)self);
}

QRectF* q_sgdynamictexture_super_normalized_texture_sub_rect(const void* self) {
    return QSGDynamicTexture_SuperNormalizedTextureSubRect((QSGDynamicTexture*)self);
}

void q_sgdynamictexture_on_normalized_texture_sub_rect(const void* self, QRectF* (*callback)(const void*)) {
    QSGDynamicTexture_OnNormalizedTextureSubRect((const QSGDynamicTexture*)self, (intptr_t)callback);
}

bool q_sgdynamictexture_is_atlas_texture(const void* self) {
    return QSGDynamicTexture_IsAtlasTexture((QSGDynamicTexture*)self);
}

bool q_sgdynamictexture_super_is_atlas_texture(const void* self) {
    return QSGDynamicTexture_SuperIsAtlasTexture((QSGDynamicTexture*)self);
}

void q_sgdynamictexture_on_is_atlas_texture(const void* self, bool (*callback)(const void*)) {
    QSGDynamicTexture_OnIsAtlasTexture((const QSGDynamicTexture*)self, (intptr_t)callback);
}

bool q_sgdynamictexture_event(void* self, void* event) {
    return QSGDynamicTexture_Event((QSGDynamicTexture*)self, (QEvent*)event);
}

bool q_sgdynamictexture_super_event(void* self, void* event) {
    return QSGDynamicTexture_SuperEvent((QSGDynamicTexture*)self, (QEvent*)event);
}

void q_sgdynamictexture_on_event(void* self, bool (*callback)(void*, void*)) {
    QSGDynamicTexture_OnEvent((QSGDynamicTexture*)self, (intptr_t)callback);
}

bool q_sgdynamictexture_event_filter(void* self, void* watched, void* event) {
    return QSGDynamicTexture_EventFilter((QSGDynamicTexture*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sgdynamictexture_super_event_filter(void* self, void* watched, void* event) {
    return QSGDynamicTexture_SuperEventFilter((QSGDynamicTexture*)self, (QObject*)watched, (QEvent*)event);
}

void q_sgdynamictexture_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSGDynamicTexture_OnEventFilter((QSGDynamicTexture*)self, (intptr_t)callback);
}

void q_sgdynamictexture_timer_event(void* self, void* event) {
    QSGDynamicTexture_TimerEvent((QSGDynamicTexture*)self, (QTimerEvent*)event);
}

void q_sgdynamictexture_super_timer_event(void* self, void* event) {
    QSGDynamicTexture_SuperTimerEvent((QSGDynamicTexture*)self, (QTimerEvent*)event);
}

void q_sgdynamictexture_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSGDynamicTexture_OnTimerEvent((QSGDynamicTexture*)self, (intptr_t)callback);
}

void q_sgdynamictexture_child_event(void* self, void* event) {
    QSGDynamicTexture_ChildEvent((QSGDynamicTexture*)self, (QChildEvent*)event);
}

void q_sgdynamictexture_super_child_event(void* self, void* event) {
    QSGDynamicTexture_SuperChildEvent((QSGDynamicTexture*)self, (QChildEvent*)event);
}

void q_sgdynamictexture_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSGDynamicTexture_OnChildEvent((QSGDynamicTexture*)self, (intptr_t)callback);
}

void q_sgdynamictexture_custom_event(void* self, void* event) {
    QSGDynamicTexture_CustomEvent((QSGDynamicTexture*)self, (QEvent*)event);
}

void q_sgdynamictexture_super_custom_event(void* self, void* event) {
    QSGDynamicTexture_SuperCustomEvent((QSGDynamicTexture*)self, (QEvent*)event);
}

void q_sgdynamictexture_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSGDynamicTexture_OnCustomEvent((QSGDynamicTexture*)self, (intptr_t)callback);
}

void q_sgdynamictexture_connect_notify(void* self, const void* signal) {
    QSGDynamicTexture_ConnectNotify((QSGDynamicTexture*)self, (QMetaMethod*)signal);
}

void q_sgdynamictexture_super_connect_notify(void* self, const void* signal) {
    QSGDynamicTexture_SuperConnectNotify((QSGDynamicTexture*)self, (QMetaMethod*)signal);
}

void q_sgdynamictexture_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QSGDynamicTexture_OnConnectNotify((QSGDynamicTexture*)self, (intptr_t)callback);
}

void q_sgdynamictexture_disconnect_notify(void* self, const void* signal) {
    QSGDynamicTexture_DisconnectNotify((QSGDynamicTexture*)self, (QMetaMethod*)signal);
}

void q_sgdynamictexture_super_disconnect_notify(void* self, const void* signal) {
    QSGDynamicTexture_SuperDisconnectNotify((QSGDynamicTexture*)self, (QMetaMethod*)signal);
}

void q_sgdynamictexture_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QSGDynamicTexture_OnDisconnectNotify((QSGDynamicTexture*)self, (intptr_t)callback);
}

void* q_sgdynamictexture_resolve_interface(const void* self, const char* name, int revision) {
    return QSGDynamicTexture_ResolveInterface((QSGDynamicTexture*)self, name, revision);
}

QObject* q_sgdynamictexture_sender(const void* self) {
    return QSGDynamicTexture_Sender((QSGDynamicTexture*)self);
}

int32_t q_sgdynamictexture_sender_signal_index(const void* self) {
    return QSGDynamicTexture_SenderSignalIndex((QSGDynamicTexture*)self);
}

int32_t q_sgdynamictexture_receivers(const void* self, const char* signal) {
    return QSGDynamicTexture_Receivers((QSGDynamicTexture*)self, signal);
}

bool q_sgdynamictexture_is_signal_connected(const void* self, const void* signal) {
    return QSGDynamicTexture_IsSignalConnected((QSGDynamicTexture*)self, (QMetaMethod*)signal);
}

void q_sgdynamictexture_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sgdynamictexture_delete(void* self) {
    QSGDynamicTexture_Delete((QSGDynamicTexture*)(self));
}
