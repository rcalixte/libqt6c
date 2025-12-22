#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKSELECTIONOWNER_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKSELECTIONOWNER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kselectionowner.html)

#ifdef __linux__
/// k_selectionowner_new constructs a new KSelectionOwner object.
///
/// @param selection xcb_atom_t
///
KSelectionOwner* k_selectionowner_new(xcb_atom_t selection);
#endif

/// [Upstream resources](https://api.kde.org/kselectionowner.html)

/// k_selectionowner_new2 constructs a new KSelectionOwner object.
///
/// @param selection const char*
///
KSelectionOwner* k_selectionowner_new2(const char* selection);

/// [Upstream resources](https://api.kde.org/kselectionowner.html)

#ifdef __linux__
/// k_selectionowner_new3 constructs a new KSelectionOwner object.
///
/// @param selection xcb_atom_t
/// @param c xcb_connection_t*
/// @param root xcb_window_t
///
KSelectionOwner* k_selectionowner_new3(xcb_atom_t selection, xcb_connection_t* c, xcb_window_t root);
#endif

/// [Upstream resources](https://api.kde.org/kselectionowner.html)

#ifdef __linux__
/// k_selectionowner_new4 constructs a new KSelectionOwner object.
///
/// @param selection const char*
/// @param c xcb_connection_t*
/// @param root xcb_window_t
///
KSelectionOwner* k_selectionowner_new4(const char* selection, xcb_connection_t* c, xcb_window_t root);
#endif

/// [Upstream resources](https://api.kde.org/kselectionowner.html)

#ifdef __linux__
/// k_selectionowner_new5 constructs a new KSelectionOwner object.
///
/// @param selection xcb_atom_t
/// @param screen int
///
KSelectionOwner* k_selectionowner_new5(xcb_atom_t selection, int screen);
#endif

/// [Upstream resources](https://api.kde.org/kselectionowner.html)

#ifdef __linux__
/// k_selectionowner_new6 constructs a new KSelectionOwner object.
///
/// @param selection xcb_atom_t
/// @param screen int
/// @param parent QObject*
///
KSelectionOwner* k_selectionowner_new6(xcb_atom_t selection, int screen, void* parent);
#endif

/// [Upstream resources](https://api.kde.org/kselectionowner.html)

/// k_selectionowner_new7 constructs a new KSelectionOwner object.
///
/// @param selection const char*
/// @param screen int
///
KSelectionOwner* k_selectionowner_new7(const char* selection, int screen);

/// [Upstream resources](https://api.kde.org/kselectionowner.html)

/// k_selectionowner_new8 constructs a new KSelectionOwner object.
///
/// @param selection const char*
/// @param screen int
/// @param parent QObject*
///
KSelectionOwner* k_selectionowner_new8(const char* selection, int screen, void* parent);

/// [Upstream resources](https://api.kde.org/kselectionowner.html)

#ifdef __linux__
/// k_selectionowner_new9 constructs a new KSelectionOwner object.
///
/// @param selection xcb_atom_t
/// @param c xcb_connection_t*
/// @param root xcb_window_t
/// @param parent QObject*
///
KSelectionOwner* k_selectionowner_new9(xcb_atom_t selection, xcb_connection_t* c, xcb_window_t root, void* parent);
#endif

/// [Upstream resources](https://api.kde.org/kselectionowner.html)

#ifdef __linux__
/// k_selectionowner_new10 constructs a new KSelectionOwner object.
///
/// @param selection const char*
/// @param c xcb_connection_t*
/// @param root xcb_window_t
/// @param parent QObject*
///
KSelectionOwner* k_selectionowner_new10(const char* selection, xcb_connection_t* c, xcb_window_t root, void* parent);
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSelectionOwner*
///
const QMetaObject* k_selectionowner_meta_object(void* self);

/// @param self KSelectionOwner*
/// @param param1 const char*
///
void* k_selectionowner_metacast(void* self, const char* param1);

