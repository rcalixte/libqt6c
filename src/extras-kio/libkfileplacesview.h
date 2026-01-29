#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKFILEPLACESVIEW_H
#define SRC_EXTRAS_KIO_QT6C_LIBKFILEPLACESVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfileplacesview.html)

/// k_fileplacesview_new constructs a new KFilePlacesView object.
///
/// @param parent QWidget*
///
KFilePlacesView* k_fileplacesview_new(void* parent);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html)

/// k_fileplacesview_new2 constructs a new KFilePlacesView object.
///
KFilePlacesView* k_fileplacesview_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KFilePlacesView*
///
const QMetaObject* k_fileplacesview_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback const QMetaObject* func()
///
void k_fileplacesview_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
///
const QMetaObject* k_fileplacesview_qbase_meta_object(void* self);

/// @param self KFilePlacesView*
/// @param param1 const char*
///
void* k_fileplacesview_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void* func(KFilePlacesView* self, const char* param1)
///
void k_fileplacesview_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param param1 const char*
///
void* k_fileplacesview_qbase_metacast(void* self, const char* param1);

/// @param self KFilePlacesView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_fileplacesview_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback int32_t func(KFilePlacesView* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_fileplacesview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_fileplacesview_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_fileplacesview_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#allPlacesShown)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_all_places_shown(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#setDropOnPlaceEnabled)
///
/// @param self KFilePlacesView*
/// @param enabled bool
///
void k_fileplacesview_set_drop_on_place_enabled(void* self, bool enabled);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#isDropOnPlaceEnabled)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_drop_on_place_enabled(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#setDragAutoActivationDelay)
///
/// @param self KFilePlacesView*
/// @param delay int
///
void k_fileplacesview_set_drag_auto_activation_delay(void* self, int delay);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dragAutoActivationDelay)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_drag_auto_activation_delay(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#setAutoResizeItemsEnabled)
///
/// @param self KFilePlacesView*
/// @param enabled bool
///
void k_fileplacesview_set_auto_resize_items_enabled(void* self, bool enabled);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#isAutoResizeItemsEnabled)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_auto_resize_items_enabled(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#sizeHint)
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_size_hint(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback QSize* func()
///
void k_fileplacesview_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#sizeHint)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_qbase_size_hint(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#setUrl)
///
/// @param self KFilePlacesView*
/// @param url QUrl*
///
void k_fileplacesview_set_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#setShowAll)
///
/// @param self KFilePlacesView*
/// @param showAll bool
///
void k_fileplacesview_set_show_all(void* self, bool showAll);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#setModel)
///
/// @param self KFilePlacesView*
/// @param model QAbstractItemModel*
///
void k_fileplacesview_set_model(void* self, void* model);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#setModel)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QAbstractItemModel* model)
///
void k_fileplacesview_on_set_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#setModel)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param model QAbstractItemModel*
///
void k_fileplacesview_qbase_set_model(void* self, void* model);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#keyPressEvent)
///
/// @param self KFilePlacesView*
/// @param event QKeyEvent*
///
void k_fileplacesview_key_press_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QKeyEvent* event)
///
void k_fileplacesview_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param event QKeyEvent*
///
void k_fileplacesview_qbase_key_press_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#contextMenuEvent)
///
/// @param self KFilePlacesView*
/// @param event QContextMenuEvent*
///
void k_fileplacesview_context_menu_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QContextMenuEvent* event)
///
void k_fileplacesview_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param event QContextMenuEvent*
///
void k_fileplacesview_qbase_context_menu_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#resizeEvent)
///
/// @param self KFilePlacesView*
/// @param event QResizeEvent*
///
void k_fileplacesview_resize_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QResizeEvent* event)
///
void k_fileplacesview_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param event QResizeEvent*
///
void k_fileplacesview_qbase_resize_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#showEvent)
///
/// @param self KFilePlacesView*
/// @param event QShowEvent*
///
void k_fileplacesview_show_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QShowEvent* event)
///
void k_fileplacesview_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#showEvent)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param event QShowEvent*
///
void k_fileplacesview_qbase_show_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#hideEvent)
///
/// @param self KFilePlacesView*
/// @param event QHideEvent*
///
void k_fileplacesview_hide_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QHideEvent* event)
///
void k_fileplacesview_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#hideEvent)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param event QHideEvent*
///
void k_fileplacesview_qbase_hide_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dragEnterEvent)
///
/// @param self KFilePlacesView*
/// @param event QDragEnterEvent*
///
void k_fileplacesview_drag_enter_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QDragEnterEvent* event)
///
void k_fileplacesview_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param event QDragEnterEvent*
///
void k_fileplacesview_qbase_drag_enter_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dragLeaveEvent)
///
/// @param self KFilePlacesView*
/// @param event QDragLeaveEvent*
///
void k_fileplacesview_drag_leave_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QDragLeaveEvent* event)
///
void k_fileplacesview_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param event QDragLeaveEvent*
///
void k_fileplacesview_qbase_drag_leave_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dragMoveEvent)
///
/// @param self KFilePlacesView*
/// @param event QDragMoveEvent*
///
void k_fileplacesview_drag_move_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QDragMoveEvent* event)
///
void k_fileplacesview_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param event QDragMoveEvent*
///
void k_fileplacesview_qbase_drag_move_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dropEvent)
///
/// @param self KFilePlacesView*
/// @param event QDropEvent*
///
void k_fileplacesview_drop_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QDropEvent* event)
///
void k_fileplacesview_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dropEvent)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param event QDropEvent*
///
void k_fileplacesview_qbase_drop_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#paintEvent)
///
/// @param self KFilePlacesView*
/// @param event QPaintEvent*
///
void k_fileplacesview_paint_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QPaintEvent* event)
///
void k_fileplacesview_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#paintEvent)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param event QPaintEvent*
///
void k_fileplacesview_qbase_paint_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#startDrag)
///
/// @param self KFilePlacesView*
/// @param supportedActions flag of enum Qt__DropAction
///
void k_fileplacesview_start_drag(void* self, int32_t supportedActions);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#startDrag)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, flag of enum Qt__DropAction supportedActions)
///
void k_fileplacesview_on_start_drag(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#startDrag)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param supportedActions flag of enum Qt__DropAction
///
void k_fileplacesview_qbase_start_drag(void* self, int32_t supportedActions);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#mousePressEvent)
///
/// @param self KFilePlacesView*
/// @param event QMouseEvent*
///
void k_fileplacesview_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QMouseEvent* event)
///
void k_fileplacesview_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param event QMouseEvent*
///
void k_fileplacesview_qbase_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#rowsInserted)
///
/// @param self KFilePlacesView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void k_fileplacesview_rows_inserted(void* self, void* parent, int start, int end);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#rowsInserted)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QModelIndex* parent, int start, int end)
///
void k_fileplacesview_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#rowsInserted)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void k_fileplacesview_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dataChanged)
///
/// @param self KFilePlacesView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_fileplacesview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dataChanged)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* )
///
void k_fileplacesview_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dataChanged)
///
/// Base class method implementation
///
/// @param self KFilePlacesView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_fileplacesview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#placeActivated)
///
/// @param self KFilePlacesView*
/// @param url QUrl*
///
void k_fileplacesview_place_activated(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#placeActivated)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QUrl* url)
///
void k_fileplacesview_on_place_activated(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#tabRequested)
///
/// @param self KFilePlacesView*
/// @param url QUrl*
///
void k_fileplacesview_tab_requested(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#tabRequested)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QUrl* url)
///
void k_fileplacesview_on_tab_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#activeTabRequested)
///
/// @param self KFilePlacesView*
/// @param url QUrl*
///
void k_fileplacesview_active_tab_requested(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#activeTabRequested)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QUrl* url)
///
void k_fileplacesview_on_active_tab_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#newWindowRequested)
///
/// @param self KFilePlacesView*
/// @param url QUrl*
///
void k_fileplacesview_new_window_requested(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#newWindowRequested)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QUrl* url)
///
void k_fileplacesview_on_new_window_requested(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#contextMenuAboutToShow)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
/// @param menu QMenu*
///
void k_fileplacesview_context_menu_about_to_show(void* self, void* index, void* menu);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#contextMenuAboutToShow)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QModelIndex* index, QMenu* menu)
///
void k_fileplacesview_on_context_menu_about_to_show(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#allPlacesShownChanged)
///
/// @param self KFilePlacesView*
/// @param allPlacesShown bool
///
void k_fileplacesview_all_places_shown_changed(void* self, bool allPlacesShown);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#allPlacesShownChanged)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, bool allPlacesShown)
///
void k_fileplacesview_on_all_places_shown_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#urlChanged)
///
/// @param self KFilePlacesView*
/// @param url QUrl*
///
void k_fileplacesview_url_changed(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#urlChanged)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QUrl* url)
///
void k_fileplacesview_on_url_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#urlsDropped)
///
/// @param self KFilePlacesView*
/// @param dest QUrl*
/// @param event QDropEvent*
/// @param parent QWidget*
///
void k_fileplacesview_urls_dropped(void* self, void* dest, void* event, void* parent);

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#urlsDropped)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QUrl* dest, QDropEvent* event, QWidget* parent)
///
void k_fileplacesview_on_urls_dropped(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_fileplacesview_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_fileplacesview_tr3(const char* s, const char* c, int n);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setMovement)
///
/// @param self KFilePlacesView*
/// @param movement enum QListView__Movement
///
void k_fileplacesview_set_movement(void* self, int32_t movement);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#movement)
///
/// @param self KFilePlacesView*
///
/// @return enum QListView__Movement
///
int32_t k_fileplacesview_movement(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setFlow)
///
/// @param self KFilePlacesView*
/// @param flow enum QListView__Flow
///
void k_fileplacesview_set_flow(void* self, int32_t flow);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#flow)
///
/// @param self KFilePlacesView*
///
/// @return enum QListView__Flow
///
int32_t k_fileplacesview_flow(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
///
/// @param self KFilePlacesView*
/// @param enable bool
///
void k_fileplacesview_set_wrapping(void* self, bool enable);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_wrapping(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
///
/// @param self KFilePlacesView*
/// @param mode enum QListView__ResizeMode
///
void k_fileplacesview_set_resize_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
///
/// @param self KFilePlacesView*
///
/// @return enum QListView__ResizeMode
///
int32_t k_fileplacesview_resize_mode(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
///
/// @param self KFilePlacesView*
/// @param mode enum QListView__LayoutMode
///
void k_fileplacesview_set_layout_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
///
/// @param self KFilePlacesView*
///
/// @return enum QListView__LayoutMode
///
int32_t k_fileplacesview_layout_mode(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
///
/// @param self KFilePlacesView*
/// @param space int
///
void k_fileplacesview_set_spacing(void* self, int space);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#spacing)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_spacing(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
///
/// @param self KFilePlacesView*
/// @param batchSize int
///
void k_fileplacesview_set_batch_size(void* self, int batchSize);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#batchSize)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_batch_size(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setGridSize)
///
/// @param self KFilePlacesView*
/// @param size QSize*
///
void k_fileplacesview_set_grid_size(void* self, void* size);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#gridSize)
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_grid_size(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
///
/// @param self KFilePlacesView*
/// @param mode enum QListView__ViewMode
///
void k_fileplacesview_set_view_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewMode)
///
/// @param self KFilePlacesView*
///
/// @return enum QListView__ViewMode
///
int32_t k_fileplacesview_view_mode(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_clear_property_flags(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
///
/// @param self KFilePlacesView*
/// @param row int
///
bool k_fileplacesview_is_row_hidden(void* self, int row);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
///
/// @param self KFilePlacesView*
/// @param row int
/// @param hide bool
///
void k_fileplacesview_set_row_hidden(void* self, int row, bool hide);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
///
/// @param self KFilePlacesView*
/// @param column int
///
void k_fileplacesview_set_model_column(void* self, int column);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_model_column(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
///
/// @param self KFilePlacesView*
/// @param enable bool
///
void k_fileplacesview_set_uniform_item_sizes(void* self, bool enable);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_uniform_item_sizes(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
///
/// @param self KFilePlacesView*
/// @param on bool
///
void k_fileplacesview_set_word_wrap(void* self, bool on);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_word_wrap(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
///
/// @param self KFilePlacesView*
/// @param show bool
///
void k_fileplacesview_set_selection_rect_visible(void* self, bool show);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_selection_rect_visible(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
///
/// @param self KFilePlacesView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void k_fileplacesview_set_item_alignment(void* self, int32_t alignment);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
///
/// @param self KFilePlacesView*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t k_fileplacesview_item_alignment(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// @param self KFilePlacesView*
/// @param indexes libqt_list of QModelIndex*
///
void k_fileplacesview_indexes_moved(void* self, libqt_list /* of QModelIndex* */ indexes);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QModelIndex** indexes)
///
void k_fileplacesview_on_indexes_moved(void* self, void (*callback)(void*, QModelIndex**));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// @param self KFilePlacesView*
///
QAbstractItemModel* k_fileplacesview_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// @param self KFilePlacesView*
///
QItemSelectionModel* k_fileplacesview_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// @param self KFilePlacesView*
/// @param delegate QAbstractItemDelegate*
///
void k_fileplacesview_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self KFilePlacesView*
///
QAbstractItemDelegate* k_fileplacesview_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// @param self KFilePlacesView*
/// @param mode enum QAbstractItemView__SelectionMode
///
void k_fileplacesview_set_selection_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// @param self KFilePlacesView*
///
/// @return enum QAbstractItemView__SelectionMode
///
int32_t k_fileplacesview_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// @param self KFilePlacesView*
/// @param behavior enum QAbstractItemView__SelectionBehavior
///
void k_fileplacesview_set_selection_behavior(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// @param self KFilePlacesView*
///
/// @return enum QAbstractItemView__SelectionBehavior
///
int32_t k_fileplacesview_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// @param self KFilePlacesView*
///
QModelIndex* k_fileplacesview_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// @param self KFilePlacesView*
///
QModelIndex* k_fileplacesview_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// @param self KFilePlacesView*
/// @param triggers flag of enum QAbstractItemView__EditTrigger
///
void k_fileplacesview_set_edit_triggers(void* self, int32_t triggers);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// @param self KFilePlacesView*
///
/// @return flag of enum QAbstractItemView__EditTrigger
///
int32_t k_fileplacesview_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// @param self KFilePlacesView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void k_fileplacesview_set_vertical_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// @param self KFilePlacesView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t k_fileplacesview_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// @param self KFilePlacesView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void k_fileplacesview_set_horizontal_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// @param self KFilePlacesView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t k_fileplacesview_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// @param self KFilePlacesView*
/// @param enable bool
///
void k_fileplacesview_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// @param self KFilePlacesView*
/// @param margin int
///
void k_fileplacesview_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// @param self KFilePlacesView*
/// @param enable bool
///
void k_fileplacesview_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// @param self KFilePlacesView*
/// @param enable bool
///
void k_fileplacesview_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// @param self KFilePlacesView*
/// @param enable bool
///
void k_fileplacesview_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// @param self KFilePlacesView*
/// @param overwrite bool
///
void k_fileplacesview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// @param self KFilePlacesView*
/// @param behavior enum QAbstractItemView__DragDropMode
///
void k_fileplacesview_set_drag_drop_mode(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// @param self KFilePlacesView*
///
/// @return enum QAbstractItemView__DragDropMode
///
int32_t k_fileplacesview_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// @param self KFilePlacesView*
/// @param dropAction enum Qt__DropAction
///
void k_fileplacesview_set_default_drop_action(void* self, int32_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// @param self KFilePlacesView*
///
/// @return enum Qt__DropAction
///
int32_t k_fileplacesview_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// @param self KFilePlacesView*
/// @param enable bool
///
void k_fileplacesview_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// @param self KFilePlacesView*
/// @param size QSize*
///
void k_fileplacesview_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// @param self KFilePlacesView*
/// @param mode enum Qt__TextElideMode
///
void k_fileplacesview_set_text_elide_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// @param self KFilePlacesView*
///
/// @return enum Qt__TextElideMode
///
int32_t k_fileplacesview_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
QSize* k_fileplacesview_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
void k_fileplacesview_open_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
void k_fileplacesview_close_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
bool k_fileplacesview_is_persistent_editor_open(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
/// @param widget QWidget*
///
void k_fileplacesview_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
QWidget* k_fileplacesview_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// @param self KFilePlacesView*
/// @param row int
/// @param delegate QAbstractItemDelegate*
///
void k_fileplacesview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// @param self KFilePlacesView*
/// @param row int
///
QAbstractItemDelegate* k_fileplacesview_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// @param self KFilePlacesView*
/// @param column int
/// @param delegate QAbstractItemDelegate*
///
void k_fileplacesview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// @param self KFilePlacesView*
/// @param column int
///
QAbstractItemDelegate* k_fileplacesview_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* k_fileplacesview_item_delegate2(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
void k_fileplacesview_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
void k_fileplacesview_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
void k_fileplacesview_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
void k_fileplacesview_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QModelIndex* index)
///
void k_fileplacesview_on_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
void k_fileplacesview_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QModelIndex* index)
///
void k_fileplacesview_on_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
void k_fileplacesview_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QModelIndex* index)
///
void k_fileplacesview_on_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
void k_fileplacesview_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QModelIndex* index)
///
void k_fileplacesview_on_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
void k_fileplacesview_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QModelIndex* index)
///
void k_fileplacesview_on_entered(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self)
///
void k_fileplacesview_on_viewport_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self KFilePlacesView*
/// @param size QSize*
///
void k_fileplacesview_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QSize* size)
///
void k_fileplacesview_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self KFilePlacesView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_fileplacesview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self KFilePlacesView*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_fileplacesview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self KFilePlacesView*
///
QScrollBar* k_fileplacesview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self KFilePlacesView*
/// @param scrollbar QScrollBar*
///
void k_fileplacesview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self KFilePlacesView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_fileplacesview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self KFilePlacesView*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_fileplacesview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self KFilePlacesView*
///
QScrollBar* k_fileplacesview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self KFilePlacesView*
/// @param scrollbar QScrollBar*
///
void k_fileplacesview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self KFilePlacesView*
///
QWidget* k_fileplacesview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self KFilePlacesView*
/// @param widget QWidget*
///
void k_fileplacesview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self KFilePlacesView*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void k_fileplacesview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self KFilePlacesView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list k_fileplacesview_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self KFilePlacesView*
///
QWidget* k_fileplacesview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self KFilePlacesView*
/// @param widget QWidget*
///
void k_fileplacesview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self KFilePlacesView*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t k_fileplacesview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self KFilePlacesView*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void k_fileplacesview_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self KFilePlacesView*
/// @param frameStyle int
///
void k_fileplacesview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self KFilePlacesView*
///
/// @return enum QFrame__Shape
///
int32_t k_fileplacesview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self KFilePlacesView*
/// @param frameShape enum QFrame__Shape
///
void k_fileplacesview_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self KFilePlacesView*
///
/// @return enum QFrame__Shadow
///
int32_t k_fileplacesview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self KFilePlacesView*
/// @param frameShadow enum QFrame__Shadow
///
void k_fileplacesview_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self KFilePlacesView*
/// @param lineWidth int
///
void k_fileplacesview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self KFilePlacesView*
/// @param midLineWidth int
///
void k_fileplacesview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self KFilePlacesView*
///
QRect* k_fileplacesview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self KFilePlacesView*
/// @param frameRect QRect*
///
void k_fileplacesview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KFilePlacesView*
///
uintptr_t k_fileplacesview_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KFilePlacesView*
///
uintptr_t k_fileplacesview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KFilePlacesView*
///
uintptr_t k_fileplacesview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KFilePlacesView*
///
QStyle* k_fileplacesview_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KFilePlacesView*
/// @param style QStyle*
///
void k_fileplacesview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KFilePlacesView*
///
/// @return enum Qt__WindowModality
///
int32_t k_fileplacesview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KFilePlacesView*
/// @param windowModality enum Qt__WindowModality
///
void k_fileplacesview_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KFilePlacesView*
/// @param param1 QWidget*
///
bool k_fileplacesview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KFilePlacesView*
/// @param enabled bool
///
void k_fileplacesview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KFilePlacesView*
/// @param disabled bool
///
void k_fileplacesview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KFilePlacesView*
/// @param windowModified bool
///
void k_fileplacesview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KFilePlacesView*
///
QRect* k_fileplacesview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KFilePlacesView*
///
const QRect* k_fileplacesview_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KFilePlacesView*
///
QRect* k_fileplacesview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KFilePlacesView*
///
QPoint* k_fileplacesview_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KFilePlacesView*
///
QRect* k_fileplacesview_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KFilePlacesView*
///
QRect* k_fileplacesview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KFilePlacesView*
///
QRegion* k_fileplacesview_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KFilePlacesView*
/// @param minimumSize QSize*
///
void k_fileplacesview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KFilePlacesView*
/// @param minw int
/// @param minh int
///
void k_fileplacesview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KFilePlacesView*
/// @param maximumSize QSize*
///
void k_fileplacesview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KFilePlacesView*
/// @param maxw int
/// @param maxh int
///
void k_fileplacesview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KFilePlacesView*
/// @param minw int
///
void k_fileplacesview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KFilePlacesView*
/// @param minh int
///
void k_fileplacesview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KFilePlacesView*
/// @param maxw int
///
void k_fileplacesview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KFilePlacesView*
/// @param maxh int
///
void k_fileplacesview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KFilePlacesView*
/// @param sizeIncrement QSize*
///
void k_fileplacesview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KFilePlacesView*
/// @param w int
/// @param h int
///
void k_fileplacesview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KFilePlacesView*
/// @param baseSize QSize*
///
void k_fileplacesview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KFilePlacesView*
/// @param basew int
/// @param baseh int
///
void k_fileplacesview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KFilePlacesView*
/// @param fixedSize QSize*
///
void k_fileplacesview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KFilePlacesView*
/// @param w int
/// @param h int
///
void k_fileplacesview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KFilePlacesView*
/// @param w int
///
void k_fileplacesview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KFilePlacesView*
/// @param h int
///
void k_fileplacesview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KFilePlacesView*
/// @param param1 QPointF*
///
QPointF* k_fileplacesview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KFilePlacesView*
/// @param param1 QPoint*
///
QPoint* k_fileplacesview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KFilePlacesView*
/// @param param1 QPointF*
///
QPointF* k_fileplacesview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KFilePlacesView*
/// @param param1 QPoint*
///
QPoint* k_fileplacesview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KFilePlacesView*
/// @param param1 QPointF*
///
QPointF* k_fileplacesview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KFilePlacesView*
/// @param param1 QPoint*
///
QPoint* k_fileplacesview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KFilePlacesView*
/// @param param1 QPointF*
///
QPointF* k_fileplacesview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KFilePlacesView*
/// @param param1 QPoint*
///
QPoint* k_fileplacesview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KFilePlacesView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_fileplacesview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KFilePlacesView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_fileplacesview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KFilePlacesView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_fileplacesview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KFilePlacesView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_fileplacesview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KFilePlacesView*
///
QWidget* k_fileplacesview_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KFilePlacesView*
///
QWidget* k_fileplacesview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KFilePlacesView*
///
QWidget* k_fileplacesview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KFilePlacesView*
///
const QPalette* k_fileplacesview_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KFilePlacesView*
/// @param palette QPalette*
///
void k_fileplacesview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KFilePlacesView*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_fileplacesview_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KFilePlacesView*
///
/// @return enum QPalette__ColorRole
///
int32_t k_fileplacesview_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KFilePlacesView*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_fileplacesview_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KFilePlacesView*
///
/// @return enum QPalette__ColorRole
///
int32_t k_fileplacesview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KFilePlacesView*
///
const QFont* k_fileplacesview_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KFilePlacesView*
/// @param font QFont*
///
void k_fileplacesview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KFilePlacesView*
///
QFontMetrics* k_fileplacesview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KFilePlacesView*
///
QFontInfo* k_fileplacesview_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KFilePlacesView*
///
QCursor* k_fileplacesview_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KFilePlacesView*
/// @param cursor QCursor*
///
void k_fileplacesview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KFilePlacesView*
/// @param enable bool
///
void k_fileplacesview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KFilePlacesView*
/// @param enable bool
///
void k_fileplacesview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KFilePlacesView*
/// @param mask QBitmap*
///
void k_fileplacesview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KFilePlacesView*
/// @param mask QRegion*
///
void k_fileplacesview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KFilePlacesView*
///
QRegion* k_fileplacesview_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlacesView*
/// @param target QPaintDevice*
///
void k_fileplacesview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlacesView*
/// @param painter QPainter*
///
void k_fileplacesview_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KFilePlacesView*
///
QPixmap* k_fileplacesview_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KFilePlacesView*
///
QGraphicsEffect* k_fileplacesview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KFilePlacesView*
/// @param effect QGraphicsEffect*
///
void k_fileplacesview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KFilePlacesView*
/// @param type enum Qt__GestureType
///
void k_fileplacesview_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KFilePlacesView*
/// @param type enum Qt__GestureType
///
void k_fileplacesview_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KFilePlacesView*
/// @param windowTitle const char*
///
void k_fileplacesview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KFilePlacesView*
/// @param styleSheet const char*
///
void k_fileplacesview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFilePlacesView*
///
const char* k_fileplacesview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFilePlacesView*
///
const char* k_fileplacesview_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KFilePlacesView*
/// @param icon QIcon*
///
void k_fileplacesview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KFilePlacesView*
///
QIcon* k_fileplacesview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KFilePlacesView*
/// @param windowIconText const char*
///
void k_fileplacesview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFilePlacesView*
///
const char* k_fileplacesview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KFilePlacesView*
/// @param windowRole const char*
///
void k_fileplacesview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFilePlacesView*
///
const char* k_fileplacesview_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KFilePlacesView*
/// @param filePath const char*
///
void k_fileplacesview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFilePlacesView*
///
const char* k_fileplacesview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KFilePlacesView*
/// @param level double
///
void k_fileplacesview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KFilePlacesView*
///
double k_fileplacesview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KFilePlacesView*
/// @param toolTip const char*
///
void k_fileplacesview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFilePlacesView*
///
const char* k_fileplacesview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KFilePlacesView*
/// @param msec int
///
void k_fileplacesview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KFilePlacesView*
/// @param statusTip const char*
///
void k_fileplacesview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFilePlacesView*
///
const char* k_fileplacesview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KFilePlacesView*
/// @param whatsThis const char*
///
void k_fileplacesview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFilePlacesView*
///
const char* k_fileplacesview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFilePlacesView*
///
const char* k_fileplacesview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KFilePlacesView*
/// @param name const char*
///
void k_fileplacesview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFilePlacesView*
///
const char* k_fileplacesview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KFilePlacesView*
/// @param description const char*
///
void k_fileplacesview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KFilePlacesView*
/// @param direction enum Qt__LayoutDirection
///
void k_fileplacesview_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KFilePlacesView*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_fileplacesview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KFilePlacesView*
/// @param locale QLocale*
///
void k_fileplacesview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KFilePlacesView*
///
QLocale* k_fileplacesview_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KFilePlacesView*
/// @param reason enum Qt__FocusReason
///
void k_fileplacesview_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KFilePlacesView*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_fileplacesview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KFilePlacesView*
/// @param policy enum Qt__FocusPolicy
///
void k_fileplacesview_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_fileplacesview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KFilePlacesView*
/// @param focusProxy QWidget*
///
void k_fileplacesview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KFilePlacesView*
///
QWidget* k_fileplacesview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KFilePlacesView*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_fileplacesview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KFilePlacesView*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_fileplacesview_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KFilePlacesView*
/// @param param1 QCursor*
///
void k_fileplacesview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KFilePlacesView*
/// @param key QKeySequence*
///
int32_t k_fileplacesview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KFilePlacesView*
/// @param id int
///
void k_fileplacesview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KFilePlacesView*
/// @param id int
///
void k_fileplacesview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KFilePlacesView*
/// @param id int
///
void k_fileplacesview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_fileplacesview_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_fileplacesview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KFilePlacesView*
/// @param enable bool
///
void k_fileplacesview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KFilePlacesView*
///
QGraphicsProxyWidget* k_fileplacesview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFilePlacesView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_fileplacesview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFilePlacesView*
/// @param param1 QRect*
///
void k_fileplacesview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFilePlacesView*
/// @param param1 QRegion*
///
void k_fileplacesview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFilePlacesView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_fileplacesview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFilePlacesView*
/// @param param1 QRect*
///
void k_fileplacesview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFilePlacesView*
/// @param param1 QRegion*
///
void k_fileplacesview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KFilePlacesView*
/// @param hidden bool
///
void k_fileplacesview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KFilePlacesView*
/// @param param1 QWidget*
///
void k_fileplacesview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KFilePlacesView*
/// @param x int
/// @param y int
///
void k_fileplacesview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KFilePlacesView*
/// @param param1 QPoint*
///
void k_fileplacesview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KFilePlacesView*
/// @param w int
/// @param h int
///
void k_fileplacesview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KFilePlacesView*
/// @param param1 QSize*
///
void k_fileplacesview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KFilePlacesView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_fileplacesview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KFilePlacesView*
/// @param geometry QRect*
///
void k_fileplacesview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KFilePlacesView*
///
char* k_fileplacesview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KFilePlacesView*
/// @param geometry const char*
///
bool k_fileplacesview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KFilePlacesView*
/// @param param1 QWidget*
///
bool k_fileplacesview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KFilePlacesView*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_fileplacesview_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KFilePlacesView*
/// @param state flag of enum Qt__WindowState
///
void k_fileplacesview_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KFilePlacesView*
/// @param state flag of enum Qt__WindowState
///
void k_fileplacesview_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KFilePlacesView*
///
QSizePolicy* k_fileplacesview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KFilePlacesView*
/// @param sizePolicy QSizePolicy*
///
void k_fileplacesview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KFilePlacesView*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_fileplacesview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KFilePlacesView*
///
QRegion* k_fileplacesview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KFilePlacesView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_fileplacesview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KFilePlacesView*
/// @param margins QMargins*
///
void k_fileplacesview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KFilePlacesView*
///
QMargins* k_fileplacesview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KFilePlacesView*
///
QRect* k_fileplacesview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KFilePlacesView*
///
QLayout* k_fileplacesview_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KFilePlacesView*
/// @param layout QLayout*
///
void k_fileplacesview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KFilePlacesView*
/// @param parent QWidget*
///
void k_fileplacesview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KFilePlacesView*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_fileplacesview_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KFilePlacesView*
/// @param dx int
/// @param dy int
///
void k_fileplacesview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KFilePlacesView*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_fileplacesview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KFilePlacesView*
///
QWidget* k_fileplacesview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KFilePlacesView*
///
QWidget* k_fileplacesview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KFilePlacesView*
///
QWidget* k_fileplacesview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KFilePlacesView*
/// @param on bool
///
void k_fileplacesview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFilePlacesView*
/// @param action QAction*
///
void k_fileplacesview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KFilePlacesView*
/// @param actions libqt_list of QAction*
///
void k_fileplacesview_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KFilePlacesView*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_fileplacesview_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KFilePlacesView*
/// @param before QAction*
/// @param action QAction*
///
void k_fileplacesview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KFilePlacesView*
/// @param action QAction*
///
void k_fileplacesview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KFilePlacesView*
///
/// @return libqt_list of QAction*
///
libqt_list k_fileplacesview_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFilePlacesView*
/// @param text const char*
///
QAction* k_fileplacesview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFilePlacesView*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_fileplacesview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFilePlacesView*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_fileplacesview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFilePlacesView*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_fileplacesview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KFilePlacesView*
///
QWidget* k_fileplacesview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KFilePlacesView*
/// @param type flag of enum Qt__WindowType
///
void k_fileplacesview_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KFilePlacesView*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_fileplacesview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KFilePlacesView*
/// @param param1 enum Qt__WindowType
///
void k_fileplacesview_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KFilePlacesView*
/// @param type flag of enum Qt__WindowType
///
void k_fileplacesview_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KFilePlacesView*
///
/// @return enum Qt__WindowType
///
int32_t k_fileplacesview_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_fileplacesview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KFilePlacesView*
/// @param x int
/// @param y int
///
QWidget* k_fileplacesview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KFilePlacesView*
/// @param p QPoint*
///
QWidget* k_fileplacesview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KFilePlacesView*
/// @param p QPointF*
///
QWidget* k_fileplacesview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KFilePlacesView*
/// @param param1 enum Qt__WidgetAttribute
///
void k_fileplacesview_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KFilePlacesView*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_fileplacesview_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KFilePlacesView*
/// @param child QWidget*
///
bool k_fileplacesview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KFilePlacesView*
/// @param enabled bool
///
void k_fileplacesview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KFilePlacesView*
///
QBackingStore* k_fileplacesview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KFilePlacesView*
///
QWindow* k_fileplacesview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KFilePlacesView*
///
QScreen* k_fileplacesview_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KFilePlacesView*
/// @param screen QScreen*
///
void k_fileplacesview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_fileplacesview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KFilePlacesView*
/// @param title const char*
///
void k_fileplacesview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, const char* title)
///
void k_fileplacesview_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KFilePlacesView*
/// @param icon QIcon*
///
void k_fileplacesview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QIcon* icon)
///
void k_fileplacesview_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KFilePlacesView*
/// @param iconText const char*
///
void k_fileplacesview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, const char* iconText)
///
void k_fileplacesview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KFilePlacesView*
/// @param pos QPoint*
///
void k_fileplacesview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QPoint* pos)
///
void k_fileplacesview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KFilePlacesView*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_fileplacesview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KFilePlacesView*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_fileplacesview_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlacesView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_fileplacesview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlacesView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_fileplacesview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlacesView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_fileplacesview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlacesView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_fileplacesview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlacesView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_fileplacesview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFilePlacesView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_fileplacesview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KFilePlacesView*
/// @param rectangle QRect*
///
QPixmap* k_fileplacesview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KFilePlacesView*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_fileplacesview_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KFilePlacesView*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_fileplacesview_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KFilePlacesView*
/// @param id int
/// @param enable bool
///
void k_fileplacesview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KFilePlacesView*
/// @param id int
/// @param enable bool
///
void k_fileplacesview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KFilePlacesView*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_fileplacesview_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KFilePlacesView*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_fileplacesview_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_fileplacesview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_fileplacesview_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFilePlacesView*
///
const char* k_fileplacesview_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KFilePlacesView*
/// @param name char*
///
void k_fileplacesview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KFilePlacesView*
/// @param b bool
///
bool k_fileplacesview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KFilePlacesView*
///
QThread* k_fileplacesview_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFilePlacesView*
/// @param thread QThread*
///
bool k_fileplacesview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePlacesView*
/// @param interval int
///
int32_t k_fileplacesview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePlacesView*
/// @param time int64_t of nanoseconds
///
int32_t k_fileplacesview_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFilePlacesView*
/// @param id int
///
void k_fileplacesview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFilePlacesView*
/// @param id enum Qt__TimerId
///
void k_fileplacesview_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KFilePlacesView*
///
/// @return libqt_list of QObject*
///
libqt_list k_fileplacesview_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KFilePlacesView*
/// @param filterObj QObject*
///
void k_fileplacesview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KFilePlacesView*
/// @param obj QObject*
///
void k_fileplacesview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_fileplacesview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFilePlacesView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_fileplacesview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_fileplacesview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_fileplacesview_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KFilePlacesView*
/// @param name const char*
/// @param value QVariant*
///
bool k_fileplacesview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KFilePlacesView*
/// @param name const char*
///
QVariant* k_fileplacesview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KFilePlacesView*
///
const char** k_fileplacesview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFilePlacesView*
///
QBindingStorage* k_fileplacesview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFilePlacesView*
///
const QBindingStorage* k_fileplacesview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self)
///
void k_fileplacesview_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KFilePlacesView*
///
QObject* k_fileplacesview_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KFilePlacesView*
/// @param classname const char*
///
bool k_fileplacesview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePlacesView*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_fileplacesview_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePlacesView*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_fileplacesview_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_fileplacesview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFilePlacesView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_fileplacesview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePlacesView*
/// @param param1 QObject*
///
void k_fileplacesview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QObject* param1)
///
void k_fileplacesview_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KFilePlacesView*
///
double k_fileplacesview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KFilePlacesView*
///
double k_fileplacesview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_fileplacesview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_fileplacesview_encode_metric_f(int32_t metric, double value);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
QRect* k_fileplacesview_visual_rect(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
QRect* k_fileplacesview_qbase_visual_rect(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QRect* func(KFilePlacesView* self, QModelIndex* index)
///
void k_fileplacesview_on_visual_rect(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void k_fileplacesview_scroll_to(void* self, void* index, int32_t hint);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void k_fileplacesview_qbase_scroll_to(void* self, void* index, int32_t hint);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint)
///
void k_fileplacesview_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param p QPoint*
///
QModelIndex* k_fileplacesview_index_at(void* self, void* p);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param p QPoint*
///
QModelIndex* k_fileplacesview_qbase_index_at(void* self, void* p);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QModelIndex* func(KFilePlacesView* self, QPoint* p)
///
void k_fileplacesview_on_index_at(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_do_items_layout(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_do_items_layout(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_do_items_layout(void* self, void (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_reset(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_reset(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_reset(void* self, void (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
void k_fileplacesview_set_root_index(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
void k_fileplacesview_qbase_set_root_index(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QModelIndex* index)
///
void k_fileplacesview_on_set_root_index(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param e QEvent*
///
bool k_fileplacesview_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param e QEvent*
///
bool k_fileplacesview_qbase_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback bool func(KFilePlacesView* self, QEvent* e)
///
void k_fileplacesview_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param dx int
/// @param dy int
///
void k_fileplacesview_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param dx int
/// @param dy int
///
void k_fileplacesview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, int dx, int dy)
///
void k_fileplacesview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void k_fileplacesview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void k_fileplacesview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QModelIndex* parent, int start, int end)
///
void k_fileplacesview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param e QMouseEvent*
///
void k_fileplacesview_mouse_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param e QMouseEvent*
///
void k_fileplacesview_qbase_mouse_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QMouseEvent* e)
///
void k_fileplacesview_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param e QMouseEvent*
///
void k_fileplacesview_mouse_release_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param e QMouseEvent*
///
void k_fileplacesview_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QMouseEvent* e)
///
void k_fileplacesview_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param e QWheelEvent*
///
void k_fileplacesview_wheel_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param e QWheelEvent*
///
void k_fileplacesview_qbase_wheel_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QWheelEvent* e)
///
void k_fileplacesview_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param e QTimerEvent*
///
void k_fileplacesview_timer_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param e QTimerEvent*
///
void k_fileplacesview_qbase_timer_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QTimerEvent* e)
///
void k_fileplacesview_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param option QStyleOptionViewItem*
///
void k_fileplacesview_init_view_item_option(void* self, void* option);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param option QStyleOptionViewItem*
///
void k_fileplacesview_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QStyleOptionViewItem* option)
///
void k_fileplacesview_on_init_view_item_option(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_horizontal_offset(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_qbase_horizontal_offset(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback int32_t func()
///
void k_fileplacesview_on_horizontal_offset(void* self, int32_t (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_vertical_offset(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_qbase_vertical_offset(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback int32_t func()
///
void k_fileplacesview_on_vertical_offset(void* self, int32_t (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QModelIndex* k_fileplacesview_move_cursor(void* self, int32_t cursorAction, int32_t modifiers);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QModelIndex* k_fileplacesview_qbase_move_cursor(void* self, int32_t cursorAction, int32_t modifiers);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QModelIndex* func(KFilePlacesView* self, enum QAbstractItemView__CursorAction cursorAction, flag of enum Qt__KeyboardModifier modifiers)
///
void k_fileplacesview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int32_t));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_fileplacesview_set_selection(void* self, void* rect, int32_t command);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_fileplacesview_qbase_set_selection(void* self, void* rect, int32_t command);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QRect* rect, flag of enum QItemSelectionModel__SelectionFlag command)
///
void k_fileplacesview_on_set_selection(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param selection QItemSelection*
///
QRegion* k_fileplacesview_visual_region_for_selection(void* self, void* selection);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param selection QItemSelection*
///
QRegion* k_fileplacesview_qbase_visual_region_for_selection(void* self, void* selection);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QRegion* func(KFilePlacesView* self, QItemSelection* selection)
///
void k_fileplacesview_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_fileplacesview_selected_indexes(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_fileplacesview_qbase_selected_indexes(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QModelIndex** func()
///
void k_fileplacesview_on_selected_indexes(void* self, QModelIndex** (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_update_geometries(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_update_geometries(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_update_geometries(void* self, void (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
bool k_fileplacesview_is_index_hidden(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
bool k_fileplacesview_qbase_is_index_hidden(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback bool func(KFilePlacesView* self, QModelIndex* index)
///
void k_fileplacesview_on_is_index_hidden(void* self, bool (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void k_fileplacesview_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void k_fileplacesview_qbase_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QItemSelection* selected, QItemSelection* deselected)
///
void k_fileplacesview_on_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void k_fileplacesview_current_changed(void* self, void* current, void* previous);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void k_fileplacesview_qbase_current_changed(void* self, void* current, void* previous);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QModelIndex* current, QModelIndex* previous)
///
void k_fileplacesview_on_current_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_viewport_size_hint(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_qbase_viewport_size_hint(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QSize* func()
///
void k_fileplacesview_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param selectionModel QItemSelectionModel*
///
void k_fileplacesview_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param selectionModel QItemSelectionModel*
///
void k_fileplacesview_qbase_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QItemSelectionModel* selectionModel)
///
void k_fileplacesview_on_set_selection_model(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param search const char*
///
void k_fileplacesview_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param search const char*
///
void k_fileplacesview_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, const char* search)
///
void k_fileplacesview_on_keyboard_search(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param row int
///
int32_t k_fileplacesview_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param row int
///
int32_t k_fileplacesview_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback int32_t func(KFilePlacesView* self, int row)
///
void k_fileplacesview_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param column int
///
int32_t k_fileplacesview_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param column int
///
int32_t k_fileplacesview_qbase_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback int32_t func(KFilePlacesView* self, int column)
///
void k_fileplacesview_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* k_fileplacesview_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* k_fileplacesview_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QAbstractItemDelegate* func(KFilePlacesView* self, QModelIndex* index)
///
void k_fileplacesview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* k_fileplacesview_input_method_query(void* self, int32_t query);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* k_fileplacesview_qbase_input_method_query(void* self, int32_t query);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QVariant* func(KFilePlacesView* self, enum Qt__InputMethodQuery query)
///
void k_fileplacesview_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_select_all(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_update_editor_data(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_update_editor_geometries(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param action int
///
void k_fileplacesview_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param action int
///
void k_fileplacesview_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, int action)
///
void k_fileplacesview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param action int
///
void k_fileplacesview_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param action int
///
void k_fileplacesview_qbase_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, int action)
///
void k_fileplacesview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param value int
///
void k_fileplacesview_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param value int
///
void k_fileplacesview_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, int value)
///
void k_fileplacesview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param value int
///
void k_fileplacesview_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param value int
///
void k_fileplacesview_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, int value)
///
void k_fileplacesview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void k_fileplacesview_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void k_fileplacesview_qbase_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
///
void k_fileplacesview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param editor QWidget*
///
void k_fileplacesview_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param editor QWidget*
///
void k_fileplacesview_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QWidget* editor)
///
void k_fileplacesview_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param editor QObject*
///
void k_fileplacesview_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param editor QObject*
///
void k_fileplacesview_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QObject* editor)
///
void k_fileplacesview_on_editor_destroyed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool k_fileplacesview_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool k_fileplacesview_qbase_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback bool func(KFilePlacesView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event)
///
void k_fileplacesview_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t k_fileplacesview_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t k_fileplacesview_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback int32_t func(KFilePlacesView* self, QModelIndex* index, QEvent* event)
///
void k_fileplacesview_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param next bool
///
bool k_fileplacesview_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param next bool
///
bool k_fileplacesview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback bool func(KFilePlacesView* self, bool next)
///
void k_fileplacesview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QEvent*
///
bool k_fileplacesview_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QEvent*
///
bool k_fileplacesview_qbase_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback bool func(KFilePlacesView* self, QEvent* event)
///
void k_fileplacesview_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QMouseEvent*
///
void k_fileplacesview_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QMouseEvent*
///
void k_fileplacesview_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QMouseEvent* event)
///
void k_fileplacesview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QFocusEvent*
///
void k_fileplacesview_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QFocusEvent*
///
void k_fileplacesview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QFocusEvent* event)
///
void k_fileplacesview_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QFocusEvent*
///
void k_fileplacesview_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QFocusEvent*
///
void k_fileplacesview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QFocusEvent* event)
///
void k_fileplacesview_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QInputMethodEvent*
///
void k_fileplacesview_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QInputMethodEvent*
///
void k_fileplacesview_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QInputMethodEvent* event)
///
void k_fileplacesview_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param object QObject*
/// @param event QEvent*
///
bool k_fileplacesview_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param object QObject*
/// @param event QEvent*
///
bool k_fileplacesview_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback bool func(KFilePlacesView* self, QObject* object, QEvent* event)
///
void k_fileplacesview_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QSize* func()
///
void k_fileplacesview_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param viewport QWidget*
///
void k_fileplacesview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param viewport QWidget*
///
void k_fileplacesview_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QWidget* viewport)
///
void k_fileplacesview_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param param1 QEvent*
///
void k_fileplacesview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param param1 QEvent*
///
void k_fileplacesview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QEvent* param1)
///
void k_fileplacesview_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param option QStyleOptionFrame*
///
void k_fileplacesview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param option QStyleOptionFrame*
///
void k_fileplacesview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QStyleOptionFrame* option)
///
void k_fileplacesview_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback int32_t func()
///
void k_fileplacesview_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param visible bool
///
void k_fileplacesview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param visible bool
///
void k_fileplacesview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, bool visible)
///
void k_fileplacesview_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param param1 int
///
int32_t k_fileplacesview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param param1 int
///
int32_t k_fileplacesview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback int32_t func(KFilePlacesView* self, int param1)
///
void k_fileplacesview_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback bool func()
///
void k_fileplacesview_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
QPaintEngine* k_fileplacesview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
QPaintEngine* k_fileplacesview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QPaintEngine* func()
///
void k_fileplacesview_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QKeyEvent*
///
void k_fileplacesview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QKeyEvent*
///
void k_fileplacesview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QKeyEvent* event)
///
void k_fileplacesview_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QEnterEvent*
///
void k_fileplacesview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QEnterEvent*
///
void k_fileplacesview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QEnterEvent* event)
///
void k_fileplacesview_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QEvent*
///
void k_fileplacesview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QEvent*
///
void k_fileplacesview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QEvent* event)
///
void k_fileplacesview_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QMoveEvent*
///
void k_fileplacesview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QMoveEvent*
///
void k_fileplacesview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QMoveEvent* event)
///
void k_fileplacesview_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QCloseEvent*
///
void k_fileplacesview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QCloseEvent*
///
void k_fileplacesview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QCloseEvent* event)
///
void k_fileplacesview_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QTabletEvent*
///
void k_fileplacesview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QTabletEvent*
///
void k_fileplacesview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QTabletEvent* event)
///
void k_fileplacesview_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QActionEvent*
///
void k_fileplacesview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QActionEvent*
///
void k_fileplacesview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QActionEvent* event)
///
void k_fileplacesview_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_fileplacesview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_fileplacesview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback bool func(KFilePlacesView* self, const char* eventType, void* message, intptr_t* result)
///
void k_fileplacesview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_fileplacesview_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_fileplacesview_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback int32_t func(KFilePlacesView* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_fileplacesview_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param painter QPainter*
///
void k_fileplacesview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param painter QPainter*
///
void k_fileplacesview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QPainter* painter)
///
void k_fileplacesview_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param offset QPoint*
///
QPaintDevice* k_fileplacesview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param offset QPoint*
///
QPaintDevice* k_fileplacesview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QPaintDevice* func(KFilePlacesView* self, QPoint* offset)
///
void k_fileplacesview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
QPainter* k_fileplacesview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
QPainter* k_fileplacesview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QPainter* func()
///
void k_fileplacesview_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QChildEvent*
///
void k_fileplacesview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QChildEvent*
///
void k_fileplacesview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QChildEvent* event)
///
void k_fileplacesview_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QEvent*
///
void k_fileplacesview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param event QEvent*
///
void k_fileplacesview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QEvent* event)
///
void k_fileplacesview_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param signal QMetaMethod*
///
void k_fileplacesview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param signal QMetaMethod*
///
void k_fileplacesview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QMetaMethod* signal)
///
void k_fileplacesview_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param signal QMetaMethod*
///
void k_fileplacesview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param signal QMetaMethod*
///
void k_fileplacesview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QMetaMethod* signal)
///
void k_fileplacesview_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param width int
/// @param height int
///
void k_fileplacesview_resize_contents(void* self, int width, int height);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param width int
/// @param height int
///
void k_fileplacesview_qbase_resize_contents(void* self, int width, int height);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, int width, int height)
///
void k_fileplacesview_on_resize_contents(void* self, void (*callback)(void*, int, int));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_contents_size(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
QSize* k_fileplacesview_qbase_contents_size(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QSize* func()
///
void k_fileplacesview_on_contents_size(void* self, QSize* (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
QRect* k_fileplacesview_rect_for_index(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param index QModelIndex*
///
QRect* k_fileplacesview_qbase_rect_for_index(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QRect* func(KFilePlacesView* self, QModelIndex* index)
///
void k_fileplacesview_on_rect_for_index(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param position QPoint*
/// @param index QModelIndex*
///
void k_fileplacesview_set_position_for_index(void* self, void* position, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param position QPoint*
/// @param index QModelIndex*
///
void k_fileplacesview_qbase_set_position_for_index(void* self, void* position, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QPoint* position, QModelIndex* index)
///
void k_fileplacesview_on_set_position_for_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
/// @return enum QAbstractItemView__State
///
int32_t k_fileplacesview_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
/// @return enum QAbstractItemView__State
///
int32_t k_fileplacesview_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback int32_t func()
///
void k_fileplacesview_on_state(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param state enum QAbstractItemView__State
///
void k_fileplacesview_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param state enum QAbstractItemView__State
///
void k_fileplacesview_qbase_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, enum QAbstractItemView__State state)
///
void k_fileplacesview_on_set_state(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_schedule_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_execute_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param region QRegion*
///
void k_fileplacesview_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param region QRegion*
///
void k_fileplacesview_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QRegion* region)
///
void k_fileplacesview_on_set_dirty_region(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param dx int
/// @param dy int
///
void k_fileplacesview_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param dx int
/// @param dy int
///
void k_fileplacesview_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, int dx, int dy)
///
void k_fileplacesview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
QPoint* k_fileplacesview_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
QPoint* k_fileplacesview_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QPoint* func()
///
void k_fileplacesview_on_dirty_region_offset(void* self, QPoint* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_start_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_stop_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_do_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t k_fileplacesview_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t k_fileplacesview_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback int32_t func()
///
void k_fileplacesview_on_drop_indicator_position(void* self, int32_t (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_fileplacesview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_fileplacesview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, int left, int top, int right, int bottom)
///
void k_fileplacesview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
QMargins* k_fileplacesview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
QMargins* k_fileplacesview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QMargins* func()
///
void k_fileplacesview_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param param1 QPainter*
///
void k_fileplacesview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param param1 QPainter*
///
void k_fileplacesview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, QPainter* param1)
///
void k_fileplacesview_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback void func()
///
void k_fileplacesview_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback bool func()
///
void k_fileplacesview_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
bool k_fileplacesview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback bool func()
///
void k_fileplacesview_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
QObject* k_fileplacesview_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
QObject* k_fileplacesview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback QObject* func()
///
void k_fileplacesview_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
///
int32_t k_fileplacesview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback int32_t func()
///
void k_fileplacesview_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param signal const char*
///
int32_t k_fileplacesview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param signal const char*
///
int32_t k_fileplacesview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback int32_t func(KFilePlacesView* self, const char* signal)
///
void k_fileplacesview_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param signal QMetaMethod*
///
bool k_fileplacesview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param signal QMetaMethod*
///
bool k_fileplacesview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback bool func(KFilePlacesView* self, QMetaMethod* signal)
///
void k_fileplacesview_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_fileplacesview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_fileplacesview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesView*
/// @param callback double func(KFilePlacesView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_fileplacesview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesView*
/// @param callback void func(KFilePlacesView* self, const char* objectName)
///
void k_fileplacesview_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kfileplacesview.html#dtor.KFilePlacesView)
///
/// Delete this object from C++ memory.
///
/// @param self KFilePlacesView*
///
void k_fileplacesview_delete(void* self);

#endif
