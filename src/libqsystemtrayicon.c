#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqicon.hpp"
#include "libqmenu.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqsystemtrayicon.hpp"
#include "libqsystemtrayicon.h"

/// https://doc.qt.io/qt-6/qsystemtrayicon.html

/// q_systemtrayicon_new constructs a new QSystemTrayIcon object.
///
///
QSystemTrayIcon* q_systemtrayicon_new() {
    return QSystemTrayIcon_new();
}

/// q_systemtrayicon_new2 constructs a new QSystemTrayIcon object.
///
/// ``` QIcon* icon ```
QSystemTrayIcon* q_systemtrayicon_new2(void* icon) {
    return QSystemTrayIcon_new2((QIcon*)icon);
}

/// q_systemtrayicon_new3 constructs a new QSystemTrayIcon object.
///
/// ``` QObject* parent ```
QSystemTrayIcon* q_systemtrayicon_new3(void* parent) {
    return QSystemTrayIcon_new3((QObject*)parent);
}

/// q_systemtrayicon_new4 constructs a new QSystemTrayIcon object.
///
/// ``` QIcon* icon, QObject* parent ```
QSystemTrayIcon* q_systemtrayicon_new4(void* icon, void* parent) {
    return QSystemTrayIcon_new4((QIcon*)icon, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSystemTrayIcon* self ```
QMetaObject* q_systemtrayicon_meta_object(void* self) {
    return QSystemTrayIcon_MetaObject((QSystemTrayIcon*)self);
}

/// ``` QSystemTrayIcon* self, const char* param1 ```
void* q_systemtrayicon_metacast(void* self, const char* param1) {
    return QSystemTrayIcon_Metacast((QSystemTrayIcon*)self, param1);
}

/// ``` QSystemTrayIcon* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_systemtrayicon_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSystemTrayIcon_Metacall((QSystemTrayIcon*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSystemTrayIcon* self, int32_t (*slot)(QSystemTrayIcon*, enum QMetaObject__Call, int, void*) ```
void q_systemtrayicon_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSystemTrayIcon_OnMetacall((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSystemTrayIcon* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_systemtrayicon_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSystemTrayIcon_QBaseMetacall((QSystemTrayIcon*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_systemtrayicon_tr(const char* s) {
    libqt_string _str = QSystemTrayIcon_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#setContextMenu)
///
/// ``` QSystemTrayIcon* self, QMenu* menu ```
void q_systemtrayicon_set_context_menu(void* self, void* menu) {
    QSystemTrayIcon_SetContextMenu((QSystemTrayIcon*)self, (QMenu*)menu);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#contextMenu)
///
/// ``` QSystemTrayIcon* self ```
QMenu* q_systemtrayicon_context_menu(void* self) {
    return QSystemTrayIcon_ContextMenu((QSystemTrayIcon*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#icon)
///
/// ``` QSystemTrayIcon* self ```
QIcon* q_systemtrayicon_icon(void* self) {
    return QSystemTrayIcon_Icon((QSystemTrayIcon*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#setIcon)
///
/// ``` QSystemTrayIcon* self, QIcon* icon ```
void q_systemtrayicon_set_icon(void* self, void* icon) {
    QSystemTrayIcon_SetIcon((QSystemTrayIcon*)self, (QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#toolTip)
///
/// ``` QSystemTrayIcon* self ```
const char* q_systemtrayicon_tool_tip(void* self) {
    libqt_string _str = QSystemTrayIcon_ToolTip((QSystemTrayIcon*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#setToolTip)
///
/// ``` QSystemTrayIcon* self, const char* tip ```
void q_systemtrayicon_set_tool_tip(void* self, const char* tip) {
    QSystemTrayIcon_SetToolTip((QSystemTrayIcon*)self, qstring(tip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#isSystemTrayAvailable)
///
///
bool q_systemtrayicon_is_system_tray_available() {
    return QSystemTrayIcon_IsSystemTrayAvailable();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#supportsMessages)
///
///
bool q_systemtrayicon_supports_messages() {
    return QSystemTrayIcon_SupportsMessages();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#geometry)
///
/// ``` QSystemTrayIcon* self ```
QRect* q_systemtrayicon_geometry(void* self) {
    return QSystemTrayIcon_Geometry((QSystemTrayIcon*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#isVisible)
///
/// ``` QSystemTrayIcon* self ```
bool q_systemtrayicon_is_visible(void* self) {
    return QSystemTrayIcon_IsVisible((QSystemTrayIcon*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#setVisible)
///
/// ``` QSystemTrayIcon* self, bool visible ```
void q_systemtrayicon_set_visible(void* self, bool visible) {
    QSystemTrayIcon_SetVisible((QSystemTrayIcon*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#show)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_show(void* self) {
    QSystemTrayIcon_Show((QSystemTrayIcon*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#hide)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_hide(void* self) {
    QSystemTrayIcon_Hide((QSystemTrayIcon*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// ``` QSystemTrayIcon* self, const char* title, const char* msg, QIcon* icon ```
void q_systemtrayicon_show_message(void* self, const char* title, const char* msg, void* icon) {
    QSystemTrayIcon_ShowMessage((QSystemTrayIcon*)self, qstring(title), qstring(msg), (QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// ``` QSystemTrayIcon* self, const char* title, const char* msg ```
void q_systemtrayicon_show_message2(void* self, const char* title, const char* msg) {
    QSystemTrayIcon_ShowMessage2((QSystemTrayIcon*)self, qstring(title), qstring(msg));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#activated)
///
/// ``` QSystemTrayIcon* self, enum QSystemTrayIcon__ActivationReason reason ```
void q_systemtrayicon_activated(void* self, int64_t reason) {
    QSystemTrayIcon_Activated((QSystemTrayIcon*)self, reason);
}

/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*, enum QSystemTrayIcon__ActivationReason) ```
void q_systemtrayicon_on_activated(void* self, void (*slot)(void*, int64_t)) {
    QSystemTrayIcon_Connect_Activated((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#messageClicked)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_message_clicked(void* self) {
    QSystemTrayIcon_MessageClicked((QSystemTrayIcon*)self);
}

/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*) ```
void q_systemtrayicon_on_message_clicked(void* self, void (*slot)(void*)) {
    QSystemTrayIcon_Connect_MessageClicked((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#event)
///
/// ``` QSystemTrayIcon* self, QEvent* event ```
bool q_systemtrayicon_event(void* self, void* event) {
    return QSystemTrayIcon_Event((QSystemTrayIcon*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QSystemTrayIcon* self, bool (*slot)(QSystemTrayIcon*, QEvent*) ```
void q_systemtrayicon_on_event(void* self, bool (*slot)(void*, void*)) {
    QSystemTrayIcon_OnEvent((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSystemTrayIcon* self, QEvent* event ```
bool q_systemtrayicon_qbase_event(void* self, void* event) {
    return QSystemTrayIcon_QBaseEvent((QSystemTrayIcon*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_systemtrayicon_tr2(const char* s, const char* c) {
    libqt_string _str = QSystemTrayIcon_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_systemtrayicon_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSystemTrayIcon_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// ``` QSystemTrayIcon* self, const char* title, const char* msg, QIcon* icon, int msecs ```
void q_systemtrayicon_show_message4(void* self, const char* title, const char* msg, void* icon, int msecs) {
    QSystemTrayIcon_ShowMessage4((QSystemTrayIcon*)self, qstring(title), qstring(msg), (QIcon*)icon, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// ``` QSystemTrayIcon* self, const char* title, const char* msg, enum QSystemTrayIcon__MessageIcon icon ```
void q_systemtrayicon_show_message3(void* self, const char* title, const char* msg, int64_t icon) {
    QSystemTrayIcon_ShowMessage3((QSystemTrayIcon*)self, qstring(title), qstring(msg), icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
///
/// ``` QSystemTrayIcon* self, const char* title, const char* msg, enum QSystemTrayIcon__MessageIcon icon, int msecs ```
void q_systemtrayicon_show_message42(void* self, const char* title, const char* msg, int64_t icon, int msecs) {
    QSystemTrayIcon_ShowMessage42((QSystemTrayIcon*)self, qstring(title), qstring(msg), icon, msecs);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSystemTrayIcon* self ```
const char* q_systemtrayicon_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSystemTrayIcon* self, const char* name ```
void q_systemtrayicon_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSystemTrayIcon* self ```
bool q_systemtrayicon_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSystemTrayIcon* self ```
bool q_systemtrayicon_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSystemTrayIcon* self ```
bool q_systemtrayicon_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSystemTrayIcon* self ```
bool q_systemtrayicon_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSystemTrayIcon* self, bool b ```
bool q_systemtrayicon_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSystemTrayIcon* self ```
QThread* q_systemtrayicon_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSystemTrayIcon* self, QThread* thread ```
void q_systemtrayicon_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSystemTrayIcon* self, int interval ```
int32_t q_systemtrayicon_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSystemTrayIcon* self, int id ```
void q_systemtrayicon_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSystemTrayIcon* self ```
libqt_list /* of QObject* */ q_systemtrayicon_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSystemTrayIcon* self, QObject* parent ```
void q_systemtrayicon_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSystemTrayIcon* self, QObject* filterObj ```
void q_systemtrayicon_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSystemTrayIcon* self, QObject* obj ```
void q_systemtrayicon_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_systemtrayicon_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSystemTrayIcon* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_systemtrayicon_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_systemtrayicon_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_systemtrayicon_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSystemTrayIcon* self, const char* name, QVariant* value ```
bool q_systemtrayicon_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSystemTrayIcon* self, const char* name ```
QVariant* q_systemtrayicon_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSystemTrayIcon* self ```
const char** q_systemtrayicon_dynamic_property_names(void* self) {
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
/// ``` QSystemTrayIcon* self ```
QBindingStorage* q_systemtrayicon_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSystemTrayIcon* self ```
QBindingStorage* q_systemtrayicon_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSystemTrayIcon* self, void (*slot)(QObject*) ```
void q_systemtrayicon_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSystemTrayIcon* self ```
QObject* q_systemtrayicon_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSystemTrayIcon* self, const char* classname ```
bool q_systemtrayicon_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSystemTrayIcon* self, int interval, enum Qt__TimerType timerType ```
int32_t q_systemtrayicon_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_systemtrayicon_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSystemTrayIcon* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_systemtrayicon_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSystemTrayIcon* self, QObject* param1 ```
void q_systemtrayicon_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSystemTrayIcon* self, void (*slot)(QObject*, QObject*) ```
void q_systemtrayicon_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QObject* watched, QEvent* event ```
bool q_systemtrayicon_event_filter(void* self, void* watched, void* event) {
    return QSystemTrayIcon_EventFilter((QSystemTrayIcon*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QObject* watched, QEvent* event ```
bool q_systemtrayicon_qbase_event_filter(void* self, void* watched, void* event) {
    return QSystemTrayIcon_QBaseEventFilter((QSystemTrayIcon*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, bool (*slot)(QSystemTrayIcon*, QObject*, QEvent*) ```
void q_systemtrayicon_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSystemTrayIcon_OnEventFilter((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QTimerEvent* event ```
void q_systemtrayicon_timer_event(void* self, void* event) {
    QSystemTrayIcon_TimerEvent((QSystemTrayIcon*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QTimerEvent* event ```
void q_systemtrayicon_qbase_timer_event(void* self, void* event) {
    QSystemTrayIcon_QBaseTimerEvent((QSystemTrayIcon*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*, QTimerEvent*) ```
void q_systemtrayicon_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSystemTrayIcon_OnTimerEvent((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QChildEvent* event ```
void q_systemtrayicon_child_event(void* self, void* event) {
    QSystemTrayIcon_ChildEvent((QSystemTrayIcon*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QChildEvent* event ```
void q_systemtrayicon_qbase_child_event(void* self, void* event) {
    QSystemTrayIcon_QBaseChildEvent((QSystemTrayIcon*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*, QChildEvent*) ```
void q_systemtrayicon_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSystemTrayIcon_OnChildEvent((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QEvent* event ```
void q_systemtrayicon_custom_event(void* self, void* event) {
    QSystemTrayIcon_CustomEvent((QSystemTrayIcon*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QEvent* event ```
void q_systemtrayicon_qbase_custom_event(void* self, void* event) {
    QSystemTrayIcon_QBaseCustomEvent((QSystemTrayIcon*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*, QEvent*) ```
void q_systemtrayicon_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSystemTrayIcon_OnCustomEvent((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QMetaMethod* signal ```
void q_systemtrayicon_connect_notify(void* self, void* signal) {
    QSystemTrayIcon_ConnectNotify((QSystemTrayIcon*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QMetaMethod* signal ```
void q_systemtrayicon_qbase_connect_notify(void* self, void* signal) {
    QSystemTrayIcon_QBaseConnectNotify((QSystemTrayIcon*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*, QMetaMethod*) ```
void q_systemtrayicon_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSystemTrayIcon_OnConnectNotify((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QMetaMethod* signal ```
void q_systemtrayicon_disconnect_notify(void* self, void* signal) {
    QSystemTrayIcon_DisconnectNotify((QSystemTrayIcon*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QMetaMethod* signal ```
void q_systemtrayicon_qbase_disconnect_notify(void* self, void* signal) {
    QSystemTrayIcon_QBaseDisconnectNotify((QSystemTrayIcon*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, void (*slot)(QSystemTrayIcon*, QMetaMethod*) ```
void q_systemtrayicon_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSystemTrayIcon_OnDisconnectNotify((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self ```
QObject* q_systemtrayicon_sender(void* self) {
    return QSystemTrayIcon_Sender((QSystemTrayIcon*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self ```
QObject* q_systemtrayicon_qbase_sender(void* self) {
    return QSystemTrayIcon_QBaseSender((QSystemTrayIcon*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QObject* (*slot)() ```
void q_systemtrayicon_on_sender(void* self, QObject* (*slot)()) {
    QSystemTrayIcon_OnSender((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self ```
int32_t q_systemtrayicon_sender_signal_index(void* self) {
    return QSystemTrayIcon_SenderSignalIndex((QSystemTrayIcon*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self ```
int32_t q_systemtrayicon_qbase_sender_signal_index(void* self) {
    return QSystemTrayIcon_QBaseSenderSignalIndex((QSystemTrayIcon*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, int32_t (*slot)() ```
void q_systemtrayicon_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSystemTrayIcon_OnSenderSignalIndex((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, const char* signal ```
int32_t q_systemtrayicon_receivers(void* self, const char* signal) {
    return QSystemTrayIcon_Receivers((QSystemTrayIcon*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, const char* signal ```
int32_t q_systemtrayicon_qbase_receivers(void* self, const char* signal) {
    return QSystemTrayIcon_QBaseReceivers((QSystemTrayIcon*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, int32_t (*slot)(QSystemTrayIcon*, const char*) ```
void q_systemtrayicon_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSystemTrayIcon_OnReceivers((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSystemTrayIcon* self, QMetaMethod* signal ```
bool q_systemtrayicon_is_signal_connected(void* self, void* signal) {
    return QSystemTrayIcon_IsSignalConnected((QSystemTrayIcon*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, QMetaMethod* signal ```
bool q_systemtrayicon_qbase_is_signal_connected(void* self, void* signal) {
    return QSystemTrayIcon_QBaseIsSignalConnected((QSystemTrayIcon*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSystemTrayIcon* self, bool (*slot)(QSystemTrayIcon*, QMetaMethod*) ```
void q_systemtrayicon_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSystemTrayIcon_OnIsSignalConnected((QSystemTrayIcon*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSystemTrayIcon* self ```
void q_systemtrayicon_delete(void* self) {
    QSystemTrayIcon_Delete((QSystemTrayIcon*)(self));
}