#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBJOBUIDELEGATE_H
#define SRC_EXTRAS_KIO_QT6C_LIBJOBUIDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-jobuidelegate.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__JobUiDelegate*
const QMetaObject* k_io__jobuidelegate_meta_object(void* self);

/// @param self KIO__JobUiDelegate*
/// @param param1 const char*
void* k_io__jobuidelegate_metacast(void* self, const char* param1);

/// @param self KIO__JobUiDelegate*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__jobuidelegate_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__jobuidelegate_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kio-jobuidelegate.html#setWindow)
///
/// @param self KIO__JobUiDelegate*
/// @param window QWidget*
void k_io__jobuidelegate_set_window(void* self, void* window);

/// [Qt documentation](https://api.kde.org/kio-jobuidelegate.html#unregisterWindow)
///
/// @param window QWidget*
void k_io__jobuidelegate_unregister_window(void* window);

/// [Qt documentation](https://api.kde.org/kio-jobuidelegate.html#askDeleteConfirmation)
///
/// @param self KIO__JobUiDelegate*
/// @param urls libqt_list /* of QUrl* */
/// @param deletionType enum KIO__JobUiDelegateExtension__DeletionType
/// @param confirmationType enum KIO__JobUiDelegateExtension__ConfirmationType
bool k_io__jobuidelegate_ask_delete_confirmation(void* self, libqt_list urls, int32_t deletionType, int32_t confirmationType);

/// [Qt documentation](https://api.kde.org/kio-jobuidelegate.html#updateUrlInClipboard)
///
/// @param self KIO__JobUiDelegate*
/// @param src QUrl*
/// @param dest QUrl*
void k_io__jobuidelegate_update_url_in_clipboard(void* self, void* src, void* dest);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__jobuidelegate_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__jobuidelegate_tr3(const char* s, const char* c, int n);

/// Inherited from KDialogJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kdialogjobuidelegate.html#setJob)
///
/// @param self KIO__JobUiDelegate*
/// @param job KJob*
bool k_io__jobuidelegate_set_job(void* self, void* job);

/// Inherited from KDialogJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kdialogjobuidelegate.html#window)
///
/// @param self KIO__JobUiDelegate*
QWidget* k_io__jobuidelegate_window(void* self);

/// Inherited from KDialogJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kdialogjobuidelegate.html#updateUserTimestamp)
///
/// @param self KIO__JobUiDelegate*
/// @param time uint64_t
void k_io__jobuidelegate_update_user_timestamp(void* self, uint64_t time);

/// Inherited from KDialogJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kdialogjobuidelegate.html#userTimestamp)
///
/// @param self KIO__JobUiDelegate*
uint64_t k_io__jobuidelegate_user_timestamp(void* self);

/// Inherited from KDialogJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kdialogjobuidelegate.html#showErrorMessage)
///
/// @param self KIO__JobUiDelegate*
void k_io__jobuidelegate_show_error_message(void* self);

/// Inherited from KJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kjobuidelegate.html#setAutoErrorHandlingEnabled)
///
/// @param self KIO__JobUiDelegate*
/// @param enable bool
void k_io__jobuidelegate_set_auto_error_handling_enabled(void* self, bool enable);

/// Inherited from KJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kjobuidelegate.html#isAutoErrorHandlingEnabled)
///
/// @param self KIO__JobUiDelegate*
bool k_io__jobuidelegate_is_auto_error_handling_enabled(void* self);

/// Inherited from KJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kjobuidelegate.html#setAutoWarningHandlingEnabled)
///
/// @param self KIO__JobUiDelegate*
/// @param enable bool
void k_io__jobuidelegate_set_auto_warning_handling_enabled(void* self, bool enable);

/// Inherited from KJobUiDelegate
///
/// [Qt documentation](https://api.kde.org/kjobuidelegate.html#isAutoWarningHandlingEnabled)
///
/// @param self KIO__JobUiDelegate*
bool k_io__jobuidelegate_is_auto_warning_handling_enabled(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KIO__JobUiDelegate*
/// @param event QEvent*
bool k_io__jobuidelegate_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KIO__JobUiDelegate*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__jobuidelegate_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__JobUiDelegate*
const char* k_io__jobuidelegate_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__JobUiDelegate*
/// @param name char*
void k_io__jobuidelegate_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__JobUiDelegate*
bool k_io__jobuidelegate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__JobUiDelegate*
bool k_io__jobuidelegate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__JobUiDelegate*
bool k_io__jobuidelegate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__JobUiDelegate*
bool k_io__jobuidelegate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__JobUiDelegate*
/// @param b bool
bool k_io__jobuidelegate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__JobUiDelegate*
QThread* k_io__jobuidelegate_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__JobUiDelegate*
/// @param thread QThread*
bool k_io__jobuidelegate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__JobUiDelegate*
/// @param interval int
int32_t k_io__jobuidelegate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__JobUiDelegate*
/// @param id int
void k_io__jobuidelegate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__JobUiDelegate*
/// @param id enum Qt__TimerId
void k_io__jobuidelegate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__JobUiDelegate*
libqt_list /* of QObject* */ k_io__jobuidelegate_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__JobUiDelegate*
/// @param parent QObject*
void k_io__jobuidelegate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__JobUiDelegate*
/// @param filterObj QObject*
void k_io__jobuidelegate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__JobUiDelegate*
/// @param obj QObject*
void k_io__jobuidelegate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__jobuidelegate_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__JobUiDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__jobuidelegate_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__jobuidelegate_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__jobuidelegate_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__JobUiDelegate*
void k_io__jobuidelegate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__JobUiDelegate*
void k_io__jobuidelegate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__JobUiDelegate*
/// @param name const char*
/// @param value QVariant*
bool k_io__jobuidelegate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__JobUiDelegate*
/// @param name const char*
QVariant* k_io__jobuidelegate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__JobUiDelegate*
const char** k_io__jobuidelegate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__JobUiDelegate*
QBindingStorage* k_io__jobuidelegate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__JobUiDelegate*
const QBindingStorage* k_io__jobuidelegate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__JobUiDelegate*
void k_io__jobuidelegate_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__JobUiDelegate*
/// @param callback void func(KIO__JobUiDelegate* self)
void k_io__jobuidelegate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__JobUiDelegate*
QObject* k_io__jobuidelegate_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__JobUiDelegate*
/// @param classname const char*
bool k_io__jobuidelegate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__JobUiDelegate*
void k_io__jobuidelegate_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__JobUiDelegate*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__jobuidelegate_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__JobUiDelegate*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__jobuidelegate_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__jobuidelegate_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__JobUiDelegate*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__jobuidelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__JobUiDelegate*
/// @param param1 QObject*
void k_io__jobuidelegate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__JobUiDelegate*
/// @param callback void func(KIO__JobUiDelegate* self, QObject* param1)
void k_io__jobuidelegate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__JobUiDelegate*
/// @param callback void func(KIO__JobUiDelegate* self, const char* objectName)
void k_io__jobuidelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__JobUiDelegate*
void k_io__jobuidelegate_delete(void* self);

#endif
