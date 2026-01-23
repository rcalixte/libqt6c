#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBANNOTATIONINTERFACE_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBANNOTATIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-annotationmodel.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTextEditor__AnnotationModel*
///
const QMetaObject* k_texteditor__annotationmodel_meta_object(void* self);

/// @param self KTextEditor__AnnotationModel*
/// @param param1 const char*
///
void* k_texteditor__annotationmodel_metacast(void* self, const char* param1);

/// @param self KTextEditor__AnnotationModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__annotationmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texteditor__annotationmodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktexteditor-annotationmodel.html#data)
///
/// @param self KTextEditor__AnnotationModel*
/// @param line int
/// @param role enum Qt__ItemDataRole
///
QVariant* k_texteditor__annotationmodel_data(void* self, int line, int32_t role);

/// [Upstream resources](https://api.kde.org/ktexteditor-annotationmodel.html#reset)
///
/// @param self KTextEditor__AnnotationModel*
///
void k_texteditor__annotationmodel_reset(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-annotationmodel.html#reset)
///
/// @param self KTextEditor__AnnotationModel*
/// @param callback void func(KTextEditor__AnnotationModel* self)
///
void k_texteditor__annotationmodel_on_reset(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-annotationmodel.html#lineChanged)
///
/// @param self KTextEditor__AnnotationModel*
/// @param line int
///
void k_texteditor__annotationmodel_line_changed(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-annotationmodel.html#lineChanged)
///
/// @param self KTextEditor__AnnotationModel*
/// @param callback void func(KTextEditor__AnnotationModel* self, int line)
///
void k_texteditor__annotationmodel_on_line_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texteditor__annotationmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texteditor__annotationmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KTextEditor__AnnotationModel*
/// @param event QEvent*
///
bool k_texteditor__annotationmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KTextEditor__AnnotationModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__annotationmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__AnnotationModel*
///
const char* k_texteditor__annotationmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__AnnotationModel*
/// @param name char*
///
void k_texteditor__annotationmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTextEditor__AnnotationModel*
///
bool k_texteditor__annotationmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTextEditor__AnnotationModel*
///
bool k_texteditor__annotationmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTextEditor__AnnotationModel*
///
bool k_texteditor__annotationmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTextEditor__AnnotationModel*
///
bool k_texteditor__annotationmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__AnnotationModel*
/// @param b bool
///
bool k_texteditor__annotationmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTextEditor__AnnotationModel*
///
QThread* k_texteditor__annotationmodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__AnnotationModel*
/// @param thread QThread*
///
bool k_texteditor__annotationmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__AnnotationModel*
/// @param interval int
///
int32_t k_texteditor__annotationmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__AnnotationModel*
/// @param time int64_t of nanoseconds
///
int32_t k_texteditor__annotationmodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__AnnotationModel*
/// @param id int
///
void k_texteditor__annotationmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__AnnotationModel*
/// @param id enum Qt__TimerId
///
void k_texteditor__annotationmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTextEditor__AnnotationModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_texteditor__annotationmodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTextEditor__AnnotationModel*
/// @param parent QObject*
///
void k_texteditor__annotationmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__AnnotationModel*
/// @param filterObj QObject*
///
void k_texteditor__annotationmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__AnnotationModel*
/// @param obj QObject*
///
void k_texteditor__annotationmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texteditor__annotationmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__AnnotationModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__annotationmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texteditor__annotationmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texteditor__annotationmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTextEditor__AnnotationModel*
///
void k_texteditor__annotationmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTextEditor__AnnotationModel*
///
void k_texteditor__annotationmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__AnnotationModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_texteditor__annotationmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTextEditor__AnnotationModel*
/// @param name const char*
///
QVariant* k_texteditor__annotationmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__AnnotationModel*
///
const char** k_texteditor__annotationmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__AnnotationModel*
///
QBindingStorage* k_texteditor__annotationmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__AnnotationModel*
///
const QBindingStorage* k_texteditor__annotationmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__AnnotationModel*
///
void k_texteditor__annotationmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__AnnotationModel*
/// @param callback void func(KTextEditor__AnnotationModel* self)
///
void k_texteditor__annotationmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTextEditor__AnnotationModel*
///
QObject* k_texteditor__annotationmodel_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTextEditor__AnnotationModel*
/// @param classname const char*
///
bool k_texteditor__annotationmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__AnnotationModel*
///
void k_texteditor__annotationmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__AnnotationModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_texteditor__annotationmodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__AnnotationModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__annotationmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__AnnotationModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__annotationmodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_texteditor__annotationmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__AnnotationModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__annotationmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__AnnotationModel*
/// @param param1 QObject*
///
void k_texteditor__annotationmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__AnnotationModel*
/// @param callback void func(KTextEditor__AnnotationModel* self, QObject* param1)
///
void k_texteditor__annotationmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__AnnotationModel*
/// @param callback void func(KTextEditor__AnnotationModel* self, const char* objectName)
///
void k_texteditor__annotationmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__AnnotationModel*
///
void k_texteditor__annotationmodel_delete(void* self);

/// [Upstream resources](https://api.kde.org/annotationinterface.html#public-types)

typedef enum {
    KTEXTEDITOR_ANNOTATIONMODEL__GROUPIDENTIFIERROLE = 256
} KTextEditor__AnnotationModel__;

#endif
