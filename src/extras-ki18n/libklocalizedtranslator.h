#pragma once
#ifndef SRC_EXTRAS_KI18N_QT6C_LIBKLOCALIZEDTRANSLATOR_H
#define SRC_EXTRAS_KI18N_QT6C_LIBKLOCALIZEDTRANSLATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/klocalizedtranslator.html

/// k_localizedtranslator_new constructs a new KLocalizedTranslator object.
///
KLocalizedTranslator* k_localizedtranslator_new();

/// k_localizedtranslator_new2 constructs a new KLocalizedTranslator object.
///
/// @param parent QObject*
KLocalizedTranslator* k_localizedtranslator_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KLocalizedTranslator*
const QMetaObject* k_localizedtranslator_meta_object(void* self);

/// @param self KLocalizedTranslator*
/// @param param1 const char*
void* k_localizedtranslator_metacast(void* self, const char* param1);

/// @param self KLocalizedTranslator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_localizedtranslator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KLocalizedTranslator*
/// @param callback int32_t func(KLocalizedTranslator* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_localizedtranslator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KLocalizedTranslator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_localizedtranslator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_localizedtranslator_tr(const char* s);

/// [Upstream resources](https://api.kde.org/klocalizedtranslator.html#translate)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedTranslator*
/// @param context const char*
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
const char* k_localizedtranslator_translate(void* self, const char* context, const char* sourceText, const char* disambiguation, int n);

/// [Upstream resources](https://api.kde.org/klocalizedtranslator.html#translate)
///
/// Allows for overriding the related default method
///
/// @param self KLocalizedTranslator*
/// @param callback const char* func(KLocalizedTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n)
void k_localizedtranslator_on_translate(void* self, const char* (*callback)(void*, const char*, const char*, const char*, int));

/// [Upstream resources](https://api.kde.org/klocalizedtranslator.html#translate)
///
/// Base class method implementation
///
/// @param self KLocalizedTranslator*
/// @param context const char*
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
const char* k_localizedtranslator_qbase_translate(void* self, const char* context, const char* sourceText, const char* disambiguation, int n);

/// [Upstream resources](https://api.kde.org/klocalizedtranslator.html#setTranslationDomain)
///
/// @param self KLocalizedTranslator*
/// @param translationDomain const char*
void k_localizedtranslator_set_translation_domain(void* self, const char* translationDomain);

/// [Upstream resources](https://api.kde.org/klocalizedtranslator.html#addContextToMonitor)
///
/// @param self KLocalizedTranslator*
/// @param context const char*
void k_localizedtranslator_add_context_to_monitor(void* self, const char* context);

