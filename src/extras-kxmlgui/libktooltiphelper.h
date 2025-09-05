#pragma once
#ifndef SRC_EXTRAS_KXMLGUIQT6C_LIBKTOOLTIPHELPER_H
#define SRC_EXTRAS_KXMLGUIQT6C_LIBKTOOLTIPHELPER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/ktooltiphelper.html

/// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
///
/// @param self KToolTipHelper*
const QMetaObject* k_tooltiphelper_meta_object(void* self);

/// @param self KToolTipHelper*
/// @param param1 const char*
void* k_tooltiphelper_metacast(void* self, const char* param1);

/// @param self KToolTipHelper*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_tooltiphelper_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_tooltiphelper_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/ktooltiphelper.html#instance)
///
KToolTipHelper* k_tooltiphelper_instance();

/// [Qt documentation](https://api-staging.kde.org/ktooltiphelper.html#eventFilter)
///
/// @param self KToolTipHelper*
/// @param watched QObject*
/// @param event QEvent*
bool k_tooltiphelper_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktooltiphelper.html#whatsThisHintOnly)
///
/// Caller is responsible for freeing the returned memory
///
const char* k_tooltiphelper_whats_this_hint_only();

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_tooltiphelper_tr2(const char* s, const char* c);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_tooltiphelper_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KToolTipHelper*
/// @param event QEvent*
bool k_tooltiphelper_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KToolTipHelper*
const char* k_tooltiphelper_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KToolTipHelper*
/// @param name char*
void k_tooltiphelper_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KToolTipHelper*
bool k_tooltiphelper_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KToolTipHelper*
bool k_tooltiphelper_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KToolTipHelper*
bool k_tooltiphelper_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KToolTipHelper*
bool k_tooltiphelper_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KToolTipHelper*
/// @param b bool
bool k_tooltiphelper_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KToolTipHelper*
QThread* k_tooltiphelper_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KToolTipHelper*
/// @param thread QThread*
bool k_tooltiphelper_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolTipHelper*
/// @param interval int
int32_t k_tooltiphelper_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToolTipHelper*
/// @param id int
void k_tooltiphelper_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToolTipHelper*
/// @param id enum Qt__TimerId
void k_tooltiphelper_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KToolTipHelper*
libqt_list /* of QObject* */ k_tooltiphelper_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KToolTipHelper*
/// @param parent QObject*
void k_tooltiphelper_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KToolTipHelper*
/// @param filterObj QObject*
void k_tooltiphelper_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KToolTipHelper*
/// @param obj QObject*
void k_tooltiphelper_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_tooltiphelper_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KToolTipHelper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_tooltiphelper_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_tooltiphelper_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_tooltiphelper_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KToolTipHelper*
void k_tooltiphelper_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KToolTipHelper*
void k_tooltiphelper_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KToolTipHelper*
/// @param name const char*
/// @param value QVariant*
bool k_tooltiphelper_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KToolTipHelper*
/// @param name const char*
QVariant* k_tooltiphelper_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KToolTipHelper*
const char** k_tooltiphelper_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KToolTipHelper*
QBindingStorage* k_tooltiphelper_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KToolTipHelper*
const QBindingStorage* k_tooltiphelper_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolTipHelper*
void k_tooltiphelper_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolTipHelper*
/// @param callback void func(KToolTipHelper* self)
void k_tooltiphelper_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KToolTipHelper*
QObject* k_tooltiphelper_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KToolTipHelper*
/// @param classname const char*
bool k_tooltiphelper_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KToolTipHelper*
void k_tooltiphelper_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KToolTipHelper*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_tooltiphelper_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolTipHelper*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_tooltiphelper_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_tooltiphelper_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KToolTipHelper*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_tooltiphelper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolTipHelper*
/// @param param1 QObject*
void k_tooltiphelper_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolTipHelper*
/// @param callback void func(KToolTipHelper* self, QObject* param1)
void k_tooltiphelper_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KToolTipHelper*
/// @param callback void func(KToolTipHelper* self, const char* objectName)
void k_tooltiphelper_on_object_name_changed(void* self, void (*callback)(void*, const char*));
#endif
