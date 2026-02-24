#pragma once
#ifndef SRC_EXTRAS_KXMLGUI_QT6C_LIBKTOOLBAR_H
#define SRC_EXTRAS_KXMLGUI_QT6C_LIBKTOOLBAR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktoolbar.html)

/// k_toolbar_new constructs a new KToolBar object.
///
/// @param parent QWidget*
///
KToolBar* k_toolbar_new(void* parent);

/// [Upstream resources](https://api.kde.org/ktoolbar.html)

/// k_toolbar_new2 constructs a new KToolBar object.
///
/// @param objectName const char*
/// @param parent QWidget*
///
KToolBar* k_toolbar_new2(const char* objectName, void* parent);

/// [Upstream resources](https://api.kde.org/ktoolbar.html)

/// k_toolbar_new3 constructs a new KToolBar object.
///
/// @param objectName const char*
/// @param parentWindow QMainWindow*
/// @param area enum Qt__ToolBarArea
///
KToolBar* k_toolbar_new3(const char* objectName, void* parentWindow, int32_t area);

/// [Upstream resources](https://api.kde.org/ktoolbar.html)

/// k_toolbar_new4 constructs a new KToolBar object.
///
/// @param parent QWidget*
/// @param isMainToolBar bool
///
KToolBar* k_toolbar_new4(void* parent, bool isMainToolBar);

/// [Upstream resources](https://api.kde.org/ktoolbar.html)

/// k_toolbar_new5 constructs a new KToolBar object.
///
/// @param parent QWidget*
/// @param isMainToolBar bool
/// @param readConfig bool
///
KToolBar* k_toolbar_new5(void* parent, bool isMainToolBar, bool readConfig);

/// [Upstream resources](https://api.kde.org/ktoolbar.html)

/// k_toolbar_new6 constructs a new KToolBar object.
///
/// @param objectName const char*
/// @param parent QWidget*
/// @param readConfig bool
///
KToolBar* k_toolbar_new6(const char* objectName, void* parent, bool readConfig);

/// [Upstream resources](https://api.kde.org/ktoolbar.html)

/// k_toolbar_new7 constructs a new KToolBar object.
///
/// @param objectName const char*
/// @param parentWindow QMainWindow*
/// @param area enum Qt__ToolBarArea
/// @param newLine bool
///
KToolBar* k_toolbar_new7(const char* objectName, void* parentWindow, int32_t area, bool newLine);

/// [Upstream resources](https://api.kde.org/ktoolbar.html)

/// k_toolbar_new8 constructs a new KToolBar object.
///
/// @param objectName const char*
/// @param parentWindow QMainWindow*
/// @param area enum Qt__ToolBarArea
/// @param newLine bool
/// @param isMainToolBar bool
///
KToolBar* k_toolbar_new8(const char* objectName, void* parentWindow, int32_t area, bool newLine, bool isMainToolBar);

/// [Upstream resources](https://api.kde.org/ktoolbar.html)

/// k_toolbar_new9 constructs a new KToolBar object.
///
/// @param objectName const char*
/// @param parentWindow QMainWindow*
/// @param area enum Qt__ToolBarArea
/// @param newLine bool
/// @param isMainToolBar bool
/// @param readConfig bool
///
KToolBar* k_toolbar_new9(const char* objectName, void* parentWindow, int32_t area, bool newLine, bool isMainToolBar, bool readConfig);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KToolBar*
///
const QMetaObject* k_toolbar_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback const QMetaObject* func()
///
void k_toolbar_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_toolbar_super_meta_object` instead
///
#define k_toolbar_qbase_meta_object k_toolbar_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KToolBar*
///
const QMetaObject* k_toolbar_super_meta_object(void* self);

/// @param self KToolBar*
/// @param param1 const char*
///
void* k_toolbar_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback void* func(KToolBar* self, const char* param1)
///
void k_toolbar_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_toolbar_super_metacast` instead
///
#define k_toolbar_qbase_metacast k_toolbar_super_metacast

/// Base class method implementation
///
/// @param self KToolBar*
/// @param param1 const char*
///
void* k_toolbar_super_metacast(void* self, const char* param1);

/// @param self KToolBar*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_toolbar_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback int32_t func(KToolBar* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_toolbar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_toolbar_super_metacall` instead
///
#define k_toolbar_qbase_metacall k_toolbar_super_metacall

/// Base class method implementation
///
/// @param self KToolBar*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_toolbar_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_toolbar_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#mainWindow)
///
/// @param self KToolBar*
///
KMainWindow* k_toolbar_main_window(void* self);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#setIconDimensions)
///
/// @param self KToolBar*
/// @param size int
///
void k_toolbar_set_icon_dimensions(void* self, int size);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#iconSizeDefault)
///
/// @param self KToolBar*
///
int32_t k_toolbar_icon_size_default(void* self);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#saveSettings)
///
/// @param self KToolBar*
/// @param cg KConfigGroup*
///
void k_toolbar_save_settings(void* self, void* cg);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#applySettings)
///
/// @param self KToolBar*
/// @param cg KConfigGroup*
///
void k_toolbar_apply_settings(void* self, void* cg);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#addXMLGUIClient)
///
/// @param self KToolBar*
/// @param client KXMLGUIClient*
///
void k_toolbar_add_x_m_l_g_u_i_client(void* self, void* client);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#removeXMLGUIClient)
///
/// @param self KToolBar*
/// @param client KXMLGUIClient*
///
void k_toolbar_remove_x_m_l_g_u_i_client(void* self, void* client);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#loadState)
///
/// @param self KToolBar*
/// @param element QDomElement*
///
void k_toolbar_load_state(void* self, void* element);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#saveState)
///
/// @param self KToolBar*
/// @param element QDomElement*
///
void k_toolbar_save_state(void* self, void* element);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#eventFilter)
///
/// @param self KToolBar*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_toolbar_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback bool func(KToolBar* self, QObject* watched, QEvent* event)
///
void k_toolbar_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// @warning DEPRECATED: Use `k_toolbar_super_event_filter` instead
///
#define k_toolbar_qbase_event_filter k_toolbar_super_event_filter

/// [Upstream resources](https://api.kde.org/ktoolbar.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KToolBar*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_toolbar_super_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#toolBarsEditable)
///
bool k_toolbar_tool_bars_editable();

