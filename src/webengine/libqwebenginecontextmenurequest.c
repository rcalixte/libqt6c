#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqwebenginecontextmenurequest.hpp"
#include "libqwebenginecontextmenurequest.h"

/// https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineContextMenuRequest* self ```
QMetaObject* q_webenginecontextmenurequest_meta_object(void* self) {
    return QWebEngineContextMenuRequest_MetaObject((QWebEngineContextMenuRequest*)self);
}

/// ``` QWebEngineContextMenuRequest* self, const char* param1 ```
void* q_webenginecontextmenurequest_metacast(void* self, const char* param1) {
    return QWebEngineContextMenuRequest_Metacast((QWebEngineContextMenuRequest*)self, param1);
}

/// ``` QWebEngineContextMenuRequest* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginecontextmenurequest_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineContextMenuRequest_Metacall((QWebEngineContextMenuRequest*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginecontextmenurequest_tr(const char* s) {
    libqt_string _str = QWebEngineContextMenuRequest_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#position)
///
/// ``` QWebEngineContextMenuRequest* self ```
QPoint* q_webenginecontextmenurequest_position(void* self) {
    return QWebEngineContextMenuRequest_Position((QWebEngineContextMenuRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#selectedText)
///
/// ``` QWebEngineContextMenuRequest* self ```
const char* q_webenginecontextmenurequest_selected_text(void* self) {
    libqt_string _str = QWebEngineContextMenuRequest_SelectedText((QWebEngineContextMenuRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#linkText)
///
/// ``` QWebEngineContextMenuRequest* self ```
const char* q_webenginecontextmenurequest_link_text(void* self) {
    libqt_string _str = QWebEngineContextMenuRequest_LinkText((QWebEngineContextMenuRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#linkUrl)
///
/// ``` QWebEngineContextMenuRequest* self ```
QUrl* q_webenginecontextmenurequest_link_url(void* self) {
    return QWebEngineContextMenuRequest_LinkUrl((QWebEngineContextMenuRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#mediaUrl)
///
/// ``` QWebEngineContextMenuRequest* self ```
QUrl* q_webenginecontextmenurequest_media_url(void* self) {
    return QWebEngineContextMenuRequest_MediaUrl((QWebEngineContextMenuRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#mediaType)
///
/// ``` QWebEngineContextMenuRequest* self ```
int64_t q_webenginecontextmenurequest_media_type(void* self) {
    return QWebEngineContextMenuRequest_MediaType((QWebEngineContextMenuRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#isContentEditable)
///
/// ``` QWebEngineContextMenuRequest* self ```
bool q_webenginecontextmenurequest_is_content_editable(void* self) {
    return QWebEngineContextMenuRequest_IsContentEditable((QWebEngineContextMenuRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#misspelledWord)
///
/// ``` QWebEngineContextMenuRequest* self ```
const char* q_webenginecontextmenurequest_misspelled_word(void* self) {
    libqt_string _str = QWebEngineContextMenuRequest_MisspelledWord((QWebEngineContextMenuRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#spellCheckerSuggestions)
///
/// ``` QWebEngineContextMenuRequest* self ```
const char** q_webenginecontextmenurequest_spell_checker_suggestions(void* self) {
    libqt_list _arr = QWebEngineContextMenuRequest_SpellCheckerSuggestions((QWebEngineContextMenuRequest*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#isAccepted)
///
/// ``` QWebEngineContextMenuRequest* self ```
bool q_webenginecontextmenurequest_is_accepted(void* self) {
    return QWebEngineContextMenuRequest_IsAccepted((QWebEngineContextMenuRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#setAccepted)
///
/// ``` QWebEngineContextMenuRequest* self, bool accepted ```
void q_webenginecontextmenurequest_set_accepted(void* self, bool accepted) {
    QWebEngineContextMenuRequest_SetAccepted((QWebEngineContextMenuRequest*)self, accepted);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#mediaFlags)
///
/// ``` QWebEngineContextMenuRequest* self ```
int64_t q_webenginecontextmenurequest_media_flags(void* self) {
    return QWebEngineContextMenuRequest_MediaFlags((QWebEngineContextMenuRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecontextmenurequest.html#editFlags)
///
/// ``` QWebEngineContextMenuRequest* self ```
int64_t q_webenginecontextmenurequest_edit_flags(void* self) {
    return QWebEngineContextMenuRequest_EditFlags((QWebEngineContextMenuRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginecontextmenurequest_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineContextMenuRequest_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginecontextmenurequest_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineContextMenuRequest_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineContextMenuRequest* self, QEvent* event ```
bool q_webenginecontextmenurequest_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* watched, QEvent* event ```
bool q_webenginecontextmenurequest_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineContextMenuRequest* self ```
const char* q_webenginecontextmenurequest_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineContextMenuRequest* self, const char* name ```
void q_webenginecontextmenurequest_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineContextMenuRequest* self ```
bool q_webenginecontextmenurequest_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineContextMenuRequest* self ```
bool q_webenginecontextmenurequest_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineContextMenuRequest* self ```
bool q_webenginecontextmenurequest_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineContextMenuRequest* self ```
bool q_webenginecontextmenurequest_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineContextMenuRequest* self, bool b ```
bool q_webenginecontextmenurequest_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineContextMenuRequest* self ```
QThread* q_webenginecontextmenurequest_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineContextMenuRequest* self, QThread* thread ```
void q_webenginecontextmenurequest_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineContextMenuRequest* self, int interval ```
int32_t q_webenginecontextmenurequest_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineContextMenuRequest* self, int id ```
void q_webenginecontextmenurequest_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineContextMenuRequest* self ```
libqt_list /* of QObject* */ q_webenginecontextmenurequest_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* parent ```
void q_webenginecontextmenurequest_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* filterObj ```
void q_webenginecontextmenurequest_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* obj ```
void q_webenginecontextmenurequest_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginecontextmenurequest_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginecontextmenurequest_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginecontextmenurequest_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginecontextmenurequest_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineContextMenuRequest* self ```
void q_webenginecontextmenurequest_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineContextMenuRequest* self ```
void q_webenginecontextmenurequest_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineContextMenuRequest* self, const char* name, QVariant* value ```
bool q_webenginecontextmenurequest_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineContextMenuRequest* self, const char* name ```
QVariant* q_webenginecontextmenurequest_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineContextMenuRequest* self ```
const char** q_webenginecontextmenurequest_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineContextMenuRequest* self ```
QBindingStorage* q_webenginecontextmenurequest_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineContextMenuRequest* self ```
QBindingStorage* q_webenginecontextmenurequest_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineContextMenuRequest* self ```
void q_webenginecontextmenurequest_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWebEngineContextMenuRequest* self, void (*slot)(QObject*) ```
void q_webenginecontextmenurequest_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineContextMenuRequest* self ```
QObject* q_webenginecontextmenurequest_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineContextMenuRequest* self, const char* classname ```
bool q_webenginecontextmenurequest_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineContextMenuRequest* self ```
void q_webenginecontextmenurequest_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineContextMenuRequest* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginecontextmenurequest_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginecontextmenurequest_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginecontextmenurequest_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineContextMenuRequest* self, QObject* param1 ```
void q_webenginecontextmenurequest_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWebEngineContextMenuRequest* self, void (*slot)(QObject*, QObject*) ```
void q_webenginecontextmenurequest_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineContextMenuRequest* self ```
void q_webenginecontextmenurequest_delete(void* self) {
    QWebEngineContextMenuRequest_Delete((QWebEngineContextMenuRequest*)(self));
}