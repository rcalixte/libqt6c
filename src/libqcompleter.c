#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqcompleter.hpp"
#include "libqcompleter.h"

/// https://doc.qt.io/qt-6/qcompleter.html

/// q_completer_new constructs a new QCompleter object.
///
///
QCompleter* q_completer_new() {
    return QCompleter_new();
}

/// q_completer_new2 constructs a new QCompleter object.
///
/// ``` QAbstractItemModel* model ```
QCompleter* q_completer_new2(void* model) {
    return QCompleter_new2((QAbstractItemModel*)model);
}

/// q_completer_new3 constructs a new QCompleter object.
///
/// ``` const char* completions[] ```
QCompleter* q_completer_new3(const char* completions[]) {
    size_t completions_len = libqt_strv_length(completions);
    libqt_string* completions_qstr = malloc(completions_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < completions_len; ++_i) {
        completions_qstr[_i] = qstring(completions[_i]);
    }
    libqt_list completions_list = qstrlist(completions_qstr, completions_len);

    return QCompleter_new3(completions_list);
}

/// q_completer_new4 constructs a new QCompleter object.
///
/// ``` QObject* parent ```
QCompleter* q_completer_new4(void* parent) {
    return QCompleter_new4((QObject*)parent);
}

/// q_completer_new5 constructs a new QCompleter object.
///
/// ``` QAbstractItemModel* model, QObject* parent ```
QCompleter* q_completer_new5(void* model, void* parent) {
    return QCompleter_new5((QAbstractItemModel*)model, (QObject*)parent);
}

