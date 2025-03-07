#include "libqaction.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqundostack.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqundogroup.hpp"
#include "libqundogroup.h"

/// https://doc.qt.io/qt-6/qundogroup.html

/// q_undogroup_new constructs a new QUndoGroup object.
///
///
QUndoGroup* q_undogroup_new() {
    return QUndoGroup_new();
}

/// q_undogroup_new2 constructs a new QUndoGroup object.
///
/// ``` QObject* parent ```
QUndoGroup* q_undogroup_new2(void* parent) {
    return QUndoGroup_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QUndoGroup* self ```
QMetaObject* q_undogroup_meta_object(void* self) {
    return QUndoGroup_MetaObject((QUndoGroup*)self);
}

/// ``` QUndoGroup* self, const char* param1 ```
void* q_undogroup_metacast(void* self, const char* param1) {
    return QUndoGroup_Metacast((QUndoGroup*)self, param1);
}

/// ``` QUndoGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_undogroup_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QUndoGroup_Metacall((QUndoGroup*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QUndoGroup* self, int32_t (*slot)(QUndoGroup*, enum QMetaObject__Call, int, void*) ```
void q_undogroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QUndoGroup_OnMetacall((QUndoGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QUndoGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_undogroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QUndoGroup_QBaseMetacall((QUndoGroup*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_undogroup_tr(const char* s) {
    libqt_string _str = QUndoGroup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#addStack)
///
/// ``` QUndoGroup* self, QUndoStack* stack ```
void q_undogroup_add_stack(void* self, void* stack) {
    QUndoGroup_AddStack((QUndoGroup*)self, (QUndoStack*)stack);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#removeStack)
///
/// ``` QUndoGroup* self, QUndoStack* stack ```
void q_undogroup_remove_stack(void* self, void* stack) {
    QUndoGroup_RemoveStack((QUndoGroup*)self, (QUndoStack*)stack);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#stacks)
///
/// ``` QUndoGroup* self ```
libqt_list /* of QUndoStack* */ q_undogroup_stacks(void* self) {
    libqt_list _arr = QUndoGroup_Stacks((QUndoGroup*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#activeStack)
///
/// ``` QUndoGroup* self ```
QUndoStack* q_undogroup_active_stack(void* self) {
    return QUndoGroup_ActiveStack((QUndoGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#createUndoAction)
///
/// ``` QUndoGroup* self, QObject* parent ```
QAction* q_undogroup_create_undo_action(void* self, void* parent) {
    return QUndoGroup_CreateUndoAction((QUndoGroup*)self, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#createRedoAction)
///
/// ``` QUndoGroup* self, QObject* parent ```
QAction* q_undogroup_create_redo_action(void* self, void* parent) {
    return QUndoGroup_CreateRedoAction((QUndoGroup*)self, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#canUndo)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_can_undo(void* self) {
    return QUndoGroup_CanUndo((QUndoGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#canRedo)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_can_redo(void* self) {
    return QUndoGroup_CanRedo((QUndoGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#undoText)
///
/// ``` QUndoGroup* self ```
const char* q_undogroup_undo_text(void* self) {
    libqt_string _str = QUndoGroup_UndoText((QUndoGroup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#redoText)
///
/// ``` QUndoGroup* self ```
const char* q_undogroup_redo_text(void* self) {
    libqt_string _str = QUndoGroup_RedoText((QUndoGroup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#isClean)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_is_clean(void* self) {
    return QUndoGroup_IsClean((QUndoGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#undo)
///
/// ``` QUndoGroup* self ```
void q_undogroup_undo(void* self) {
    QUndoGroup_Undo((QUndoGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#redo)
///
/// ``` QUndoGroup* self ```
void q_undogroup_redo(void* self) {
    QUndoGroup_Redo((QUndoGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#setActiveStack)
///
/// ``` QUndoGroup* self, QUndoStack* stack ```
void q_undogroup_set_active_stack(void* self, void* stack) {
    QUndoGroup_SetActiveStack((QUndoGroup*)self, (QUndoStack*)stack);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#activeStackChanged)
///
/// ``` QUndoGroup* self, QUndoStack* stack ```
void q_undogroup_active_stack_changed(void* self, void* stack) {
    QUndoGroup_ActiveStackChanged((QUndoGroup*)self, (QUndoStack*)stack);
}

/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, QUndoStack*) ```
void q_undogroup_on_active_stack_changed(void* self, void (*slot)(void*, void*)) {
    QUndoGroup_Connect_ActiveStackChanged((QUndoGroup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#indexChanged)
///
/// ``` QUndoGroup* self, int idx ```
void q_undogroup_index_changed(void* self, int idx) {
    QUndoGroup_IndexChanged((QUndoGroup*)self, idx);
}

/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, int) ```
void q_undogroup_on_index_changed(void* self, void (*slot)(void*, int)) {
    QUndoGroup_Connect_IndexChanged((QUndoGroup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#cleanChanged)
///
/// ``` QUndoGroup* self, bool clean ```
void q_undogroup_clean_changed(void* self, bool clean) {
    QUndoGroup_CleanChanged((QUndoGroup*)self, clean);
}

/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, bool) ```
void q_undogroup_on_clean_changed(void* self, void (*slot)(void*, bool)) {
    QUndoGroup_Connect_CleanChanged((QUndoGroup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#canUndoChanged)
///
/// ``` QUndoGroup* self, bool canUndo ```
void q_undogroup_can_undo_changed(void* self, bool canUndo) {
    QUndoGroup_CanUndoChanged((QUndoGroup*)self, canUndo);
}

/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, bool) ```
void q_undogroup_on_can_undo_changed(void* self, void (*slot)(void*, bool)) {
    QUndoGroup_Connect_CanUndoChanged((QUndoGroup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#canRedoChanged)
///
/// ``` QUndoGroup* self, bool canRedo ```
void q_undogroup_can_redo_changed(void* self, bool canRedo) {
    QUndoGroup_CanRedoChanged((QUndoGroup*)self, canRedo);
}

/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, bool) ```
void q_undogroup_on_can_redo_changed(void* self, void (*slot)(void*, bool)) {
    QUndoGroup_Connect_CanRedoChanged((QUndoGroup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#undoTextChanged)
///
/// ``` QUndoGroup* self, const char* undoText ```
void q_undogroup_undo_text_changed(void* self, const char* undoText) {
    QUndoGroup_UndoTextChanged((QUndoGroup*)self, qstring(undoText));
}

/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, const char*) ```
void q_undogroup_on_undo_text_changed(void* self, void (*slot)(void*, const char*)) {
    QUndoGroup_Connect_UndoTextChanged((QUndoGroup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#redoTextChanged)
///
/// ``` QUndoGroup* self, const char* redoText ```
void q_undogroup_redo_text_changed(void* self, const char* redoText) {
    QUndoGroup_RedoTextChanged((QUndoGroup*)self, qstring(redoText));
}

/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, const char*) ```
void q_undogroup_on_redo_text_changed(void* self, void (*slot)(void*, const char*)) {
    QUndoGroup_Connect_RedoTextChanged((QUndoGroup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_undogroup_tr2(const char* s, const char* c) {
    libqt_string _str = QUndoGroup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_undogroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QUndoGroup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#createUndoAction)
///
/// ``` QUndoGroup* self, QObject* parent, const char* prefix ```
QAction* q_undogroup_create_undo_action2(void* self, void* parent, const char* prefix) {
    return QUndoGroup_CreateUndoAction2((QUndoGroup*)self, (QObject*)parent, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundogroup.html#createRedoAction)
///
/// ``` QUndoGroup* self, QObject* parent, const char* prefix ```
QAction* q_undogroup_create_redo_action2(void* self, void* parent, const char* prefix) {
    return QUndoGroup_CreateRedoAction2((QUndoGroup*)self, (QObject*)parent, qstring(prefix));
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QUndoGroup* self ```
const char* q_undogroup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QUndoGroup* self, const char* name ```
void q_undogroup_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QUndoGroup* self ```
bool q_undogroup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QUndoGroup* self, bool b ```
bool q_undogroup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QUndoGroup* self ```
QThread* q_undogroup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QUndoGroup* self, QThread* thread ```
void q_undogroup_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUndoGroup* self, int interval ```
int32_t q_undogroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QUndoGroup* self, int id ```
void q_undogroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QUndoGroup* self ```
libqt_list /* of QObject* */ q_undogroup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QUndoGroup* self, QObject* parent ```
void q_undogroup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QUndoGroup* self, QObject* filterObj ```
void q_undogroup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QUndoGroup* self, QObject* obj ```
void q_undogroup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_undogroup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUndoGroup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_undogroup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_undogroup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_undogroup_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QUndoGroup* self ```
void q_undogroup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QUndoGroup* self ```
void q_undogroup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QUndoGroup* self, const char* name, QVariant* value ```
bool q_undogroup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QUndoGroup* self, const char* name ```
QVariant* q_undogroup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QUndoGroup* self ```
const char** q_undogroup_dynamic_property_names(void* self) {
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
/// ``` QUndoGroup* self ```
QBindingStorage* q_undogroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QUndoGroup* self ```
QBindingStorage* q_undogroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUndoGroup* self ```
void q_undogroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QUndoGroup* self, void (*slot)(QObject*) ```
void q_undogroup_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QUndoGroup* self ```
QObject* q_undogroup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QUndoGroup* self, const char* classname ```
bool q_undogroup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QUndoGroup* self ```
void q_undogroup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUndoGroup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_undogroup_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_undogroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUndoGroup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_undogroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUndoGroup* self, QObject* param1 ```
void q_undogroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QUndoGroup* self, void (*slot)(QObject*, QObject*) ```
void q_undogroup_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QEvent* event ```
bool q_undogroup_event(void* self, void* event) {
    return QUndoGroup_Event((QUndoGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QEvent* event ```
bool q_undogroup_qbase_event(void* self, void* event) {
    return QUndoGroup_QBaseEvent((QUndoGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, bool (*slot)(QUndoGroup*, QEvent*) ```
void q_undogroup_on_event(void* self, bool (*slot)(void*, void*)) {
    QUndoGroup_OnEvent((QUndoGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QObject* watched, QEvent* event ```
bool q_undogroup_event_filter(void* self, void* watched, void* event) {
    return QUndoGroup_EventFilter((QUndoGroup*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QObject* watched, QEvent* event ```
bool q_undogroup_qbase_event_filter(void* self, void* watched, void* event) {
    return QUndoGroup_QBaseEventFilter((QUndoGroup*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, bool (*slot)(QUndoGroup*, QObject*, QEvent*) ```
void q_undogroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QUndoGroup_OnEventFilter((QUndoGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QTimerEvent* event ```
void q_undogroup_timer_event(void* self, void* event) {
    QUndoGroup_TimerEvent((QUndoGroup*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QTimerEvent* event ```
void q_undogroup_qbase_timer_event(void* self, void* event) {
    QUndoGroup_QBaseTimerEvent((QUndoGroup*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, QTimerEvent*) ```
void q_undogroup_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QUndoGroup_OnTimerEvent((QUndoGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QChildEvent* event ```
void q_undogroup_child_event(void* self, void* event) {
    QUndoGroup_ChildEvent((QUndoGroup*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QChildEvent* event ```
void q_undogroup_qbase_child_event(void* self, void* event) {
    QUndoGroup_QBaseChildEvent((QUndoGroup*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, QChildEvent*) ```
void q_undogroup_on_child_event(void* self, void (*slot)(void*, void*)) {
    QUndoGroup_OnChildEvent((QUndoGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QEvent* event ```
void q_undogroup_custom_event(void* self, void* event) {
    QUndoGroup_CustomEvent((QUndoGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QEvent* event ```
void q_undogroup_qbase_custom_event(void* self, void* event) {
    QUndoGroup_QBaseCustomEvent((QUndoGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, QEvent*) ```
void q_undogroup_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QUndoGroup_OnCustomEvent((QUndoGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QMetaMethod* signal ```
void q_undogroup_connect_notify(void* self, void* signal) {
    QUndoGroup_ConnectNotify((QUndoGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QMetaMethod* signal ```
void q_undogroup_qbase_connect_notify(void* self, void* signal) {
    QUndoGroup_QBaseConnectNotify((QUndoGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, QMetaMethod*) ```
void q_undogroup_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QUndoGroup_OnConnectNotify((QUndoGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QMetaMethod* signal ```
void q_undogroup_disconnect_notify(void* self, void* signal) {
    QUndoGroup_DisconnectNotify((QUndoGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QMetaMethod* signal ```
void q_undogroup_qbase_disconnect_notify(void* self, void* signal) {
    QUndoGroup_QBaseDisconnectNotify((QUndoGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, void (*slot)(QUndoGroup*, QMetaMethod*) ```
void q_undogroup_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QUndoGroup_OnDisconnectNotify((QUndoGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self ```
QObject* q_undogroup_sender(void* self) {
    return QUndoGroup_Sender((QUndoGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self ```
QObject* q_undogroup_qbase_sender(void* self) {
    return QUndoGroup_QBaseSender((QUndoGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, QObject* (*slot)() ```
void q_undogroup_on_sender(void* self, QObject* (*slot)()) {
    QUndoGroup_OnSender((QUndoGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self ```
int32_t q_undogroup_sender_signal_index(void* self) {
    return QUndoGroup_SenderSignalIndex((QUndoGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self ```
int32_t q_undogroup_qbase_sender_signal_index(void* self) {
    return QUndoGroup_QBaseSenderSignalIndex((QUndoGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, int32_t (*slot)() ```
void q_undogroup_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QUndoGroup_OnSenderSignalIndex((QUndoGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, const char* signal ```
int32_t q_undogroup_receivers(void* self, const char* signal) {
    return QUndoGroup_Receivers((QUndoGroup*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, const char* signal ```
int32_t q_undogroup_qbase_receivers(void* self, const char* signal) {
    return QUndoGroup_QBaseReceivers((QUndoGroup*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, int32_t (*slot)(QUndoGroup*, const char*) ```
void q_undogroup_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QUndoGroup_OnReceivers((QUndoGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoGroup* self, QMetaMethod* signal ```
bool q_undogroup_is_signal_connected(void* self, void* signal) {
    return QUndoGroup_IsSignalConnected((QUndoGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoGroup* self, QMetaMethod* signal ```
bool q_undogroup_qbase_is_signal_connected(void* self, void* signal) {
    return QUndoGroup_QBaseIsSignalConnected((QUndoGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoGroup* self, bool (*slot)(QUndoGroup*, QMetaMethod*) ```
void q_undogroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QUndoGroup_OnIsSignalConnected((QUndoGroup*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QUndoGroup* self ```
void q_undogroup_delete(void* self) {
    QUndoGroup_Delete((QUndoGroup*)(self));
}