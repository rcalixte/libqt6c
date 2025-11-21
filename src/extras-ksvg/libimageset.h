#pragma once
#ifndef SRC_EXTRAS_KSVG_QT6C_LIBIMAGESET_H
#define SRC_EXTRAS_KSVG_QT6C_LIBIMAGESET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ksvg-imageset.html

/// k_svg__imageset_new constructs a new KSvg::ImageSet object.
///
KSvg__ImageSet* k_svg__imageset_new();

/// k_svg__imageset_new2 constructs a new KSvg::ImageSet object.
///
/// @param imageSetName const char*
KSvg__ImageSet* k_svg__imageset_new2(const char* imageSetName);

/// k_svg__imageset_new3 constructs a new KSvg::ImageSet object.
///
/// @param parent QObject*
KSvg__ImageSet* k_svg__imageset_new3(void* parent);

/// k_svg__imageset_new4 constructs a new KSvg::ImageSet object.
///
/// @param imageSetName const char*
/// @param basePath const char*
KSvg__ImageSet* k_svg__imageset_new4(const char* imageSetName, const char* basePath);

/// k_svg__imageset_new5 constructs a new KSvg::ImageSet object.
///
/// @param imageSetName const char*
/// @param basePath const char*
/// @param parent QObject*
KSvg__ImageSet* k_svg__imageset_new5(const char* imageSetName, const char* basePath, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSvg__ImageSet*
const QMetaObject* k_svg__imageset_meta_object(void* self);

/// @param self KSvg__ImageSet*
/// @param param1 const char*
void* k_svg__imageset_metacast(void* self, const char* param1);

/// @param self KSvg__ImageSet*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_svg__imageset_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSvg__ImageSet*
/// @param callback int32_t func(KSvg__ImageSet* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_svg__imageset_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSvg__ImageSet*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_svg__imageset_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_svg__imageset_tr(const char* s);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#setBasePath)
///
/// @param self KSvg__ImageSet*
/// @param basePath const char*
void k_svg__imageset_set_base_path(void* self, const char* basePath);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#basePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSvg__ImageSet*
const char* k_svg__imageset_base_path(void* self);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#setSelectors)
///
/// @param self KSvg__ImageSet*
/// @param selectors const char**
void k_svg__imageset_set_selectors(void* self, const char* selectors[static 1]);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#selectors)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSvg__ImageSet*
const char** k_svg__imageset_selectors(void* self);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#setImageSetName)
///
/// @param self KSvg__ImageSet*
/// @param imageSetName const char*
void k_svg__imageset_set_image_set_name(void* self, const char* imageSetName);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#imageSetName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSvg__ImageSet*
const char* k_svg__imageset_image_set_name(void* self);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#imagePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSvg__ImageSet*
/// @param name const char*
const char* k_svg__imageset_image_path(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#filePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSvg__ImageSet*
/// @param name const char*
const char* k_svg__imageset_file_path(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#currentImageSetHasImage)
///
/// @param self KSvg__ImageSet*
/// @param name const char*
bool k_svg__imageset_current_image_set_has_image(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#setUseGlobalSettings)
///
/// @param self KSvg__ImageSet*
/// @param useGlobal bool
void k_svg__imageset_set_use_global_settings(void* self, bool useGlobal);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#useGlobalSettings)
///
/// @param self KSvg__ImageSet*
bool k_svg__imageset_use_global_settings(void* self);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#setCacheLimit)
///
/// @param self KSvg__ImageSet*
/// @param kbytes int
void k_svg__imageset_set_cache_limit(void* self, int kbytes);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#metadata)
///
/// @param self KSvg__ImageSet*
KPluginMetaData* k_svg__imageset_metadata(void* self);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#imageSetChanged)
///
/// @param self KSvg__ImageSet*
/// @param basePath const char*
void k_svg__imageset_image_set_changed(void* self, const char* basePath);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#imageSetChanged)
///
/// @param self KSvg__ImageSet*
/// @param callback void func(KSvg__ImageSet* self, const char* basePath)
void k_svg__imageset_on_image_set_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#basePathChanged)
///
/// @param self KSvg__ImageSet*
/// @param basePath const char*
void k_svg__imageset_base_path_changed(void* self, const char* basePath);

/// [Qt documentation](https://api.kde.org/ksvg-imageset.html#basePathChanged)
///
/// @param self KSvg__ImageSet*
/// @param callback void func(KSvg__ImageSet* self, const char* basePath)
void k_svg__imageset_on_base_path_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_svg__imageset_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_svg__imageset_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSvg__ImageSet*
const char* k_svg__imageset_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSvg__ImageSet*
/// @param name char*
void k_svg__imageset_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSvg__ImageSet*
bool k_svg__imageset_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSvg__ImageSet*
bool k_svg__imageset_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSvg__ImageSet*
bool k_svg__imageset_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSvg__ImageSet*
bool k_svg__imageset_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSvg__ImageSet*
/// @param b bool
bool k_svg__imageset_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KSvg__ImageSet*
QThread* k_svg__imageset_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSvg__ImageSet*
/// @param thread QThread*
bool k_svg__imageset_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSvg__ImageSet*
/// @param interval int
int32_t k_svg__imageset_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSvg__ImageSet*
/// @param id int
void k_svg__imageset_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSvg__ImageSet*
/// @param id enum Qt__TimerId
void k_svg__imageset_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KSvg__ImageSet*
libqt_list /* of QObject* */ k_svg__imageset_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KSvg__ImageSet*
/// @param parent QObject*
void k_svg__imageset_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSvg__ImageSet*
/// @param filterObj QObject*
void k_svg__imageset_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSvg__ImageSet*
/// @param obj QObject*
void k_svg__imageset_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_svg__imageset_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSvg__ImageSet*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_svg__imageset_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_svg__imageset_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_svg__imageset_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSvg__ImageSet*
void k_svg__imageset_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSvg__ImageSet*
void k_svg__imageset_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSvg__ImageSet*
/// @param name const char*
/// @param value QVariant*
bool k_svg__imageset_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSvg__ImageSet*
/// @param name const char*
QVariant* k_svg__imageset_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSvg__ImageSet*
const char** k_svg__imageset_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSvg__ImageSet*
QBindingStorage* k_svg__imageset_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSvg__ImageSet*
const QBindingStorage* k_svg__imageset_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSvg__ImageSet*
void k_svg__imageset_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSvg__ImageSet*
/// @param callback void func(KSvg__ImageSet* self)
void k_svg__imageset_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KSvg__ImageSet*
QObject* k_svg__imageset_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSvg__ImageSet*
/// @param classname const char*
bool k_svg__imageset_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSvg__ImageSet*
void k_svg__imageset_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSvg__ImageSet*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_svg__imageset_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSvg__ImageSet*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_svg__imageset_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_svg__imageset_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSvg__ImageSet*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_svg__imageset_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSvg__ImageSet*
/// @param param1 QObject*
void k_svg__imageset_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSvg__ImageSet*
/// @param callback void func(KSvg__ImageSet* self, QObject* param1)
void k_svg__imageset_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param event QEvent*
bool k_svg__imageset_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param event QEvent*
bool k_svg__imageset_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param callback bool func(KSvg__ImageSet* self, QEvent* event)
void k_svg__imageset_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param watched QObject*
/// @param event QEvent*
bool k_svg__imageset_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param watched QObject*
/// @param event QEvent*
bool k_svg__imageset_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param callback bool func(KSvg__ImageSet* self, QObject* watched, QEvent* event)
void k_svg__imageset_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param event QTimerEvent*
void k_svg__imageset_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param event QTimerEvent*
void k_svg__imageset_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param callback void func(KSvg__ImageSet* self, QTimerEvent* event)
void k_svg__imageset_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param event QChildEvent*
void k_svg__imageset_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param event QChildEvent*
void k_svg__imageset_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param callback void func(KSvg__ImageSet* self, QChildEvent* event)
void k_svg__imageset_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param event QEvent*
void k_svg__imageset_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param event QEvent*
void k_svg__imageset_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param callback void func(KSvg__ImageSet* self, QEvent* event)
void k_svg__imageset_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param signal QMetaMethod*
void k_svg__imageset_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param signal QMetaMethod*
void k_svg__imageset_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param callback void func(KSvg__ImageSet* self, QMetaMethod* signal)
void k_svg__imageset_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param signal QMetaMethod*
void k_svg__imageset_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param signal QMetaMethod*
void k_svg__imageset_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param callback void func(KSvg__ImageSet* self, QMetaMethod* signal)
void k_svg__imageset_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__ImageSet*
QObject* k_svg__imageset_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__ImageSet*
QObject* k_svg__imageset_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param callback QObject* func()
void k_svg__imageset_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__ImageSet*
int32_t k_svg__imageset_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__ImageSet*
int32_t k_svg__imageset_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param callback int32_t func()
void k_svg__imageset_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param signal const char*
int32_t k_svg__imageset_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param signal const char*
int32_t k_svg__imageset_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param callback int32_t func(KSvg__ImageSet* self, const char* signal)
void k_svg__imageset_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param signal QMetaMethod*
bool k_svg__imageset_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param signal QMetaMethod*
bool k_svg__imageset_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__ImageSet*
/// @param callback bool func(KSvg__ImageSet* self, QMetaMethod* signal)
void k_svg__imageset_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSvg__ImageSet*
/// @param callback void func(KSvg__ImageSet* self, const char* objectName)
void k_svg__imageset_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KSvg__ImageSet*
void k_svg__imageset_delete(void* self);

#endif
