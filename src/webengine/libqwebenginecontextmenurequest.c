#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "../libqurl.hpp"
#include "libqwebenginecontextmenurequest.hpp"
#include "libqwebenginecontextmenurequest.h"

const QMetaObject* q_webenginecontextmenurequest_meta_object(void* self) {
    return QWebEngineContextMenuRequest_MetaObject((QWebEngineContextMenuRequest*)self);
}

void* q_webenginecontextmenurequest_metacast(void* self, const char* param1) {
    return QWebEngineContextMenuRequest_Metacast((QWebEngineContextMenuRequest*)self, param1);
}

int32_t q_webenginecontextmenurequest_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebEngineContextMenuRequest_Metacall((QWebEngineContextMenuRequest*)self, param1, param2, param3);
}

const char* q_webenginecontextmenurequest_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPoint* q_webenginecontextmenurequest_position(void* self) {
    return QWebEngineContextMenuRequest_Position((QWebEngineContextMenuRequest*)self);
}

const char* q_webenginecontextmenurequest_selected_text(void* self) {
    libqt_string _str = QWebEngineContextMenuRequest_SelectedText((QWebEngineContextMenuRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webenginecontextmenurequest_link_text(void* self) {
    libqt_string _str = QWebEngineContextMenuRequest_LinkText((QWebEngineContextMenuRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_webenginecontextmenurequest_link_url(void* self) {
    return QWebEngineContextMenuRequest_LinkUrl((QWebEngineContextMenuRequest*)self);
}

QUrl* q_webenginecontextmenurequest_media_url(void* self) {
    return QWebEngineContextMenuRequest_MediaUrl((QWebEngineContextMenuRequest*)self);
}

int32_t q_webenginecontextmenurequest_media_type(void* self) {
    return QWebEngineContextMenuRequest_MediaType((QWebEngineContextMenuRequest*)self);
}

bool q_webenginecontextmenurequest_is_content_editable(void* self) {
    return QWebEngineContextMenuRequest_IsContentEditable((QWebEngineContextMenuRequest*)self);
}

const char* q_webenginecontextmenurequest_misspelled_word(void* self) {
    libqt_string _str = QWebEngineContextMenuRequest_MisspelledWord((QWebEngineContextMenuRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_webenginecontextmenurequest_spell_checker_suggestions(void* self) {
    libqt_list _arr = QWebEngineContextMenuRequest_SpellCheckerSuggestions((QWebEngineContextMenuRequest*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webenginecontextmenurequest_spell_checker_suggestions\n");
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

bool q_webenginecontextmenurequest_is_accepted(void* self) {
    return QWebEngineContextMenuRequest_IsAccepted((QWebEngineContextMenuRequest*)self);
}

void q_webenginecontextmenurequest_set_accepted(void* self, bool accepted) {
    QWebEngineContextMenuRequest_SetAccepted((QWebEngineContextMenuRequest*)self, accepted);
}

int32_t q_webenginecontextmenurequest_media_flags(void* self) {
    return QWebEngineContextMenuRequest_MediaFlags((QWebEngineContextMenuRequest*)self);
}

int32_t q_webenginecontextmenurequest_edit_flags(void* self) {
    return QWebEngineContextMenuRequest_EditFlags((QWebEngineContextMenuRequest*)self);
}

const char* q_webenginecontextmenurequest_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webenginecontextmenurequest_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webenginecontextmenurequest_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_webenginecontextmenurequest_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_webenginecontextmenurequest_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginecontextmenurequest_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webenginecontextmenurequest_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webenginecontextmenurequest_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webenginecontextmenurequest_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webenginecontextmenurequest_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webenginecontextmenurequest_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webenginecontextmenurequest_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webenginecontextmenurequest_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webenginecontextmenurequest_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_webenginecontextmenurequest_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_webenginecontextmenurequest_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webenginecontextmenurequest_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webenginecontextmenurequest_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webenginecontextmenurequest_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webenginecontextmenurequest_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webenginecontextmenurequest_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webenginecontextmenurequest_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_webenginecontextmenurequest_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webenginecontextmenurequest_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webenginecontextmenurequest_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_webenginecontextmenurequest_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webenginecontextmenurequest_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_webenginecontextmenurequest_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_webenginecontextmenurequest_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_webenginecontextmenurequest_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webenginecontextmenurequest_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webenginecontextmenurequest_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webenginecontextmenurequest_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webenginecontextmenurequest_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webenginecontextmenurequest_dynamic_property_names\n");
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

QBindingStorage* q_webenginecontextmenurequest_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webenginecontextmenurequest_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webenginecontextmenurequest_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webenginecontextmenurequest_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_webenginecontextmenurequest_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webenginecontextmenurequest_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webenginecontextmenurequest_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_webenginecontextmenurequest_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_webenginecontextmenurequest_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_webenginecontextmenurequest_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_webenginecontextmenurequest_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_webenginecontextmenurequest_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_webenginecontextmenurequest_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_webenginecontextmenurequest_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_webenginecontextmenurequest_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_webenginecontextmenurequest_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_webenginecontextmenurequest_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webenginecontextmenurequest_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_webenginecontextmenurequest_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_webenginecontextmenurequest_delete(void* self) {
    QWebEngineContextMenuRequest_Delete((QWebEngineContextMenuRequest*)(self));
}
