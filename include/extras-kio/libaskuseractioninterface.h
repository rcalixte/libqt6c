#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBASKUSERACTIONINTERFACE_H
#define SRC_EXTRAS_KIO_QT6C_LIBASKUSERACTIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-askuseractioninterface.html

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__AskUserActionInterface*
const QMetaObject* k_io__askuseractioninterface_meta_object(void* self);

/// @param self KIO__AskUserActionInterface*
/// @param param1 const char*
void* k_io__askuseractioninterface_metacast(void* self, const char* param1);

/// @param self KIO__AskUserActionInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__askuseractioninterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__askuseractioninterface_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserRename)
///
/// @param self KIO__AskUserActionInterface*
/// @param job KJob*
/// @param title const char*
/// @param src QUrl*
/// @param dest QUrl*
/// @param options flag of enum KIO__RenameDialog_Option
/// @param sizeSrc uint64_t
/// @param sizeDest uint64_t
/// @param ctimeSrc QDateTime*
/// @param ctimeDest QDateTime*
/// @param mtimeSrc QDateTime*
/// @param mtimeDest QDateTime*
void k_io__askuseractioninterface_ask_user_rename(void* self, void* job, const char* title, void* src, void* dest, int32_t options, uint64_t sizeSrc, uint64_t sizeDest, void* ctimeSrc, void* ctimeDest, void* mtimeSrc, void* mtimeDest);

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserSkip)
///
/// @param self KIO__AskUserActionInterface*
/// @param job KJob*
/// @param options flag of enum KIO__SkipDialog_Option
/// @param errorText const char*
void k_io__askuseractioninterface_ask_user_skip(void* self, void* job, int32_t options, const char* errorText);

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserDelete)
///
/// @param self KIO__AskUserActionInterface*
/// @param urls libqt_list /* of QUrl* */
/// @param deletionType enum KIO__AskUserActionInterface__DeletionType
/// @param confirmationType enum KIO__AskUserActionInterface__ConfirmationType
/// @param parent QWidget*
void k_io__askuseractioninterface_ask_user_delete(void* self, libqt_list urls, int32_t deletionType, int32_t confirmationType, void* parent);

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#requestUserMessageBox)
///
/// @param self KIO__AskUserActionInterface*
/// @param type enum KIO__AskUserActionInterface__MessageDialogType
/// @param text const char*
/// @param title const char*
/// @param primaryActionText const char*
/// @param secondatyActionText const char*
/// @param primaryActionIconName const char*
/// @param secondatyActionIconName const char*
/// @param dontAskAgainName const char*
/// @param details const char*
/// @param parent QWidget*
void k_io__askuseractioninterface_request_user_message_box(void* self, int32_t type, const char* text, const char* title, const char* primaryActionText, const char* secondatyActionText, const char* primaryActionIconName, const char* secondatyActionIconName, const char* dontAskAgainName, const char* details, void* parent);

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askIgnoreSslErrors)
///
/// @param self KIO__AskUserActionInterface*
/// @param sslErrorData libqt_map /* of const char* to QVariant* */
/// @param parent QWidget*
void k_io__askuseractioninterface_ask_ignore_ssl_errors(void* self, libqt_map /* of const char* to QVariant* */ sslErrorData, void* parent);

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserRenameResult)
///
/// @param self KIO__AskUserActionInterface*
/// @param result enum KIO__RenameDialog_Result
/// @param newUrl QUrl*
/// @param parentJob KJob*
void k_io__askuseractioninterface_ask_user_rename_result(void* self, int32_t result, void* newUrl, void* parentJob);

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserRenameResult)
///
/// @param self KIO__AskUserActionInterface*
/// @param callback void func(KIO__AskUserActionInterface* self, enum KIO__RenameDialog_Result result, QUrl* newUrl, KJob* parentJob)
void k_io__askuseractioninterface_on_ask_user_rename_result(void* self, void (*callback)(void*, int32_t, void*, void*));

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserSkipResult)
///
/// @param self KIO__AskUserActionInterface*
/// @param result enum KIO__RenameDialog_Result
/// @param parentJob KJob*
void k_io__askuseractioninterface_ask_user_skip_result(void* self, int32_t result, void* parentJob);

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserSkipResult)
///
/// @param self KIO__AskUserActionInterface*
/// @param callback void func(KIO__AskUserActionInterface* self, enum KIO__RenameDialog_Result result, KJob* parentJob)
void k_io__askuseractioninterface_on_ask_user_skip_result(void* self, void (*callback)(void*, int32_t, void*));

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserDeleteResult)
///
/// @param self KIO__AskUserActionInterface*
/// @param allowDelete bool
/// @param urls libqt_list /* of QUrl* */
/// @param deletionType enum KIO__AskUserActionInterface__DeletionType
/// @param parent QWidget*
void k_io__askuseractioninterface_ask_user_delete_result(void* self, bool allowDelete, libqt_list urls, int32_t deletionType, void* parent);

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserDeleteResult)
///
/// @param self KIO__AskUserActionInterface*
/// @param callback void func(KIO__AskUserActionInterface* self, bool allowDelete, QUrl** urls, enum KIO__AskUserActionInterface__DeletionType deletionType, QWidget* parent)
void k_io__askuseractioninterface_on_ask_user_delete_result(void* self, void (*callback)(void*, bool, QUrl**, int32_t, void*));

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#messageBoxResult)
///
/// @param self KIO__AskUserActionInterface*
/// @param result int
void k_io__askuseractioninterface_message_box_result(void* self, int result);

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#messageBoxResult)
///
/// @param self KIO__AskUserActionInterface*
/// @param callback void func(KIO__AskUserActionInterface* self, int result)
void k_io__askuseractioninterface_on_message_box_result(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askIgnoreSslErrorsResult)
///
/// @param self KIO__AskUserActionInterface*
/// @param result int
void k_io__askuseractioninterface_ask_ignore_ssl_errors_result(void* self, int result);

