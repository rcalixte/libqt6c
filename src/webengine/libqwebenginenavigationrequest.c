#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libqwebenginenavigationrequest.hpp"
#include "libqwebenginenavigationrequest.h"

const QMetaObject* q_webenginenavigationrequest_meta_object(void* self) {
    return QWebEngineNavigationRequest_MetaObject((QWebEngineNavigationRequest*)self);
}

void* q_webenginenavigationrequest_metacast(void* self, const char* param1) {
    return QWebEngineNavigationRequest_Metacast((QWebEngineNavigationRequest*)self, param1);
}

int32_t q_webenginenavigationrequest_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebEngineNavigationRequest_Metacall((QWebEngineNavigationRequest*)self, param1, param2, param3);
}

const char* q_webenginenavigationrequest_tr(const char* s) {
    libqt_string _str = QWebEngineNavigationRequest_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_webenginenavigationrequest_url(void* self) {
    return QWebEngineNavigationRequest_Url((QWebEngineNavigationRequest*)self);
}

bool q_webenginenavigationrequest_is_main_frame(void* self) {
    return QWebEngineNavigationRequest_IsMainFrame((QWebEngineNavigationRequest*)self);
}

bool q_webenginenavigationrequest_has_form_data(void* self) {
    return QWebEngineNavigationRequest_HasFormData((QWebEngineNavigationRequest*)self);
}

int32_t q_webenginenavigationrequest_navigation_type(void* self) {
    return QWebEngineNavigationRequest_NavigationType((QWebEngineNavigationRequest*)self);
}

void q_webenginenavigationrequest_accept(void* self) {
    QWebEngineNavigationRequest_Accept((QWebEngineNavigationRequest*)self);
}

void q_webenginenavigationrequest_reject(void* self) {
    QWebEngineNavigationRequest_Reject((QWebEngineNavigationRequest*)self);
}

void q_webenginenavigationrequest_action_changed(void* self) {
    QWebEngineNavigationRequest_ActionChanged((QWebEngineNavigationRequest*)self);
}

void q_webenginenavigationrequest_on_action_changed(void* self, void (*callback)(void*)) {
    QWebEngineNavigationRequest_Connect_ActionChanged((QWebEngineNavigationRequest*)self, (intptr_t)callback);
}

const char* q_webenginenavigationrequest_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineNavigationRequest_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webenginenavigationrequest_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineNavigationRequest_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webenginenavigationrequest_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_webenginenavigationrequest_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_webenginenavigationrequest_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginenavigationrequest_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webenginenavigationrequest_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webenginenavigationrequest_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webenginenavigationrequest_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webenginenavigationrequest_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webenginenavigationrequest_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webenginenavigationrequest_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webenginenavigationrequest_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webenginenavigationrequest_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_webenginenavigationrequest_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webenginenavigationrequest_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webenginenavigationrequest_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webenginenavigationrequest_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webenginenavigationrequest_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webenginenavigationrequest_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webenginenavigationrequest_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webenginenavigationrequest_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webenginenavigationrequest_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webenginenavigationrequest_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_webenginenavigationrequest_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webenginenavigationrequest_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webenginenavigationrequest_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webenginenavigationrequest_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webenginenavigationrequest_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_webenginenavigationrequest_dynamic_property_names");
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

QBindingStorage* q_webenginenavigationrequest_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webenginenavigationrequest_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webenginenavigationrequest_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webenginenavigationrequest_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_webenginenavigationrequest_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webenginenavigationrequest_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webenginenavigationrequest_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_webenginenavigationrequest_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_webenginenavigationrequest_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_webenginenavigationrequest_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_webenginenavigationrequest_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_webenginenavigationrequest_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webenginenavigationrequest_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_webenginenavigationrequest_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_webenginenavigationrequest_delete(void* self) {
    QWebEngineNavigationRequest_Delete((QWebEngineNavigationRequest*)(self));
}