/// @param self KSelectionOwner*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_selectionowner_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSelectionOwner*
/// @param callback int32_t func(KSelectionOwner* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_selectionowner_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSelectionOwner*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_selectionowner_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_selectionowner_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kselectionowner.html#claim)
///
/// @param self KSelectionOwner*
/// @param force bool
///
void k_selectionowner_claim(void* self, bool force);

/// [Upstream resources](https://api.kde.org/kselectionowner.html#release)
///
/// @param self KSelectionOwner*
///
void k_selectionowner_release(void* self);

#ifdef __linux__
/// [Upstream resources](https://api.kde.org/kselectionowner.html#ownerWindow)
///
/// @param self KSelectionOwner*
///
xcb_window_t k_selectionowner_owner_window(void* self);
#endif

/// [Upstream resources](https://api.kde.org/kselectionowner.html#filterEvent)
///
/// @param self KSelectionOwner*
/// @param ev_P void*
///
bool k_selectionowner_filter_event(void* self, void* ev_P);

/// [Upstream resources](https://api.kde.org/kselectionowner.html#timerEvent)
///
/// @param self KSelectionOwner*
/// @param event QTimerEvent*
///
void k_selectionowner_timer_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kselectionowner.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self KSelectionOwner*
/// @param callback void func(KSelectionOwner* self, QTimerEvent* event)
///
void k_selectionowner_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kselectionowner.html#timerEvent)
///
/// Base class method implementation
///
/// @param self KSelectionOwner*
/// @param event QTimerEvent*
///
void k_selectionowner_qbase_timer_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kselectionowner.html#lostOwnership)
///
/// @param self KSelectionOwner*
///
void k_selectionowner_lost_ownership(void* self);

