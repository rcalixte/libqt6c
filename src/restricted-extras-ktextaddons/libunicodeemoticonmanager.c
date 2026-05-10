#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libemoticoncategory.hpp"
#include "libunicodeemoticon.hpp"
#include "libunicodeemoticonmanager.hpp"
#include "libunicodeemoticonmanager.h"

TextEmoticonsCore__UnicodeEmoticonManager* k_textemoticonscore__unicodeemoticonmanager_new() {
    return TextEmoticonsCore__UnicodeEmoticonManager_new();
}

TextEmoticonsCore__UnicodeEmoticonManager* k_textemoticonscore__unicodeemoticonmanager_new2(void* parent) {
    return TextEmoticonsCore__UnicodeEmoticonManager_new2((QObject*)parent);
}

const QMetaObject* k_textemoticonscore__unicodeemoticonmanager_meta_object(void* self) {
    return TextEmoticonsCore__UnicodeEmoticonManager_MetaObject((TextEmoticonsCore__UnicodeEmoticonManager*)self);
}

void k_textemoticonscore__unicodeemoticonmanager_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnMetaObject((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

const QMetaObject* k_textemoticonscore__unicodeemoticonmanager_super_meta_object(void* self) {
    return TextEmoticonsCore__UnicodeEmoticonManager_SuperMetaObject((TextEmoticonsCore__UnicodeEmoticonManager*)self);
}

void* k_textemoticonscore__unicodeemoticonmanager_metacast(void* self, const char* param1) {
    return TextEmoticonsCore__UnicodeEmoticonManager_Metacast((TextEmoticonsCore__UnicodeEmoticonManager*)self, param1);
}

void k_textemoticonscore__unicodeemoticonmanager_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnMetacast((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

void* k_textemoticonscore__unicodeemoticonmanager_super_metacast(void* self, const char* param1) {
    return TextEmoticonsCore__UnicodeEmoticonManager_SuperMetacast((TextEmoticonsCore__UnicodeEmoticonManager*)self, param1);
}

int32_t k_textemoticonscore__unicodeemoticonmanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEmoticonsCore__UnicodeEmoticonManager_Metacall((TextEmoticonsCore__UnicodeEmoticonManager*)self, param1, param2, param3);
}

void k_textemoticonscore__unicodeemoticonmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnMetacall((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__unicodeemoticonmanager_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEmoticonsCore__UnicodeEmoticonManager_SuperMetacall((TextEmoticonsCore__UnicodeEmoticonManager*)self, param1, param2, param3);
}

const char* k_textemoticonscore__unicodeemoticonmanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

TextEmoticonsCore__UnicodeEmoticonManager* k_textemoticonscore__unicodeemoticonmanager_self() {
    return TextEmoticonsCore__UnicodeEmoticonManager_Self();
}

libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ k_textemoticonscore__unicodeemoticonmanager_unicode_emoji_list(void* self) {
    libqt_list _arr = TextEmoticonsCore__UnicodeEmoticonManager_UnicodeEmojiList((TextEmoticonsCore__UnicodeEmoticonManager*)self);
    return _arr;
}

libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ k_textemoticonscore__unicodeemoticonmanager_emojis_for_category(void* self, const char* category) {
    libqt_list _arr = TextEmoticonsCore__UnicodeEmoticonManager_EmojisForCategory((TextEmoticonsCore__UnicodeEmoticonManager*)self, qstring(category));
    return _arr;
}

libqt_list /* of TextEmoticonsCore__EmoticonCategory* */ k_textemoticonscore__unicodeemoticonmanager_categories(void* self) {
    libqt_list _arr = TextEmoticonsCore__UnicodeEmoticonManager_Categories((TextEmoticonsCore__UnicodeEmoticonManager*)self);
    return _arr;
}

TextEmoticonsCore__UnicodeEmoticon* k_textemoticonscore__unicodeemoticonmanager_unicode_emoticon_for_emoji(void* self, const char* emojiIdentifier) {
    return TextEmoticonsCore__UnicodeEmoticonManager_UnicodeEmoticonForEmoji((TextEmoticonsCore__UnicodeEmoticonManager*)self, qstring(emojiIdentifier));
}

int32_t k_textemoticonscore__unicodeemoticonmanager_count(void* self) {
    return TextEmoticonsCore__UnicodeEmoticonManager_Count((TextEmoticonsCore__UnicodeEmoticonManager*)self);
}

const char* k_textemoticonscore__unicodeemoticonmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textemoticonscore__unicodeemoticonmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textemoticonscore__unicodeemoticonmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__unicodeemoticonmanager_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textemoticonscore__unicodeemoticonmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textemoticonscore__unicodeemoticonmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textemoticonscore__unicodeemoticonmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textemoticonscore__unicodeemoticonmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textemoticonscore__unicodeemoticonmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textemoticonscore__unicodeemoticonmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textemoticonscore__unicodeemoticonmanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textemoticonscore__unicodeemoticonmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textemoticonscore__unicodeemoticonmanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textemoticonscore__unicodeemoticonmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textemoticonscore__unicodeemoticonmanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textemoticonscore__unicodeemoticonmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textemoticonscore__unicodeemoticonmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textemoticonscore__unicodeemoticonmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textemoticonscore__unicodeemoticonmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textemoticonscore__unicodeemoticonmanager_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textemoticonscore__unicodeemoticonmanager_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textemoticonscore__unicodeemoticonmanager_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textemoticonscore__unicodeemoticonmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textemoticonscore__unicodeemoticonmanager_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textemoticonscore__unicodeemoticonmanager_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textemoticonscore__unicodeemoticonmanager_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textemoticonscore__unicodeemoticonmanager_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textemoticonscore__unicodeemoticonmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textemoticonscore__unicodeemoticonmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textemoticonscore__unicodeemoticonmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textemoticonscore__unicodeemoticonmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textemoticonscore__unicodeemoticonmanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__unicodeemoticonmanager_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_textemoticonscore__unicodeemoticonmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textemoticonscore__unicodeemoticonmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textemoticonscore__unicodeemoticonmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textemoticonscore__unicodeemoticonmanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textemoticonscore__unicodeemoticonmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textemoticonscore__unicodeemoticonmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textemoticonscore__unicodeemoticonmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textemoticonscore__unicodeemoticonmanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textemoticonscore__unicodeemoticonmanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textemoticonscore__unicodeemoticonmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textemoticonscore__unicodeemoticonmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textemoticonscore__unicodeemoticonmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textemoticonscore__unicodeemoticonmanager_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textemoticonscore__unicodeemoticonmanager_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textemoticonscore__unicodeemoticonmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textemoticonscore__unicodeemoticonmanager_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textemoticonscore__unicodeemoticonmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textemoticonscore__unicodeemoticonmanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textemoticonscore__unicodeemoticonmanager_event(void* self, void* event) {
    return TextEmoticonsCore__UnicodeEmoticonManager_Event((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QEvent*)event);
}

bool k_textemoticonscore__unicodeemoticonmanager_super_event(void* self, void* event) {
    return TextEmoticonsCore__UnicodeEmoticonManager_SuperEvent((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QEvent*)event);
}

void k_textemoticonscore__unicodeemoticonmanager_on_event(void* self, bool (*callback)(void*, void*)) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnEvent((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

bool k_textemoticonscore__unicodeemoticonmanager_event_filter(void* self, void* watched, void* event) {
    return TextEmoticonsCore__UnicodeEmoticonManager_EventFilter((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textemoticonscore__unicodeemoticonmanager_super_event_filter(void* self, void* watched, void* event) {
    return TextEmoticonsCore__UnicodeEmoticonManager_SuperEventFilter((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QObject*)watched, (QEvent*)event);
}

void k_textemoticonscore__unicodeemoticonmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnEventFilter((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

void k_textemoticonscore__unicodeemoticonmanager_timer_event(void* self, void* event) {
    TextEmoticonsCore__UnicodeEmoticonManager_TimerEvent((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QTimerEvent*)event);
}

void k_textemoticonscore__unicodeemoticonmanager_super_timer_event(void* self, void* event) {
    TextEmoticonsCore__UnicodeEmoticonManager_SuperTimerEvent((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QTimerEvent*)event);
}

void k_textemoticonscore__unicodeemoticonmanager_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnTimerEvent((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

void k_textemoticonscore__unicodeemoticonmanager_child_event(void* self, void* event) {
    TextEmoticonsCore__UnicodeEmoticonManager_ChildEvent((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QChildEvent*)event);
}

void k_textemoticonscore__unicodeemoticonmanager_super_child_event(void* self, void* event) {
    TextEmoticonsCore__UnicodeEmoticonManager_SuperChildEvent((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QChildEvent*)event);
}

void k_textemoticonscore__unicodeemoticonmanager_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnChildEvent((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

void k_textemoticonscore__unicodeemoticonmanager_custom_event(void* self, void* event) {
    TextEmoticonsCore__UnicodeEmoticonManager_CustomEvent((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QEvent*)event);
}

void k_textemoticonscore__unicodeemoticonmanager_super_custom_event(void* self, void* event) {
    TextEmoticonsCore__UnicodeEmoticonManager_SuperCustomEvent((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QEvent*)event);
}

void k_textemoticonscore__unicodeemoticonmanager_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnCustomEvent((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

void k_textemoticonscore__unicodeemoticonmanager_connect_notify(void* self, void* signal) {
    TextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__unicodeemoticonmanager_super_connect_notify(void* self, void* signal) {
    TextEmoticonsCore__UnicodeEmoticonManager_SuperConnectNotify((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__unicodeemoticonmanager_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnConnectNotify((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

void k_textemoticonscore__unicodeemoticonmanager_disconnect_notify(void* self, void* signal) {
    TextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__unicodeemoticonmanager_super_disconnect_notify(void* self, void* signal) {
    TextEmoticonsCore__UnicodeEmoticonManager_SuperDisconnectNotify((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__unicodeemoticonmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnDisconnectNotify((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

QObject* k_textemoticonscore__unicodeemoticonmanager_sender(void* self) {
    return TextEmoticonsCore__UnicodeEmoticonManager_Sender((TextEmoticonsCore__UnicodeEmoticonManager*)self);
}

QObject* k_textemoticonscore__unicodeemoticonmanager_super_sender(void* self) {
    return TextEmoticonsCore__UnicodeEmoticonManager_SuperSender((TextEmoticonsCore__UnicodeEmoticonManager*)self);
}

void k_textemoticonscore__unicodeemoticonmanager_on_sender(void* self, QObject* (*callback)()) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnSender((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__unicodeemoticonmanager_sender_signal_index(void* self) {
    return TextEmoticonsCore__UnicodeEmoticonManager_SenderSignalIndex((TextEmoticonsCore__UnicodeEmoticonManager*)self);
}

int32_t k_textemoticonscore__unicodeemoticonmanager_super_sender_signal_index(void* self) {
    return TextEmoticonsCore__UnicodeEmoticonManager_SuperSenderSignalIndex((TextEmoticonsCore__UnicodeEmoticonManager*)self);
}

void k_textemoticonscore__unicodeemoticonmanager_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnSenderSignalIndex((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__unicodeemoticonmanager_receivers(void* self, const char* signal) {
    return TextEmoticonsCore__UnicodeEmoticonManager_Receivers((TextEmoticonsCore__UnicodeEmoticonManager*)self, signal);
}

int32_t k_textemoticonscore__unicodeemoticonmanager_super_receivers(void* self, const char* signal) {
    return TextEmoticonsCore__UnicodeEmoticonManager_SuperReceivers((TextEmoticonsCore__UnicodeEmoticonManager*)self, signal);
}

void k_textemoticonscore__unicodeemoticonmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnReceivers((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

bool k_textemoticonscore__unicodeemoticonmanager_is_signal_connected(void* self, void* signal) {
    return TextEmoticonsCore__UnicodeEmoticonManager_IsSignalConnected((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QMetaMethod*)signal);
}

bool k_textemoticonscore__unicodeemoticonmanager_super_is_signal_connected(void* self, void* signal) {
    return TextEmoticonsCore__UnicodeEmoticonManager_SuperIsSignalConnected((TextEmoticonsCore__UnicodeEmoticonManager*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__unicodeemoticonmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextEmoticonsCore__UnicodeEmoticonManager_OnIsSignalConnected((TextEmoticonsCore__UnicodeEmoticonManager*)self, (intptr_t)callback);
}

void k_textemoticonscore__unicodeemoticonmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textemoticonscore__unicodeemoticonmanager_delete(void* self) {
    TextEmoticonsCore__UnicodeEmoticonManager_Delete((TextEmoticonsCore__UnicodeEmoticonManager*)(self));
}
