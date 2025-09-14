#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBWIDGETSASKUSERACTIONHANDLER_H
#define SRC_EXTRAS_KIOQT6C_LIBWIDGETSASKUSERACTIONHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-widgetsaskuseractionhandler.html

/// k_io__widgetsaskuseractionhandler_new constructs a new KIO::WidgetsAskUserActionHandler object.
///
KIO__WidgetsAskUserActionHandler* k_io__widgetsaskuseractionhandler_new();

/// k_io__widgetsaskuseractionhandler_new2 constructs a new KIO::WidgetsAskUserActionHandler object.
///
/// @param parent QObject*
KIO__WidgetsAskUserActionHandler* k_io__widgetsaskuseractionhandler_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__WidgetsAskUserActionHandler*
const QMetaObject* k_io__widgetsaskuseractionhandler_meta_object(void* self);

/// @param self KIO__WidgetsAskUserActionHandler*
/// @param param1 const char*
void* k_io__widgetsaskuseractionhandler_metacast(void* self, const char* param1);

/// @param self KIO__WidgetsAskUserActionHandler*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__widgetsaskuseractionhandler_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback int32_t func(KIO__WidgetsAskUserActionHandler* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_io__widgetsaskuseractionhandler_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__widgetsaskuseractionhandler_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__widgetsaskuseractionhandler_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserRename)
///
/// @param self KIO__WidgetsAskUserActionHandler*
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
void k_io__widgetsaskuseractionhandler_ask_user_rename(void* self, void* job, const char* title, void* src, void* dest, int32_t options, uint64_t sizeSrc, uint64_t sizeDest, void* ctimeSrc, void* ctimeDest, void* mtimeSrc, void* mtimeDest);

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserRename)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, KJob* job, const char* title, QUrl* src, QUrl* dest, flag of enum KIO__RenameDialog_Option options, uint64_t sizeSrc, uint64_t sizeDest, QDateTime* ctimeSrc, QDateTime* ctimeDest, QDateTime* mtimeSrc, QDateTime* mtimeDest)
void k_io__widgetsaskuseractionhandler_on_ask_user_rename(void* self, void (*callback)(void*, void*, const char*, void*, void*, int32_t, uint64_t, uint64_t, void*, void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserRename)
///
/// Base class method implementation
///
/// @param self KIO__WidgetsAskUserActionHandler*
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
void k_io__widgetsaskuseractionhandler_qbase_ask_user_rename(void* self, void* job, const char* title, void* src, void* dest, int32_t options, uint64_t sizeSrc, uint64_t sizeDest, void* ctimeSrc, void* ctimeDest, void* mtimeSrc, void* mtimeDest);

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserSkip)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param job KJob*
/// @param options flag of enum KIO__SkipDialog_Option
/// @param error_text const char*
void k_io__widgetsaskuseractionhandler_ask_user_skip(void* self, void* job, int32_t options, const char* error_text);

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserSkip)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, KJob* job, flag of enum KIO__SkipDialog_Option options, const char* error_text)
void k_io__widgetsaskuseractionhandler_on_ask_user_skip(void* self, void (*callback)(void*, void*, int32_t, const char*));

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserSkip)
///
/// Base class method implementation
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param job KJob*
/// @param options flag of enum KIO__SkipDialog_Option
/// @param error_text const char*
void k_io__widgetsaskuseractionhandler_qbase_ask_user_skip(void* self, void* job, int32_t options, const char* error_text);

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserDelete)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param urls libqt_list /* of QUrl* */
/// @param deletionType enum KIO__AskUserActionInterface__DeletionType
/// @param confirmationType enum KIO__AskUserActionInterface__ConfirmationType
/// @param parent QWidget*
void k_io__widgetsaskuseractionhandler_ask_user_delete(void* self, libqt_list urls, int32_t deletionType, int32_t confirmationType, void* parent);

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserDelete)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, QUrl** urls, enum KIO__AskUserActionInterface__DeletionType deletionType, enum KIO__AskUserActionInterface__ConfirmationType confirmationType, QWidget* parent)
void k_io__widgetsaskuseractionhandler_on_ask_user_delete(void* self, void (*callback)(void*, QUrl**, int32_t, int32_t, void*));

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserDelete)
///
/// Base class method implementation
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param urls libqt_list /* of QUrl* */
/// @param deletionType enum KIO__AskUserActionInterface__DeletionType
/// @param confirmationType enum KIO__AskUserActionInterface__ConfirmationType
/// @param parent QWidget*
void k_io__widgetsaskuseractionhandler_qbase_ask_user_delete(void* self, libqt_list urls, int32_t deletionType, int32_t confirmationType, void* parent);

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#requestUserMessageBox)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param typeVal enum KIO__AskUserActionInterface__MessageDialogType
/// @param text const char*
/// @param title const char*
/// @param primaryActionText const char*
/// @param secondaryActionText const char*
/// @param primaryActionIconName const char*
/// @param secondaryActionIconName const char*
/// @param dontAskAgainName const char*
/// @param details const char*
/// @param parent QWidget*
void k_io__widgetsaskuseractionhandler_request_user_message_box(void* self, int32_t typeVal, const char* text, const char* title, const char* primaryActionText, const char* secondaryActionText, const char* primaryActionIconName, const char* secondaryActionIconName, const char* dontAskAgainName, const char* details, void* parent);

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#requestUserMessageBox)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, enum KIO__AskUserActionInterface__MessageDialogType typeVal, const char* text, const char* title, const char* primaryActionText, const char* secondaryActionText, const char* primaryActionIconName, const char* secondaryActionIconName, const char* dontAskAgainName, const char* details, QWidget* parent)
void k_io__widgetsaskuseractionhandler_on_request_user_message_box(void* self, void (*callback)(void*, int32_t, const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, void*));

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#requestUserMessageBox)
///
/// Base class method implementation
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param typeVal enum KIO__AskUserActionInterface__MessageDialogType
/// @param text const char*
/// @param title const char*
/// @param primaryActionText const char*
/// @param secondaryActionText const char*
/// @param primaryActionIconName const char*
/// @param secondaryActionIconName const char*
/// @param dontAskAgainName const char*
/// @param details const char*
/// @param parent QWidget*
void k_io__widgetsaskuseractionhandler_qbase_request_user_message_box(void* self, int32_t typeVal, const char* text, const char* title, const char* primaryActionText, const char* secondaryActionText, const char* primaryActionIconName, const char* secondaryActionIconName, const char* dontAskAgainName, const char* details, void* parent);

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askIgnoreSslErrors)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param sslErrorData libqt_map /* of const char* to QVariant* */
/// @param parent QWidget*
void k_io__widgetsaskuseractionhandler_ask_ignore_ssl_errors(void* self, libqt_map /* of const char* to QVariant* */ sslErrorData, void* parent);

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askIgnoreSslErrors)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, libqt_map /* of const char* to QVariant* */ /* of const char* to QVariant* */, QWidget* parent)
void k_io__widgetsaskuseractionhandler_on_ask_ignore_ssl_errors(void* self, void (*callback)(void*, libqt_map /* of const char* to QVariant* */, void*));

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askIgnoreSslErrors)
///
/// Base class method implementation
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param sslErrorData libqt_map /* of const char* to QVariant* */
/// @param parent QWidget*
void k_io__widgetsaskuseractionhandler_qbase_ask_ignore_ssl_errors(void* self, libqt_map /* of const char* to QVariant* */ sslErrorData, void* parent);