/// [Upstream resources](https://api.kde.org/klocalizedtranslator.html#removeContextToMonitor)
///
/// @param self KLocalizedTranslator*
/// @param context const char*
void k_localizedtranslator_remove_context_to_monitor(void* self, const char* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_localizedtranslator_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_localizedtranslator_tr3(const char* s, const char* c, int n);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#language)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedTranslator*
const char* k_localizedtranslator_language(void* self);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#filePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedTranslator*
const char* k_localizedtranslator_file_path(void* self);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self KLocalizedTranslator*
/// @param filename const char*
bool k_localizedtranslator_load(void* self, const char* filename);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self KLocalizedTranslator*
/// @param locale QLocale*
/// @param filename const char*
bool k_localizedtranslator_load2(void* self, void* locale, const char* filename);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self KLocalizedTranslator*
/// @param data unsigned char*
/// @param lenVal int
bool k_localizedtranslator_load3(void* self, unsigned char* data, int lenVal);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self KLocalizedTranslator*
/// @param filename const char*
/// @param directory const char*
bool k_localizedtranslator_load22(void* self, const char* filename, const char* directory);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self KLocalizedTranslator*
/// @param filename const char*
/// @param directory const char*
/// @param search_delimiters const char*
bool k_localizedtranslator_load32(void* self, const char* filename, const char* directory, const char* search_delimiters);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self KLocalizedTranslator*
/// @param filename const char*
/// @param directory const char*
/// @param search_delimiters const char*
/// @param suffix const char*
bool k_localizedtranslator_load4(void* self, const char* filename, const char* directory, const char* search_delimiters, const char* suffix);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self KLocalizedTranslator*
/// @param locale QLocale*
/// @param filename const char*
/// @param prefix const char*
bool k_localizedtranslator_load33(void* self, void* locale, const char* filename, const char* prefix);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self KLocalizedTranslator*
/// @param locale QLocale*
/// @param filename const char*
/// @param prefix const char*
/// @param directory const char*
bool k_localizedtranslator_load42(void* self, void* locale, const char* filename, const char* prefix, const char* directory);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self KLocalizedTranslator*
/// @param locale QLocale*
/// @param filename const char*
/// @param prefix const char*
/// @param directory const char*
/// @param suffix const char*
bool k_localizedtranslator_load5(void* self, void* locale, const char* filename, const char* prefix, const char* directory, const char* suffix);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#load)
///
/// @param self KLocalizedTranslator*
/// @param data unsigned char*
/// @param lenVal int
/// @param directory const char*
bool k_localizedtranslator_load34(void* self, unsigned char* data, int lenVal, const char* directory);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedTranslator*
const char* k_localizedtranslator_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KLocalizedTranslator*
/// @param name char*
void k_localizedtranslator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KLocalizedTranslator*
bool k_localizedtranslator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KLocalizedTranslator*
bool k_localizedtranslator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KLocalizedTranslator*
bool k_localizedtranslator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KLocalizedTranslator*
bool k_localizedtranslator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KLocalizedTranslator*
/// @param b bool
bool k_localizedtranslator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KLocalizedTranslator*
QThread* k_localizedtranslator_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KLocalizedTranslator*
/// @param thread QThread*
bool k_localizedtranslator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KLocalizedTranslator*
/// @param interval int
int32_t k_localizedtranslator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KLocalizedTranslator*
/// @param id int
void k_localizedtranslator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KLocalizedTranslator*
/// @param id enum Qt__TimerId
void k_localizedtranslator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KLocalizedTranslator*
libqt_list /* of QObject* */ k_localizedtranslator_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KLocalizedTranslator*
/// @param parent QObject*
void k_localizedtranslator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KLocalizedTranslator*
/// @param filterObj QObject*
void k_localizedtranslator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KLocalizedTranslator*
/// @param obj QObject*
void k_localizedtranslator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_localizedtranslator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KLocalizedTranslator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_localizedtranslator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_localizedtranslator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_localizedtranslator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KLocalizedTranslator*
void k_localizedtranslator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KLocalizedTranslator*
void k_localizedtranslator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KLocalizedTranslator*
/// @param name const char*
/// @param value QVariant*
bool k_localizedtranslator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KLocalizedTranslator*
/// @param name const char*
QVariant* k_localizedtranslator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KLocalizedTranslator*
const char** k_localizedtranslator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KLocalizedTranslator*
QBindingStorage* k_localizedtranslator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KLocalizedTranslator*
const QBindingStorage* k_localizedtranslator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLocalizedTranslator*
void k_localizedtranslator_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLocalizedTranslator*
/// @param callback void func(KLocalizedTranslator* self)
void k_localizedtranslator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KLocalizedTranslator*
QObject* k_localizedtranslator_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KLocalizedTranslator*
/// @param classname const char*
bool k_localizedtranslator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KLocalizedTranslator*
void k_localizedtranslator_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KLocalizedTranslator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_localizedtranslator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KLocalizedTranslator*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_localizedtranslator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_localizedtranslator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KLocalizedTranslator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_localizedtranslator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLocalizedTranslator*
/// @param param1 QObject*
void k_localizedtranslator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLocalizedTranslator*
/// @param callback void func(KLocalizedTranslator* self, QObject* param1)
void k_localizedtranslator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedTranslator*
bool k_localizedtranslator_is_empty(void* self);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedTranslator*
bool k_localizedtranslator_qbase_is_empty(void* self);

/// Inherited from QTranslator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtranslator.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param callback bool func()
void k_localizedtranslator_on_is_empty(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param event QEvent*
bool k_localizedtranslator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param event QEvent*
bool k_localizedtranslator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param callback bool func(KLocalizedTranslator* self, QEvent* event)
void k_localizedtranslator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param watched QObject*
/// @param event QEvent*
bool k_localizedtranslator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param watched QObject*
/// @param event QEvent*
bool k_localizedtranslator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param callback bool func(KLocalizedTranslator* self, QObject* watched, QEvent* event)
void k_localizedtranslator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param event QTimerEvent*
void k_localizedtranslator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param event QTimerEvent*
void k_localizedtranslator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param callback void func(KLocalizedTranslator* self, QTimerEvent* event)
void k_localizedtranslator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param event QChildEvent*
void k_localizedtranslator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param event QChildEvent*
void k_localizedtranslator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param callback void func(KLocalizedTranslator* self, QChildEvent* event)
void k_localizedtranslator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param event QEvent*
void k_localizedtranslator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param event QEvent*
void k_localizedtranslator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param callback void func(KLocalizedTranslator* self, QEvent* event)
void k_localizedtranslator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param signal QMetaMethod*
void k_localizedtranslator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param signal QMetaMethod*
void k_localizedtranslator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param callback void func(KLocalizedTranslator* self, QMetaMethod* signal)
void k_localizedtranslator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param signal QMetaMethod*
void k_localizedtranslator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param signal QMetaMethod*
void k_localizedtranslator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param callback void func(KLocalizedTranslator* self, QMetaMethod* signal)
void k_localizedtranslator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedTranslator*
QObject* k_localizedtranslator_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedTranslator*
QObject* k_localizedtranslator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param callback QObject* func()
void k_localizedtranslator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedTranslator*
int32_t k_localizedtranslator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedTranslator*
int32_t k_localizedtranslator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param callback int32_t func()
void k_localizedtranslator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param signal const char*
int32_t k_localizedtranslator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param signal const char*
int32_t k_localizedtranslator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param callback int32_t func(KLocalizedTranslator* self, const char* signal)
void k_localizedtranslator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param signal QMetaMethod*
bool k_localizedtranslator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param signal QMetaMethod*
bool k_localizedtranslator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLocalizedTranslator*
/// @param callback bool func(KLocalizedTranslator* self, QMetaMethod* signal)
void k_localizedtranslator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KLocalizedTranslator*
/// @param callback void func(KLocalizedTranslator* self, const char* objectName)
void k_localizedtranslator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/klocalizedtranslator.html#dtor.KLocalizedTranslator)
///
/// Delete this object from C++ memory.
///
/// @param self KLocalizedTranslator*
void k_localizedtranslator_delete(void* self);

#endif
