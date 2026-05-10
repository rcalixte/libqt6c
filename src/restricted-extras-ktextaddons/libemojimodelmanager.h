#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBEMOJIMODELMANAGER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBEMOJIMODELMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)

/// k_textemoticonscore__emojimodelmanager_new constructs a new TextEmoticonsCore::EmojiModelManager object.
///
TextEmoticonsCore__EmojiModelManager* k_textemoticonscore__emojimodelmanager_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)

/// k_textemoticonscore__emojimodelmanager_new2 constructs a new TextEmoticonsCore::EmojiModelManager object.
///
/// @param parent QObject*
///
TextEmoticonsCore__EmojiModelManager* k_textemoticonscore__emojimodelmanager_new2(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
const QMetaObject* k_textemoticonscore__emojimodelmanager_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// Allows for overriding the related default method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback const QMetaObject* func()
///
void k_textemoticonscore__emojimodelmanager_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_meta_object` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_meta_object k_textemoticonscore__emojimodelmanager_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// Base class method implementation
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
const QMetaObject* k_textemoticonscore__emojimodelmanager_super_meta_object(void* self);

/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param param1 const char*
///
void* k_textemoticonscore__emojimodelmanager_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback void* func(TextEmoticonsCore__EmojiModelManager* self, const char* param1)
///
void k_textemoticonscore__emojimodelmanager_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_metacast` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_metacast k_textemoticonscore__emojimodelmanager_super_metacast

/// Base class method implementation
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param param1 const char*
///
void* k_textemoticonscore__emojimodelmanager_super_metacast(void* self, const char* param1);

/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textemoticonscore__emojimodelmanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback int32_t func(TextEmoticonsCore__EmojiModelManager* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textemoticonscore__emojimodelmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_metacall` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_metacall k_textemoticonscore__emojimodelmanager_super_metacall

/// Base class method implementation
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textemoticonscore__emojimodelmanager_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textemoticonscore__emojimodelmanager_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
TextEmoticonsCore__EmojiModelManager* k_textemoticonscore__emojimodelmanager_self();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
TextEmoticonsCore__EmojiModel* k_textemoticonscore__emojimodelmanager_emoji_model(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
const char** k_textemoticonscore__emojimodelmanager_recent_identifier(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param newRecentIdentifier const char**
///
void k_textemoticonscore__emojimodelmanager_set_recent_identifier(void* self, const char* newRecentIdentifier[static 1]);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param identifier const char*
///
void k_textemoticonscore__emojimodelmanager_add_identifier(void* self, const char* identifier);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
TextEmoticonsCore__CustomEmojiIconManager* k_textemoticonscore__emojimodelmanager_custom_emoji_icon_manager(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param newCustomEmojiIconManager TextEmoticonsCore__CustomEmojiIconManager*
///
void k_textemoticonscore__emojimodelmanager_set_custom_emoji_icon_manager(void* self, void* newCustomEmojiIconManager);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
const char** k_textemoticonscore__emojimodelmanager_exclude_emoticons(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param emoticons const char**
///
void k_textemoticonscore__emojimodelmanager_set_exclude_emoticons(void* self, const char* emoticons[static 1]);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param lst const char**
///
void k_textemoticonscore__emojimodelmanager_used_identifier_changed(void* self, const char* lst[static 1]);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback void func(TextEmoticonsCore__EmojiModelManager* self, const char** lst)
///
void k_textemoticonscore__emojimodelmanager_on_used_identifier_changed(void* self, void (*callback)(void*, const char**));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
void k_textemoticonscore__emojimodelmanager_exclude_emoticons_changed(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback void func(TextEmoticonsCore__EmojiModelManager* self)
///
void k_textemoticonscore__emojimodelmanager_on_exclude_emoticons_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textemoticonscore__emojimodelmanager_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textemoticonscore__emojimodelmanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
const char* k_textemoticonscore__emojimodelmanager_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param name const char*
///
void k_textemoticonscore__emojimodelmanager_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
bool k_textemoticonscore__emojimodelmanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
bool k_textemoticonscore__emojimodelmanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
bool k_textemoticonscore__emojimodelmanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
bool k_textemoticonscore__emojimodelmanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param b bool
///
bool k_textemoticonscore__emojimodelmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
QThread* k_textemoticonscore__emojimodelmanager_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param thread QThread*
///
bool k_textemoticonscore__emojimodelmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param interval int
///
int32_t k_textemoticonscore__emojimodelmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param time int64_t of nanoseconds
///
int32_t k_textemoticonscore__emojimodelmanager_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param id int
///
void k_textemoticonscore__emojimodelmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param id enum Qt__TimerId
///
void k_textemoticonscore__emojimodelmanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
/// @return libqt_list of QObject*
///
libqt_list k_textemoticonscore__emojimodelmanager_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param parent QObject*
///
void k_textemoticonscore__emojimodelmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param filterObj QObject*
///
void k_textemoticonscore__emojimodelmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param obj QObject*
///
void k_textemoticonscore__emojimodelmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textemoticonscore__emojimodelmanager_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textemoticonscore__emojimodelmanager_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textemoticonscore__emojimodelmanager_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textemoticonscore__emojimodelmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textemoticonscore__emojimodelmanager_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
bool k_textemoticonscore__emojimodelmanager_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param receiver QObject*
///
bool k_textemoticonscore__emojimodelmanager_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textemoticonscore__emojimodelmanager_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
void k_textemoticonscore__emojimodelmanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
void k_textemoticonscore__emojimodelmanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param name const char*
/// @param value QVariant*
///
bool k_textemoticonscore__emojimodelmanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param name const char*
///
QVariant* k_textemoticonscore__emojimodelmanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
const char** k_textemoticonscore__emojimodelmanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
QBindingStorage* k_textemoticonscore__emojimodelmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
const QBindingStorage* k_textemoticonscore__emojimodelmanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
void k_textemoticonscore__emojimodelmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback void func(TextEmoticonsCore__EmojiModelManager* self)
///
void k_textemoticonscore__emojimodelmanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
QObject* k_textemoticonscore__emojimodelmanager_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param classname const char*
///
bool k_textemoticonscore__emojimodelmanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
void k_textemoticonscore__emojimodelmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textemoticonscore__emojimodelmanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textemoticonscore__emojimodelmanager_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textemoticonscore__emojimodelmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textemoticonscore__emojimodelmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textemoticonscore__emojimodelmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param signal const char*
///
bool k_textemoticonscore__emojimodelmanager_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textemoticonscore__emojimodelmanager_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textemoticonscore__emojimodelmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textemoticonscore__emojimodelmanager_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param param1 QObject*
///
void k_textemoticonscore__emojimodelmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback void func(TextEmoticonsCore__EmojiModelManager* self, QObject* param1)
///
void k_textemoticonscore__emojimodelmanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param event QEvent*
///
bool k_textemoticonscore__emojimodelmanager_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_event` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_event k_textemoticonscore__emojimodelmanager_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param event QEvent*
///
bool k_textemoticonscore__emojimodelmanager_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback bool func(TextEmoticonsCore__EmojiModelManager* self, QEvent* event)
///
void k_textemoticonscore__emojimodelmanager_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textemoticonscore__emojimodelmanager_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_event_filter` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_event_filter k_textemoticonscore__emojimodelmanager_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textemoticonscore__emojimodelmanager_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback bool func(TextEmoticonsCore__EmojiModelManager* self, QObject* watched, QEvent* event)
///
void k_textemoticonscore__emojimodelmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param event QTimerEvent*
///
void k_textemoticonscore__emojimodelmanager_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_timer_event` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_timer_event k_textemoticonscore__emojimodelmanager_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param event QTimerEvent*
///
void k_textemoticonscore__emojimodelmanager_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback void func(TextEmoticonsCore__EmojiModelManager* self, QTimerEvent* event)
///
void k_textemoticonscore__emojimodelmanager_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param event QChildEvent*
///
void k_textemoticonscore__emojimodelmanager_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_child_event` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_child_event k_textemoticonscore__emojimodelmanager_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param event QChildEvent*
///
void k_textemoticonscore__emojimodelmanager_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback void func(TextEmoticonsCore__EmojiModelManager* self, QChildEvent* event)
///
void k_textemoticonscore__emojimodelmanager_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param event QEvent*
///
void k_textemoticonscore__emojimodelmanager_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_custom_event` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_custom_event k_textemoticonscore__emojimodelmanager_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param event QEvent*
///
void k_textemoticonscore__emojimodelmanager_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback void func(TextEmoticonsCore__EmojiModelManager* self, QEvent* event)
///
void k_textemoticonscore__emojimodelmanager_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param signal QMetaMethod*
///
void k_textemoticonscore__emojimodelmanager_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_connect_notify` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_connect_notify k_textemoticonscore__emojimodelmanager_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param signal QMetaMethod*
///
void k_textemoticonscore__emojimodelmanager_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback void func(TextEmoticonsCore__EmojiModelManager* self, QMetaMethod* signal)
///
void k_textemoticonscore__emojimodelmanager_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param signal QMetaMethod*
///
void k_textemoticonscore__emojimodelmanager_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_disconnect_notify` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_disconnect_notify k_textemoticonscore__emojimodelmanager_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param signal QMetaMethod*
///
void k_textemoticonscore__emojimodelmanager_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback void func(TextEmoticonsCore__EmojiModelManager* self, QMetaMethod* signal)
///
void k_textemoticonscore__emojimodelmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
QObject* k_textemoticonscore__emojimodelmanager_sender(void* self);

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_sender` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_sender k_textemoticonscore__emojimodelmanager_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
QObject* k_textemoticonscore__emojimodelmanager_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback QObject* func()
///
void k_textemoticonscore__emojimodelmanager_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
int32_t k_textemoticonscore__emojimodelmanager_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_sender_signal_index` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_sender_signal_index k_textemoticonscore__emojimodelmanager_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
int32_t k_textemoticonscore__emojimodelmanager_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback int32_t func()
///
void k_textemoticonscore__emojimodelmanager_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param signal const char*
///
int32_t k_textemoticonscore__emojimodelmanager_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_receivers` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_receivers k_textemoticonscore__emojimodelmanager_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param signal const char*
///
int32_t k_textemoticonscore__emojimodelmanager_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback int32_t func(TextEmoticonsCore__EmojiModelManager* self, const char* signal)
///
void k_textemoticonscore__emojimodelmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param signal QMetaMethod*
///
bool k_textemoticonscore__emojimodelmanager_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textemoticonscore__emojimodelmanager_super_is_signal_connected` instead
///
#define k_textemoticonscore__emojimodelmanager_qbase_is_signal_connected k_textemoticonscore__emojimodelmanager_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param signal QMetaMethod*
///
bool k_textemoticonscore__emojimodelmanager_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback bool func(TextEmoticonsCore__EmojiModelManager* self, QMetaMethod* signal)
///
void k_textemoticonscore__emojimodelmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextEmoticonsCore__EmojiModelManager*
/// @param callback void func(TextEmoticonsCore__EmojiModelManager* self, const char* objectName)
///
void k_textemoticonscore__emojimodelmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModelManager.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextEmoticonsCore__EmojiModelManager*
///
void k_textemoticonscore__emojimodelmanager_delete(void* self);

#endif