/// [Qt documentation](https://api.kde.org/kio-widgetsaskuseractionhandler.html#setWindow)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param window QWidget*
void k_io__widgetsaskuseractionhandler_set_window(void* self, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__widgetsaskuseractionhandler_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__widgetsaskuseractionhandler_tr3(const char* s, const char* c, int n);

/// Inherited from KIO::AskUserActionInterface
///
/// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserRenameResult)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param result enum KIO__RenameDialog_Result
/// @param newUrl QUrl*
/// @param parentJob KJob*
void k_io__widgetsaskuseractionhandler_ask_user_rename_result(void* self, int32_t result, void* newUrl, void* parentJob);

/// Inherited from KIO::AskUserActionInterface
///
/// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserRenameResult)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, enum KIO__RenameDialog_Result result, QUrl* newUrl, KJob* parentJob)
void k_io__widgetsaskuseractionhandler_on_ask_user_rename_result(void* self, void (*callback)(void*, int32_t, void*, void*));

/// Inherited from KIO::AskUserActionInterface
///
/// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserSkipResult)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param result enum KIO__RenameDialog_Result
/// @param parentJob KJob*
void k_io__widgetsaskuseractionhandler_ask_user_skip_result(void* self, int32_t result, void* parentJob);

/// Inherited from KIO::AskUserActionInterface
///
/// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserSkipResult)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, enum KIO__RenameDialog_Result result, KJob* parentJob)
void k_io__widgetsaskuseractionhandler_on_ask_user_skip_result(void* self, void (*callback)(void*, int32_t, void*));

/// Inherited from KIO::AskUserActionInterface
///
/// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserDeleteResult)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param allowDelete bool
/// @param urls libqt_list /* of QUrl* */
/// @param deletionType enum KIO__AskUserActionInterface__DeletionType
/// @param parent QWidget*
void k_io__widgetsaskuseractionhandler_ask_user_delete_result(void* self, bool allowDelete, libqt_list urls, int32_t deletionType, void* parent);

/// Inherited from KIO::AskUserActionInterface
///
/// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserDeleteResult)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, bool allowDelete, QUrl** urls, enum KIO__AskUserActionInterface__DeletionType deletionType, QWidget* parent)
void k_io__widgetsaskuseractionhandler_on_ask_user_delete_result(void* self, void (*callback)(void*, bool, QUrl**, int32_t, void*));

/// Inherited from KIO::AskUserActionInterface
///
/// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#messageBoxResult)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param result int
void k_io__widgetsaskuseractionhandler_message_box_result(void* self, int result);

/// Inherited from KIO::AskUserActionInterface
///
/// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#messageBoxResult)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, int result)
void k_io__widgetsaskuseractionhandler_on_message_box_result(void* self, void (*callback)(void*, int));

/// Inherited from KIO::AskUserActionInterface
///
/// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askIgnoreSslErrorsResult)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param result int
void k_io__widgetsaskuseractionhandler_ask_ignore_ssl_errors_result(void* self, int result);

/// Inherited from KIO::AskUserActionInterface
///
/// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askIgnoreSslErrorsResult)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, int result)
void k_io__widgetsaskuseractionhandler_on_ask_ignore_ssl_errors_result(void* self, void (*callback)(void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__WidgetsAskUserActionHandler*
const char* k_io__widgetsaskuseractionhandler_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param name char*
void k_io__widgetsaskuseractionhandler_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__WidgetsAskUserActionHandler*
bool k_io__widgetsaskuseractionhandler_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__WidgetsAskUserActionHandler*
bool k_io__widgetsaskuseractionhandler_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__WidgetsAskUserActionHandler*
bool k_io__widgetsaskuseractionhandler_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__WidgetsAskUserActionHandler*
bool k_io__widgetsaskuseractionhandler_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param b bool
bool k_io__widgetsaskuseractionhandler_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__WidgetsAskUserActionHandler*
QThread* k_io__widgetsaskuseractionhandler_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param thread QThread*
bool k_io__widgetsaskuseractionhandler_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param interval int
int32_t k_io__widgetsaskuseractionhandler_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param id int
void k_io__widgetsaskuseractionhandler_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param id enum Qt__TimerId
void k_io__widgetsaskuseractionhandler_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__WidgetsAskUserActionHandler*
libqt_list /* of QObject* */ k_io__widgetsaskuseractionhandler_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param parent QObject*
void k_io__widgetsaskuseractionhandler_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param filterObj QObject*
void k_io__widgetsaskuseractionhandler_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param obj QObject*
void k_io__widgetsaskuseractionhandler_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__widgetsaskuseractionhandler_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__widgetsaskuseractionhandler_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__widgetsaskuseractionhandler_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__widgetsaskuseractionhandler_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__WidgetsAskUserActionHandler*
void k_io__widgetsaskuseractionhandler_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__WidgetsAskUserActionHandler*
void k_io__widgetsaskuseractionhandler_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param name const char*
/// @param value QVariant*
bool k_io__widgetsaskuseractionhandler_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param name const char*
QVariant* k_io__widgetsaskuseractionhandler_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__WidgetsAskUserActionHandler*
const char** k_io__widgetsaskuseractionhandler_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__WidgetsAskUserActionHandler*
QBindingStorage* k_io__widgetsaskuseractionhandler_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__WidgetsAskUserActionHandler*
const QBindingStorage* k_io__widgetsaskuseractionhandler_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__WidgetsAskUserActionHandler*
void k_io__widgetsaskuseractionhandler_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self)
void k_io__widgetsaskuseractionhandler_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__WidgetsAskUserActionHandler*
QObject* k_io__widgetsaskuseractionhandler_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param classname const char*
bool k_io__widgetsaskuseractionhandler_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__WidgetsAskUserActionHandler*
void k_io__widgetsaskuseractionhandler_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__widgetsaskuseractionhandler_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__widgetsaskuseractionhandler_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_io__widgetsaskuseractionhandler_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_io__widgetsaskuseractionhandler_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param param1 QObject*
void k_io__widgetsaskuseractionhandler_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, QObject* param1)
void k_io__widgetsaskuseractionhandler_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param event QEvent*
bool k_io__widgetsaskuseractionhandler_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param event QEvent*
bool k_io__widgetsaskuseractionhandler_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback bool func(KIO__WidgetsAskUserActionHandler* self, QEvent* event)
void k_io__widgetsaskuseractionhandler_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__widgetsaskuseractionhandler_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__widgetsaskuseractionhandler_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback bool func(KIO__WidgetsAskUserActionHandler* self, QObject* watched, QEvent* event)
void k_io__widgetsaskuseractionhandler_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param event QTimerEvent*
void k_io__widgetsaskuseractionhandler_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param event QTimerEvent*
void k_io__widgetsaskuseractionhandler_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, QTimerEvent* event)
void k_io__widgetsaskuseractionhandler_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param event QChildEvent*
void k_io__widgetsaskuseractionhandler_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param event QChildEvent*
void k_io__widgetsaskuseractionhandler_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, QChildEvent* event)
void k_io__widgetsaskuseractionhandler_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param event QEvent*
void k_io__widgetsaskuseractionhandler_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param event QEvent*
void k_io__widgetsaskuseractionhandler_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, QEvent* event)
void k_io__widgetsaskuseractionhandler_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param signal QMetaMethod*
void k_io__widgetsaskuseractionhandler_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param signal QMetaMethod*
void k_io__widgetsaskuseractionhandler_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, QMetaMethod* signal)
void k_io__widgetsaskuseractionhandler_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param signal QMetaMethod*
void k_io__widgetsaskuseractionhandler_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param signal QMetaMethod*
void k_io__widgetsaskuseractionhandler_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, QMetaMethod* signal)
void k_io__widgetsaskuseractionhandler_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
QObject* k_io__widgetsaskuseractionhandler_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
QObject* k_io__widgetsaskuseractionhandler_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback QObject* func()
void k_io__widgetsaskuseractionhandler_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
int32_t k_io__widgetsaskuseractionhandler_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
int32_t k_io__widgetsaskuseractionhandler_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback int32_t func()
void k_io__widgetsaskuseractionhandler_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param signal const char*
int32_t k_io__widgetsaskuseractionhandler_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param signal const char*
int32_t k_io__widgetsaskuseractionhandler_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback int32_t func(KIO__WidgetsAskUserActionHandler* self, const char* signal)
void k_io__widgetsaskuseractionhandler_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param signal QMetaMethod*
bool k_io__widgetsaskuseractionhandler_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param signal QMetaMethod*
bool k_io__widgetsaskuseractionhandler_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback bool func(KIO__WidgetsAskUserActionHandler* self, QMetaMethod* signal)
void k_io__widgetsaskuseractionhandler_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__WidgetsAskUserActionHandler*
/// @param callback void func(KIO__WidgetsAskUserActionHandler* self, const char* objectName)
void k_io__widgetsaskuseractionhandler_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__WidgetsAskUserActionHandler*
void k_io__widgetsaskuseractionhandler_delete(void* self);

#endif