/// [Upstream resources](https://api.kde.org/ktoolbar.html#setToolBarsEditable)
///
/// @param editable bool
///
void k_toolbar_set_tool_bars_editable(bool editable);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#toolBarsLocked)
///
bool k_toolbar_tool_bars_locked();

/// [Upstream resources](https://api.kde.org/ktoolbar.html#setToolBarsLocked)
///
/// @param locked bool
///
void k_toolbar_set_tool_bars_locked(bool locked);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#emitToolbarStyleChanged)
///
void k_toolbar_emit_toolbar_style_changed();

/// [Upstream resources](https://api.kde.org/ktoolbar.html#slotMovableChanged)
///
/// @param self KToolBar*
/// @param movable bool
///
void k_toolbar_slot_movable_changed(void* self, bool movable);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#slotMovableChanged)
///
/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, bool movable)
///
void k_toolbar_on_slot_movable_changed(void* self, void (*callback)(void*, bool));

/// @warning DEPRECATED: Use `k_toolbar_super_slot_movable_changed` instead
///
#define k_toolbar_qbase_slot_movable_changed k_toolbar_super_slot_movable_changed

/// [Upstream resources](https://api.kde.org/ktoolbar.html#slotMovableChanged)
///
/// Base class method implementation
///
/// @param self KToolBar*
/// @param movable bool
///
void k_toolbar_super_slot_movable_changed(void* self, bool movable);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#contextMenuEvent)
///
/// @param self KToolBar*
/// @param param1 QContextMenuEvent*
///
void k_toolbar_context_menu_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QContextMenuEvent* param1)
///
void k_toolbar_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_toolbar_super_context_menu_event` instead
///
#define k_toolbar_qbase_context_menu_event k_toolbar_super_context_menu_event

/// [Upstream resources](https://api.kde.org/ktoolbar.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self KToolBar*
/// @param param1 QContextMenuEvent*
///
void k_toolbar_super_context_menu_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#actionEvent)
///
/// @param self KToolBar*
/// @param param1 QActionEvent*
///
void k_toolbar_action_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#actionEvent)
///
/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QActionEvent* param1)
///
void k_toolbar_on_action_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_toolbar_super_action_event` instead
///
#define k_toolbar_qbase_action_event k_toolbar_super_action_event

/// [Upstream resources](https://api.kde.org/ktoolbar.html#actionEvent)
///
/// Base class method implementation
///
/// @param self KToolBar*
/// @param param1 QActionEvent*
///
void k_toolbar_super_action_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#dragEnterEvent)
///
/// @param self KToolBar*
/// @param param1 QDragEnterEvent*
///
void k_toolbar_drag_enter_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QDragEnterEvent* param1)
///
void k_toolbar_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_toolbar_super_drag_enter_event` instead
///
#define k_toolbar_qbase_drag_enter_event k_toolbar_super_drag_enter_event

/// [Upstream resources](https://api.kde.org/ktoolbar.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self KToolBar*
/// @param param1 QDragEnterEvent*
///
void k_toolbar_super_drag_enter_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#dragMoveEvent)
///
/// @param self KToolBar*
/// @param param1 QDragMoveEvent*
///
void k_toolbar_drag_move_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QDragMoveEvent* param1)
///
void k_toolbar_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_toolbar_super_drag_move_event` instead
///
#define k_toolbar_qbase_drag_move_event k_toolbar_super_drag_move_event

/// [Upstream resources](https://api.kde.org/ktoolbar.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self KToolBar*
/// @param param1 QDragMoveEvent*
///
void k_toolbar_super_drag_move_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#dragLeaveEvent)
///
/// @param self KToolBar*
/// @param param1 QDragLeaveEvent*
///
void k_toolbar_drag_leave_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QDragLeaveEvent* param1)
///
void k_toolbar_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_toolbar_super_drag_leave_event` instead
///
#define k_toolbar_qbase_drag_leave_event k_toolbar_super_drag_leave_event

/// [Upstream resources](https://api.kde.org/ktoolbar.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self KToolBar*
/// @param param1 QDragLeaveEvent*
///
void k_toolbar_super_drag_leave_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#dropEvent)
///
/// @param self KToolBar*
/// @param param1 QDropEvent*
///
void k_toolbar_drop_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QDropEvent* param1)
///
void k_toolbar_on_drop_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_toolbar_super_drop_event` instead
///
#define k_toolbar_qbase_drop_event k_toolbar_super_drop_event

/// [Upstream resources](https://api.kde.org/ktoolbar.html#dropEvent)
///
/// Base class method implementation
///
/// @param self KToolBar*
/// @param param1 QDropEvent*
///
void k_toolbar_super_drop_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#mousePressEvent)
///
/// @param self KToolBar*
/// @param param1 QMouseEvent*
///
void k_toolbar_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QMouseEvent* param1)
///
void k_toolbar_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_toolbar_super_mouse_press_event` instead
///
#define k_toolbar_qbase_mouse_press_event k_toolbar_super_mouse_press_event

/// [Upstream resources](https://api.kde.org/ktoolbar.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self KToolBar*
/// @param param1 QMouseEvent*
///
void k_toolbar_super_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#mouseMoveEvent)
///
/// @param self KToolBar*
/// @param param1 QMouseEvent*
///
void k_toolbar_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QMouseEvent* param1)
///
void k_toolbar_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_toolbar_super_mouse_move_event` instead
///
#define k_toolbar_qbase_mouse_move_event k_toolbar_super_mouse_move_event

