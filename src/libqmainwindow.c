#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqdockwidget.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmenu.hpp"
#include "libqmenubar.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include "libqstatusbar.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqthread.hpp"
#include "libqtoolbar.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqmainwindow.hpp"
#include "libqmainwindow.h"

/// https://doc.qt.io/qt-6/qmainwindow.html

/// q_mainwindow_new constructs a new QMainWindow object.
///
/// ``` QWidget* parent ```
QMainWindow* q_mainwindow_new(void* parent) {
    return QMainWindow_new((QWidget*)parent);
}

/// q_mainwindow_new2 constructs a new QMainWindow object.
///
///
QMainWindow* q_mainwindow_new2() {
    return QMainWindow_new2();
}

/// q_mainwindow_new3 constructs a new QMainWindow object.
///
/// ``` QWidget* parent, int flags ```
QMainWindow* q_mainwindow_new3(void* parent, int64_t flags) {
    return QMainWindow_new3((QWidget*)parent, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMainWindow* self ```
QMetaObject* q_mainwindow_meta_object(void* self) {
    return QMainWindow_MetaObject((QMainWindow*)self);
}

/// ``` QMainWindow* self, const char* param1 ```
void* q_mainwindow_metacast(void* self, const char* param1) {
    return QMainWindow_Metacast((QMainWindow*)self, param1);
}

/// ``` QMainWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mainwindow_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMainWindow_Metacall((QMainWindow*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QMainWindow* self, int32_t (*slot)(QMainWindow*, enum QMetaObject__Call, int, void*) ```
void q_mainwindow_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QMainWindow_OnMetacall((QMainWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMainWindow* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mainwindow_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMainWindow_QBaseMetacall((QMainWindow*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mainwindow_tr(const char* s) {
    libqt_string _str = QMainWindow_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSize)
///
/// ``` QMainWindow* self ```
QSize* q_mainwindow_icon_size(void* self) {
    return QMainWindow_IconSize((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setIconSize)
///
/// ``` QMainWindow* self, QSize* iconSize ```
void q_mainwindow_set_icon_size(void* self, void* iconSize) {
    QMainWindow_SetIconSize((QMainWindow*)self, (QSize*)iconSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyle)
///
/// ``` QMainWindow* self ```
int64_t q_mainwindow_tool_button_style(void* self) {
    return QMainWindow_ToolButtonStyle((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setToolButtonStyle)
///
/// ``` QMainWindow* self, enum Qt__ToolButtonStyle toolButtonStyle ```
void q_mainwindow_set_tool_button_style(void* self, int64_t toolButtonStyle) {
    QMainWindow_SetToolButtonStyle((QMainWindow*)self, toolButtonStyle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isAnimated)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_animated(void* self) {
    return QMainWindow_IsAnimated((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isDockNestingEnabled)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_dock_nesting_enabled(void* self) {
    return QMainWindow_IsDockNestingEnabled((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#documentMode)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_document_mode(void* self) {
    return QMainWindow_DocumentMode((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDocumentMode)
///
/// ``` QMainWindow* self, bool enabled ```
void q_mainwindow_set_document_mode(void* self, bool enabled) {
    QMainWindow_SetDocumentMode((QMainWindow*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabShape)
///
/// ``` QMainWindow* self ```
int64_t q_mainwindow_tab_shape(void* self) {
    return QMainWindow_TabShape((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setTabShape)
///
/// ``` QMainWindow* self, enum QTabWidget__TabShape tabShape ```
void q_mainwindow_set_tab_shape(void* self, int64_t tabShape) {
    QMainWindow_SetTabShape((QMainWindow*)self, tabShape);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabPosition)
///
/// ``` QMainWindow* self, enum Qt__DockWidgetArea area ```
int64_t q_mainwindow_tab_position(void* self, int64_t area) {
    return QMainWindow_TabPosition((QMainWindow*)self, area);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setTabPosition)
///
/// ``` QMainWindow* self, int areas, enum QTabWidget__TabPosition tabPosition ```
void q_mainwindow_set_tab_position(void* self, int64_t areas, int64_t tabPosition) {
    QMainWindow_SetTabPosition((QMainWindow*)self, areas, tabPosition);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDockOptions)
///
/// ``` QMainWindow* self, int options ```
void q_mainwindow_set_dock_options(void* self, int64_t options) {
    QMainWindow_SetDockOptions((QMainWindow*)self, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#dockOptions)
///
/// ``` QMainWindow* self ```
int64_t q_mainwindow_dock_options(void* self) {
    return QMainWindow_DockOptions((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isSeparator)
///
/// ``` QMainWindow* self, QPoint* pos ```
bool q_mainwindow_is_separator(void* self, void* pos) {
    return QMainWindow_IsSeparator((QMainWindow*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#menuBar)
///
/// ``` QMainWindow* self ```
QMenuBar* q_mainwindow_menu_bar(void* self) {
    return QMainWindow_MenuBar((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setMenuBar)
///
/// ``` QMainWindow* self, QMenuBar* menubar ```
void q_mainwindow_set_menu_bar(void* self, void* menubar) {
    QMainWindow_SetMenuBar((QMainWindow*)self, (QMenuBar*)menubar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#menuWidget)
///
/// ``` QMainWindow* self ```
QWidget* q_mainwindow_menu_widget(void* self) {
    return QMainWindow_MenuWidget((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setMenuWidget)
///
/// ``` QMainWindow* self, QWidget* menubar ```
void q_mainwindow_set_menu_widget(void* self, void* menubar) {
    QMainWindow_SetMenuWidget((QMainWindow*)self, (QWidget*)menubar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#statusBar)
///
/// ``` QMainWindow* self ```
QStatusBar* q_mainwindow_status_bar(void* self) {
    return QMainWindow_StatusBar((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setStatusBar)
///
/// ``` QMainWindow* self, QStatusBar* statusbar ```
void q_mainwindow_set_status_bar(void* self, void* statusbar) {
    QMainWindow_SetStatusBar((QMainWindow*)self, (QStatusBar*)statusbar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#centralWidget)
///
/// ``` QMainWindow* self ```
QWidget* q_mainwindow_central_widget(void* self) {
    return QMainWindow_CentralWidget((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setCentralWidget)
///
/// ``` QMainWindow* self, QWidget* widget ```
void q_mainwindow_set_central_widget(void* self, void* widget) {
    QMainWindow_SetCentralWidget((QMainWindow*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#takeCentralWidget)
///
/// ``` QMainWindow* self ```
QWidget* q_mainwindow_take_central_widget(void* self) {
    return QMainWindow_TakeCentralWidget((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setCorner)
///
/// ``` QMainWindow* self, enum Qt__Corner corner, enum Qt__DockWidgetArea area ```
void q_mainwindow_set_corner(void* self, int64_t corner, int64_t area) {
    QMainWindow_SetCorner((QMainWindow*)self, corner, area);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#corner)
///
/// ``` QMainWindow* self, enum Qt__Corner corner ```
int64_t q_mainwindow_corner(void* self, int64_t corner) {
    return QMainWindow_Corner((QMainWindow*)self, corner);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
///
/// ``` QMainWindow* self ```
void q_mainwindow_add_tool_bar_break(void* self) {
    QMainWindow_AddToolBarBreak((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBarBreak)
///
/// ``` QMainWindow* self, QToolBar* before ```
void q_mainwindow_insert_tool_bar_break(void* self, void* before) {
    QMainWindow_InsertToolBarBreak((QMainWindow*)self, (QToolBar*)before);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// ``` QMainWindow* self, enum Qt__ToolBarArea area, QToolBar* toolbar ```
void q_mainwindow_add_tool_bar(void* self, int64_t area, void* toolbar) {
    QMainWindow_AddToolBar((QMainWindow*)self, area, (QToolBar*)toolbar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// ``` QMainWindow* self, QToolBar* toolbar ```
void q_mainwindow_add_tool_bar_with_toolbar(void* self, void* toolbar) {
    QMainWindow_AddToolBarWithToolbar((QMainWindow*)self, (QToolBar*)toolbar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
///
/// ``` QMainWindow* self, const char* title ```
QToolBar* q_mainwindow_add_tool_bar_with_title(void* self, const char* title) {
    return QMainWindow_AddToolBarWithTitle((QMainWindow*)self, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBar)
///
/// ``` QMainWindow* self, QToolBar* before, QToolBar* toolbar ```
void q_mainwindow_insert_tool_bar(void* self, void* before, void* toolbar) {
    QMainWindow_InsertToolBar((QMainWindow*)self, (QToolBar*)before, (QToolBar*)toolbar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBar)
///
/// ``` QMainWindow* self, QToolBar* toolbar ```
void q_mainwindow_remove_tool_bar(void* self, void* toolbar) {
    QMainWindow_RemoveToolBar((QMainWindow*)self, (QToolBar*)toolbar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBarBreak)
///
/// ``` QMainWindow* self, QToolBar* before ```
void q_mainwindow_remove_tool_bar_break(void* self, void* before) {
    QMainWindow_RemoveToolBarBreak((QMainWindow*)self, (QToolBar*)before);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#unifiedTitleAndToolBarOnMac)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_unified_title_and_tool_bar_on_mac(void* self) {
    return QMainWindow_UnifiedTitleAndToolBarOnMac((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolBarArea)
///
/// ``` QMainWindow* self, QToolBar* toolbar ```
int64_t q_mainwindow_tool_bar_area(void* self, void* toolbar) {
    return QMainWindow_ToolBarArea((QMainWindow*)self, (QToolBar*)toolbar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolBarBreak)
///
/// ``` QMainWindow* self, QToolBar* toolbar ```
bool q_mainwindow_tool_bar_break(void* self, void* toolbar) {
    return QMainWindow_ToolBarBreak((QMainWindow*)self, (QToolBar*)toolbar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
///
/// ``` QMainWindow* self, enum Qt__DockWidgetArea area, QDockWidget* dockwidget ```
void q_mainwindow_add_dock_widget(void* self, int64_t area, void* dockwidget) {
    QMainWindow_AddDockWidget((QMainWindow*)self, area, (QDockWidget*)dockwidget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
///
/// ``` QMainWindow* self, enum Qt__DockWidgetArea area, QDockWidget* dockwidget, enum Qt__Orientation orientation ```
void q_mainwindow_add_dock_widget2(void* self, int64_t area, void* dockwidget, int64_t orientation) {
    QMainWindow_AddDockWidget2((QMainWindow*)self, area, (QDockWidget*)dockwidget, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#splitDockWidget)
///
/// ``` QMainWindow* self, QDockWidget* after, QDockWidget* dockwidget, enum Qt__Orientation orientation ```
void q_mainwindow_split_dock_widget(void* self, void* after, void* dockwidget, int64_t orientation) {
    QMainWindow_SplitDockWidget((QMainWindow*)self, (QDockWidget*)after, (QDockWidget*)dockwidget, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifyDockWidget)
///
/// ``` QMainWindow* self, QDockWidget* first, QDockWidget* second ```
void q_mainwindow_tabify_dock_widget(void* self, void* first, void* second) {
    QMainWindow_TabifyDockWidget((QMainWindow*)self, (QDockWidget*)first, (QDockWidget*)second);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgets)
///
/// ``` QMainWindow* self, QDockWidget* dockwidget ```
libqt_list /* of QDockWidget* */ q_mainwindow_tabified_dock_widgets(void* self, void* dockwidget) {
    libqt_list _arr = QMainWindow_TabifiedDockWidgets((QMainWindow*)self, (QDockWidget*)dockwidget);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeDockWidget)
///
/// ``` QMainWindow* self, QDockWidget* dockwidget ```
void q_mainwindow_remove_dock_widget(void* self, void* dockwidget) {
    QMainWindow_RemoveDockWidget((QMainWindow*)self, (QDockWidget*)dockwidget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreDockWidget)
///
/// ``` QMainWindow* self, QDockWidget* dockwidget ```
bool q_mainwindow_restore_dock_widget(void* self, void* dockwidget) {
    return QMainWindow_RestoreDockWidget((QMainWindow*)self, (QDockWidget*)dockwidget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#dockWidgetArea)
///
/// ``` QMainWindow* self, QDockWidget* dockwidget ```
int64_t q_mainwindow_dock_widget_area(void* self, void* dockwidget) {
    return QMainWindow_DockWidgetArea((QMainWindow*)self, (QDockWidget*)dockwidget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#resizeDocks)
///
/// ``` QMainWindow* self, QDockWidget* docks[], int* sizes[], enum Qt__Orientation orientation ```
void q_mainwindow_resize_docks(void* self, void* docks[], int* sizes[], int64_t orientation) {
    QDockWidget** docks_arr = (QDockWidget**)docks;
    size_t docks_len = 0;
    while (docks_arr[docks_len] != NULL) {
        docks_len++;
    }
    libqt_list docks_list = {
        .len = docks_len,
        .data = {(QDockWidget*)docks},
    };
    size_t sizes_len = 0;
    while (sizes[sizes_len] != NULL) {
        sizes_len++;
    }
    libqt_list sizes_list = {
        .len = sizes_len,
        .data = {(int*)sizes},
    };
    QMainWindow_ResizeDocks((QMainWindow*)self, docks_list, sizes_list, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
///
/// ``` QMainWindow* self ```
char* q_mainwindow_save_state(void* self) {
    libqt_string _str = QMainWindow_SaveState((QMainWindow*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
///
/// ``` QMainWindow* self, const char* state ```
bool q_mainwindow_restore_state(void* self, const char* state) {
    return QMainWindow_RestoreState((QMainWindow*)self, qstring(state));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
///
/// ``` QMainWindow* self ```
QMenu* q_mainwindow_create_popup_menu(void* self) {
    return QMainWindow_CreatePopupMenu((QMainWindow*)self);
}

/// Allows for overriding the related default method
///
/// ``` QMainWindow* self, QMenu* (*slot)() ```
void q_mainwindow_on_create_popup_menu(void* self, QMenu* (*slot)()) {
    QMainWindow_OnCreatePopupMenu((QMainWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMainWindow* self ```
QMenu* q_mainwindow_qbase_create_popup_menu(void* self) {
    return QMainWindow_QBaseCreatePopupMenu((QMainWindow*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setAnimated)
///
/// ``` QMainWindow* self, bool enabled ```
void q_mainwindow_set_animated(void* self, bool enabled) {
    QMainWindow_SetAnimated((QMainWindow*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDockNestingEnabled)
///
/// ``` QMainWindow* self, bool enabled ```
void q_mainwindow_set_dock_nesting_enabled(void* self, bool enabled) {
    QMainWindow_SetDockNestingEnabled((QMainWindow*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setUnifiedTitleAndToolBarOnMac)
///
/// ``` QMainWindow* self, bool set ```
void q_mainwindow_set_unified_title_and_tool_bar_on_mac(void* self, bool set) {
    QMainWindow_SetUnifiedTitleAndToolBarOnMac((QMainWindow*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
///
/// ``` QMainWindow* self, QSize* iconSize ```
void q_mainwindow_icon_size_changed(void* self, void* iconSize) {
    QMainWindow_IconSizeChanged((QMainWindow*)self, (QSize*)iconSize);
}

/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QSize*) ```
void q_mainwindow_on_icon_size_changed(void* self, void (*slot)(void*, void*)) {
    QMainWindow_Connect_IconSizeChanged((QMainWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
///
/// ``` QMainWindow* self, enum Qt__ToolButtonStyle toolButtonStyle ```
void q_mainwindow_tool_button_style_changed(void* self, int64_t toolButtonStyle) {
    QMainWindow_ToolButtonStyleChanged((QMainWindow*)self, toolButtonStyle);
}

/// ``` QMainWindow* self, void (*slot)(QMainWindow*, enum Qt__ToolButtonStyle) ```
void q_mainwindow_on_tool_button_style_changed(void* self, void (*slot)(void*, int64_t)) {
    QMainWindow_Connect_ToolButtonStyleChanged((QMainWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
///
/// ``` QMainWindow* self, QDockWidget* dockWidget ```
void q_mainwindow_tabified_dock_widget_activated(void* self, void* dockWidget) {
    QMainWindow_TabifiedDockWidgetActivated((QMainWindow*)self, (QDockWidget*)dockWidget);
}

/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QDockWidget*) ```
void q_mainwindow_on_tabified_dock_widget_activated(void* self, void (*slot)(void*, void*)) {
    QMainWindow_Connect_TabifiedDockWidgetActivated((QMainWindow*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
///
/// ``` QMainWindow* self, QContextMenuEvent* event ```
void q_mainwindow_context_menu_event(void* self, void* event) {
    QMainWindow_ContextMenuEvent((QMainWindow*)self, (QContextMenuEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QContextMenuEvent*) ```
void q_mainwindow_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnContextMenuEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMainWindow* self, QContextMenuEvent* event ```
void q_mainwindow_qbase_context_menu_event(void* self, void* event) {
    QMainWindow_QBaseContextMenuEvent((QMainWindow*)self, (QContextMenuEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#event)
///
/// ``` QMainWindow* self, QEvent* event ```
bool q_mainwindow_event(void* self, void* event) {
    return QMainWindow_Event((QMainWindow*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QMainWindow* self, bool (*slot)(QMainWindow*, QEvent*) ```
void q_mainwindow_on_event(void* self, bool (*slot)(void*, void*)) {
    QMainWindow_OnEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMainWindow* self, QEvent* event ```
bool q_mainwindow_qbase_event(void* self, void* event) {
    return QMainWindow_QBaseEvent((QMainWindow*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mainwindow_tr2(const char* s, const char* c) {
    libqt_string _str = QMainWindow_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mainwindow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMainWindow_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
///
/// ``` QMainWindow* self, enum Qt__ToolBarArea area ```
void q_mainwindow_add_tool_bar_break1(void* self, int64_t area) {
    QMainWindow_AddToolBarBreak1((QMainWindow*)self, area);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
///
/// ``` QMainWindow* self, int version ```
char* q_mainwindow_save_state1(void* self, int version) {
    libqt_string _str = QMainWindow_SaveState1((QMainWindow*)self, version);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
///
/// ``` QMainWindow* self, const char* state, int version ```
bool q_mainwindow_restore_state2(void* self, const char* state, int version) {
    return QMainWindow_RestoreState2((QMainWindow*)self, qstring(state), version);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QMainWindow* self ```
uintptr_t q_mainwindow_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QMainWindow* self ```
void q_mainwindow_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QMainWindow* self ```
uintptr_t q_mainwindow_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QMainWindow* self ```
uintptr_t q_mainwindow_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QMainWindow* self ```
QStyle* q_mainwindow_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QMainWindow* self, QStyle* style ```
void q_mainwindow_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QMainWindow* self ```
int64_t q_mainwindow_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QMainWindow* self, enum Qt__WindowModality windowModality ```
void q_mainwindow_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QMainWindow* self, QWidget* param1 ```
bool q_mainwindow_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QMainWindow* self, bool enabled ```
void q_mainwindow_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QMainWindow* self, bool disabled ```
void q_mainwindow_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QMainWindow* self, bool windowModified ```
void q_mainwindow_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QMainWindow* self ```
QRect* q_mainwindow_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QMainWindow* self ```
QRect* q_mainwindow_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QMainWindow* self ```
QRect* q_mainwindow_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QMainWindow* self ```
QPoint* q_mainwindow_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QMainWindow* self ```
QSize* q_mainwindow_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QMainWindow* self ```
QSize* q_mainwindow_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QMainWindow* self ```
QRect* q_mainwindow_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QMainWindow* self ```
QRect* q_mainwindow_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QMainWindow* self ```
QRegion* q_mainwindow_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QMainWindow* self ```
QSize* q_mainwindow_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QMainWindow* self ```
QSize* q_mainwindow_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMainWindow* self, QSize* minimumSize ```
void q_mainwindow_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMainWindow* self, int minw, int minh ```
void q_mainwindow_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMainWindow* self, QSize* maximumSize ```
void q_mainwindow_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMainWindow* self, int maxw, int maxh ```
void q_mainwindow_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QMainWindow* self, int minw ```
void q_mainwindow_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QMainWindow* self, int minh ```
void q_mainwindow_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QMainWindow* self, int maxw ```
void q_mainwindow_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QMainWindow* self, int maxh ```
void q_mainwindow_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QMainWindow* self ```
QSize* q_mainwindow_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMainWindow* self, QSize* sizeIncrement ```
void q_mainwindow_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMainWindow* self, int w, int h ```
void q_mainwindow_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QMainWindow* self ```
QSize* q_mainwindow_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMainWindow* self, QSize* baseSize ```
void q_mainwindow_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMainWindow* self, int basew, int baseh ```
void q_mainwindow_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMainWindow* self, QSize* fixedSize ```
void q_mainwindow_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMainWindow* self, int w, int h ```
void q_mainwindow_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QMainWindow* self, int w ```
void q_mainwindow_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QMainWindow* self, int h ```
void q_mainwindow_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMainWindow* self, QPointF* param1 ```
QPointF* q_mainwindow_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMainWindow* self, QPoint* param1 ```
QPoint* q_mainwindow_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMainWindow* self, QPointF* param1 ```
QPointF* q_mainwindow_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMainWindow* self, QPoint* param1 ```
QPoint* q_mainwindow_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMainWindow* self, QPointF* param1 ```
QPointF* q_mainwindow_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMainWindow* self, QPoint* param1 ```
QPoint* q_mainwindow_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMainWindow* self, QPointF* param1 ```
QPointF* q_mainwindow_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMainWindow* self, QPoint* param1 ```
QPoint* q_mainwindow_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMainWindow* self, QWidget* param1, QPointF* param2 ```
QPointF* q_mainwindow_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMainWindow* self, QWidget* param1, QPoint* param2 ```
QPoint* q_mainwindow_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMainWindow* self, QWidget* param1, QPointF* param2 ```
QPointF* q_mainwindow_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMainWindow* self, QWidget* param1, QPoint* param2 ```
QPoint* q_mainwindow_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QMainWindow* self ```
QWidget* q_mainwindow_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QMainWindow* self ```
QWidget* q_mainwindow_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QMainWindow* self ```
QWidget* q_mainwindow_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QMainWindow* self ```
QPalette* q_mainwindow_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QMainWindow* self, QPalette* palette ```
void q_mainwindow_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QMainWindow* self, enum QPalette__ColorRole backgroundRole ```
void q_mainwindow_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QMainWindow* self ```
int64_t q_mainwindow_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QMainWindow* self, enum QPalette__ColorRole foregroundRole ```
void q_mainwindow_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QMainWindow* self ```
int64_t q_mainwindow_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QMainWindow* self ```
QFont* q_mainwindow_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QMainWindow* self, QFont* font ```
void q_mainwindow_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QMainWindow* self ```
QFontMetrics* q_mainwindow_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QMainWindow* self ```
QFontInfo* q_mainwindow_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QMainWindow* self ```
QCursor* q_mainwindow_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QMainWindow* self, QCursor* cursor ```
void q_mainwindow_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QMainWindow* self ```
void q_mainwindow_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QMainWindow* self, bool enable ```
void q_mainwindow_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QMainWindow* self, bool enable ```
void q_mainwindow_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMainWindow* self, QBitmap* mask ```
void q_mainwindow_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMainWindow* self, QRegion* mask ```
void q_mainwindow_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QMainWindow* self ```
QRegion* q_mainwindow_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QMainWindow* self ```
void q_mainwindow_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMainWindow* self, QPaintDevice* target ```
void q_mainwindow_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMainWindow* self, QPainter* painter ```
void q_mainwindow_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMainWindow* self ```
QPixmap* q_mainwindow_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QMainWindow* self ```
QGraphicsEffect* q_mainwindow_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QMainWindow* self, QGraphicsEffect* effect ```
void q_mainwindow_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMainWindow* self, enum Qt__GestureType typeVal ```
void q_mainwindow_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QMainWindow* self, enum Qt__GestureType typeVal ```
void q_mainwindow_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QMainWindow* self, const char* windowTitle ```
void q_mainwindow_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QMainWindow* self, const char* styleSheet ```
void q_mainwindow_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QMainWindow* self ```
const char* q_mainwindow_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QMainWindow* self ```
const char* q_mainwindow_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QMainWindow* self, QIcon* icon ```
void q_mainwindow_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QMainWindow* self ```
QIcon* q_mainwindow_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QMainWindow* self, const char* windowIconText ```
void q_mainwindow_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QMainWindow* self ```
const char* q_mainwindow_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QMainWindow* self, const char* windowRole ```
void q_mainwindow_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QMainWindow* self ```
const char* q_mainwindow_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QMainWindow* self, const char* filePath ```
void q_mainwindow_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QMainWindow* self ```
const char* q_mainwindow_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QMainWindow* self, double level ```
void q_mainwindow_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QMainWindow* self ```
double q_mainwindow_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QMainWindow* self, const char* toolTip ```
void q_mainwindow_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QMainWindow* self ```
const char* q_mainwindow_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QMainWindow* self, int msec ```
void q_mainwindow_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QMainWindow* self, const char* statusTip ```
void q_mainwindow_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QMainWindow* self ```
const char* q_mainwindow_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QMainWindow* self, const char* whatsThis ```
void q_mainwindow_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QMainWindow* self ```
const char* q_mainwindow_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QMainWindow* self ```
const char* q_mainwindow_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QMainWindow* self, const char* name ```
void q_mainwindow_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QMainWindow* self ```
const char* q_mainwindow_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QMainWindow* self, const char* description ```
void q_mainwindow_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QMainWindow* self, enum Qt__LayoutDirection direction ```
void q_mainwindow_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QMainWindow* self ```
int64_t q_mainwindow_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QMainWindow* self ```
void q_mainwindow_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QMainWindow* self, QLocale* locale ```
void q_mainwindow_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QMainWindow* self ```
QLocale* q_mainwindow_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QMainWindow* self ```
void q_mainwindow_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMainWindow* self ```
void q_mainwindow_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QMainWindow* self ```
void q_mainwindow_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QMainWindow* self ```
void q_mainwindow_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMainWindow* self, enum Qt__FocusReason reason ```
void q_mainwindow_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QMainWindow* self ```
int64_t q_mainwindow_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QMainWindow* self, enum Qt__FocusPolicy policy ```
void q_mainwindow_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_mainwindow_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QMainWindow* self, QWidget* focusProxy ```
void q_mainwindow_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QMainWindow* self ```
QWidget* q_mainwindow_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QMainWindow* self ```
int64_t q_mainwindow_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QMainWindow* self, enum Qt__ContextMenuPolicy policy ```
void q_mainwindow_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMainWindow* self ```
void q_mainwindow_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMainWindow* self, QCursor* param1 ```
void q_mainwindow_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QMainWindow* self ```
void q_mainwindow_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QMainWindow* self ```
void q_mainwindow_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QMainWindow* self ```
void q_mainwindow_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMainWindow* self, QKeySequence* key ```
int32_t q_mainwindow_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QMainWindow* self, int id ```
void q_mainwindow_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMainWindow* self, int id ```
void q_mainwindow_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMainWindow* self, int id ```
void q_mainwindow_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_mainwindow_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_mainwindow_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QMainWindow* self, bool enable ```
void q_mainwindow_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QMainWindow* self ```
QGraphicsProxyWidget* q_mainwindow_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMainWindow* self ```
void q_mainwindow_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMainWindow* self ```
void q_mainwindow_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMainWindow* self, int x, int y, int w, int h ```
void q_mainwindow_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMainWindow* self, QRect* param1 ```
void q_mainwindow_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMainWindow* self, QRegion* param1 ```
void q_mainwindow_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMainWindow* self, int x, int y, int w, int h ```
void q_mainwindow_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMainWindow* self, QRect* param1 ```
void q_mainwindow_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMainWindow* self, QRegion* param1 ```
void q_mainwindow_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QMainWindow* self, bool hidden ```
void q_mainwindow_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QMainWindow* self ```
void q_mainwindow_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QMainWindow* self ```
void q_mainwindow_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QMainWindow* self ```
void q_mainwindow_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QMainWindow* self ```
void q_mainwindow_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QMainWindow* self ```
void q_mainwindow_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QMainWindow* self ```
void q_mainwindow_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QMainWindow* self ```
void q_mainwindow_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QMainWindow* self ```
void q_mainwindow_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QMainWindow* self, QWidget* param1 ```
void q_mainwindow_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMainWindow* self, int x, int y ```
void q_mainwindow_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMainWindow* self, QPoint* param1 ```
void q_mainwindow_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMainWindow* self, int w, int h ```
void q_mainwindow_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMainWindow* self, QSize* param1 ```
void q_mainwindow_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMainWindow* self, int x, int y, int w, int h ```
void q_mainwindow_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMainWindow* self, QRect* geometry ```
void q_mainwindow_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QMainWindow* self ```
char* q_mainwindow_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QMainWindow* self, const char* geometry ```
bool q_mainwindow_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QMainWindow* self ```
void q_mainwindow_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QMainWindow* self, QWidget* param1 ```
bool q_mainwindow_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QMainWindow* self ```
int64_t q_mainwindow_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QMainWindow* self, int state ```
void q_mainwindow_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QMainWindow* self, int state ```
void q_mainwindow_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QMainWindow* self ```
QSizePolicy* q_mainwindow_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMainWindow* self, QSizePolicy* sizePolicy ```
void q_mainwindow_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMainWindow* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_mainwindow_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QMainWindow* self ```
QRegion* q_mainwindow_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMainWindow* self, int left, int top, int right, int bottom ```
void q_mainwindow_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMainWindow* self, QMargins* margins ```
void q_mainwindow_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QMainWindow* self ```
QMargins* q_mainwindow_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QMainWindow* self ```
QRect* q_mainwindow_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QMainWindow* self ```
QLayout* q_mainwindow_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QMainWindow* self, QLayout* layout ```
void q_mainwindow_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QMainWindow* self ```
void q_mainwindow_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMainWindow* self, QWidget* parent ```
void q_mainwindow_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMainWindow* self, QWidget* parent, int f ```
void q_mainwindow_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMainWindow* self, int dx, int dy ```
void q_mainwindow_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMainWindow* self, int dx, int dy, QRect* param3 ```
void q_mainwindow_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QMainWindow* self ```
QWidget* q_mainwindow_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QMainWindow* self ```
QWidget* q_mainwindow_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QMainWindow* self ```
QWidget* q_mainwindow_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QMainWindow* self, bool on ```
void q_mainwindow_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMainWindow* self, QAction* action ```
void q_mainwindow_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QMainWindow* self, QAction* actions[] ```
void q_mainwindow_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QMainWindow* self, QAction* before, QAction* actions[] ```
void q_mainwindow_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QMainWindow* self, QAction* before, QAction* action ```
void q_mainwindow_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QMainWindow* self, QAction* action ```
void q_mainwindow_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QMainWindow* self ```
libqt_list /* of QAction* */ q_mainwindow_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMainWindow* self, const char* text ```
QAction* q_mainwindow_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMainWindow* self, QIcon* icon, const char* text ```
QAction* q_mainwindow_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMainWindow* self, const char* text, QKeySequence* shortcut ```
QAction* q_mainwindow_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMainWindow* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_mainwindow_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QMainWindow* self ```
QWidget* q_mainwindow_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QMainWindow* self, int typeVal ```
void q_mainwindow_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QMainWindow* self ```
int64_t q_mainwindow_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMainWindow* self, enum Qt__WindowType param1 ```
void q_mainwindow_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QMainWindow* self, int typeVal ```
void q_mainwindow_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QMainWindow* self ```
int64_t q_mainwindow_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_mainwindow_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMainWindow* self, int x, int y ```
QWidget* q_mainwindow_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMainWindow* self, QPoint* p ```
QWidget* q_mainwindow_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMainWindow* self, enum Qt__WidgetAttribute param1 ```
void q_mainwindow_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QMainWindow* self, enum Qt__WidgetAttribute param1 ```
bool q_mainwindow_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QMainWindow* self ```
void q_mainwindow_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QMainWindow* self, QWidget* child ```
bool q_mainwindow_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QMainWindow* self, bool enabled ```
void q_mainwindow_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QMainWindow* self ```
QBackingStore* q_mainwindow_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QMainWindow* self ```
QWindow* q_mainwindow_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QMainWindow* self ```
QScreen* q_mainwindow_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QMainWindow* self, QScreen* screen ```
void q_mainwindow_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_mainwindow_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QMainWindow* self, const char* title ```
void q_mainwindow_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QMainWindow* self, void (*slot)(QWidget*, const char*) ```
void q_mainwindow_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QMainWindow* self, QIcon* icon ```
void q_mainwindow_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QMainWindow* self, void (*slot)(QWidget*, QIcon*) ```
void q_mainwindow_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QMainWindow* self, const char* iconText ```
void q_mainwindow_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QMainWindow* self, void (*slot)(QWidget*, const char*) ```
void q_mainwindow_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QMainWindow* self, QPoint* pos ```
void q_mainwindow_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QMainWindow* self, void (*slot)(QWidget*, QPoint*) ```
void q_mainwindow_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QMainWindow* self ```
int64_t q_mainwindow_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QMainWindow* self, int hints ```
void q_mainwindow_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMainWindow* self, QPaintDevice* target, QPoint* targetOffset ```
void q_mainwindow_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMainWindow* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_mainwindow_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMainWindow* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_mainwindow_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMainWindow* self, QPainter* painter, QPoint* targetOffset ```
void q_mainwindow_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMainWindow* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_mainwindow_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMainWindow* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_mainwindow_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMainWindow* self, QRect* rectangle ```
QPixmap* q_mainwindow_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMainWindow* self, enum Qt__GestureType typeVal, int flags ```
void q_mainwindow_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMainWindow* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_mainwindow_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMainWindow* self, int id, bool enable ```
void q_mainwindow_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMainWindow* self, int id, bool enable ```
void q_mainwindow_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMainWindow* self, enum Qt__WindowType param1, bool on ```
void q_mainwindow_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMainWindow* self, enum Qt__WidgetAttribute param1, bool on ```
void q_mainwindow_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_mainwindow_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_mainwindow_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMainWindow* self ```
const char* q_mainwindow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMainWindow* self, const char* name ```
void q_mainwindow_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMainWindow* self, bool b ```
bool q_mainwindow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMainWindow* self ```
QThread* q_mainwindow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMainWindow* self, QThread* thread ```
void q_mainwindow_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMainWindow* self, int interval ```
int32_t q_mainwindow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMainWindow* self, int id ```
void q_mainwindow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMainWindow* self ```
libqt_list /* of QObject* */ q_mainwindow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMainWindow* self, QObject* filterObj ```
void q_mainwindow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMainWindow* self, QObject* obj ```
void q_mainwindow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mainwindow_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMainWindow* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mainwindow_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mainwindow_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mainwindow_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMainWindow* self ```
void q_mainwindow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMainWindow* self ```
void q_mainwindow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMainWindow* self, const char* name, QVariant* value ```
bool q_mainwindow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMainWindow* self, const char* name ```
QVariant* q_mainwindow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMainWindow* self ```
const char** q_mainwindow_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMainWindow* self ```
QBindingStorage* q_mainwindow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMainWindow* self ```
QBindingStorage* q_mainwindow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMainWindow* self ```
void q_mainwindow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QMainWindow* self, void (*slot)(QObject*) ```
void q_mainwindow_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMainWindow* self ```
QObject* q_mainwindow_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMainWindow* self, const char* classname ```
bool q_mainwindow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMainWindow* self ```
void q_mainwindow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMainWindow* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mainwindow_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mainwindow_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMainWindow* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mainwindow_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMainWindow* self, QObject* param1 ```
void q_mainwindow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QMainWindow* self, void (*slot)(QObject*, QObject*) ```
void q_mainwindow_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QMainWindow* self ```
bool q_mainwindow_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QMainWindow* self ```
double q_mainwindow_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QMainWindow* self ```
double q_mainwindow_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_mainwindow_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_dev_type(void* self) {
    return QMainWindow_DevType((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_qbase_dev_type(void* self) {
    return QMainWindow_QBaseDevType((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, int32_t (*slot)() ```
void q_mainwindow_on_dev_type(void* self, int32_t (*slot)()) {
    QMainWindow_OnDevType((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, bool visible ```
void q_mainwindow_set_visible(void* self, bool visible) {
    QMainWindow_SetVisible((QMainWindow*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, bool visible ```
void q_mainwindow_qbase_set_visible(void* self, bool visible) {
    QMainWindow_QBaseSetVisible((QMainWindow*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, bool) ```
void q_mainwindow_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QMainWindow_OnSetVisible((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self ```
QSize* q_mainwindow_size_hint(void* self) {
    return QMainWindow_SizeHint((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self ```
QSize* q_mainwindow_qbase_size_hint(void* self) {
    return QMainWindow_QBaseSizeHint((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, QSize* (*slot)() ```
void q_mainwindow_on_size_hint(void* self, QSize* (*slot)()) {
    QMainWindow_OnSizeHint((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self ```
QSize* q_mainwindow_minimum_size_hint(void* self) {
    return QMainWindow_MinimumSizeHint((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self ```
QSize* q_mainwindow_qbase_minimum_size_hint(void* self) {
    return QMainWindow_QBaseMinimumSizeHint((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, QSize* (*slot)() ```
void q_mainwindow_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QMainWindow_OnMinimumSizeHint((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, int param1 ```
int32_t q_mainwindow_height_for_width(void* self, int param1) {
    return QMainWindow_HeightForWidth((QMainWindow*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, int param1 ```
int32_t q_mainwindow_qbase_height_for_width(void* self, int param1) {
    return QMainWindow_QBaseHeightForWidth((QMainWindow*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, int32_t (*slot)(QMainWindow*, int) ```
void q_mainwindow_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QMainWindow_OnHeightForWidth((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self ```
bool q_mainwindow_has_height_for_width(void* self) {
    return QMainWindow_HasHeightForWidth((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self ```
bool q_mainwindow_qbase_has_height_for_width(void* self) {
    return QMainWindow_QBaseHasHeightForWidth((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, bool (*slot)() ```
void q_mainwindow_on_has_height_for_width(void* self, bool (*slot)()) {
    QMainWindow_OnHasHeightForWidth((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self ```
QPaintEngine* q_mainwindow_paint_engine(void* self) {
    return QMainWindow_PaintEngine((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self ```
QPaintEngine* q_mainwindow_qbase_paint_engine(void* self) {
    return QMainWindow_QBasePaintEngine((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, QPaintEngine* (*slot)() ```
void q_mainwindow_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QMainWindow_OnPaintEngine((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QMouseEvent* event ```
void q_mainwindow_mouse_press_event(void* self, void* event) {
    QMainWindow_MousePressEvent((QMainWindow*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QMouseEvent* event ```
void q_mainwindow_qbase_mouse_press_event(void* self, void* event) {
    QMainWindow_QBaseMousePressEvent((QMainWindow*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QMouseEvent*) ```
void q_mainwindow_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnMousePressEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QMouseEvent* event ```
void q_mainwindow_mouse_release_event(void* self, void* event) {
    QMainWindow_MouseReleaseEvent((QMainWindow*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QMouseEvent* event ```
void q_mainwindow_qbase_mouse_release_event(void* self, void* event) {
    QMainWindow_QBaseMouseReleaseEvent((QMainWindow*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QMouseEvent*) ```
void q_mainwindow_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnMouseReleaseEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QMouseEvent* event ```
void q_mainwindow_mouse_double_click_event(void* self, void* event) {
    QMainWindow_MouseDoubleClickEvent((QMainWindow*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QMouseEvent* event ```
void q_mainwindow_qbase_mouse_double_click_event(void* self, void* event) {
    QMainWindow_QBaseMouseDoubleClickEvent((QMainWindow*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QMouseEvent*) ```
void q_mainwindow_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnMouseDoubleClickEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QMouseEvent* event ```
void q_mainwindow_mouse_move_event(void* self, void* event) {
    QMainWindow_MouseMoveEvent((QMainWindow*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QMouseEvent* event ```
void q_mainwindow_qbase_mouse_move_event(void* self, void* event) {
    QMainWindow_QBaseMouseMoveEvent((QMainWindow*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QMouseEvent*) ```
void q_mainwindow_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnMouseMoveEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QWheelEvent* event ```
void q_mainwindow_wheel_event(void* self, void* event) {
    QMainWindow_WheelEvent((QMainWindow*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QWheelEvent* event ```
void q_mainwindow_qbase_wheel_event(void* self, void* event) {
    QMainWindow_QBaseWheelEvent((QMainWindow*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QWheelEvent*) ```
void q_mainwindow_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnWheelEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QKeyEvent* event ```
void q_mainwindow_key_press_event(void* self, void* event) {
    QMainWindow_KeyPressEvent((QMainWindow*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QKeyEvent* event ```
void q_mainwindow_qbase_key_press_event(void* self, void* event) {
    QMainWindow_QBaseKeyPressEvent((QMainWindow*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QKeyEvent*) ```
void q_mainwindow_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnKeyPressEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QKeyEvent* event ```
void q_mainwindow_key_release_event(void* self, void* event) {
    QMainWindow_KeyReleaseEvent((QMainWindow*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QKeyEvent* event ```
void q_mainwindow_qbase_key_release_event(void* self, void* event) {
    QMainWindow_QBaseKeyReleaseEvent((QMainWindow*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QKeyEvent*) ```
void q_mainwindow_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnKeyReleaseEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QFocusEvent* event ```
void q_mainwindow_focus_in_event(void* self, void* event) {
    QMainWindow_FocusInEvent((QMainWindow*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QFocusEvent* event ```
void q_mainwindow_qbase_focus_in_event(void* self, void* event) {
    QMainWindow_QBaseFocusInEvent((QMainWindow*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QFocusEvent*) ```
void q_mainwindow_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnFocusInEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QFocusEvent* event ```
void q_mainwindow_focus_out_event(void* self, void* event) {
    QMainWindow_FocusOutEvent((QMainWindow*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QFocusEvent* event ```
void q_mainwindow_qbase_focus_out_event(void* self, void* event) {
    QMainWindow_QBaseFocusOutEvent((QMainWindow*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QFocusEvent*) ```
void q_mainwindow_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnFocusOutEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QEnterEvent* event ```
void q_mainwindow_enter_event(void* self, void* event) {
    QMainWindow_EnterEvent((QMainWindow*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QEnterEvent* event ```
void q_mainwindow_qbase_enter_event(void* self, void* event) {
    QMainWindow_QBaseEnterEvent((QMainWindow*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QEnterEvent*) ```
void q_mainwindow_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnEnterEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QEvent* event ```
void q_mainwindow_leave_event(void* self, void* event) {
    QMainWindow_LeaveEvent((QMainWindow*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QEvent* event ```
void q_mainwindow_qbase_leave_event(void* self, void* event) {
    QMainWindow_QBaseLeaveEvent((QMainWindow*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QEvent*) ```
void q_mainwindow_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnLeaveEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QPaintEvent* event ```
void q_mainwindow_paint_event(void* self, void* event) {
    QMainWindow_PaintEvent((QMainWindow*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QPaintEvent* event ```
void q_mainwindow_qbase_paint_event(void* self, void* event) {
    QMainWindow_QBasePaintEvent((QMainWindow*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QPaintEvent*) ```
void q_mainwindow_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnPaintEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QMoveEvent* event ```
void q_mainwindow_move_event(void* self, void* event) {
    QMainWindow_MoveEvent((QMainWindow*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QMoveEvent* event ```
void q_mainwindow_qbase_move_event(void* self, void* event) {
    QMainWindow_QBaseMoveEvent((QMainWindow*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QMoveEvent*) ```
void q_mainwindow_on_move_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnMoveEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QResizeEvent* event ```
void q_mainwindow_resize_event(void* self, void* event) {
    QMainWindow_ResizeEvent((QMainWindow*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QResizeEvent* event ```
void q_mainwindow_qbase_resize_event(void* self, void* event) {
    QMainWindow_QBaseResizeEvent((QMainWindow*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QResizeEvent*) ```
void q_mainwindow_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnResizeEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QCloseEvent* event ```
void q_mainwindow_close_event(void* self, void* event) {
    QMainWindow_CloseEvent((QMainWindow*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QCloseEvent* event ```
void q_mainwindow_qbase_close_event(void* self, void* event) {
    QMainWindow_QBaseCloseEvent((QMainWindow*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QCloseEvent*) ```
void q_mainwindow_on_close_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnCloseEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QTabletEvent* event ```
void q_mainwindow_tablet_event(void* self, void* event) {
    QMainWindow_TabletEvent((QMainWindow*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QTabletEvent* event ```
void q_mainwindow_qbase_tablet_event(void* self, void* event) {
    QMainWindow_QBaseTabletEvent((QMainWindow*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QTabletEvent*) ```
void q_mainwindow_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnTabletEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QActionEvent* event ```
void q_mainwindow_action_event(void* self, void* event) {
    QMainWindow_ActionEvent((QMainWindow*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QActionEvent* event ```
void q_mainwindow_qbase_action_event(void* self, void* event) {
    QMainWindow_QBaseActionEvent((QMainWindow*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QActionEvent*) ```
void q_mainwindow_on_action_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnActionEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QDragEnterEvent* event ```
void q_mainwindow_drag_enter_event(void* self, void* event) {
    QMainWindow_DragEnterEvent((QMainWindow*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QDragEnterEvent* event ```
void q_mainwindow_qbase_drag_enter_event(void* self, void* event) {
    QMainWindow_QBaseDragEnterEvent((QMainWindow*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QDragEnterEvent*) ```
void q_mainwindow_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnDragEnterEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QDragMoveEvent* event ```
void q_mainwindow_drag_move_event(void* self, void* event) {
    QMainWindow_DragMoveEvent((QMainWindow*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QDragMoveEvent* event ```
void q_mainwindow_qbase_drag_move_event(void* self, void* event) {
    QMainWindow_QBaseDragMoveEvent((QMainWindow*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QDragMoveEvent*) ```
void q_mainwindow_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnDragMoveEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QDragLeaveEvent* event ```
void q_mainwindow_drag_leave_event(void* self, void* event) {
    QMainWindow_DragLeaveEvent((QMainWindow*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QDragLeaveEvent* event ```
void q_mainwindow_qbase_drag_leave_event(void* self, void* event) {
    QMainWindow_QBaseDragLeaveEvent((QMainWindow*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QDragLeaveEvent*) ```
void q_mainwindow_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnDragLeaveEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QDropEvent* event ```
void q_mainwindow_drop_event(void* self, void* event) {
    QMainWindow_DropEvent((QMainWindow*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QDropEvent* event ```
void q_mainwindow_qbase_drop_event(void* self, void* event) {
    QMainWindow_QBaseDropEvent((QMainWindow*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QDropEvent*) ```
void q_mainwindow_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnDropEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QShowEvent* event ```
void q_mainwindow_show_event(void* self, void* event) {
    QMainWindow_ShowEvent((QMainWindow*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QShowEvent* event ```
void q_mainwindow_qbase_show_event(void* self, void* event) {
    QMainWindow_QBaseShowEvent((QMainWindow*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QShowEvent*) ```
void q_mainwindow_on_show_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnShowEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QHideEvent* event ```
void q_mainwindow_hide_event(void* self, void* event) {
    QMainWindow_HideEvent((QMainWindow*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QHideEvent* event ```
void q_mainwindow_qbase_hide_event(void* self, void* event) {
    QMainWindow_QBaseHideEvent((QMainWindow*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QHideEvent*) ```
void q_mainwindow_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnHideEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_mainwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMainWindow_NativeEvent((QMainWindow*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, const char* eventType, void* message, intptr_t* result ```
bool q_mainwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMainWindow_QBaseNativeEvent((QMainWindow*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, bool (*slot)(QMainWindow*, const char*, void*, intptr_t*) ```
void q_mainwindow_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QMainWindow_OnNativeEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QEvent* param1 ```
void q_mainwindow_change_event(void* self, void* param1) {
    QMainWindow_ChangeEvent((QMainWindow*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QEvent* param1 ```
void q_mainwindow_qbase_change_event(void* self, void* param1) {
    QMainWindow_QBaseChangeEvent((QMainWindow*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QEvent*) ```
void q_mainwindow_on_change_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnChangeEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_mainwindow_metric(void* self, int64_t param1) {
    return QMainWindow_Metric((QMainWindow*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_mainwindow_qbase_metric(void* self, int64_t param1) {
    return QMainWindow_QBaseMetric((QMainWindow*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, int32_t (*slot)(QMainWindow*, enum QPaintDevice__PaintDeviceMetric) ```
void q_mainwindow_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QMainWindow_OnMetric((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QPainter* painter ```
void q_mainwindow_init_painter(void* self, void* painter) {
    QMainWindow_InitPainter((QMainWindow*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QPainter* painter ```
void q_mainwindow_qbase_init_painter(void* self, void* painter) {
    QMainWindow_QBaseInitPainter((QMainWindow*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QPainter*) ```
void q_mainwindow_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnInitPainter((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QPoint* offset ```
QPaintDevice* q_mainwindow_redirected(void* self, void* offset) {
    return QMainWindow_Redirected((QMainWindow*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QPoint* offset ```
QPaintDevice* q_mainwindow_qbase_redirected(void* self, void* offset) {
    return QMainWindow_QBaseRedirected((QMainWindow*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, QPaintDevice* (*slot)(QMainWindow*, QPoint*) ```
void q_mainwindow_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QMainWindow_OnRedirected((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self ```
QPainter* q_mainwindow_shared_painter(void* self) {
    return QMainWindow_SharedPainter((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self ```
QPainter* q_mainwindow_qbase_shared_painter(void* self) {
    return QMainWindow_QBaseSharedPainter((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, QPainter* (*slot)() ```
void q_mainwindow_on_shared_painter(void* self, QPainter* (*slot)()) {
    QMainWindow_OnSharedPainter((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QInputMethodEvent* param1 ```
void q_mainwindow_input_method_event(void* self, void* param1) {
    QMainWindow_InputMethodEvent((QMainWindow*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QInputMethodEvent* param1 ```
void q_mainwindow_qbase_input_method_event(void* self, void* param1) {
    QMainWindow_QBaseInputMethodEvent((QMainWindow*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QInputMethodEvent*) ```
void q_mainwindow_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnInputMethodEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_mainwindow_input_method_query(void* self, int64_t param1) {
    return QMainWindow_InputMethodQuery((QMainWindow*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_mainwindow_qbase_input_method_query(void* self, int64_t param1) {
    return QMainWindow_QBaseInputMethodQuery((QMainWindow*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, QVariant* (*slot)(QMainWindow*, enum Qt__InputMethodQuery) ```
void q_mainwindow_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QMainWindow_OnInputMethodQuery((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, bool next ```
bool q_mainwindow_focus_next_prev_child(void* self, bool next) {
    return QMainWindow_FocusNextPrevChild((QMainWindow*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, bool next ```
bool q_mainwindow_qbase_focus_next_prev_child(void* self, bool next) {
    return QMainWindow_QBaseFocusNextPrevChild((QMainWindow*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, bool (*slot)(QMainWindow*, bool) ```
void q_mainwindow_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QMainWindow_OnFocusNextPrevChild((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QObject* watched, QEvent* event ```
bool q_mainwindow_event_filter(void* self, void* watched, void* event) {
    return QMainWindow_EventFilter((QMainWindow*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QObject* watched, QEvent* event ```
bool q_mainwindow_qbase_event_filter(void* self, void* watched, void* event) {
    return QMainWindow_QBaseEventFilter((QMainWindow*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, bool (*slot)(QMainWindow*, QObject*, QEvent*) ```
void q_mainwindow_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QMainWindow_OnEventFilter((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QTimerEvent* event ```
void q_mainwindow_timer_event(void* self, void* event) {
    QMainWindow_TimerEvent((QMainWindow*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QTimerEvent* event ```
void q_mainwindow_qbase_timer_event(void* self, void* event) {
    QMainWindow_QBaseTimerEvent((QMainWindow*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QTimerEvent*) ```
void q_mainwindow_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnTimerEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QChildEvent* event ```
void q_mainwindow_child_event(void* self, void* event) {
    QMainWindow_ChildEvent((QMainWindow*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QChildEvent* event ```
void q_mainwindow_qbase_child_event(void* self, void* event) {
    QMainWindow_QBaseChildEvent((QMainWindow*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QChildEvent*) ```
void q_mainwindow_on_child_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnChildEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QEvent* event ```
void q_mainwindow_custom_event(void* self, void* event) {
    QMainWindow_CustomEvent((QMainWindow*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QEvent* event ```
void q_mainwindow_qbase_custom_event(void* self, void* event) {
    QMainWindow_QBaseCustomEvent((QMainWindow*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QEvent*) ```
void q_mainwindow_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnCustomEvent((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QMetaMethod* signal ```
void q_mainwindow_connect_notify(void* self, void* signal) {
    QMainWindow_ConnectNotify((QMainWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QMetaMethod* signal ```
void q_mainwindow_qbase_connect_notify(void* self, void* signal) {
    QMainWindow_QBaseConnectNotify((QMainWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QMetaMethod*) ```
void q_mainwindow_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnConnectNotify((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QMetaMethod* signal ```
void q_mainwindow_disconnect_notify(void* self, void* signal) {
    QMainWindow_DisconnectNotify((QMainWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QMetaMethod* signal ```
void q_mainwindow_qbase_disconnect_notify(void* self, void* signal) {
    QMainWindow_QBaseDisconnectNotify((QMainWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)(QMainWindow*, QMetaMethod*) ```
void q_mainwindow_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QMainWindow_OnDisconnectNotify((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self ```
void q_mainwindow_update_micro_focus(void* self) {
    QMainWindow_UpdateMicroFocus((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self ```
void q_mainwindow_qbase_update_micro_focus(void* self) {
    QMainWindow_QBaseUpdateMicroFocus((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)() ```
void q_mainwindow_on_update_micro_focus(void* self, void (*slot)()) {
    QMainWindow_OnUpdateMicroFocus((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self ```
void q_mainwindow_create(void* self) {
    QMainWindow_Create((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self ```
void q_mainwindow_qbase_create(void* self) {
    QMainWindow_QBaseCreate((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)() ```
void q_mainwindow_on_create(void* self, void (*slot)()) {
    QMainWindow_OnCreate((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self ```
void q_mainwindow_destroy(void* self) {
    QMainWindow_Destroy((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self ```
void q_mainwindow_qbase_destroy(void* self) {
    QMainWindow_QBaseDestroy((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, void (*slot)() ```
void q_mainwindow_on_destroy(void* self, void (*slot)()) {
    QMainWindow_OnDestroy((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self ```
bool q_mainwindow_focus_next_child(void* self) {
    return QMainWindow_FocusNextChild((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self ```
bool q_mainwindow_qbase_focus_next_child(void* self) {
    return QMainWindow_QBaseFocusNextChild((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, bool (*slot)() ```
void q_mainwindow_on_focus_next_child(void* self, bool (*slot)()) {
    QMainWindow_OnFocusNextChild((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self ```
bool q_mainwindow_focus_previous_child(void* self) {
    return QMainWindow_FocusPreviousChild((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self ```
bool q_mainwindow_qbase_focus_previous_child(void* self) {
    return QMainWindow_QBaseFocusPreviousChild((QMainWindow*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, bool (*slot)() ```
void q_mainwindow_on_focus_previous_child(void* self, bool (*slot)()) {
    QMainWindow_OnFocusPreviousChild((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self ```
QObject* q_mainwindow_sender(void* self) {
    return QMainWindow_Sender((QMainWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self ```
QObject* q_mainwindow_qbase_sender(void* self) {
    return QMainWindow_QBaseSender((QMainWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, QObject* (*slot)() ```
void q_mainwindow_on_sender(void* self, QObject* (*slot)()) {
    QMainWindow_OnSender((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_sender_signal_index(void* self) {
    return QMainWindow_SenderSignalIndex((QMainWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self ```
int32_t q_mainwindow_qbase_sender_signal_index(void* self) {
    return QMainWindow_QBaseSenderSignalIndex((QMainWindow*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, int32_t (*slot)() ```
void q_mainwindow_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QMainWindow_OnSenderSignalIndex((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, const char* signal ```
int32_t q_mainwindow_receivers(void* self, const char* signal) {
    return QMainWindow_Receivers((QMainWindow*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, const char* signal ```
int32_t q_mainwindow_qbase_receivers(void* self, const char* signal) {
    return QMainWindow_QBaseReceivers((QMainWindow*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, int32_t (*slot)(QMainWindow*, const char*) ```
void q_mainwindow_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QMainWindow_OnReceivers((QMainWindow*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMainWindow* self, QMetaMethod* signal ```
bool q_mainwindow_is_signal_connected(void* self, void* signal) {
    return QMainWindow_IsSignalConnected((QMainWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMainWindow* self, QMetaMethod* signal ```
bool q_mainwindow_qbase_is_signal_connected(void* self, void* signal) {
    return QMainWindow_QBaseIsSignalConnected((QMainWindow*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMainWindow* self, bool (*slot)(QMainWindow*, QMetaMethod*) ```
void q_mainwindow_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QMainWindow_OnIsSignalConnected((QMainWindow*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QMainWindow* self ```
void q_mainwindow_delete(void* self) {
    QMainWindow_Delete((QMainWindow*)(self));
}