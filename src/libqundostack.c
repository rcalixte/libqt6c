#include "libqaction.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqundostack.hpp"
#include "libqundostack.h"

/// https://doc.qt.io/qt-6/qundocommand.html

/// q_undocommand_new constructs a new QUndoCommand object.
///
///
QUndoCommand* q_undocommand_new() {
    return QUndoCommand_new();
}

/// q_undocommand_new2 constructs a new QUndoCommand object.
///
/// ``` const char* text ```
QUndoCommand* q_undocommand_new2(const char* text) {
    return QUndoCommand_new2(qstring(text));
}

/// q_undocommand_new3 constructs a new QUndoCommand object.
///
/// ``` QUndoCommand* parent ```
QUndoCommand* q_undocommand_new3(void* parent) {
    return QUndoCommand_new3((QUndoCommand*)parent);
}

/// q_undocommand_new4 constructs a new QUndoCommand object.
///
/// ``` const char* text, QUndoCommand* parent ```
QUndoCommand* q_undocommand_new4(const char* text, void* parent) {
    return QUndoCommand_new4(qstring(text), (QUndoCommand*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#undo)
///
/// ``` QUndoCommand* self ```
void q_undocommand_undo(void* self) {
    QUndoCommand_Undo((QUndoCommand*)self);
}

/// Allows for overriding the related default method
///
/// ``` QUndoCommand* self, void (*slot)() ```
void q_undocommand_on_undo(void* self, void (*slot)()) {
    QUndoCommand_OnUndo((QUndoCommand*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QUndoCommand* self ```
void q_undocommand_qbase_undo(void* self) {
    QUndoCommand_QBaseUndo((QUndoCommand*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#redo)
///
/// ``` QUndoCommand* self ```
void q_undocommand_redo(void* self) {
    QUndoCommand_Redo((QUndoCommand*)self);
}

/// Allows for overriding the related default method
///
/// ``` QUndoCommand* self, void (*slot)() ```
void q_undocommand_on_redo(void* self, void (*slot)()) {
    QUndoCommand_OnRedo((QUndoCommand*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QUndoCommand* self ```
void q_undocommand_qbase_redo(void* self) {
    QUndoCommand_QBaseRedo((QUndoCommand*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#text)
///
/// ``` QUndoCommand* self ```
const char* q_undocommand_text(void* self) {
    libqt_string _str = QUndoCommand_Text((QUndoCommand*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#actionText)
///
/// ``` QUndoCommand* self ```
const char* q_undocommand_action_text(void* self) {
    libqt_string _str = QUndoCommand_ActionText((QUndoCommand*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#setText)
///
/// ``` QUndoCommand* self, const char* text ```
void q_undocommand_set_text(void* self, const char* text) {
    QUndoCommand_SetText((QUndoCommand*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#isObsolete)
///
/// ``` QUndoCommand* self ```
bool q_undocommand_is_obsolete(void* self) {
    return QUndoCommand_IsObsolete((QUndoCommand*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#setObsolete)
///
/// ``` QUndoCommand* self, bool obsolete ```
void q_undocommand_set_obsolete(void* self, bool obsolete) {
    QUndoCommand_SetObsolete((QUndoCommand*)self, obsolete);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#id)
///
/// ``` QUndoCommand* self ```
int32_t q_undocommand_id(void* self) {
    return QUndoCommand_Id((QUndoCommand*)self);
}

/// Allows for overriding the related default method
///
/// ``` QUndoCommand* self, int32_t (*slot)() ```
void q_undocommand_on_id(void* self, int32_t (*slot)()) {
    QUndoCommand_OnId((QUndoCommand*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QUndoCommand* self ```
int32_t q_undocommand_qbase_id(void* self) {
    return QUndoCommand_QBaseId((QUndoCommand*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#mergeWith)
///
/// ``` QUndoCommand* self, QUndoCommand* other ```
bool q_undocommand_merge_with(void* self, void* other) {
    return QUndoCommand_MergeWith((QUndoCommand*)self, (QUndoCommand*)other);
}

/// Allows for overriding the related default method
///
/// ``` QUndoCommand* self, bool (*slot)(QUndoCommand*, QUndoCommand*) ```
void q_undocommand_on_merge_with(void* self, bool (*slot)(void*, void*)) {
    QUndoCommand_OnMergeWith((QUndoCommand*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QUndoCommand* self, QUndoCommand* other ```
bool q_undocommand_qbase_merge_with(void* self, void* other) {
    return QUndoCommand_QBaseMergeWith((QUndoCommand*)self, (QUndoCommand*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#childCount)
///
/// ``` QUndoCommand* self ```
int32_t q_undocommand_child_count(void* self) {
    return QUndoCommand_ChildCount((QUndoCommand*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundocommand.html#child)
///
/// ``` QUndoCommand* self, int index ```
QUndoCommand* q_undocommand_child(void* self, int index) {
    return QUndoCommand_Child((QUndoCommand*)self, index);
}

/// Delete this object from C++ memory.
///
/// ``` QUndoCommand* self ```
void q_undocommand_delete(void* self) {
    QUndoCommand_Delete((QUndoCommand*)(self));
}

/// https://doc.qt.io/qt-6/qundostack.html

/// q_undostack_new constructs a new QUndoStack object.
///
///
QUndoStack* q_undostack_new() {
    return QUndoStack_new();
}

/// q_undostack_new2 constructs a new QUndoStack object.
///
/// ``` QObject* parent ```
QUndoStack* q_undostack_new2(void* parent) {
    return QUndoStack_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QUndoStack* self ```
QMetaObject* q_undostack_meta_object(void* self) {
    return QUndoStack_MetaObject((QUndoStack*)self);
}

/// ``` QUndoStack* self, const char* param1 ```
void* q_undostack_metacast(void* self, const char* param1) {
    return QUndoStack_Metacast((QUndoStack*)self, param1);
}

/// ``` QUndoStack* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_undostack_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QUndoStack_Metacall((QUndoStack*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QUndoStack* self, int32_t (*slot)(QUndoStack*, enum QMetaObject__Call, int, void*) ```
void q_undostack_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QUndoStack_OnMetacall((QUndoStack*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QUndoStack* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_undostack_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QUndoStack_QBaseMetacall((QUndoStack*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_undostack_tr(const char* s) {
    libqt_string _str = QUndoStack_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#clear)
///
/// ``` QUndoStack* self ```
void q_undostack_clear(void* self) {
    QUndoStack_Clear((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#push)
///
/// ``` QUndoStack* self, QUndoCommand* cmd ```
void q_undostack_push(void* self, void* cmd) {
    QUndoStack_Push((QUndoStack*)self, (QUndoCommand*)cmd);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canUndo)
///
/// ``` QUndoStack* self ```
bool q_undostack_can_undo(void* self) {
    return QUndoStack_CanUndo((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canRedo)
///
/// ``` QUndoStack* self ```
bool q_undostack_can_redo(void* self) {
    return QUndoStack_CanRedo((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoText)
///
/// ``` QUndoStack* self ```
const char* q_undostack_undo_text(void* self) {
    libqt_string _str = QUndoStack_UndoText((QUndoStack*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redoText)
///
/// ``` QUndoStack* self ```
const char* q_undostack_redo_text(void* self) {
    libqt_string _str = QUndoStack_RedoText((QUndoStack*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#count)
///
/// ``` QUndoStack* self ```
int32_t q_undostack_count(void* self) {
    return QUndoStack_Count((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#index)
///
/// ``` QUndoStack* self ```
int32_t q_undostack_index(void* self) {
    return QUndoStack_Index((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#text)
///
/// ``` QUndoStack* self, int idx ```
const char* q_undostack_text(void* self, int idx) {
    libqt_string _str = QUndoStack_Text((QUndoStack*)self, idx);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
///
/// ``` QUndoStack* self, QObject* parent ```
QAction* q_undostack_create_undo_action(void* self, void* parent) {
    return QUndoStack_CreateUndoAction((QUndoStack*)self, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
///
/// ``` QUndoStack* self, QObject* parent ```
QAction* q_undostack_create_redo_action(void* self, void* parent) {
    return QUndoStack_CreateRedoAction((QUndoStack*)self, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#isActive)
///
/// ``` QUndoStack* self ```
bool q_undostack_is_active(void* self) {
    return QUndoStack_IsActive((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#isClean)
///
/// ``` QUndoStack* self ```
bool q_undostack_is_clean(void* self) {
    return QUndoStack_IsClean((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#cleanIndex)
///
/// ``` QUndoStack* self ```
int32_t q_undostack_clean_index(void* self) {
    return QUndoStack_CleanIndex((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#beginMacro)
///
/// ``` QUndoStack* self, const char* text ```
void q_undostack_begin_macro(void* self, const char* text) {
    QUndoStack_BeginMacro((QUndoStack*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#endMacro)
///
/// ``` QUndoStack* self ```
void q_undostack_end_macro(void* self) {
    QUndoStack_EndMacro((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setUndoLimit)
///
/// ``` QUndoStack* self, int limit ```
void q_undostack_set_undo_limit(void* self, int limit) {
    QUndoStack_SetUndoLimit((QUndoStack*)self, limit);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoLimit)
///
/// ``` QUndoStack* self ```
int32_t q_undostack_undo_limit(void* self) {
    return QUndoStack_UndoLimit((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#command)
///
/// ``` QUndoStack* self, int index ```
QUndoCommand* q_undostack_command(void* self, int index) {
    return QUndoStack_Command((QUndoStack*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setClean)
///
/// ``` QUndoStack* self ```
void q_undostack_set_clean(void* self) {
    QUndoStack_SetClean((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#resetClean)
///
/// ``` QUndoStack* self ```
void q_undostack_reset_clean(void* self) {
    QUndoStack_ResetClean((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setIndex)
///
/// ``` QUndoStack* self, int idx ```
void q_undostack_set_index(void* self, int idx) {
    QUndoStack_SetIndex((QUndoStack*)self, idx);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undo)
///
/// ``` QUndoStack* self ```
void q_undostack_undo(void* self) {
    QUndoStack_Undo((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redo)
///
/// ``` QUndoStack* self ```
void q_undostack_redo(void* self) {
    QUndoStack_Redo((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setActive)
///
/// ``` QUndoStack* self ```
void q_undostack_set_active(void* self) {
    QUndoStack_SetActive((QUndoStack*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#indexChanged)
///
/// ``` QUndoStack* self, int idx ```
void q_undostack_index_changed(void* self, int idx) {
    QUndoStack_IndexChanged((QUndoStack*)self, idx);
}

/// ``` QUndoStack* self, void (*slot)(QUndoStack*, int) ```
void q_undostack_on_index_changed(void* self, void (*slot)(void*, int)) {
    QUndoStack_Connect_IndexChanged((QUndoStack*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#cleanChanged)
///
/// ``` QUndoStack* self, bool clean ```
void q_undostack_clean_changed(void* self, bool clean) {
    QUndoStack_CleanChanged((QUndoStack*)self, clean);
}

/// ``` QUndoStack* self, void (*slot)(QUndoStack*, bool) ```
void q_undostack_on_clean_changed(void* self, void (*slot)(void*, bool)) {
    QUndoStack_Connect_CleanChanged((QUndoStack*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canUndoChanged)
///
/// ``` QUndoStack* self, bool canUndo ```
void q_undostack_can_undo_changed(void* self, bool canUndo) {
    QUndoStack_CanUndoChanged((QUndoStack*)self, canUndo);
}

/// ``` QUndoStack* self, void (*slot)(QUndoStack*, bool) ```
void q_undostack_on_can_undo_changed(void* self, void (*slot)(void*, bool)) {
    QUndoStack_Connect_CanUndoChanged((QUndoStack*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#canRedoChanged)
///
/// ``` QUndoStack* self, bool canRedo ```
void q_undostack_can_redo_changed(void* self, bool canRedo) {
    QUndoStack_CanRedoChanged((QUndoStack*)self, canRedo);
}

/// ``` QUndoStack* self, void (*slot)(QUndoStack*, bool) ```
void q_undostack_on_can_redo_changed(void* self, void (*slot)(void*, bool)) {
    QUndoStack_Connect_CanRedoChanged((QUndoStack*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#undoTextChanged)
///
/// ``` QUndoStack* self, const char* undoText ```
void q_undostack_undo_text_changed(void* self, const char* undoText) {
    QUndoStack_UndoTextChanged((QUndoStack*)self, qstring(undoText));
}

/// ``` QUndoStack* self, void (*slot)(QUndoStack*, const char*) ```
void q_undostack_on_undo_text_changed(void* self, void (*slot)(void*, const char*)) {
    QUndoStack_Connect_UndoTextChanged((QUndoStack*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#redoTextChanged)
///
/// ``` QUndoStack* self, const char* redoText ```
void q_undostack_redo_text_changed(void* self, const char* redoText) {
    QUndoStack_RedoTextChanged((QUndoStack*)self, qstring(redoText));
}

/// ``` QUndoStack* self, void (*slot)(QUndoStack*, const char*) ```
void q_undostack_on_redo_text_changed(void* self, void (*slot)(void*, const char*)) {
    QUndoStack_Connect_RedoTextChanged((QUndoStack*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_undostack_tr2(const char* s, const char* c) {
    libqt_string _str = QUndoStack_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_undostack_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QUndoStack_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createUndoAction)
///
/// ``` QUndoStack* self, QObject* parent, const char* prefix ```
QAction* q_undostack_create_undo_action2(void* self, void* parent, const char* prefix) {
    return QUndoStack_CreateUndoAction2((QUndoStack*)self, (QObject*)parent, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#createRedoAction)
///
/// ``` QUndoStack* self, QObject* parent, const char* prefix ```
QAction* q_undostack_create_redo_action2(void* self, void* parent, const char* prefix) {
    return QUndoStack_CreateRedoAction2((QUndoStack*)self, (QObject*)parent, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qundostack.html#setActive)
///
/// ``` QUndoStack* self, bool active ```
void q_undostack_set_active1(void* self, bool active) {
    QUndoStack_SetActive1((QUndoStack*)self, active);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QUndoStack* self ```
const char* q_undostack_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QUndoStack* self, const char* name ```
void q_undostack_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QUndoStack* self ```
bool q_undostack_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QUndoStack* self ```
bool q_undostack_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QUndoStack* self ```
bool q_undostack_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QUndoStack* self ```
bool q_undostack_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QUndoStack* self, bool b ```
bool q_undostack_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QUndoStack* self ```
QThread* q_undostack_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QUndoStack* self, QThread* thread ```
void q_undostack_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUndoStack* self, int interval ```
int32_t q_undostack_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QUndoStack* self, int id ```
void q_undostack_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QUndoStack* self ```
libqt_list /* of QObject* */ q_undostack_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QUndoStack* self, QObject* parent ```
void q_undostack_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QUndoStack* self, QObject* filterObj ```
void q_undostack_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QUndoStack* self, QObject* obj ```
void q_undostack_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_undostack_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUndoStack* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_undostack_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_undostack_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_undostack_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QUndoStack* self ```
void q_undostack_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QUndoStack* self ```
void q_undostack_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QUndoStack* self, const char* name, QVariant* value ```
bool q_undostack_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QUndoStack* self, const char* name ```
QVariant* q_undostack_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QUndoStack* self ```
const char** q_undostack_dynamic_property_names(void* self) {
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
/// ``` QUndoStack* self ```
QBindingStorage* q_undostack_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QUndoStack* self ```
QBindingStorage* q_undostack_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUndoStack* self ```
void q_undostack_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QUndoStack* self, void (*slot)(QObject*) ```
void q_undostack_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QUndoStack* self ```
QObject* q_undostack_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QUndoStack* self, const char* classname ```
bool q_undostack_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QUndoStack* self ```
void q_undostack_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUndoStack* self, int interval, enum Qt__TimerType timerType ```
int32_t q_undostack_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_undostack_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUndoStack* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_undostack_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUndoStack* self, QObject* param1 ```
void q_undostack_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QUndoStack* self, void (*slot)(QObject*, QObject*) ```
void q_undostack_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QEvent* event ```
bool q_undostack_event(void* self, void* event) {
    return QUndoStack_Event((QUndoStack*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QEvent* event ```
bool q_undostack_qbase_event(void* self, void* event) {
    return QUndoStack_QBaseEvent((QUndoStack*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, bool (*slot)(QUndoStack*, QEvent*) ```
void q_undostack_on_event(void* self, bool (*slot)(void*, void*)) {
    QUndoStack_OnEvent((QUndoStack*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QObject* watched, QEvent* event ```
bool q_undostack_event_filter(void* self, void* watched, void* event) {
    return QUndoStack_EventFilter((QUndoStack*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QObject* watched, QEvent* event ```
bool q_undostack_qbase_event_filter(void* self, void* watched, void* event) {
    return QUndoStack_QBaseEventFilter((QUndoStack*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, bool (*slot)(QUndoStack*, QObject*, QEvent*) ```
void q_undostack_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QUndoStack_OnEventFilter((QUndoStack*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QTimerEvent* event ```
void q_undostack_timer_event(void* self, void* event) {
    QUndoStack_TimerEvent((QUndoStack*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QTimerEvent* event ```
void q_undostack_qbase_timer_event(void* self, void* event) {
    QUndoStack_QBaseTimerEvent((QUndoStack*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, void (*slot)(QUndoStack*, QTimerEvent*) ```
void q_undostack_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QUndoStack_OnTimerEvent((QUndoStack*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QChildEvent* event ```
void q_undostack_child_event(void* self, void* event) {
    QUndoStack_ChildEvent((QUndoStack*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QChildEvent* event ```
void q_undostack_qbase_child_event(void* self, void* event) {
    QUndoStack_QBaseChildEvent((QUndoStack*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, void (*slot)(QUndoStack*, QChildEvent*) ```
void q_undostack_on_child_event(void* self, void (*slot)(void*, void*)) {
    QUndoStack_OnChildEvent((QUndoStack*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QEvent* event ```
void q_undostack_custom_event(void* self, void* event) {
    QUndoStack_CustomEvent((QUndoStack*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QEvent* event ```
void q_undostack_qbase_custom_event(void* self, void* event) {
    QUndoStack_QBaseCustomEvent((QUndoStack*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, void (*slot)(QUndoStack*, QEvent*) ```
void q_undostack_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QUndoStack_OnCustomEvent((QUndoStack*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QMetaMethod* signal ```
void q_undostack_connect_notify(void* self, void* signal) {
    QUndoStack_ConnectNotify((QUndoStack*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QMetaMethod* signal ```
void q_undostack_qbase_connect_notify(void* self, void* signal) {
    QUndoStack_QBaseConnectNotify((QUndoStack*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, void (*slot)(QUndoStack*, QMetaMethod*) ```
void q_undostack_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QUndoStack_OnConnectNotify((QUndoStack*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QMetaMethod* signal ```
void q_undostack_disconnect_notify(void* self, void* signal) {
    QUndoStack_DisconnectNotify((QUndoStack*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QMetaMethod* signal ```
void q_undostack_qbase_disconnect_notify(void* self, void* signal) {
    QUndoStack_QBaseDisconnectNotify((QUndoStack*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, void (*slot)(QUndoStack*, QMetaMethod*) ```
void q_undostack_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QUndoStack_OnDisconnectNotify((QUndoStack*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self ```
QObject* q_undostack_sender(void* self) {
    return QUndoStack_Sender((QUndoStack*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self ```
QObject* q_undostack_qbase_sender(void* self) {
    return QUndoStack_QBaseSender((QUndoStack*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, QObject* (*slot)() ```
void q_undostack_on_sender(void* self, QObject* (*slot)()) {
    QUndoStack_OnSender((QUndoStack*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self ```
int32_t q_undostack_sender_signal_index(void* self) {
    return QUndoStack_SenderSignalIndex((QUndoStack*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self ```
int32_t q_undostack_qbase_sender_signal_index(void* self) {
    return QUndoStack_QBaseSenderSignalIndex((QUndoStack*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, int32_t (*slot)() ```
void q_undostack_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QUndoStack_OnSenderSignalIndex((QUndoStack*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, const char* signal ```
int32_t q_undostack_receivers(void* self, const char* signal) {
    return QUndoStack_Receivers((QUndoStack*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, const char* signal ```
int32_t q_undostack_qbase_receivers(void* self, const char* signal) {
    return QUndoStack_QBaseReceivers((QUndoStack*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, int32_t (*slot)(QUndoStack*, const char*) ```
void q_undostack_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QUndoStack_OnReceivers((QUndoStack*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoStack* self, QMetaMethod* signal ```
bool q_undostack_is_signal_connected(void* self, void* signal) {
    return QUndoStack_IsSignalConnected((QUndoStack*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoStack* self, QMetaMethod* signal ```
bool q_undostack_qbase_is_signal_connected(void* self, void* signal) {
    return QUndoStack_QBaseIsSignalConnected((QUndoStack*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoStack* self, bool (*slot)(QUndoStack*, QMetaMethod*) ```
void q_undostack_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QUndoStack_OnIsSignalConnected((QUndoStack*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QUndoStack* self ```
void q_undostack_delete(void* self) {
    QUndoStack_Delete((QUndoStack*)(self));
}