/// [Upstream resources](https://api.kde.org/kselectionowner.html#lostOwnership)
///
/// @param self KSelectionOwner*
/// @param callback void func(KSelectionOwner* self)
///
void k_selectionowner_on_lost_ownership(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kselectionowner.html#claimedOwnership)
///
/// @param self KSelectionOwner*
///
void k_selectionowner_claimed_ownership(void* self);

/// [Upstream resources](https://api.kde.org/kselectionowner.html#claimedOwnership)
///
/// @param self KSelectionOwner*
/// @param callback void func(KSelectionOwner* self)
///
void k_selectionowner_on_claimed_ownership(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kselectionowner.html#failedToClaimOwnership)
///
/// @param self KSelectionOwner*
///
void k_selectionowner_failed_to_claim_ownership(void* self);

/// [Upstream resources](https://api.kde.org/kselectionowner.html#failedToClaimOwnership)
///
/// @param self KSelectionOwner*
/// @param callback void func(KSelectionOwner* self)
///
void k_selectionowner_on_failed_to_claim_ownership(void* self, void (*callback)(void*));

#ifdef __linux__
/// [Upstream resources](https://api.kde.org/kselectionowner.html#genericReply)
///
/// @param self KSelectionOwner*
/// @param target xcb_atom_t
/// @param property xcb_atom_t
/// @param requestor xcb_window_t
///
bool k_selectionowner_generic_reply(void* self, xcb_atom_t target, xcb_atom_t property, xcb_window_t requestor);
#endif

#ifdef __linux__
/// [Upstream resources](https://api.kde.org/kselectionowner.html#genericReply)
///
/// Allows for overriding the related default method
///
/// @param self KSelectionOwner*
/// @param callback bool func(KSelectionOwner* self, xcb_atom_t target, xcb_atom_t property, xcb_window_t requestor)
///
void k_selectionowner_on_generic_reply(void* self, bool (*callback)(void*, xcb_atom_t, xcb_atom_t, xcb_window_t));
#endif

#ifdef __linux__
/// [Upstream resources](https://api.kde.org/kselectionowner.html#genericReply)
///
/// Base class method implementation
///
/// @param self KSelectionOwner*
/// @param target xcb_atom_t
/// @param property xcb_atom_t
/// @param requestor xcb_window_t
///
bool k_selectionowner_qbase_generic_reply(void* self, xcb_atom_t target, xcb_atom_t property, xcb_window_t requestor);
#endif

#ifdef __linux__
/// [Upstream resources](https://api.kde.org/kselectionowner.html#replyTargets)
///
/// @param self KSelectionOwner*
/// @param property xcb_atom_t
/// @param requestor xcb_window_t
///
void k_selectionowner_reply_targets(void* self, xcb_atom_t property, xcb_window_t requestor);
#endif

#ifdef __linux__
/// [Upstream resources](https://api.kde.org/kselectionowner.html#replyTargets)
///
/// Allows for overriding the related default method
///
/// @param self KSelectionOwner*
/// @param callback void func(KSelectionOwner* self, xcb_atom_t property, xcb_window_t requestor)
///
void k_selectionowner_on_reply_targets(void* self, void (*callback)(void*, xcb_atom_t, xcb_window_t));
#endif

#ifdef __linux__
/// [Upstream resources](https://api.kde.org/kselectionowner.html#replyTargets)
///
/// Base class method implementation
///
/// @param self KSelectionOwner*
/// @param property xcb_atom_t
/// @param requestor xcb_window_t
///
void k_selectionowner_qbase_reply_targets(void* self, xcb_atom_t property, xcb_window_t requestor);
#endif

/// [Upstream resources](https://api.kde.org/kselectionowner.html#getAtoms)
///
/// @param self KSelectionOwner*
///
void k_selectionowner_get_atoms(void* self);

/// [Upstream resources](https://api.kde.org/kselectionowner.html#getAtoms)
///
/// Allows for overriding the related default method
///
/// @param self KSelectionOwner*
/// @param callback void func()
///
void k_selectionowner_on_get_atoms(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kselectionowner.html#getAtoms)
///
/// Base class method implementation
///
/// @param self KSelectionOwner*
///
void k_selectionowner_qbase_get_atoms(void* self);

/// [Upstream resources](https://api.kde.org/kselectionowner.html#setData)
///
/// @param self KSelectionOwner*
/// @param extra1 uint32_t
/// @param extra2 uint32_t
///
void k_selectionowner_set_data(void* self, uint32_t extra1, uint32_t extra2);

/// [Upstream resources](https://api.kde.org/kselectionowner.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self KSelectionOwner*
/// @param callback void func(KSelectionOwner* self, uint32_t extra1, uint32_t extra2)
///
void k_selectionowner_on_set_data(void* self, void (*callback)(void*, uint32_t, uint32_t));

/// [Upstream resources](https://api.kde.org/kselectionowner.html#setData)
///
/// Base class method implementation
///
/// @param self KSelectionOwner*
/// @param extra1 uint32_t
/// @param extra2 uint32_t
///
void k_selectionowner_qbase_set_data(void* self, uint32_t extra1, uint32_t extra2);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_selectionowner_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_selectionowner_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kselectionowner.html#claim)
///
/// @param self KSelectionOwner*
/// @param force bool
/// @param force_kill bool
///
void k_selectionowner_claim2(void* self, bool force, bool force_kill);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSelectionOwner*
///
const char* k_selectionowner_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSelectionOwner*
/// @param name char*
///
void k_selectionowner_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSelectionOwner*
///
bool k_selectionowner_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSelectionOwner*
///
bool k_selectionowner_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSelectionOwner*
///
bool k_selectionowner_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSelectionOwner*
///
bool k_selectionowner_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSelectionOwner*
/// @param b bool
///
bool k_selectionowner_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KSelectionOwner*
///
QThread* k_selectionowner_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSelectionOwner*
/// @param thread QThread*
///
bool k_selectionowner_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSelectionOwner*
/// @param interval int
///
int32_t k_selectionowner_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSelectionOwner*
/// @param id int
///
void k_selectionowner_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSelectionOwner*
/// @param id enum Qt__TimerId
///
void k_selectionowner_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KSelectionOwner*
///
libqt_list /* of QObject* */ k_selectionowner_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KSelectionOwner*
/// @param parent QObject*
///
void k_selectionowner_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSelectionOwner*
/// @param filterObj QObject*
///
void k_selectionowner_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSelectionOwner*
/// @param obj QObject*
///
void k_selectionowner_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_selectionowner_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSelectionOwner*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_selectionowner_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_selectionowner_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_selectionowner_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSelectionOwner*
///
void k_selectionowner_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSelectionOwner*
///
void k_selectionowner_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSelectionOwner*
/// @param name const char*
/// @param value QVariant*
///
bool k_selectionowner_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSelectionOwner*
/// @param name const char*
///
QVariant* k_selectionowner_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSelectionOwner*
///
const char** k_selectionowner_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSelectionOwner*
///
QBindingStorage* k_selectionowner_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSelectionOwner*
///
const QBindingStorage* k_selectionowner_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelectionOwner*
///
void k_selectionowner_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelectionOwner*
/// @param callback void func(KSelectionOwner* self)
///
void k_selectionowner_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KSelectionOwner*
///
QObject* k_selectionowner_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSelectionOwner*
/// @param classname const char*
///
bool k_selectionowner_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSelectionOwner*
///
void k_selectionowner_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSelectionOwner*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_selectionowner_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSelectionOwner*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_selectionowner_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_selectionowner_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSelectionOwner*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_selectionowner_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelectionOwner*
/// @param param1 QObject*
///
void k_selectionowner_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelectionOwner*
/// @param callback void func(KSelectionOwner* self, QObject* param1)
///
void k_selectionowner_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionOwner*
/// @param event QEvent*
///
bool k_selectionowner_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param event QEvent*
///
bool k_selectionowner_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param callback bool func(KSelectionOwner* self, QEvent* event)
///
void k_selectionowner_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionOwner*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_selectionowner_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_selectionowner_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param callback bool func(KSelectionOwner* self, QObject* watched, QEvent* event)
///
void k_selectionowner_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionOwner*
/// @param event QChildEvent*
///
void k_selectionowner_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param event QChildEvent*
///
void k_selectionowner_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param callback void func(KSelectionOwner* self, QChildEvent* event)
///
void k_selectionowner_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionOwner*
/// @param event QEvent*
///
void k_selectionowner_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param event QEvent*
///
void k_selectionowner_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param callback void func(KSelectionOwner* self, QEvent* event)
///
void k_selectionowner_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionOwner*
/// @param signal QMetaMethod*
///
void k_selectionowner_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param signal QMetaMethod*
///
void k_selectionowner_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param callback void func(KSelectionOwner* self, QMetaMethod* signal)
///
void k_selectionowner_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionOwner*
/// @param signal QMetaMethod*
///
void k_selectionowner_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param signal QMetaMethod*
///
void k_selectionowner_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param callback void func(KSelectionOwner* self, QMetaMethod* signal)
///
void k_selectionowner_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionOwner*
///
QObject* k_selectionowner_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionOwner*
///
QObject* k_selectionowner_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param callback QObject* func()
///
void k_selectionowner_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionOwner*
///
int32_t k_selectionowner_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionOwner*
///
int32_t k_selectionowner_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param callback int32_t func()
///
void k_selectionowner_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionOwner*
/// @param signal const char*
///
int32_t k_selectionowner_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param signal const char*
///
int32_t k_selectionowner_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param callback int32_t func(KSelectionOwner* self, const char* signal)
///
void k_selectionowner_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelectionOwner*
/// @param signal QMetaMethod*
///
bool k_selectionowner_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param signal QMetaMethod*
///
bool k_selectionowner_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelectionOwner*
/// @param callback bool func(KSelectionOwner* self, QMetaMethod* signal)
///
void k_selectionowner_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelectionOwner*
/// @param callback void func(KSelectionOwner* self, const char* objectName)
///
void k_selectionowner_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kselectionowner.html#dtor.KSelectionOwner)
///
/// Delete this object from C++ memory.
///
/// @param self KSelectionOwner*
///
void k_selectionowner_delete(void* self);

#endif