/// [Upstream resources](https://api.kde.org/ktoolbar.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self KToolBar*
/// @param param1 QMouseEvent*
///
void k_toolbar_super_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#mouseReleaseEvent)
///
/// @param self KToolBar*
/// @param param1 QMouseEvent*
///
void k_toolbar_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktoolbar.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QMouseEvent* param1)
///
void k_toolbar_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_toolbar_super_mouse_release_event` instead
///
#define k_toolbar_qbase_mouse_release_event k_toolbar_super_mouse_release_event

/// [Upstream resources](https://api.kde.org/ktoolbar.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self KToolBar*
/// @param param1 QMouseEvent*
///
void k_toolbar_super_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_toolbar_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_toolbar_tr3(const char* s, const char* c, int n);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#setMovable)
///
/// @param self KToolBar*
/// @param movable bool
///
void k_toolbar_set_movable(void* self, bool movable);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#isMovable)
///
/// @param self KToolBar*
///
bool k_toolbar_is_movable(void* self);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#setAllowedAreas)
///
/// @param self KToolBar*
/// @param areas flag of enum Qt__ToolBarArea
///
void k_toolbar_set_allowed_areas(void* self, int32_t areas);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#allowedAreas)
///
/// @param self KToolBar*
///
/// @return flag of enum Qt__ToolBarArea
///
int32_t k_toolbar_allowed_areas(void* self);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#isAreaAllowed)
///
/// @param self KToolBar*
/// @param area enum Qt__ToolBarArea
///
bool k_toolbar_is_area_allowed(void* self, int32_t area);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#setOrientation)
///
/// @param self KToolBar*
/// @param orientation enum Qt__Orientation
///
void k_toolbar_set_orientation(void* self, int32_t orientation);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#orientation)
///
/// @param self KToolBar*
///
/// @return enum Qt__Orientation
///
int32_t k_toolbar_orientation(void* self);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#clear)
///
/// @param self KToolBar*
///
void k_toolbar_clear(void* self);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#addSeparator)
///
/// @param self KToolBar*
///
QAction* k_toolbar_add_separator(void* self);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#insertSeparator)
///
/// @param self KToolBar*
/// @param before QAction*
///
QAction* k_toolbar_insert_separator(void* self, void* before);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#addWidget)
///
/// @param self KToolBar*
/// @param widget QWidget*
///
QAction* k_toolbar_add_widget(void* self, void* widget);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#insertWidget)
///
/// @param self KToolBar*
/// @param before QAction*
/// @param widget QWidget*
///
QAction* k_toolbar_insert_widget(void* self, void* before, void* widget);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#actionGeometry)
///
/// @param self KToolBar*
/// @param action QAction*
///
QRect* k_toolbar_action_geometry(void* self, void* action);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#actionAt)
///
/// @param self KToolBar*
/// @param p QPoint*
///
QAction* k_toolbar_action_at(void* self, void* p);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#actionAt)
///
/// @param self KToolBar*
/// @param x int
/// @param y int
///
QAction* k_toolbar_action_at2(void* self, int x, int y);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#toggleViewAction)
///
/// @param self KToolBar*
///
QAction* k_toolbar_toggle_view_action(void* self);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#iconSize)
///
/// @param self KToolBar*
///
QSize* k_toolbar_icon_size(void* self);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#toolButtonStyle)
///
/// @param self KToolBar*
///
/// @return enum Qt__ToolButtonStyle
///
int32_t k_toolbar_tool_button_style(void* self);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#widgetForAction)
///
/// @param self KToolBar*
/// @param action QAction*
///
QWidget* k_toolbar_widget_for_action(void* self, void* action);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#isFloatable)
///
/// @param self KToolBar*
///
bool k_toolbar_is_floatable(void* self);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#setFloatable)
///
/// @param self KToolBar*
/// @param floatable bool
///
void k_toolbar_set_floatable(void* self, bool floatable);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#isFloating)
///
/// @param self KToolBar*
///
bool k_toolbar_is_floating(void* self);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#setIconSize)
///
/// @param self KToolBar*
/// @param iconSize QSize*
///
void k_toolbar_set_icon_size(void* self, void* iconSize);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#setToolButtonStyle)
///
/// @param self KToolBar*
/// @param toolButtonStyle enum Qt__ToolButtonStyle
///
void k_toolbar_set_tool_button_style(void* self, int32_t toolButtonStyle);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#actionTriggered)
///
/// @param self KToolBar*
/// @param action QAction*
///
void k_toolbar_action_triggered(void* self, void* action);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#actionTriggered)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QAction* action)
///
void k_toolbar_on_action_triggered(void* self, void (*callback)(void*, void*));

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#movableChanged)
///
/// @param self KToolBar*
/// @param movable bool
///
void k_toolbar_movable_changed(void* self, bool movable);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#movableChanged)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, bool movable)
///
void k_toolbar_on_movable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#allowedAreasChanged)
///
/// @param self KToolBar*
/// @param allowedAreas flag of enum Qt__ToolBarArea
///
void k_toolbar_allowed_areas_changed(void* self, int32_t allowedAreas);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#allowedAreasChanged)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, flag of enum Qt__ToolBarArea allowedAreas)
///
void k_toolbar_on_allowed_areas_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#orientationChanged)
///
/// @param self KToolBar*
/// @param orientation enum Qt__Orientation
///
void k_toolbar_orientation_changed(void* self, int32_t orientation);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#orientationChanged)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, enum Qt__Orientation orientation)
///
void k_toolbar_on_orientation_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#iconSizeChanged)
///
/// @param self KToolBar*
/// @param iconSize QSize*
///
void k_toolbar_icon_size_changed(void* self, void* iconSize);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#iconSizeChanged)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QSize* iconSize)
///
void k_toolbar_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#toolButtonStyleChanged)
///
/// @param self KToolBar*
/// @param toolButtonStyle enum Qt__ToolButtonStyle
///
void k_toolbar_tool_button_style_changed(void* self, int32_t toolButtonStyle);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#toolButtonStyleChanged)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, enum Qt__ToolButtonStyle toolButtonStyle)
///
void k_toolbar_on_tool_button_style_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#topLevelChanged)
///
/// @param self KToolBar*
/// @param topLevel bool
///
void k_toolbar_top_level_changed(void* self, bool topLevel);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#topLevelChanged)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, bool topLevel)
///
void k_toolbar_on_top_level_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#visibilityChanged)
///
/// @param self KToolBar*
/// @param visible bool
///
void k_toolbar_visibility_changed(void* self, bool visible);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#visibilityChanged)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, bool visible)
///
void k_toolbar_on_visibility_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KToolBar*
///
uintptr_t k_toolbar_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KToolBar*
///
void k_toolbar_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KToolBar*
///
uintptr_t k_toolbar_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KToolBar*
///
uintptr_t k_toolbar_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KToolBar*
///
QStyle* k_toolbar_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KToolBar*
/// @param style QStyle*
///
void k_toolbar_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KToolBar*
///
bool k_toolbar_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KToolBar*
///
bool k_toolbar_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KToolBar*
///
bool k_toolbar_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KToolBar*
///
/// @return enum Qt__WindowModality
///
int32_t k_toolbar_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KToolBar*
/// @param windowModality enum Qt__WindowModality
///
void k_toolbar_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KToolBar*
///
bool k_toolbar_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KToolBar*
/// @param param1 QWidget*
///
bool k_toolbar_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KToolBar*
/// @param enabled bool
///
void k_toolbar_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KToolBar*
/// @param disabled bool
///
void k_toolbar_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KToolBar*
/// @param windowModified bool
///
void k_toolbar_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KToolBar*
///
QRect* k_toolbar_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KToolBar*
///
const QRect* k_toolbar_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KToolBar*
///
QRect* k_toolbar_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KToolBar*
///
int32_t k_toolbar_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KToolBar*
///
int32_t k_toolbar_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KToolBar*
///
QPoint* k_toolbar_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KToolBar*
///
QSize* k_toolbar_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KToolBar*
///
QSize* k_toolbar_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KToolBar*
///
int32_t k_toolbar_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KToolBar*
///
int32_t k_toolbar_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KToolBar*
///
QRect* k_toolbar_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KToolBar*
///
QRect* k_toolbar_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KToolBar*
///
QRegion* k_toolbar_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KToolBar*
///
QSize* k_toolbar_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KToolBar*
///
QSize* k_toolbar_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KToolBar*
///
int32_t k_toolbar_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KToolBar*
///
int32_t k_toolbar_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KToolBar*
///
int32_t k_toolbar_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KToolBar*
///
int32_t k_toolbar_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KToolBar*
/// @param minimumSize QSize*
///
void k_toolbar_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KToolBar*
/// @param minw int
/// @param minh int
///
void k_toolbar_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KToolBar*
/// @param maximumSize QSize*
///
void k_toolbar_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KToolBar*
/// @param maxw int
/// @param maxh int
///
void k_toolbar_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KToolBar*
/// @param minw int
///
void k_toolbar_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KToolBar*
/// @param minh int
///
void k_toolbar_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KToolBar*
/// @param maxw int
///
void k_toolbar_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KToolBar*
/// @param maxh int
///
void k_toolbar_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KToolBar*
///
QSize* k_toolbar_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KToolBar*
/// @param sizeIncrement QSize*
///
void k_toolbar_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KToolBar*
/// @param w int
/// @param h int
///
void k_toolbar_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KToolBar*
///
QSize* k_toolbar_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KToolBar*
/// @param baseSize QSize*
///
void k_toolbar_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KToolBar*
/// @param basew int
/// @param baseh int
///
void k_toolbar_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KToolBar*
/// @param fixedSize QSize*
///
void k_toolbar_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KToolBar*
/// @param w int
/// @param h int
///
void k_toolbar_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KToolBar*
/// @param w int
///
void k_toolbar_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KToolBar*
/// @param h int
///
void k_toolbar_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KToolBar*
/// @param param1 QPointF*
///
QPointF* k_toolbar_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KToolBar*
/// @param param1 QPoint*
///
QPoint* k_toolbar_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KToolBar*
/// @param param1 QPointF*
///
QPointF* k_toolbar_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KToolBar*
/// @param param1 QPoint*
///
QPoint* k_toolbar_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KToolBar*
/// @param param1 QPointF*
///
QPointF* k_toolbar_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KToolBar*
/// @param param1 QPoint*
///
QPoint* k_toolbar_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KToolBar*
/// @param param1 QPointF*
///
QPointF* k_toolbar_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KToolBar*
/// @param param1 QPoint*
///
QPoint* k_toolbar_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KToolBar*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_toolbar_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KToolBar*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_toolbar_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KToolBar*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_toolbar_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KToolBar*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_toolbar_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KToolBar*
///
QWidget* k_toolbar_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KToolBar*
///
QWidget* k_toolbar_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KToolBar*
///
QWidget* k_toolbar_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KToolBar*
///
const QPalette* k_toolbar_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KToolBar*
/// @param palette QPalette*
///
void k_toolbar_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KToolBar*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_toolbar_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KToolBar*
///
/// @return enum QPalette__ColorRole
///
int32_t k_toolbar_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KToolBar*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_toolbar_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KToolBar*
///
/// @return enum QPalette__ColorRole
///
int32_t k_toolbar_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KToolBar*
///
const QFont* k_toolbar_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KToolBar*
/// @param font QFont*
///
void k_toolbar_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KToolBar*
///
QFontMetrics* k_toolbar_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KToolBar*
///
QFontInfo* k_toolbar_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KToolBar*
///
QCursor* k_toolbar_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KToolBar*
/// @param cursor QCursor*
///
void k_toolbar_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KToolBar*
///
void k_toolbar_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KToolBar*
/// @param enable bool
///
void k_toolbar_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KToolBar*
///
bool k_toolbar_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KToolBar*
///
bool k_toolbar_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KToolBar*
/// @param enable bool
///
void k_toolbar_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KToolBar*
///
bool k_toolbar_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KToolBar*
/// @param mask QBitmap*
///
void k_toolbar_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KToolBar*
/// @param mask QRegion*
///
void k_toolbar_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KToolBar*
///
QRegion* k_toolbar_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KToolBar*
///
void k_toolbar_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KToolBar*
/// @param target QPaintDevice*
///
void k_toolbar_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KToolBar*
/// @param painter QPainter*
///
void k_toolbar_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KToolBar*
///
QPixmap* k_toolbar_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KToolBar*
///
QGraphicsEffect* k_toolbar_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KToolBar*
/// @param effect QGraphicsEffect*
///
void k_toolbar_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KToolBar*
/// @param type enum Qt__GestureType
///
void k_toolbar_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KToolBar*
/// @param type enum Qt__GestureType
///
void k_toolbar_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KToolBar*
/// @param windowTitle const char*
///
void k_toolbar_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KToolBar*
/// @param styleSheet const char*
///
void k_toolbar_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBar*
///
const char* k_toolbar_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBar*
///
const char* k_toolbar_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KToolBar*
/// @param icon QIcon*
///
void k_toolbar_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KToolBar*
///
QIcon* k_toolbar_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KToolBar*
/// @param windowIconText const char*
///
void k_toolbar_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBar*
///
const char* k_toolbar_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KToolBar*
/// @param windowRole const char*
///
void k_toolbar_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBar*
///
const char* k_toolbar_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KToolBar*
/// @param filePath const char*
///
void k_toolbar_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBar*
///
const char* k_toolbar_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KToolBar*
/// @param level double
///
void k_toolbar_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KToolBar*
///
double k_toolbar_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KToolBar*
///
bool k_toolbar_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KToolBar*
/// @param toolTip const char*
///
void k_toolbar_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBar*
///
const char* k_toolbar_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KToolBar*
/// @param msec int
///
void k_toolbar_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KToolBar*
///
int32_t k_toolbar_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KToolBar*
/// @param statusTip const char*
///
void k_toolbar_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBar*
///
const char* k_toolbar_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KToolBar*
/// @param whatsThis const char*
///
void k_toolbar_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBar*
///
const char* k_toolbar_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBar*
///
const char* k_toolbar_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KToolBar*
/// @param name const char*
///
void k_toolbar_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBar*
///
const char* k_toolbar_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KToolBar*
/// @param description const char*
///
void k_toolbar_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KToolBar*
/// @param direction enum Qt__LayoutDirection
///
void k_toolbar_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KToolBar*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_toolbar_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KToolBar*
///
void k_toolbar_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KToolBar*
/// @param locale QLocale*
///
void k_toolbar_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KToolBar*
///
QLocale* k_toolbar_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KToolBar*
///
void k_toolbar_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KToolBar*
///
bool k_toolbar_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KToolBar*
///
bool k_toolbar_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KToolBar*
///
void k_toolbar_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KToolBar*
///
bool k_toolbar_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KToolBar*
///
void k_toolbar_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KToolBar*
///
void k_toolbar_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KToolBar*
/// @param reason enum Qt__FocusReason
///
void k_toolbar_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KToolBar*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_toolbar_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KToolBar*
/// @param policy enum Qt__FocusPolicy
///
void k_toolbar_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KToolBar*
///
bool k_toolbar_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_toolbar_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KToolBar*
/// @param focusProxy QWidget*
///
void k_toolbar_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KToolBar*
///
QWidget* k_toolbar_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KToolBar*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_toolbar_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KToolBar*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_toolbar_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KToolBar*
///
void k_toolbar_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KToolBar*
/// @param param1 QCursor*
///
void k_toolbar_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KToolBar*
///
void k_toolbar_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KToolBar*
///
void k_toolbar_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KToolBar*
///
void k_toolbar_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KToolBar*
/// @param key QKeySequence*
///
int32_t k_toolbar_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KToolBar*
/// @param id int
///
void k_toolbar_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KToolBar*
/// @param id int
///
void k_toolbar_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KToolBar*
/// @param id int
///
void k_toolbar_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_toolbar_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_toolbar_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KToolBar*
///
bool k_toolbar_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KToolBar*
/// @param enable bool
///
void k_toolbar_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KToolBar*
///
QGraphicsProxyWidget* k_toolbar_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KToolBar*
///
void k_toolbar_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KToolBar*
///
void k_toolbar_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KToolBar*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_toolbar_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KToolBar*
/// @param param1 QRect*
///
void k_toolbar_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KToolBar*
/// @param param1 QRegion*
///
void k_toolbar_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KToolBar*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_toolbar_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KToolBar*
/// @param param1 QRect*
///
void k_toolbar_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KToolBar*
/// @param param1 QRegion*
///
void k_toolbar_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KToolBar*
/// @param hidden bool
///
void k_toolbar_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KToolBar*
///
void k_toolbar_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KToolBar*
///
void k_toolbar_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KToolBar*
///
void k_toolbar_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KToolBar*
///
void k_toolbar_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KToolBar*
///
void k_toolbar_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KToolBar*
///
void k_toolbar_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KToolBar*
///
bool k_toolbar_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KToolBar*
///
void k_toolbar_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KToolBar*
///
void k_toolbar_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KToolBar*
/// @param param1 QWidget*
///
void k_toolbar_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KToolBar*
/// @param x int
/// @param y int
///
void k_toolbar_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KToolBar*
/// @param param1 QPoint*
///
void k_toolbar_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KToolBar*
/// @param w int
/// @param h int
///
void k_toolbar_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KToolBar*
/// @param param1 QSize*
///
void k_toolbar_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KToolBar*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_toolbar_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KToolBar*
/// @param geometry QRect*
///
void k_toolbar_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KToolBar*
///
char* k_toolbar_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KToolBar*
/// @param geometry char*
///
bool k_toolbar_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KToolBar*
///
void k_toolbar_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KToolBar*
///
bool k_toolbar_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KToolBar*
/// @param param1 QWidget*
///
bool k_toolbar_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KToolBar*
///
bool k_toolbar_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KToolBar*
///
bool k_toolbar_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KToolBar*
///
bool k_toolbar_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KToolBar*
///
bool k_toolbar_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KToolBar*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_toolbar_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KToolBar*
/// @param state flag of enum Qt__WindowState
///
void k_toolbar_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KToolBar*
/// @param state flag of enum Qt__WindowState
///
void k_toolbar_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KToolBar*
///
QSizePolicy* k_toolbar_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KToolBar*
/// @param sizePolicy QSizePolicy*
///
void k_toolbar_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KToolBar*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_toolbar_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KToolBar*
///
QRegion* k_toolbar_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KToolBar*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_toolbar_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KToolBar*
/// @param margins QMargins*
///
void k_toolbar_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KToolBar*
///
QMargins* k_toolbar_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KToolBar*
///
QRect* k_toolbar_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KToolBar*
///
QLayout* k_toolbar_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KToolBar*
/// @param layout QLayout*
///
void k_toolbar_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KToolBar*
///
void k_toolbar_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KToolBar*
/// @param parent QWidget*
///
void k_toolbar_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KToolBar*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_toolbar_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KToolBar*
/// @param dx int
/// @param dy int
///
void k_toolbar_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KToolBar*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_toolbar_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KToolBar*
///
QWidget* k_toolbar_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KToolBar*
///
QWidget* k_toolbar_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KToolBar*
///
QWidget* k_toolbar_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KToolBar*
///
bool k_toolbar_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KToolBar*
/// @param on bool
///
void k_toolbar_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KToolBar*
/// @param action QAction*
///
void k_toolbar_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KToolBar*
/// @param actions libqt_list of QAction*
///
void k_toolbar_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KToolBar*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_toolbar_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KToolBar*
/// @param before QAction*
/// @param action QAction*
///
void k_toolbar_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KToolBar*
/// @param action QAction*
///
void k_toolbar_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KToolBar*
///
/// @return libqt_list of QAction*
///
libqt_list k_toolbar_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KToolBar*
/// @param text const char*
///
QAction* k_toolbar_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KToolBar*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_toolbar_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KToolBar*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_toolbar_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KToolBar*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_toolbar_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KToolBar*
///
QWidget* k_toolbar_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KToolBar*
/// @param type flag of enum Qt__WindowType
///
void k_toolbar_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KToolBar*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_toolbar_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KToolBar*
/// @param param1 enum Qt__WindowType
///
void k_toolbar_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KToolBar*
/// @param type flag of enum Qt__WindowType
///
void k_toolbar_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KToolBar*
///
/// @return enum Qt__WindowType
///
int32_t k_toolbar_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_toolbar_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KToolBar*
/// @param x int
/// @param y int
///
QWidget* k_toolbar_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KToolBar*
/// @param p QPoint*
///
QWidget* k_toolbar_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KToolBar*
/// @param p QPointF*
///
QWidget* k_toolbar_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KToolBar*
/// @param param1 enum Qt__WidgetAttribute
///
void k_toolbar_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KToolBar*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_toolbar_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KToolBar*
///
void k_toolbar_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KToolBar*
/// @param child QWidget*
///
bool k_toolbar_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KToolBar*
///
bool k_toolbar_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KToolBar*
/// @param enabled bool
///
void k_toolbar_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KToolBar*
///
QBackingStore* k_toolbar_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KToolBar*
///
QWindow* k_toolbar_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KToolBar*
///
QScreen* k_toolbar_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KToolBar*
/// @param screen QScreen*
///
void k_toolbar_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_toolbar_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KToolBar*
/// @param title const char*
///
void k_toolbar_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, const char* title)
///
void k_toolbar_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KToolBar*
/// @param icon QIcon*
///
void k_toolbar_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QIcon* icon)
///
void k_toolbar_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KToolBar*
/// @param iconText const char*
///
void k_toolbar_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, const char* iconText)
///
void k_toolbar_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KToolBar*
/// @param pos QPoint*
///
void k_toolbar_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QPoint* pos)
///
void k_toolbar_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KToolBar*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_toolbar_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KToolBar*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_toolbar_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KToolBar*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_toolbar_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KToolBar*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_toolbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KToolBar*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_toolbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KToolBar*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_toolbar_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KToolBar*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_toolbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KToolBar*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_toolbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KToolBar*
/// @param rectangle QRect*
///
QPixmap* k_toolbar_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KToolBar*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_toolbar_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KToolBar*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_toolbar_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KToolBar*
/// @param id int
/// @param enable bool
///
void k_toolbar_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KToolBar*
/// @param id int
/// @param enable bool
///
void k_toolbar_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KToolBar*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_toolbar_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KToolBar*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_toolbar_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_toolbar_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_toolbar_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KToolBar*
///
const char* k_toolbar_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KToolBar*
/// @param name const char*
///
void k_toolbar_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KToolBar*
///
bool k_toolbar_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KToolBar*
///
bool k_toolbar_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KToolBar*
///
bool k_toolbar_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KToolBar*
///
bool k_toolbar_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KToolBar*
/// @param b bool
///
bool k_toolbar_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KToolBar*
///
QThread* k_toolbar_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KToolBar*
/// @param thread QThread*
///
bool k_toolbar_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBar*
/// @param interval int
///
int32_t k_toolbar_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBar*
/// @param time int64_t of nanoseconds
///
int32_t k_toolbar_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToolBar*
/// @param id int
///
void k_toolbar_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KToolBar*
/// @param id enum Qt__TimerId
///
void k_toolbar_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KToolBar*
///
/// @return libqt_list of QObject*
///
libqt_list k_toolbar_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KToolBar*
/// @param filterObj QObject*
///
void k_toolbar_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KToolBar*
/// @param obj QObject*
///
void k_toolbar_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_toolbar_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_toolbar_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KToolBar*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_toolbar_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_toolbar_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_toolbar_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KToolBar*
///
bool k_toolbar_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KToolBar*
/// @param receiver QObject*
///
bool k_toolbar_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_toolbar_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KToolBar*
///
void k_toolbar_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KToolBar*
///
void k_toolbar_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KToolBar*
/// @param name const char*
/// @param value QVariant*
///
bool k_toolbar_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KToolBar*
/// @param name const char*
///
QVariant* k_toolbar_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KToolBar*
///
const char** k_toolbar_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KToolBar*
///
QBindingStorage* k_toolbar_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KToolBar*
///
const QBindingStorage* k_toolbar_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBar*
///
void k_toolbar_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self)
///
void k_toolbar_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KToolBar*
///
QObject* k_toolbar_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KToolBar*
/// @param classname const char*
///
bool k_toolbar_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KToolBar*
///
void k_toolbar_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBar*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_toolbar_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KToolBar*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_toolbar_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_toolbar_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_toolbar_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KToolBar*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_toolbar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KToolBar*
/// @param signal const char*
///
bool k_toolbar_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KToolBar*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_toolbar_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KToolBar*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_toolbar_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KToolBar*
/// @param receiver QObject*
/// @param member const char*
///
bool k_toolbar_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBar*
/// @param param1 QObject*
///
void k_toolbar_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QObject* param1)
///
void k_toolbar_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KToolBar*
///
bool k_toolbar_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KToolBar*
///
int32_t k_toolbar_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KToolBar*
///
int32_t k_toolbar_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KToolBar*
///
int32_t k_toolbar_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KToolBar*
///
int32_t k_toolbar_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KToolBar*
///
int32_t k_toolbar_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KToolBar*
///
int32_t k_toolbar_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KToolBar*
///
double k_toolbar_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KToolBar*
///
double k_toolbar_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KToolBar*
///
int32_t k_toolbar_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KToolBar*
///
int32_t k_toolbar_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_toolbar_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_toolbar_encode_metric_f(int32_t metric, double value);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QEvent*
///
void k_toolbar_change_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_change_event` instead
///
#define k_toolbar_qbase_change_event k_toolbar_super_change_event

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QEvent*
///
void k_toolbar_super_change_event(void* self, void* event);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QEvent* event)
///
void k_toolbar_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QPaintEvent*
///
void k_toolbar_paint_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_paint_event` instead
///
#define k_toolbar_qbase_paint_event k_toolbar_super_paint_event

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QPaintEvent*
///
void k_toolbar_super_paint_event(void* self, void* event);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QPaintEvent* event)
///
void k_toolbar_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QEvent*
///
bool k_toolbar_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_event` instead
///
#define k_toolbar_qbase_event k_toolbar_super_event

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QEvent*
///
bool k_toolbar_super_event(void* self, void* event);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback bool func(KToolBar* self, QEvent* event)
///
void k_toolbar_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param option QStyleOptionToolBar*
///
void k_toolbar_init_style_option(void* self, void* option);

