#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBGRAMMALECTEGENERATECONFIGOPTIONJOB_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBGRAMMALECTEGENERATECONFIGOPTIONJOB_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)

/// k_textgrammarcheck__grammalectegenerateconfigoptionjob_new constructs a new TextGrammarCheck::GrammalecteGenerateConfigOptionJob object.
///
TextGrammarCheck__GrammalecteGenerateConfigOptionJob* k_textgrammarcheck__grammalectegenerateconfigoptionjob_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)

/// k_textgrammarcheck__grammalectegenerateconfigoptionjob_new2 constructs a new TextGrammarCheck::GrammalecteGenerateConfigOptionJob object.
///
/// @param parent QObject*
///
TextGrammarCheck__GrammalecteGenerateConfigOptionJob* k_textgrammarcheck__grammalectegenerateconfigoptionjob_new2(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
const QMetaObject* k_textgrammarcheck__grammalectegenerateconfigoptionjob_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback const QMetaObject* func()
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_meta_object` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_meta_object k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
const QMetaObject* k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_meta_object(void* self);

/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param param1 const char*
///
void* k_textgrammarcheck__grammalectegenerateconfigoptionjob_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback void* func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const char* param1)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_metacast` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_metacast k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_metacast

/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param param1 const char*
///
void* k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_metacast(void* self, const char* param1);

/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback int32_t func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_metacall` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_metacall k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_metacall

/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_start(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_can_start(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob_python_path(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param pythonPath const char*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_set_python_path(void* self, const char* pythonPath);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob_grammarlecte_cli_path(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param grammarlecteCliPath const char*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_set_grammarlecte_cli_path(void* self, const char* grammarlecteCliPath);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_error(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback void func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_error(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param result libqt_list of TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_finished(void* self, libqt_list result);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback void func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, libqt_list of TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* result)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_finished(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param name const char*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param b bool
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
QThread* k_textgrammarcheck__grammalectegenerateconfigoptionjob_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param thread QThread*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param interval int
///
int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param time int64_t of nanoseconds
///
int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param id int
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param id enum Qt__TimerId
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
/// @return libqt_list of QObject*
///
libqt_list k_textgrammarcheck__grammalectegenerateconfigoptionjob_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param parent QObject*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param filterObj QObject*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param obj QObject*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param receiver QObject*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param name const char*
/// @param value QVariant*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param name const char*
///
QVariant* k_textgrammarcheck__grammalectegenerateconfigoptionjob_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
const char** k_textgrammarcheck__grammalectegenerateconfigoptionjob_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
QBindingStorage* k_textgrammarcheck__grammalectegenerateconfigoptionjob_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
const QBindingStorage* k_textgrammarcheck__grammalectegenerateconfigoptionjob_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback void func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
QObject* k_textgrammarcheck__grammalectegenerateconfigoptionjob_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param classname const char*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param signal const char*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param param1 QObject*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback void func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QObject* param1)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param event QEvent*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_event` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_event k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param event QEvent*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback bool func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QEvent* event)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_event_filter` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_event_filter k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback bool func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QObject* watched, QEvent* event)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param event QTimerEvent*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_timer_event` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_timer_event k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param event QTimerEvent*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback void func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QTimerEvent* event)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param event QChildEvent*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_child_event` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_child_event k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param event QChildEvent*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback void func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QChildEvent* event)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param event QEvent*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_custom_event` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_custom_event k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param event QEvent*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback void func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QEvent* event)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_connect_notify` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_connect_notify k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback void func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QMetaMethod* signal)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_disconnect_notify` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_disconnect_notify k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback void func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QMetaMethod* signal)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
QObject* k_textgrammarcheck__grammalectegenerateconfigoptionjob_sender(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_sender` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_sender k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
QObject* k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback QObject* func()
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_sender_signal_index` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_sender_signal_index k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback int32_t func()
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param signal const char*
///
int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_receivers` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_receivers k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param signal const char*
///
int32_t k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback int32_t func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const char* signal)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param signal QMetaMethod*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_is_signal_connected` instead
///
#define k_textgrammarcheck__grammalectegenerateconfigoptionjob_qbase_is_signal_connected k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param signal QMetaMethod*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback bool func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QMetaMethod* signal)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
/// @param callback void func(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const char* objectName)
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammalecteGenerateConfigOptionJob.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob_delete(void* self);

/// k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_new constructs a new TextGrammarCheck::GrammalecteGenerateConfigOptionJob::Option object.
///
/// @param param1 TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*
///
TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_new(void* param1);

/// k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_new2 constructs a new TextGrammarCheck::GrammalecteGenerateConfigOptionJob::Option object.
///
TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_new2();

///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*
///
const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_option_name(void* self);

///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*
/// @param optionName const char*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_set_option_name(void* self, const char* optionName);

///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*
///
const char* k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_description(void* self);

///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*
/// @param description const char*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_set_description(void* self, const char* description);

///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*
///
bool k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_default_value(void* self);

///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*
/// @param defaultValue bool
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_set_default_value(void* self, bool defaultValue);

///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*
/// @param param1 TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*
///
void k_textgrammarcheck__grammalectegenerateconfigoptionjob__option_delete(void* self);

#endif
