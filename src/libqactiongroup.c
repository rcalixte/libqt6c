#include "libqaction.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqicon.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqactiongroup.hpp"
#include "libqactiongroup.h"

/// https://doc.qt.io/qt-6/qactiongroup.html

/// q_actiongroup_new constructs a new QActionGroup object.
///
/// ``` QObject* parent ```
QActionGroup* q_actiongroup_new(void* parent) {
    return QActionGroup_new((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QActionGroup* self ```
QMetaObject* q_actiongroup_meta_object(void* self) {
    return QActionGroup_MetaObject((QActionGroup*)self);
}

/// ``` QActionGroup* self, const char* param1 ```
void* q_actiongroup_metacast(void* self, const char* param1) {
    return QActionGroup_Metacast((QActionGroup*)self, param1);
}

/// ``` QActionGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_actiongroup_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QActionGroup_Metacall((QActionGroup*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QActionGroup* self, int32_t (*slot)(QActionGroup*, enum QMetaObject__Call, int, void*) ```
void q_actiongroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QActionGroup_OnMetacall((QActionGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QActionGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_actiongroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QActionGroup_QBaseMetacall((QActionGroup*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_actiongroup_tr(const char* s) {
    libqt_string _str = QActionGroup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#addAction)
///
/// ``` QActionGroup* self, QAction* a ```
QAction* q_actiongroup_add_action(void* self, void* a) {
    return QActionGroup_AddAction((QActionGroup*)self, (QAction*)a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#addAction)
///
/// ``` QActionGroup* self, const char* text ```
QAction* q_actiongroup_add_action_with_text(void* self, const char* text) {
    return QActionGroup_AddActionWithText((QActionGroup*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#addAction)
///
/// ``` QActionGroup* self, QIcon* icon, const char* text ```
QAction* q_actiongroup_add_action2(void* self, void* icon, const char* text) {
    return QActionGroup_AddAction2((QActionGroup*)self, (QIcon*)icon, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#removeAction)
///
/// ``` QActionGroup* self, QAction* a ```
void q_actiongroup_remove_action(void* self, void* a) {
    QActionGroup_RemoveAction((QActionGroup*)self, (QAction*)a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#actions)
///
/// ``` QActionGroup* self ```
libqt_list /* of QAction* */ q_actiongroup_actions(void* self) {
    libqt_list _arr = QActionGroup_Actions((QActionGroup*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#checkedAction)
///
/// ``` QActionGroup* self ```
QAction* q_actiongroup_checked_action(void* self) {
    return QActionGroup_CheckedAction((QActionGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#isExclusive)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_is_exclusive(void* self) {
    return QActionGroup_IsExclusive((QActionGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#isEnabled)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_is_enabled(void* self) {
    return QActionGroup_IsEnabled((QActionGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#isVisible)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_is_visible(void* self) {
    return QActionGroup_IsVisible((QActionGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#exclusionPolicy)
///
/// ``` QActionGroup* self ```
int64_t q_actiongroup_exclusion_policy(void* self) {
    return QActionGroup_ExclusionPolicy((QActionGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setEnabled)
///
/// ``` QActionGroup* self, bool enabled ```
void q_actiongroup_set_enabled(void* self, bool enabled) {
    QActionGroup_SetEnabled((QActionGroup*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setDisabled)
///
/// ``` QActionGroup* self, bool b ```
void q_actiongroup_set_disabled(void* self, bool b) {
    QActionGroup_SetDisabled((QActionGroup*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setVisible)
///
/// ``` QActionGroup* self, bool visible ```
void q_actiongroup_set_visible(void* self, bool visible) {
    QActionGroup_SetVisible((QActionGroup*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setExclusive)
///
/// ``` QActionGroup* self, bool exclusive ```
void q_actiongroup_set_exclusive(void* self, bool exclusive) {
    QActionGroup_SetExclusive((QActionGroup*)self, exclusive);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#setExclusionPolicy)
///
/// ``` QActionGroup* self, enum QActionGroup__ExclusionPolicy policy ```
void q_actiongroup_set_exclusion_policy(void* self, int64_t policy) {
    QActionGroup_SetExclusionPolicy((QActionGroup*)self, policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#triggered)
///
/// ``` QActionGroup* self, QAction* param1 ```
void q_actiongroup_triggered(void* self, void* param1) {
    QActionGroup_Triggered((QActionGroup*)self, (QAction*)param1);
}

/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QAction*) ```
void q_actiongroup_on_triggered(void* self, void (*slot)(void*, void*)) {
    QActionGroup_Connect_Triggered((QActionGroup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qactiongroup.html#hovered)
///
/// ``` QActionGroup* self, QAction* param1 ```
void q_actiongroup_hovered(void* self, void* param1) {
    QActionGroup_Hovered((QActionGroup*)self, (QAction*)param1);
}

/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QAction*) ```
void q_actiongroup_on_hovered(void* self, void (*slot)(void*, void*)) {
    QActionGroup_Connect_Hovered((QActionGroup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_actiongroup_tr2(const char* s, const char* c) {
    libqt_string _str = QActionGroup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_actiongroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QActionGroup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QActionGroup* self ```
const char* q_actiongroup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QActionGroup* self, const char* name ```
void q_actiongroup_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QActionGroup* self ```
bool q_actiongroup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QActionGroup* self, bool b ```
bool q_actiongroup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QActionGroup* self ```
QThread* q_actiongroup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QActionGroup* self, QThread* thread ```
void q_actiongroup_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QActionGroup* self, int interval ```
int32_t q_actiongroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QActionGroup* self, int id ```
void q_actiongroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QActionGroup* self ```
libqt_list /* of QObject* */ q_actiongroup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QActionGroup* self, QObject* parent ```
void q_actiongroup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QActionGroup* self, QObject* filterObj ```
void q_actiongroup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QActionGroup* self, QObject* obj ```
void q_actiongroup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_actiongroup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QActionGroup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_actiongroup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_actiongroup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_actiongroup_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QActionGroup* self ```
void q_actiongroup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QActionGroup* self ```
void q_actiongroup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QActionGroup* self, const char* name, QVariant* value ```
bool q_actiongroup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QActionGroup* self, const char* name ```
QVariant* q_actiongroup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QActionGroup* self ```
const char** q_actiongroup_dynamic_property_names(void* self) {
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
/// ``` QActionGroup* self ```
QBindingStorage* q_actiongroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QActionGroup* self ```
QBindingStorage* q_actiongroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QActionGroup* self ```
void q_actiongroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QActionGroup* self, void (*slot)(QObject*) ```
void q_actiongroup_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QActionGroup* self ```
QObject* q_actiongroup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QActionGroup* self, const char* classname ```
bool q_actiongroup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QActionGroup* self ```
void q_actiongroup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QActionGroup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_actiongroup_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_actiongroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QActionGroup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_actiongroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QActionGroup* self, QObject* param1 ```
void q_actiongroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QActionGroup* self, void (*slot)(QObject*, QObject*) ```
void q_actiongroup_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QEvent* event ```
bool q_actiongroup_event(void* self, void* event) {
    return QActionGroup_Event((QActionGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QEvent* event ```
bool q_actiongroup_qbase_event(void* self, void* event) {
    return QActionGroup_QBaseEvent((QActionGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, bool (*slot)(QActionGroup*, QEvent*) ```
void q_actiongroup_on_event(void* self, bool (*slot)(void*, void*)) {
    QActionGroup_OnEvent((QActionGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QObject* watched, QEvent* event ```
bool q_actiongroup_event_filter(void* self, void* watched, void* event) {
    return QActionGroup_EventFilter((QActionGroup*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QObject* watched, QEvent* event ```
bool q_actiongroup_qbase_event_filter(void* self, void* watched, void* event) {
    return QActionGroup_QBaseEventFilter((QActionGroup*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, bool (*slot)(QActionGroup*, QObject*, QEvent*) ```
void q_actiongroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QActionGroup_OnEventFilter((QActionGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QTimerEvent* event ```
void q_actiongroup_timer_event(void* self, void* event) {
    QActionGroup_TimerEvent((QActionGroup*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QTimerEvent* event ```
void q_actiongroup_qbase_timer_event(void* self, void* event) {
    QActionGroup_QBaseTimerEvent((QActionGroup*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QTimerEvent*) ```
void q_actiongroup_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QActionGroup_OnTimerEvent((QActionGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QChildEvent* event ```
void q_actiongroup_child_event(void* self, void* event) {
    QActionGroup_ChildEvent((QActionGroup*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QChildEvent* event ```
void q_actiongroup_qbase_child_event(void* self, void* event) {
    QActionGroup_QBaseChildEvent((QActionGroup*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QChildEvent*) ```
void q_actiongroup_on_child_event(void* self, void (*slot)(void*, void*)) {
    QActionGroup_OnChildEvent((QActionGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QEvent* event ```
void q_actiongroup_custom_event(void* self, void* event) {
    QActionGroup_CustomEvent((QActionGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QEvent* event ```
void q_actiongroup_qbase_custom_event(void* self, void* event) {
    QActionGroup_QBaseCustomEvent((QActionGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QEvent*) ```
void q_actiongroup_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QActionGroup_OnCustomEvent((QActionGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QMetaMethod* signal ```
void q_actiongroup_connect_notify(void* self, void* signal) {
    QActionGroup_ConnectNotify((QActionGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QMetaMethod* signal ```
void q_actiongroup_qbase_connect_notify(void* self, void* signal) {
    QActionGroup_QBaseConnectNotify((QActionGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QMetaMethod*) ```
void q_actiongroup_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QActionGroup_OnConnectNotify((QActionGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QMetaMethod* signal ```
void q_actiongroup_disconnect_notify(void* self, void* signal) {
    QActionGroup_DisconnectNotify((QActionGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QMetaMethod* signal ```
void q_actiongroup_qbase_disconnect_notify(void* self, void* signal) {
    QActionGroup_QBaseDisconnectNotify((QActionGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, void (*slot)(QActionGroup*, QMetaMethod*) ```
void q_actiongroup_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QActionGroup_OnDisconnectNotify((QActionGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self ```
QObject* q_actiongroup_sender(void* self) {
    return QActionGroup_Sender((QActionGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self ```
QObject* q_actiongroup_qbase_sender(void* self) {
    return QActionGroup_QBaseSender((QActionGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, QObject* (*slot)() ```
void q_actiongroup_on_sender(void* self, QObject* (*slot)()) {
    QActionGroup_OnSender((QActionGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self ```
int32_t q_actiongroup_sender_signal_index(void* self) {
    return QActionGroup_SenderSignalIndex((QActionGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self ```
int32_t q_actiongroup_qbase_sender_signal_index(void* self) {
    return QActionGroup_QBaseSenderSignalIndex((QActionGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, int32_t (*slot)() ```
void q_actiongroup_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QActionGroup_OnSenderSignalIndex((QActionGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, const char* signal ```
int32_t q_actiongroup_receivers(void* self, const char* signal) {
    return QActionGroup_Receivers((QActionGroup*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, const char* signal ```
int32_t q_actiongroup_qbase_receivers(void* self, const char* signal) {
    return QActionGroup_QBaseReceivers((QActionGroup*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, int32_t (*slot)(QActionGroup*, const char*) ```
void q_actiongroup_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QActionGroup_OnReceivers((QActionGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QActionGroup* self, QMetaMethod* signal ```
bool q_actiongroup_is_signal_connected(void* self, void* signal) {
    return QActionGroup_IsSignalConnected((QActionGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QActionGroup* self, QMetaMethod* signal ```
bool q_actiongroup_qbase_is_signal_connected(void* self, void* signal) {
    return QActionGroup_QBaseIsSignalConnected((QActionGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QActionGroup* self, bool (*slot)(QActionGroup*, QMetaMethod*) ```
void q_actiongroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QActionGroup_OnIsSignalConnected((QActionGroup*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QActionGroup* self ```
void q_actiongroup_delete(void* self) {
    QActionGroup_Delete((QActionGroup*)(self));
}