/// @warning DEPRECATED: Use `k_toolbar_super_init_style_option` instead
///
#define k_toolbar_qbase_init_style_option k_toolbar_super_init_style_option

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param option QStyleOptionToolBar*
///
void k_toolbar_super_init_style_option(void* self, void* option);

/// Inherited from QToolBar
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtoolbar.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QStyleOptionToolBar* option)
///
void k_toolbar_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
///
int32_t k_toolbar_dev_type(void* self);

/// @warning DEPRECATED: Use `k_toolbar_super_dev_type` instead
///
#define k_toolbar_qbase_dev_type k_toolbar_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
///
int32_t k_toolbar_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback int32_t func()
///
void k_toolbar_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param visible bool
///
void k_toolbar_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `k_toolbar_super_set_visible` instead
///
#define k_toolbar_qbase_set_visible k_toolbar_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param visible bool
///
void k_toolbar_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, bool visible)
///
void k_toolbar_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
///
QSize* k_toolbar_size_hint(void* self);

/// @warning DEPRECATED: Use `k_toolbar_super_size_hint` instead
///
#define k_toolbar_qbase_size_hint k_toolbar_super_size_hint

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
///
QSize* k_toolbar_super_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback QSize* func()
///
void k_toolbar_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
///
QSize* k_toolbar_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_toolbar_super_minimum_size_hint` instead
///
#define k_toolbar_qbase_minimum_size_hint k_toolbar_super_minimum_size_hint

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
///
QSize* k_toolbar_super_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback QSize* func()
///
void k_toolbar_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param param1 int
///
int32_t k_toolbar_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_toolbar_super_height_for_width` instead
///
#define k_toolbar_qbase_height_for_width k_toolbar_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param param1 int
///
int32_t k_toolbar_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback int32_t func(KToolBar* self, int param1)
///
void k_toolbar_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
///
bool k_toolbar_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_toolbar_super_has_height_for_width` instead
///
#define k_toolbar_qbase_has_height_for_width k_toolbar_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
///
bool k_toolbar_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback bool func()
///
void k_toolbar_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
///
QPaintEngine* k_toolbar_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_toolbar_super_paint_engine` instead
///
#define k_toolbar_qbase_paint_engine k_toolbar_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
///
QPaintEngine* k_toolbar_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback QPaintEngine* func()
///
void k_toolbar_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QMouseEvent*
///
void k_toolbar_mouse_double_click_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_mouse_double_click_event` instead
///
#define k_toolbar_qbase_mouse_double_click_event k_toolbar_super_mouse_double_click_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QMouseEvent*
///
void k_toolbar_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QMouseEvent* event)
///
void k_toolbar_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QWheelEvent*
///
void k_toolbar_wheel_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_wheel_event` instead
///
#define k_toolbar_qbase_wheel_event k_toolbar_super_wheel_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QWheelEvent*
///
void k_toolbar_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QWheelEvent* event)
///
void k_toolbar_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QKeyEvent*
///
void k_toolbar_key_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_key_press_event` instead
///
#define k_toolbar_qbase_key_press_event k_toolbar_super_key_press_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QKeyEvent*
///
void k_toolbar_super_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QKeyEvent* event)
///
void k_toolbar_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QKeyEvent*
///
void k_toolbar_key_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_key_release_event` instead
///
#define k_toolbar_qbase_key_release_event k_toolbar_super_key_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QKeyEvent*
///
void k_toolbar_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QKeyEvent* event)
///
void k_toolbar_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QFocusEvent*
///
void k_toolbar_focus_in_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_focus_in_event` instead
///
#define k_toolbar_qbase_focus_in_event k_toolbar_super_focus_in_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QFocusEvent*
///
void k_toolbar_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QFocusEvent* event)
///
void k_toolbar_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QFocusEvent*
///
void k_toolbar_focus_out_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_focus_out_event` instead
///
#define k_toolbar_qbase_focus_out_event k_toolbar_super_focus_out_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QFocusEvent*
///
void k_toolbar_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QFocusEvent* event)
///
void k_toolbar_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QEnterEvent*
///
void k_toolbar_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_enter_event` instead
///
#define k_toolbar_qbase_enter_event k_toolbar_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QEnterEvent*
///
void k_toolbar_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QEnterEvent* event)
///
void k_toolbar_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QEvent*
///
void k_toolbar_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_leave_event` instead
///
#define k_toolbar_qbase_leave_event k_toolbar_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QEvent*
///
void k_toolbar_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QEvent* event)
///
void k_toolbar_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QMoveEvent*
///
void k_toolbar_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_move_event` instead
///
#define k_toolbar_qbase_move_event k_toolbar_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QMoveEvent*
///
void k_toolbar_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QMoveEvent* event)
///
void k_toolbar_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QResizeEvent*
///
void k_toolbar_resize_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_resize_event` instead
///
#define k_toolbar_qbase_resize_event k_toolbar_super_resize_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QResizeEvent*
///
void k_toolbar_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QResizeEvent* event)
///
void k_toolbar_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QCloseEvent*
///
void k_toolbar_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_close_event` instead
///
#define k_toolbar_qbase_close_event k_toolbar_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QCloseEvent*
///
void k_toolbar_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QCloseEvent* event)
///
void k_toolbar_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QTabletEvent*
///
void k_toolbar_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_tablet_event` instead
///
#define k_toolbar_qbase_tablet_event k_toolbar_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QTabletEvent*
///
void k_toolbar_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QTabletEvent* event)
///
void k_toolbar_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QShowEvent*
///
void k_toolbar_show_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_show_event` instead
///
#define k_toolbar_qbase_show_event k_toolbar_super_show_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QShowEvent*
///
void k_toolbar_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QShowEvent* event)
///
void k_toolbar_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QHideEvent*
///
void k_toolbar_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_hide_event` instead
///
#define k_toolbar_qbase_hide_event k_toolbar_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QHideEvent*
///
void k_toolbar_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QHideEvent* event)
///
void k_toolbar_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_toolbar_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_toolbar_super_native_event` instead
///
#define k_toolbar_qbase_native_event k_toolbar_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_toolbar_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback bool func(KToolBar* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_toolbar_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_toolbar_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_toolbar_super_metric` instead
///
#define k_toolbar_qbase_metric k_toolbar_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_toolbar_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback int32_t func(KToolBar* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_toolbar_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param painter QPainter*
///
void k_toolbar_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_toolbar_super_init_painter` instead
///
#define k_toolbar_qbase_init_painter k_toolbar_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param painter QPainter*
///
void k_toolbar_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QPainter* painter)
///
void k_toolbar_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param offset QPoint*
///
QPaintDevice* k_toolbar_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_toolbar_super_redirected` instead
///
#define k_toolbar_qbase_redirected k_toolbar_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param offset QPoint*
///
QPaintDevice* k_toolbar_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback QPaintDevice* func(KToolBar* self, QPoint* offset)
///
void k_toolbar_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
///
QPainter* k_toolbar_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_toolbar_super_shared_painter` instead
///
#define k_toolbar_qbase_shared_painter k_toolbar_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
///
QPainter* k_toolbar_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback QPainter* func()
///
void k_toolbar_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param param1 QInputMethodEvent*
///
void k_toolbar_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_toolbar_super_input_method_event` instead
///
#define k_toolbar_qbase_input_method_event k_toolbar_super_input_method_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param param1 QInputMethodEvent*
///
void k_toolbar_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QInputMethodEvent* param1)
///
void k_toolbar_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_toolbar_input_method_query(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_toolbar_super_input_method_query` instead
///
#define k_toolbar_qbase_input_method_query k_toolbar_super_input_method_query

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_toolbar_super_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback QVariant* func(KToolBar* self, enum Qt__InputMethodQuery param1)
///
void k_toolbar_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param next bool
///
bool k_toolbar_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `k_toolbar_super_focus_next_prev_child` instead
///
#define k_toolbar_qbase_focus_next_prev_child k_toolbar_super_focus_next_prev_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param next bool
///
bool k_toolbar_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback bool func(KToolBar* self, bool next)
///
void k_toolbar_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QTimerEvent*
///
void k_toolbar_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_timer_event` instead
///
#define k_toolbar_qbase_timer_event k_toolbar_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QTimerEvent*
///
void k_toolbar_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QTimerEvent* event)
///
void k_toolbar_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QChildEvent*
///
void k_toolbar_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_child_event` instead
///
#define k_toolbar_qbase_child_event k_toolbar_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QChildEvent*
///
void k_toolbar_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QChildEvent* event)
///
void k_toolbar_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param event QEvent*
///
void k_toolbar_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_toolbar_super_custom_event` instead
///
#define k_toolbar_qbase_custom_event k_toolbar_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param event QEvent*
///
void k_toolbar_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QEvent* event)
///
void k_toolbar_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param signal QMetaMethod*
///
void k_toolbar_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_toolbar_super_connect_notify` instead
///
#define k_toolbar_qbase_connect_notify k_toolbar_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param signal QMetaMethod*
///
void k_toolbar_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QMetaMethod* signal)
///
void k_toolbar_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param signal QMetaMethod*
///
void k_toolbar_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_toolbar_super_disconnect_notify` instead
///
#define k_toolbar_qbase_disconnect_notify k_toolbar_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param signal QMetaMethod*
///
void k_toolbar_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, QMetaMethod* signal)
///
void k_toolbar_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
///
void k_toolbar_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `k_toolbar_super_update_micro_focus` instead
///
#define k_toolbar_qbase_update_micro_focus k_toolbar_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
///
void k_toolbar_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func()
///
void k_toolbar_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
///
void k_toolbar_create(void* self);

