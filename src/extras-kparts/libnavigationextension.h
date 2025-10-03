#pragma once
#ifndef SRC_EXTRAS_KPARTSQT6C_LIBNAVIGATIONEXTENSION_H
#define SRC_EXTRAS_KPARTSQT6C_LIBNAVIGATIONEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kparts-navigationextension.html

/// k_parts__navigationextension_new constructs a new KParts::NavigationExtension object.
///
/// @param parent KParts__ReadOnlyPart*
KParts__NavigationExtension* k_parts__navigationextension_new(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KParts__NavigationExtension*
const QMetaObject* k_parts__navigationextension_meta_object(void* self);

/// @param self KParts__NavigationExtension*
/// @param param1 const char*
void* k_parts__navigationextension_metacast(void* self, const char* param1);

/// @param self KParts__NavigationExtension*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_parts__navigationextension_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KParts__NavigationExtension*
/// @param callback int32_t func(KParts__NavigationExtension* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_parts__navigationextension_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KParts__NavigationExtension*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_parts__navigationextension_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_parts__navigationextension_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#xOffset)
///
/// @param self KParts__NavigationExtension*
int32_t k_parts__navigationextension_x_offset(void* self);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#xOffset)
///
/// Allows for overriding the related default method
///
/// @param self KParts__NavigationExtension*
/// @param callback int32_t func()
void k_parts__navigationextension_on_x_offset(void* self, int32_t (*callback)());

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#xOffset)
///
/// Base class method implementation
///
/// @param self KParts__NavigationExtension*
int32_t k_parts__navigationextension_qbase_x_offset(void* self);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#yOffset)
///
/// @param self KParts__NavigationExtension*
int32_t k_parts__navigationextension_y_offset(void* self);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#yOffset)
///
/// Allows for overriding the related default method
///
/// @param self KParts__NavigationExtension*
/// @param callback int32_t func()
void k_parts__navigationextension_on_y_offset(void* self, int32_t (*callback)());

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#yOffset)
///
/// Base class method implementation
///
/// @param self KParts__NavigationExtension*
int32_t k_parts__navigationextension_qbase_y_offset(void* self);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#saveState)
///
/// @param self KParts__NavigationExtension*
/// @param stream QDataStream*
void k_parts__navigationextension_save_state(void* self, void* stream);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#saveState)
///
/// Allows for overriding the related default method
///
/// @param self KParts__NavigationExtension*
/// @param callback void func(KParts__NavigationExtension* self, QDataStream* stream)
void k_parts__navigationextension_on_save_state(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#saveState)
///
/// Base class method implementation
///
/// @param self KParts__NavigationExtension*
/// @param stream QDataStream*
void k_parts__navigationextension_qbase_save_state(void* self, void* stream);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#restoreState)
///
/// @param self KParts__NavigationExtension*
/// @param stream QDataStream*
void k_parts__navigationextension_restore_state(void* self, void* stream);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#restoreState)
///
/// Allows for overriding the related default method
///
/// @param self KParts__NavigationExtension*
/// @param callback void func(KParts__NavigationExtension* self, QDataStream* stream)
void k_parts__navigationextension_on_restore_state(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#restoreState)
///
/// Base class method implementation
///
/// @param self KParts__NavigationExtension*
/// @param stream QDataStream*
void k_parts__navigationextension_qbase_restore_state(void* self, void* stream);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#isURLDropHandlingEnabled)
///
/// @param self KParts__NavigationExtension*
bool k_parts__navigationextension_is_u_r_l_drop_handling_enabled(void* self);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#setURLDropHandlingEnabled)
///
/// @param self KParts__NavigationExtension*
/// @param enable bool
void k_parts__navigationextension_set_u_r_l_drop_handling_enabled(void* self, bool enable);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#isActionEnabled)
///
/// @param self KParts__NavigationExtension*
/// @param name const char*
bool k_parts__navigationextension_is_action_enabled(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#actionText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KParts__NavigationExtension*
/// @param name const char*
const char* k_parts__navigationextension_action_text(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#childObject)
///
/// @param obj QObject*
KParts__NavigationExtension* k_parts__navigationextension_child_object(void* obj);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#pasteRequest)
///
/// @param self KParts__NavigationExtension*
void k_parts__navigationextension_paste_request(void* self);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#enableAction)
///
/// @param self KParts__NavigationExtension*
/// @param name const char*
/// @param enabled bool
void k_parts__navigationextension_enable_action(void* self, const char* name, bool enabled);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#setActionText)
///
/// @param self KParts__NavigationExtension*
/// @param name const char*
/// @param text const char*
void k_parts__navigationextension_set_action_text(void* self, const char* name, const char* text);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#openUrlRequest)
///
/// @param self KParts__NavigationExtension*
/// @param url QUrl*
void k_parts__navigationextension_open_url_request(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#openUrlRequestDelayed)
///
/// @param self KParts__NavigationExtension*
/// @param url QUrl*
/// @param arguments KParts__OpenUrlArguments*
void k_parts__navigationextension_open_url_request_delayed(void* self, void* url, void* arguments);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#openUrlNotify)
///
/// @param self KParts__NavigationExtension*
void k_parts__navigationextension_open_url_notify(void* self);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#setLocationBarUrl)
///
/// @param self KParts__NavigationExtension*
/// @param url const char*
void k_parts__navigationextension_set_location_bar_url(void* self, const char* url);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#setIconUrl)
///
/// @param self KParts__NavigationExtension*
/// @param url QUrl*
void k_parts__navigationextension_set_icon_url(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#createNewWindow)
///
/// @param self KParts__NavigationExtension*
/// @param url QUrl*
void k_parts__navigationextension_create_new_window(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#loadingProgress)
///
/// @param self KParts__NavigationExtension*
/// @param percent int
void k_parts__navigationextension_loading_progress(void* self, int percent);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#speedProgress)
///
/// @param self KParts__NavigationExtension*
/// @param bytesPerSecond int
void k_parts__navigationextension_speed_progress(void* self, int bytesPerSecond);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#infoMessage)
///
/// @param self KParts__NavigationExtension*
/// @param param1 const char*
void k_parts__navigationextension_info_message(void* self, const char* param1);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
///
/// @param self KParts__NavigationExtension*
/// @param global QPoint*
/// @param items KFileItemList*
void k_parts__navigationextension_popup_menu(void* self, void* global, void* items);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
///
/// @param self KParts__NavigationExtension*
/// @param global QPoint*
/// @param url QUrl*
void k_parts__navigationextension_popup_menu2(void* self, void* global, void* url);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#selectionInfo)
///
/// @param self KParts__NavigationExtension*
/// @param items KFileItemList*
void k_parts__navigationextension_selection_info(void* self, void* items);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#mouseOverInfo)
///
/// @param self KParts__NavigationExtension*
/// @param item KFileItem*
void k_parts__navigationextension_mouse_over_info(void* self, void* item);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#addWebSideBar)
///
/// @param self KParts__NavigationExtension*
/// @param url QUrl*
/// @param name const char*
void k_parts__navigationextension_add_web_side_bar(void* self, void* url, const char* name);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#moveTopLevelWidget)
///
/// @param self KParts__NavigationExtension*
/// @param x int
/// @param y int
void k_parts__navigationextension_move_top_level_widget(void* self, int x, int y);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#resizeTopLevelWidget)
///
/// @param self KParts__NavigationExtension*
/// @param w int
/// @param h int
void k_parts__navigationextension_resize_top_level_widget(void* self, int w, int h);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#requestFocus)
///
/// @param self KParts__NavigationExtension*
/// @param part KParts__ReadOnlyPart*
void k_parts__navigationextension_request_focus(void* self, void* part);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#setPageSecurity)
///
/// @param self KParts__NavigationExtension*
/// @param pageSecurity int
void k_parts__navigationextension_set_page_security(void* self, int pageSecurity);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#itemsRemoved)
///
/// @param self KParts__NavigationExtension*
/// @param items KFileItemList*
void k_parts__navigationextension_items_removed(void* self, void* items);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_parts__navigationextension_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_parts__navigationextension_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#openUrlRequest)
///
/// @param self KParts__NavigationExtension*
/// @param url QUrl*
/// @param arguments KParts__OpenUrlArguments*
void k_parts__navigationextension_open_url_request2(void* self, void* url, void* arguments);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
///
/// @param self KParts__NavigationExtension*
/// @param global QPoint*
/// @param items KFileItemList*
/// @param arguments KParts__OpenUrlArguments*
void k_parts__navigationextension_popup_menu3(void* self, void* global, void* items, void* arguments);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
///
/// @param self KParts__NavigationExtension*
/// @param global QPoint*
/// @param items KFileItemList*
/// @param arguments KParts__OpenUrlArguments*
/// @param flags flag of enum KParts__NavigationExtension__PopupFlag
void k_parts__navigationextension_popup_menu4(void* self, void* global, void* items, void* arguments, int32_t flags);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
///
/// @param self KParts__NavigationExtension*
/// @param global QPoint*
/// @param items KFileItemList*
/// @param arguments KParts__OpenUrlArguments*
/// @param flags flag of enum KParts__NavigationExtension__PopupFlag
/// @param actionGroups libqt_map /* of const char* to QAction* */
void k_parts__navigationextension_popup_menu5(void* self, void* global, void* items, void* arguments, int32_t flags, libqt_map /* of const char* to QAction* */ actionGroups);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
///
/// @param self KParts__NavigationExtension*
/// @param global QPoint*
/// @param url QUrl*
/// @param mode mode_t
void k_parts__navigationextension_popup_menu32(void* self, void* global, void* url, mode_t mode);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
///
/// @param self KParts__NavigationExtension*
/// @param global QPoint*
/// @param url QUrl*
/// @param mode mode_t
/// @param arguments KParts__OpenUrlArguments*
void k_parts__navigationextension_popup_menu42(void* self, void* global, void* url, mode_t mode, void* arguments);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
///
/// @param self KParts__NavigationExtension*
/// @param global QPoint*
/// @param url QUrl*
/// @param mode mode_t
/// @param arguments KParts__OpenUrlArguments*
/// @param flags flag of enum KParts__NavigationExtension__PopupFlag
void k_parts__navigationextension_popup_menu52(void* self, void* global, void* url, mode_t mode, void* arguments, int32_t flags);

/// [Qt documentation](https://api.kde.org/kparts-navigationextension.html#popupMenu)
///
/// @param self KParts__NavigationExtension*
/// @param global QPoint*
/// @param url QUrl*
/// @param mode mode_t
/// @param arguments KParts__OpenUrlArguments*
/// @param flags flag of enum KParts__NavigationExtension__PopupFlag
/// @param actionGroups libqt_map /* of const char* to QAction* */
void k_parts__navigationextension_popup_menu6(void* self, void* global, void* url, mode_t mode, void* arguments, int32_t flags, libqt_map /* of const char* to QAction* */ actionGroups);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KParts__NavigationExtension*
const char* k_parts__navigationextension_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KParts__NavigationExtension*
/// @param name char*
void k_parts__navigationextension_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KParts__NavigationExtension*
bool k_parts__navigationextension_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KParts__NavigationExtension*
bool k_parts__navigationextension_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KParts__NavigationExtension*
bool k_parts__navigationextension_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KParts__NavigationExtension*
bool k_parts__navigationextension_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KParts__NavigationExtension*
/// @param b bool
bool k_parts__navigationextension_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KParts__NavigationExtension*
QThread* k_parts__navigationextension_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__NavigationExtension*
/// @param thread QThread*
bool k_parts__navigationextension_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__NavigationExtension*
/// @param interval int
int32_t k_parts__navigationextension_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__NavigationExtension*
/// @param id int
void k_parts__navigationextension_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__NavigationExtension*
/// @param id enum Qt__TimerId
void k_parts__navigationextension_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KParts__NavigationExtension*
libqt_list /* of QObject* */ k_parts__navigationextension_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KParts__NavigationExtension*
/// @param parent QObject*
void k_parts__navigationextension_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KParts__NavigationExtension*
/// @param filterObj QObject*
void k_parts__navigationextension_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KParts__NavigationExtension*
/// @param obj QObject*
void k_parts__navigationextension_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_parts__navigationextension_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__NavigationExtension*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_parts__navigationextension_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_parts__navigationextension_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_parts__navigationextension_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KParts__NavigationExtension*
void k_parts__navigationextension_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KParts__NavigationExtension*
void k_parts__navigationextension_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KParts__NavigationExtension*
/// @param name const char*
/// @param value QVariant*
bool k_parts__navigationextension_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KParts__NavigationExtension*
/// @param name const char*
QVariant* k_parts__navigationextension_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KParts__NavigationExtension*
const char** k_parts__navigationextension_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__NavigationExtension*
QBindingStorage* k_parts__navigationextension_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__NavigationExtension*
const QBindingStorage* k_parts__navigationextension_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__NavigationExtension*
void k_parts__navigationextension_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__NavigationExtension*
/// @param callback void func(KParts__NavigationExtension* self)
void k_parts__navigationextension_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KParts__NavigationExtension*
QObject* k_parts__navigationextension_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KParts__NavigationExtension*
/// @param classname const char*
bool k_parts__navigationextension_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KParts__NavigationExtension*
void k_parts__navigationextension_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__NavigationExtension*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_parts__navigationextension_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__NavigationExtension*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_parts__navigationextension_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_parts__navigationextension_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__NavigationExtension*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_parts__navigationextension_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__NavigationExtension*
/// @param param1 QObject*
void k_parts__navigationextension_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__NavigationExtension*
/// @param callback void func(KParts__NavigationExtension* self, QObject* param1)
void k_parts__navigationextension_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param event QEvent*
bool k_parts__navigationextension_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param event QEvent*
bool k_parts__navigationextension_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param callback bool func(KParts__NavigationExtension* self, QEvent* event)
void k_parts__navigationextension_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param watched QObject*
/// @param event QEvent*
bool k_parts__navigationextension_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param watched QObject*
/// @param event QEvent*
bool k_parts__navigationextension_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param callback bool func(KParts__NavigationExtension* self, QObject* watched, QEvent* event)
void k_parts__navigationextension_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param event QTimerEvent*
void k_parts__navigationextension_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param event QTimerEvent*
void k_parts__navigationextension_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param callback void func(KParts__NavigationExtension* self, QTimerEvent* event)
void k_parts__navigationextension_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param event QChildEvent*
void k_parts__navigationextension_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param event QChildEvent*
void k_parts__navigationextension_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param callback void func(KParts__NavigationExtension* self, QChildEvent* event)
void k_parts__navigationextension_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param event QEvent*
void k_parts__navigationextension_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param event QEvent*
void k_parts__navigationextension_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param callback void func(KParts__NavigationExtension* self, QEvent* event)
void k_parts__navigationextension_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param signal QMetaMethod*
void k_parts__navigationextension_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param signal QMetaMethod*
void k_parts__navigationextension_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param callback void func(KParts__NavigationExtension* self, QMetaMethod* signal)
void k_parts__navigationextension_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param signal QMetaMethod*
void k_parts__navigationextension_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param signal QMetaMethod*
void k_parts__navigationextension_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param callback void func(KParts__NavigationExtension* self, QMetaMethod* signal)
void k_parts__navigationextension_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__NavigationExtension*
QObject* k_parts__navigationextension_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
QObject* k_parts__navigationextension_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param callback QObject* func()
void k_parts__navigationextension_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__NavigationExtension*
int32_t k_parts__navigationextension_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
int32_t k_parts__navigationextension_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param callback int32_t func()
void k_parts__navigationextension_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param signal const char*
int32_t k_parts__navigationextension_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param signal const char*
int32_t k_parts__navigationextension_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param callback int32_t func(KParts__NavigationExtension* self, const char* signal)
void k_parts__navigationextension_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param signal QMetaMethod*
bool k_parts__navigationextension_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param signal QMetaMethod*
bool k_parts__navigationextension_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__NavigationExtension*
/// @param callback bool func(KParts__NavigationExtension* self, QMetaMethod* signal)
void k_parts__navigationextension_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KParts__NavigationExtension*
/// @param callback void func(KParts__NavigationExtension* self, const char* objectName)
void k_parts__navigationextension_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KParts__NavigationExtension*
void k_parts__navigationextension_delete(void* self);

/// https://api.kde.org/kparts-navigationextension.html#types

typedef enum {
    KPARTS_NAVIGATIONEXTENSION_POPUPFLAG_DEFAULTPOPUPITEMS = 0,
    KPARTS_NAVIGATIONEXTENSION_POPUPFLAG_SHOWBOOKMARK = 8,
    KPARTS_NAVIGATIONEXTENSION_POPUPFLAG_SHOWCREATEDIRECTORY = 16,
    KPARTS_NAVIGATIONEXTENSION_POPUPFLAG_SHOWTEXTSELECTIONITEMS = 32,
    KPARTS_NAVIGATIONEXTENSION_POPUPFLAG_NODELETION = 64,
    KPARTS_NAVIGATIONEXTENSION_POPUPFLAG_ISLINK = 128,
    KPARTS_NAVIGATIONEXTENSION_POPUPFLAG_SHOWURLOPERATIONS = 256,
    KPARTS_NAVIGATIONEXTENSION_POPUPFLAG_SHOWPROPERTIES = 512
} KParts__NavigationExtension__PopupFlag;

#endif
