#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libcustomemojiiconmanager.hpp"
#include "libemojimodel.hpp"
#include "libemojimodelmanager.hpp"
#include "libemojimodelmanager.h"

TextEmoticonsCore__EmojiModelManager* k_textemoticonscore__emojimodelmanager_new() {
    return TextEmoticonsCore__EmojiModelManager_new();
}

TextEmoticonsCore__EmojiModelManager* k_textemoticonscore__emojimodelmanager_new2(void* parent) {
    return TextEmoticonsCore__EmojiModelManager_new2((QObject*)parent);
}

const QMetaObject* k_textemoticonscore__emojimodelmanager_meta_object(void* self) {
    return TextEmoticonsCore__EmojiModelManager_MetaObject((TextEmoticonsCore__EmojiModelManager*)self);
}

void k_textemoticonscore__emojimodelmanager_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextEmoticonsCore__EmojiModelManager_OnMetaObject((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

const QMetaObject* k_textemoticonscore__emojimodelmanager_super_meta_object(void* self) {
    return TextEmoticonsCore__EmojiModelManager_SuperMetaObject((TextEmoticonsCore__EmojiModelManager*)self);
}

void* k_textemoticonscore__emojimodelmanager_metacast(void* self, const char* param1) {
    return TextEmoticonsCore__EmojiModelManager_Metacast((TextEmoticonsCore__EmojiModelManager*)self, param1);
}

void k_textemoticonscore__emojimodelmanager_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextEmoticonsCore__EmojiModelManager_OnMetacast((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

void* k_textemoticonscore__emojimodelmanager_super_metacast(void* self, const char* param1) {
    return TextEmoticonsCore__EmojiModelManager_SuperMetacast((TextEmoticonsCore__EmojiModelManager*)self, param1);
}

int32_t k_textemoticonscore__emojimodelmanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEmoticonsCore__EmojiModelManager_Metacall((TextEmoticonsCore__EmojiModelManager*)self, param1, param2, param3);
}

void k_textemoticonscore__emojimodelmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextEmoticonsCore__EmojiModelManager_OnMetacall((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojimodelmanager_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEmoticonsCore__EmojiModelManager_SuperMetacall((TextEmoticonsCore__EmojiModelManager*)self, param1, param2, param3);
}

const char* k_textemoticonscore__emojimodelmanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

TextEmoticonsCore__EmojiModelManager* k_textemoticonscore__emojimodelmanager_self() {
    return TextEmoticonsCore__EmojiModelManager_Self();
}

TextEmoticonsCore__EmojiModel* k_textemoticonscore__emojimodelmanager_emoji_model(void* self) {
    return TextEmoticonsCore__EmojiModelManager_EmojiModel((TextEmoticonsCore__EmojiModelManager*)self);
}

const char** k_textemoticonscore__emojimodelmanager_recent_identifier(void* self) {
    libqt_list _arr = TextEmoticonsCore__EmojiModelManager_RecentIdentifier((TextEmoticonsCore__EmojiModelManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojimodelmanager_recent_identifier\n");
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

void k_textemoticonscore__emojimodelmanager_set_recent_identifier(void* self, const char* newRecentIdentifier[static 1]) {
    size_t newRecentIdentifier_len = libqt_strv_length(newRecentIdentifier);
    libqt_string* newRecentIdentifier_qstr = (libqt_string*)malloc(newRecentIdentifier_len * sizeof(libqt_string));
    if (newRecentIdentifier_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojimodelmanager_set_recent_identifier\n");
        abort();
    }
    for (size_t i = 0; i < newRecentIdentifier_len; ++i) {
        newRecentIdentifier_qstr[i] = qstring(newRecentIdentifier[i]);
    }
    libqt_list newRecentIdentifier_list = qlist(newRecentIdentifier_qstr, newRecentIdentifier_len);
    TextEmoticonsCore__EmojiModelManager_SetRecentIdentifier((TextEmoticonsCore__EmojiModelManager*)self, newRecentIdentifier_list);
    free(newRecentIdentifier_qstr);
}

void k_textemoticonscore__emojimodelmanager_add_identifier(void* self, const char* identifier) {
    TextEmoticonsCore__EmojiModelManager_AddIdentifier((TextEmoticonsCore__EmojiModelManager*)self, qstring(identifier));
}

TextEmoticonsCore__CustomEmojiIconManager* k_textemoticonscore__emojimodelmanager_custom_emoji_icon_manager(void* self) {
    return TextEmoticonsCore__EmojiModelManager_CustomEmojiIconManager((TextEmoticonsCore__EmojiModelManager*)self);
}

void k_textemoticonscore__emojimodelmanager_set_custom_emoji_icon_manager(void* self, void* newCustomEmojiIconManager) {
    TextEmoticonsCore__EmojiModelManager_SetCustomEmojiIconManager((TextEmoticonsCore__EmojiModelManager*)self, (TextEmoticonsCore__CustomEmojiIconManager*)newCustomEmojiIconManager);
}

const char** k_textemoticonscore__emojimodelmanager_exclude_emoticons(void* self) {
    libqt_list _arr = TextEmoticonsCore__EmojiModelManager_ExcludeEmoticons((TextEmoticonsCore__EmojiModelManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojimodelmanager_exclude_emoticons\n");
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

void k_textemoticonscore__emojimodelmanager_set_exclude_emoticons(void* self, const char* emoticons[static 1]) {
    size_t emoticons_len = libqt_strv_length(emoticons);
    libqt_string* emoticons_qstr = (libqt_string*)malloc(emoticons_len * sizeof(libqt_string));
    if (emoticons_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojimodelmanager_set_exclude_emoticons\n");
        abort();
    }
    for (size_t i = 0; i < emoticons_len; ++i) {
        emoticons_qstr[i] = qstring(emoticons[i]);
    }
    libqt_list emoticons_list = qlist(emoticons_qstr, emoticons_len);
    TextEmoticonsCore__EmojiModelManager_SetExcludeEmoticons((TextEmoticonsCore__EmojiModelManager*)self, emoticons_list);
    free(emoticons_qstr);
}

void k_textemoticonscore__emojimodelmanager_used_identifier_changed(void* self, const char* lst[static 1]) {
    size_t lst_len = libqt_strv_length(lst);
    libqt_string* lst_qstr = (libqt_string*)malloc(lst_len * sizeof(libqt_string));
    if (lst_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojimodelmanager_used_identifier_changed\n");
        abort();
    }
    for (size_t i = 0; i < lst_len; ++i) {
        lst_qstr[i] = qstring(lst[i]);
    }
    libqt_list lst_list = qlist(lst_qstr, lst_len);
    TextEmoticonsCore__EmojiModelManager_UsedIdentifierChanged((TextEmoticonsCore__EmojiModelManager*)self, lst_list);
    free(lst_qstr);
}

void k_textemoticonscore__emojimodelmanager_on_used_identifier_changed(void* self, void (*callback)(void*, const char**)) {
    TextEmoticonsCore__EmojiModelManager_Connect_UsedIdentifierChanged((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodelmanager_exclude_emoticons_changed(void* self) {
    TextEmoticonsCore__EmojiModelManager_ExcludeEmoticonsChanged((TextEmoticonsCore__EmojiModelManager*)self);
}

void k_textemoticonscore__emojimodelmanager_on_exclude_emoticons_changed(void* self, void (*callback)(void*)) {
    TextEmoticonsCore__EmojiModelManager_Connect_ExcludeEmoticonsChanged((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

const char* k_textemoticonscore__emojimodelmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textemoticonscore__emojimodelmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textemoticonscore__emojimodelmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__emojimodelmanager_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textemoticonscore__emojimodelmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textemoticonscore__emojimodelmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textemoticonscore__emojimodelmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textemoticonscore__emojimodelmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textemoticonscore__emojimodelmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textemoticonscore__emojimodelmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textemoticonscore__emojimodelmanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textemoticonscore__emojimodelmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textemoticonscore__emojimodelmanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textemoticonscore__emojimodelmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textemoticonscore__emojimodelmanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textemoticonscore__emojimodelmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textemoticonscore__emojimodelmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textemoticonscore__emojimodelmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textemoticonscore__emojimodelmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textemoticonscore__emojimodelmanager_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textemoticonscore__emojimodelmanager_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textemoticonscore__emojimodelmanager_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textemoticonscore__emojimodelmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textemoticonscore__emojimodelmanager_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textemoticonscore__emojimodelmanager_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textemoticonscore__emojimodelmanager_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textemoticonscore__emojimodelmanager_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textemoticonscore__emojimodelmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textemoticonscore__emojimodelmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textemoticonscore__emojimodelmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textemoticonscore__emojimodelmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textemoticonscore__emojimodelmanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__emojimodelmanager_dynamic_property_names\n");
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

QBindingStorage* k_textemoticonscore__emojimodelmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textemoticonscore__emojimodelmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textemoticonscore__emojimodelmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textemoticonscore__emojimodelmanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textemoticonscore__emojimodelmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textemoticonscore__emojimodelmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textemoticonscore__emojimodelmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textemoticonscore__emojimodelmanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textemoticonscore__emojimodelmanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textemoticonscore__emojimodelmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textemoticonscore__emojimodelmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textemoticonscore__emojimodelmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textemoticonscore__emojimodelmanager_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textemoticonscore__emojimodelmanager_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textemoticonscore__emojimodelmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textemoticonscore__emojimodelmanager_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textemoticonscore__emojimodelmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textemoticonscore__emojimodelmanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodelmanager_event(void* self, void* event) {
    return TextEmoticonsCore__EmojiModelManager_Event((TextEmoticonsCore__EmojiModelManager*)self, (QEvent*)event);
}

bool k_textemoticonscore__emojimodelmanager_super_event(void* self, void* event) {
    return TextEmoticonsCore__EmojiModelManager_SuperEvent((TextEmoticonsCore__EmojiModelManager*)self, (QEvent*)event);
}

void k_textemoticonscore__emojimodelmanager_on_event(void* self, bool (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiModelManager_OnEvent((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodelmanager_event_filter(void* self, void* watched, void* event) {
    return TextEmoticonsCore__EmojiModelManager_EventFilter((TextEmoticonsCore__EmojiModelManager*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textemoticonscore__emojimodelmanager_super_event_filter(void* self, void* watched, void* event) {
    return TextEmoticonsCore__EmojiModelManager_SuperEventFilter((TextEmoticonsCore__EmojiModelManager*)self, (QObject*)watched, (QEvent*)event);
}

void k_textemoticonscore__emojimodelmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextEmoticonsCore__EmojiModelManager_OnEventFilter((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodelmanager_timer_event(void* self, void* event) {
    TextEmoticonsCore__EmojiModelManager_TimerEvent((TextEmoticonsCore__EmojiModelManager*)self, (QTimerEvent*)event);
}

void k_textemoticonscore__emojimodelmanager_super_timer_event(void* self, void* event) {
    TextEmoticonsCore__EmojiModelManager_SuperTimerEvent((TextEmoticonsCore__EmojiModelManager*)self, (QTimerEvent*)event);
}

void k_textemoticonscore__emojimodelmanager_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiModelManager_OnTimerEvent((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodelmanager_child_event(void* self, void* event) {
    TextEmoticonsCore__EmojiModelManager_ChildEvent((TextEmoticonsCore__EmojiModelManager*)self, (QChildEvent*)event);
}

void k_textemoticonscore__emojimodelmanager_super_child_event(void* self, void* event) {
    TextEmoticonsCore__EmojiModelManager_SuperChildEvent((TextEmoticonsCore__EmojiModelManager*)self, (QChildEvent*)event);
}

void k_textemoticonscore__emojimodelmanager_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiModelManager_OnChildEvent((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodelmanager_custom_event(void* self, void* event) {
    TextEmoticonsCore__EmojiModelManager_CustomEvent((TextEmoticonsCore__EmojiModelManager*)self, (QEvent*)event);
}

void k_textemoticonscore__emojimodelmanager_super_custom_event(void* self, void* event) {
    TextEmoticonsCore__EmojiModelManager_SuperCustomEvent((TextEmoticonsCore__EmojiModelManager*)self, (QEvent*)event);
}

void k_textemoticonscore__emojimodelmanager_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiModelManager_OnCustomEvent((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodelmanager_connect_notify(void* self, void* signal) {
    TextEmoticonsCore__EmojiModelManager_ConnectNotify((TextEmoticonsCore__EmojiModelManager*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojimodelmanager_super_connect_notify(void* self, void* signal) {
    TextEmoticonsCore__EmojiModelManager_SuperConnectNotify((TextEmoticonsCore__EmojiModelManager*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojimodelmanager_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiModelManager_OnConnectNotify((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodelmanager_disconnect_notify(void* self, void* signal) {
    TextEmoticonsCore__EmojiModelManager_DisconnectNotify((TextEmoticonsCore__EmojiModelManager*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojimodelmanager_super_disconnect_notify(void* self, void* signal) {
    TextEmoticonsCore__EmojiModelManager_SuperDisconnectNotify((TextEmoticonsCore__EmojiModelManager*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojimodelmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiModelManager_OnDisconnectNotify((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

QObject* k_textemoticonscore__emojimodelmanager_sender(void* self) {
    return TextEmoticonsCore__EmojiModelManager_Sender((TextEmoticonsCore__EmojiModelManager*)self);
}

QObject* k_textemoticonscore__emojimodelmanager_super_sender(void* self) {
    return TextEmoticonsCore__EmojiModelManager_SuperSender((TextEmoticonsCore__EmojiModelManager*)self);
}

void k_textemoticonscore__emojimodelmanager_on_sender(void* self, QObject* (*callback)()) {
    TextEmoticonsCore__EmojiModelManager_OnSender((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojimodelmanager_sender_signal_index(void* self) {
    return TextEmoticonsCore__EmojiModelManager_SenderSignalIndex((TextEmoticonsCore__EmojiModelManager*)self);
}

int32_t k_textemoticonscore__emojimodelmanager_super_sender_signal_index(void* self) {
    return TextEmoticonsCore__EmojiModelManager_SuperSenderSignalIndex((TextEmoticonsCore__EmojiModelManager*)self);
}

void k_textemoticonscore__emojimodelmanager_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextEmoticonsCore__EmojiModelManager_OnSenderSignalIndex((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

int32_t k_textemoticonscore__emojimodelmanager_receivers(void* self, const char* signal) {
    return TextEmoticonsCore__EmojiModelManager_Receivers((TextEmoticonsCore__EmojiModelManager*)self, signal);
}

int32_t k_textemoticonscore__emojimodelmanager_super_receivers(void* self, const char* signal) {
    return TextEmoticonsCore__EmojiModelManager_SuperReceivers((TextEmoticonsCore__EmojiModelManager*)self, signal);
}

void k_textemoticonscore__emojimodelmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextEmoticonsCore__EmojiModelManager_OnReceivers((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

bool k_textemoticonscore__emojimodelmanager_is_signal_connected(void* self, void* signal) {
    return TextEmoticonsCore__EmojiModelManager_IsSignalConnected((TextEmoticonsCore__EmojiModelManager*)self, (QMetaMethod*)signal);
}

bool k_textemoticonscore__emojimodelmanager_super_is_signal_connected(void* self, void* signal) {
    return TextEmoticonsCore__EmojiModelManager_SuperIsSignalConnected((TextEmoticonsCore__EmojiModelManager*)self, (QMetaMethod*)signal);
}

void k_textemoticonscore__emojimodelmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextEmoticonsCore__EmojiModelManager_OnIsSignalConnected((TextEmoticonsCore__EmojiModelManager*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodelmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textemoticonscore__emojimodelmanager_delete(void* self) {
    TextEmoticonsCore__EmojiModelManager_Delete((TextEmoticonsCore__EmojiModelManager*)(self));
}