/// [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askIgnoreSslErrorsResult)
///
/// @param self KIO__AskUserActionInterface*
/// @param callback void func(KIO__AskUserActionInterface* self, int result)
void k_io__askuseractioninterface_on_ask_ignore_ssl_errors_result(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__askuseractioninterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__askuseractioninterface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KIO__AskUserActionInterface*
/// @param event QEvent*
bool k_io__askuseractioninterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KIO__AskUserActionInterface*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__askuseractioninterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__AskUserActionInterface*
const char* k_io__askuseractioninterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__AskUserActionInterface*
/// @param name char*
void k_io__askuseractioninterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__AskUserActionInterface*
bool k_io__askuseractioninterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__AskUserActionInterface*
bool k_io__askuseractioninterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__AskUserActionInterface*
bool k_io__askuseractioninterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__AskUserActionInterface*
bool k_io__askuseractioninterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__AskUserActionInterface*
/// @param b bool
bool k_io__askuseractioninterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__AskUserActionInterface*
QThread* k_io__askuseractioninterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__AskUserActionInterface*
/// @param thread QThread*
bool k_io__askuseractioninterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__AskUserActionInterface*
/// @param interval int
int32_t k_io__askuseractioninterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__AskUserActionInterface*
/// @param id int
void k_io__askuseractioninterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__AskUserActionInterface*
/// @param id enum Qt__TimerId
void k_io__askuseractioninterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__AskUserActionInterface*
libqt_list /* of QObject* */ k_io__askuseractioninterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__AskUserActionInterface*
/// @param parent QObject*
void k_io__askuseractioninterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__AskUserActionInterface*
/// @param filterObj QObject*
void k_io__askuseractioninterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__AskUserActionInterface*
/// @param obj QObject*
void k_io__askuseractioninterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__askuseractioninterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__AskUserActionInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__askuseractioninterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__askuseractioninterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__askuseractioninterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__AskUserActionInterface*
void k_io__askuseractioninterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__AskUserActionInterface*
void k_io__askuseractioninterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__AskUserActionInterface*
/// @param name const char*
/// @param value QVariant*
bool k_io__askuseractioninterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__AskUserActionInterface*
/// @param name const char*
QVariant* k_io__askuseractioninterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__AskUserActionInterface*
const char** k_io__askuseractioninterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__AskUserActionInterface*
QBindingStorage* k_io__askuseractioninterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__AskUserActionInterface*
const QBindingStorage* k_io__askuseractioninterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__AskUserActionInterface*
void k_io__askuseractioninterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__AskUserActionInterface*
/// @param callback void func(KIO__AskUserActionInterface* self)
void k_io__askuseractioninterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__AskUserActionInterface*
QObject* k_io__askuseractioninterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__AskUserActionInterface*
/// @param classname const char*
bool k_io__askuseractioninterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__AskUserActionInterface*
void k_io__askuseractioninterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__AskUserActionInterface*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__askuseractioninterface_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__AskUserActionInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__askuseractioninterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__askuseractioninterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__AskUserActionInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__askuseractioninterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__AskUserActionInterface*
/// @param param1 QObject*
void k_io__askuseractioninterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__AskUserActionInterface*
/// @param callback void func(KIO__AskUserActionInterface* self, QObject* param1)
void k_io__askuseractioninterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__AskUserActionInterface*
/// @param callback void func(KIO__AskUserActionInterface* self, const char* objectName)
void k_io__askuseractioninterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__AskUserActionInterface*
void k_io__askuseractioninterface_delete(void* self);

/// https://api.kde.org/kio-askuseractioninterface.html#types

typedef enum {
    KIO_ASKUSERACTIONINTERFACE_DELETIONTYPE_DELETE = 0,
    KIO_ASKUSERACTIONINTERFACE_DELETIONTYPE_TRASH = 1,
    KIO_ASKUSERACTIONINTERFACE_DELETIONTYPE_EMPTYTRASH = 2,
    KIO_ASKUSERACTIONINTERFACE_DELETIONTYPE_DELETEINSTEADOFTRASH = 3
} KIO__AskUserActionInterface__DeletionType;

typedef enum {
    KIO_ASKUSERACTIONINTERFACE_CONFIRMATIONTYPE_DEFAULTCONFIRMATION = 0,
    KIO_ASKUSERACTIONINTERFACE_CONFIRMATIONTYPE_FORCECONFIRMATION = 1
} KIO__AskUserActionInterface__ConfirmationType;

typedef enum {
    KIO_ASKUSERACTIONINTERFACE_MESSAGEDIALOGTYPE_QUESTIONTWOACTIONS = 1,
    KIO_ASKUSERACTIONINTERFACE_MESSAGEDIALOGTYPE_QUESTIONTWOACTIONSCANCEL = 2,
    KIO_ASKUSERACTIONINTERFACE_MESSAGEDIALOGTYPE_WARNINGTWOACTIONS = 3,
    KIO_ASKUSERACTIONINTERFACE_MESSAGEDIALOGTYPE_WARNINGTWOACTIONSCANCEL = 4,
    KIO_ASKUSERACTIONINTERFACE_MESSAGEDIALOGTYPE_WARNINGCONTINUECANCEL = 5,
    KIO_ASKUSERACTIONINTERFACE_MESSAGEDIALOGTYPE_INFORMATION = 7,
    KIO_ASKUSERACTIONINTERFACE_MESSAGEDIALOGTYPE_ERROR = 9
} KIO__AskUserActionInterface__MessageDialogType;

#endif