/// q_completer_new6 constructs a new QCompleter object.
///
/// ``` const char* completions[], QObject* parent ```
QCompleter* q_completer_new6(const char* completions[], void* parent) {
    size_t completions_len = libqt_strv_length(completions);
    libqt_string* completions_qstr = malloc(completions_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < completions_len; ++_i) {
        completions_qstr[_i] = qstring(completions[_i]);
    }
    libqt_list completions_list = qstrlist(completions_qstr, completions_len);

    return QCompleter_new6(completions_list, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCompleter* self ```
QMetaObject* q_completer_meta_object(void* self) {
    return QCompleter_MetaObject((QCompleter*)self);
}

/// ``` QCompleter* self, const char* param1 ```
void* q_completer_metacast(void* self, const char* param1) {
    return QCompleter_Metacast((QCompleter*)self, param1);
}

/// ``` QCompleter* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_completer_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCompleter_Metacall((QCompleter*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QCompleter* self, int32_t (*slot)(QCompleter*, enum QMetaObject__Call, int, void*) ```
void q_completer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCompleter_OnMetacall((QCompleter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCompleter* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_completer_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCompleter_QBaseMetacall((QCompleter*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_completer_tr(const char* s) {
    libqt_string _str = QCompleter_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setWidget)
///
/// ``` QCompleter* self, QWidget* widget ```
void q_completer_set_widget(void* self, void* widget) {
    QCompleter_SetWidget((QCompleter*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#widget)
///
/// ``` QCompleter* self ```
QWidget* q_completer_widget(void* self) {
    return QCompleter_Widget((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setModel)
///
/// ``` QCompleter* self, QAbstractItemModel* c ```
void q_completer_set_model(void* self, void* c) {
    QCompleter_SetModel((QCompleter*)self, (QAbstractItemModel*)c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#model)
///
/// ``` QCompleter* self ```
QAbstractItemModel* q_completer_model(void* self) {
    return QCompleter_Model((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionMode)
///
/// ``` QCompleter* self, enum QCompleter__CompletionMode mode ```
void q_completer_set_completion_mode(void* self, int64_t mode) {
    QCompleter_SetCompletionMode((QCompleter*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionMode)
///
/// ``` QCompleter* self ```
int64_t q_completer_completion_mode(void* self) {
    return QCompleter_CompletionMode((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setFilterMode)
///
/// ``` QCompleter* self, int filterMode ```
void q_completer_set_filter_mode(void* self, int64_t filterMode) {
    QCompleter_SetFilterMode((QCompleter*)self, filterMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#filterMode)
///
/// ``` QCompleter* self ```
int64_t q_completer_filter_mode(void* self) {
    return QCompleter_FilterMode((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#popup)
///
/// ``` QCompleter* self ```
QAbstractItemView* q_completer_popup(void* self) {
    return QCompleter_Popup((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setPopup)
///
/// ``` QCompleter* self, QAbstractItemView* popup ```
void q_completer_set_popup(void* self, void* popup) {
    QCompleter_SetPopup((QCompleter*)self, (QAbstractItemView*)popup);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCaseSensitivity)
///
/// ``` QCompleter* self, enum Qt__CaseSensitivity caseSensitivity ```
void q_completer_set_case_sensitivity(void* self, int64_t caseSensitivity) {
    QCompleter_SetCaseSensitivity((QCompleter*)self, caseSensitivity);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#caseSensitivity)
///
/// ``` QCompleter* self ```
int64_t q_completer_case_sensitivity(void* self) {
    return QCompleter_CaseSensitivity((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setModelSorting)
///
/// ``` QCompleter* self, enum QCompleter__ModelSorting sorting ```
void q_completer_set_model_sorting(void* self, int64_t sorting) {
    QCompleter_SetModelSorting((QCompleter*)self, sorting);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#modelSorting)
///
/// ``` QCompleter* self ```
int64_t q_completer_model_sorting(void* self) {
    return QCompleter_ModelSorting((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionColumn)
///
/// ``` QCompleter* self, int column ```
void q_completer_set_completion_column(void* self, int column) {
    QCompleter_SetCompletionColumn((QCompleter*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionColumn)
///
/// ``` QCompleter* self ```
int32_t q_completer_completion_column(void* self) {
    return QCompleter_CompletionColumn((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionRole)
///
/// ``` QCompleter* self, int role ```
void q_completer_set_completion_role(void* self, int role) {
    QCompleter_SetCompletionRole((QCompleter*)self, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionRole)
///
/// ``` QCompleter* self ```
int32_t q_completer_completion_role(void* self) {
    return QCompleter_CompletionRole((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#wrapAround)
///
/// ``` QCompleter* self ```
bool q_completer_wrap_around(void* self) {
    return QCompleter_WrapAround((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#maxVisibleItems)
///
/// ``` QCompleter* self ```
int32_t q_completer_max_visible_items(void* self) {
    return QCompleter_MaxVisibleItems((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setMaxVisibleItems)
///
/// ``` QCompleter* self, int maxItems ```
void q_completer_set_max_visible_items(void* self, int maxItems) {
    QCompleter_SetMaxVisibleItems((QCompleter*)self, maxItems);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionCount)
///
/// ``` QCompleter* self ```
int32_t q_completer_completion_count(void* self) {
    return QCompleter_CompletionCount((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCurrentRow)
///
/// ``` QCompleter* self, int row ```
bool q_completer_set_current_row(void* self, int row) {
    return QCompleter_SetCurrentRow((QCompleter*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#currentRow)
///
/// ``` QCompleter* self ```
int32_t q_completer_current_row(void* self) {
    return QCompleter_CurrentRow((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#currentIndex)
///
/// ``` QCompleter* self ```
QModelIndex* q_completer_current_index(void* self) {
    return QCompleter_CurrentIndex((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#currentCompletion)
///
/// ``` QCompleter* self ```
const char* q_completer_current_completion(void* self) {
    libqt_string _str = QCompleter_CurrentCompletion((QCompleter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionModel)
///
/// ``` QCompleter* self ```
QAbstractItemModel* q_completer_completion_model(void* self) {
    return QCompleter_CompletionModel((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionPrefix)
///
/// ``` QCompleter* self ```
const char* q_completer_completion_prefix(void* self) {
    libqt_string _str = QCompleter_CompletionPrefix((QCompleter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionPrefix)
///
/// ``` QCompleter* self, const char* prefix ```
void q_completer_set_completion_prefix(void* self, const char* prefix) {
    QCompleter_SetCompletionPrefix((QCompleter*)self, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#complete)
///
/// ``` QCompleter* self ```
void q_completer_complete(void* self) {
    QCompleter_Complete((QCompleter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setWrapAround)
///
/// ``` QCompleter* self, bool wrap ```
void q_completer_set_wrap_around(void* self, bool wrap) {
    QCompleter_SetWrapAround((QCompleter*)self, wrap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
///
/// ``` QCompleter* self, QModelIndex* index ```
const char* q_completer_path_from_index(void* self, void* index) {
    libqt_string _str = QCompleter_PathFromIndex((QCompleter*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QCompleter* self, const char* (*slot)(QCompleter*, QModelIndex*) ```
void q_completer_on_path_from_index(void* self, const char* (*slot)(void*, void*)) {
    QCompleter_OnPathFromIndex((QCompleter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCompleter* self, QModelIndex* index ```
const char* q_completer_qbase_path_from_index(void* self, void* index) {
    libqt_string _str = QCompleter_QBasePathFromIndex((QCompleter*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#splitPath)
///
/// ``` QCompleter* self, const char* path ```
const char** q_completer_split_path(void* self, const char* path) {
    libqt_list _arr = QCompleter_SplitPath((QCompleter*)self, qstring(path));
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

/// Allows for overriding the related default method
///
/// ``` QCompleter* self, const char** (*slot)(QCompleter*, const char*) ```
void q_completer_on_split_path(void* self, const char** (*slot)(void*, const char*)) {
    QCompleter_OnSplitPath((QCompleter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCompleter* self, const char* path ```
const char** q_completer_qbase_split_path(void* self, const char* path) {
    libqt_list _arr = QCompleter_QBaseSplitPath((QCompleter*)self, qstring(path));
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

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#eventFilter)
///
/// ``` QCompleter* self, QObject* o, QEvent* e ```
bool q_completer_event_filter(void* self, void* o, void* e) {
    return QCompleter_EventFilter((QCompleter*)self, (QObject*)o, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QCompleter* self, bool (*slot)(QCompleter*, QObject*, QEvent*) ```
void q_completer_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCompleter_OnEventFilter((QCompleter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCompleter* self, QObject* o, QEvent* e ```
bool q_completer_qbase_event_filter(void* self, void* o, void* e) {
    return QCompleter_QBaseEventFilter((QCompleter*)self, (QObject*)o, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#event)
///
/// ``` QCompleter* self, QEvent* param1 ```
bool q_completer_event(void* self, void* param1) {
    return QCompleter_Event((QCompleter*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QCompleter* self, bool (*slot)(QCompleter*, QEvent*) ```
void q_completer_on_event(void* self, bool (*slot)(void*, void*)) {
    QCompleter_OnEvent((QCompleter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCompleter* self, QEvent* param1 ```
bool q_completer_qbase_event(void* self, void* param1) {
    return QCompleter_QBaseEvent((QCompleter*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#activated)
///
/// ``` QCompleter* self, const char* text ```
void q_completer_activated(void* self, const char* text) {
    QCompleter_Activated((QCompleter*)self, qstring(text));
}

/// ``` QCompleter* self, void (*slot)(QCompleter*, const char*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#activated)
///
/// ``` QCompleter* self, QModelIndex* index ```
void q_completer_activated_with_index(void* self, void* index) {
    QCompleter_ActivatedWithIndex((QCompleter*)self, (QModelIndex*)index);
}

/// ``` QCompleter* self, void (*slot)(QCompleter*, QModelIndex*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
///
/// ``` QCompleter* self, const char* text ```
void q_completer_highlighted(void* self, const char* text) {
    QCompleter_Highlighted((QCompleter*)self, qstring(text));
}

/// ``` QCompleter* self, void (*slot)(QCompleter*, const char*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
///
/// ``` QCompleter* self, QModelIndex* index ```
void q_completer_highlighted_with_index(void* self, void* index) {
    QCompleter_HighlightedWithIndex((QCompleter*)self, (QModelIndex*)index);
}

/// ``` QCompleter* self, void (*slot)(QCompleter*, QModelIndex*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_completer_tr2(const char* s, const char* c) {
    libqt_string _str = QCompleter_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_completer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCompleter_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#complete)
///
/// ``` QCompleter* self, QRect* rect ```
void q_completer_complete1(void* self, void* rect) {
    QCompleter_Complete1((QCompleter*)self, (QRect*)rect);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCompleter* self ```
const char* q_completer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCompleter* self, const char* name ```
void q_completer_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCompleter* self ```
bool q_completer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCompleter* self ```
bool q_completer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCompleter* self ```
bool q_completer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCompleter* self ```
bool q_completer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCompleter* self, bool b ```
bool q_completer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCompleter* self ```
QThread* q_completer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCompleter* self, QThread* thread ```
void q_completer_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCompleter* self, int interval ```
int32_t q_completer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCompleter* self, int id ```
void q_completer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCompleter* self ```
libqt_list /* of QObject* */ q_completer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCompleter* self, QObject* parent ```
void q_completer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCompleter* self, QObject* filterObj ```
void q_completer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCompleter* self, QObject* obj ```
void q_completer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_completer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCompleter* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_completer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_completer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_completer_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCompleter* self ```
void q_completer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCompleter* self ```
void q_completer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCompleter* self, const char* name, QVariant* value ```
bool q_completer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCompleter* self, const char* name ```
QVariant* q_completer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCompleter* self ```
const char** q_completer_dynamic_property_names(void* self) {
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
/// ``` QCompleter* self ```
QBindingStorage* q_completer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCompleter* self ```
QBindingStorage* q_completer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCompleter* self ```
void q_completer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QCompleter* self, void (*slot)(QObject*) ```
void q_completer_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCompleter* self ```
QObject* q_completer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCompleter* self, const char* classname ```
bool q_completer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCompleter* self ```
void q_completer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCompleter* self, int interval, enum Qt__TimerType timerType ```
int32_t q_completer_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_completer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCompleter* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_completer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCompleter* self, QObject* param1 ```
void q_completer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QCompleter* self, void (*slot)(QObject*, QObject*) ```
void q_completer_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, QTimerEvent* event ```
void q_completer_timer_event(void* self, void* event) {
    QCompleter_TimerEvent((QCompleter*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, QTimerEvent* event ```
void q_completer_qbase_timer_event(void* self, void* event) {
    QCompleter_QBaseTimerEvent((QCompleter*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, void (*slot)(QCompleter*, QTimerEvent*) ```
void q_completer_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCompleter_OnTimerEvent((QCompleter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, QChildEvent* event ```
void q_completer_child_event(void* self, void* event) {
    QCompleter_ChildEvent((QCompleter*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, QChildEvent* event ```
void q_completer_qbase_child_event(void* self, void* event) {
    QCompleter_QBaseChildEvent((QCompleter*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, void (*slot)(QCompleter*, QChildEvent*) ```
void q_completer_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCompleter_OnChildEvent((QCompleter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, QEvent* event ```
void q_completer_custom_event(void* self, void* event) {
    QCompleter_CustomEvent((QCompleter*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, QEvent* event ```
void q_completer_qbase_custom_event(void* self, void* event) {
    QCompleter_QBaseCustomEvent((QCompleter*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, void (*slot)(QCompleter*, QEvent*) ```
void q_completer_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCompleter_OnCustomEvent((QCompleter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, QMetaMethod* signal ```
void q_completer_connect_notify(void* self, void* signal) {
    QCompleter_ConnectNotify((QCompleter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, QMetaMethod* signal ```
void q_completer_qbase_connect_notify(void* self, void* signal) {
    QCompleter_QBaseConnectNotify((QCompleter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, void (*slot)(QCompleter*, QMetaMethod*) ```
void q_completer_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCompleter_OnConnectNotify((QCompleter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, QMetaMethod* signal ```
void q_completer_disconnect_notify(void* self, void* signal) {
    QCompleter_DisconnectNotify((QCompleter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, QMetaMethod* signal ```
void q_completer_qbase_disconnect_notify(void* self, void* signal) {
    QCompleter_QBaseDisconnectNotify((QCompleter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, void (*slot)(QCompleter*, QMetaMethod*) ```
void q_completer_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCompleter_OnDisconnectNotify((QCompleter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self ```
QObject* q_completer_sender(void* self) {
    return QCompleter_Sender((QCompleter*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self ```
QObject* q_completer_qbase_sender(void* self) {
    return QCompleter_QBaseSender((QCompleter*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, QObject* (*slot)() ```
void q_completer_on_sender(void* self, QObject* (*slot)()) {
    QCompleter_OnSender((QCompleter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self ```
int32_t q_completer_sender_signal_index(void* self) {
    return QCompleter_SenderSignalIndex((QCompleter*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self ```
int32_t q_completer_qbase_sender_signal_index(void* self) {
    return QCompleter_QBaseSenderSignalIndex((QCompleter*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, int32_t (*slot)() ```
void q_completer_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCompleter_OnSenderSignalIndex((QCompleter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, const char* signal ```
int32_t q_completer_receivers(void* self, const char* signal) {
    return QCompleter_Receivers((QCompleter*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, const char* signal ```
int32_t q_completer_qbase_receivers(void* self, const char* signal) {
    return QCompleter_QBaseReceivers((QCompleter*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, int32_t (*slot)(QCompleter*, const char*) ```
void q_completer_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCompleter_OnReceivers((QCompleter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCompleter* self, QMetaMethod* signal ```
bool q_completer_is_signal_connected(void* self, void* signal) {
    return QCompleter_IsSignalConnected((QCompleter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCompleter* self, QMetaMethod* signal ```
bool q_completer_qbase_is_signal_connected(void* self, void* signal) {
    return QCompleter_QBaseIsSignalConnected((QCompleter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCompleter* self, bool (*slot)(QCompleter*, QMetaMethod*) ```
void q_completer_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCompleter_OnIsSignalConnected((QCompleter*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QCompleter* self ```
void q_completer_delete(void* self) {
    QCompleter_Delete((QCompleter*)(self));
}