/// @warning DEPRECATED: Use `k_toolbar_super_create` instead
///
#define k_toolbar_qbase_create k_toolbar_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
///
void k_toolbar_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func()
///
void k_toolbar_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
///
void k_toolbar_destroy(void* self);

/// @warning DEPRECATED: Use `k_toolbar_super_destroy` instead
///
#define k_toolbar_qbase_destroy k_toolbar_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
///
void k_toolbar_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback void func()
///
void k_toolbar_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
///
bool k_toolbar_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_toolbar_super_focus_next_child` instead
///
#define k_toolbar_qbase_focus_next_child k_toolbar_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
///
bool k_toolbar_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback bool func()
///
void k_toolbar_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
///
bool k_toolbar_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_toolbar_super_focus_previous_child` instead
///
#define k_toolbar_qbase_focus_previous_child k_toolbar_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
///
bool k_toolbar_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback bool func()
///
void k_toolbar_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
///
QObject* k_toolbar_sender(void* self);

/// @warning DEPRECATED: Use `k_toolbar_super_sender` instead
///
#define k_toolbar_qbase_sender k_toolbar_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
///
QObject* k_toolbar_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback QObject* func()
///
void k_toolbar_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
///
int32_t k_toolbar_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_toolbar_super_sender_signal_index` instead
///
#define k_toolbar_qbase_sender_signal_index k_toolbar_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
///
int32_t k_toolbar_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback int32_t func()
///
void k_toolbar_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param signal const char*
///
int32_t k_toolbar_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_toolbar_super_receivers` instead
///
#define k_toolbar_qbase_receivers k_toolbar_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param signal const char*
///
int32_t k_toolbar_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback int32_t func(KToolBar* self, const char* signal)
///
void k_toolbar_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param signal QMetaMethod*
///
bool k_toolbar_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_toolbar_super_is_signal_connected` instead
///
#define k_toolbar_qbase_is_signal_connected k_toolbar_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param signal QMetaMethod*
///
bool k_toolbar_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback bool func(KToolBar* self, QMetaMethod* signal)
///
void k_toolbar_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KToolBar*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_toolbar_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_toolbar_super_get_decoded_metric_f` instead
///
#define k_toolbar_qbase_get_decoded_metric_f k_toolbar_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KToolBar*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_toolbar_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KToolBar*
/// @param callback double func(KToolBar* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_toolbar_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KToolBar*
/// @param callback void func(KToolBar* self, const char* objectName)
///
void k_toolbar_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktoolbar.html#dtor.KToolBar)
///
/// Delete this object from C++ memory.
///
/// @param self KToolBar*
///
void k_toolbar_delete(void* self);

#endif
