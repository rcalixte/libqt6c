#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKDATEPICKERPOPUP_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKDATEPICKERPOPUP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kdatepickerpopup.html

/// k_datepickerpopup_new constructs a new KDatePickerPopup object.
///
KDatePickerPopup* k_datepickerpopup_new();

/// k_datepickerpopup_new2 constructs a new KDatePickerPopup object.
///
/// @param modes flag of enum KDatePickerPopup__Mode
KDatePickerPopup* k_datepickerpopup_new2(int32_t modes);

/// k_datepickerpopup_new3 constructs a new KDatePickerPopup object.
///
/// @param modes flag of enum KDatePickerPopup__Mode
/// @param date QDate*
KDatePickerPopup* k_datepickerpopup_new3(int32_t modes, void* date);

/// k_datepickerpopup_new4 constructs a new KDatePickerPopup object.
///
/// @param modes flag of enum KDatePickerPopup__Mode
/// @param date QDate*
/// @param parent QWidget*
KDatePickerPopup* k_datepickerpopup_new4(int32_t modes, void* date, void* parent);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
///
/// @param self KDatePickerPopup*
const QMetaObject* k_datepickerpopup_meta_object(void* self);

/// @param self KDatePickerPopup*
/// @param param1 const char*
void* k_datepickerpopup_metacast(void* self, const char* param1);

/// @param self KDatePickerPopup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_datepickerpopup_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KDatePickerPopup*
/// @param callback int32_t func(KDatePickerPopup* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_datepickerpopup_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KDatePickerPopup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_datepickerpopup_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_datepickerpopup_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kdatepickerpopup.html#modes)
///
/// @param self KDatePickerPopup*
///
/// @return flag of enum KDatePickerPopup__Mode
int32_t k_datepickerpopup_modes(void* self);

/// [Qt documentation](https://api-staging.kde.org/kdatepickerpopup.html#setModes)
///
/// @param self KDatePickerPopup*
/// @param modes flag of enum KDatePickerPopup__Mode
void k_datepickerpopup_set_modes(void* self, int32_t modes);

/// [Qt documentation](https://api-staging.kde.org/kdatepickerpopup.html#setDateRange)
///
/// @param self KDatePickerPopup*
/// @param minDate QDate*
/// @param maxDate QDate*
void k_datepickerpopup_set_date_range(void* self, void* minDate, void* maxDate);

/// [Qt documentation](https://api-staging.kde.org/kdatepickerpopup.html#dateMap)
///
/// @param self KDatePickerPopup*
libqt_map /* of QDate* to const char* */ k_datepickerpopup_date_map(void* self);

/// [Qt documentation](https://api-staging.kde.org/kdatepickerpopup.html#setDateMap)
///
/// @param self KDatePickerPopup*
/// @param dateMap libqt_map /* of QDate* to const char* */
void k_datepickerpopup_set_date_map(void* self, libqt_map /* of QDate* to const char* */ dateMap);

/// [Qt documentation](https://api-staging.kde.org/kdatepickerpopup.html#datePicker)
///
/// @param self KDatePickerPopup*
KDatePicker* k_datepickerpopup_date_picker(void* self);

/// [Qt documentation](https://api-staging.kde.org/kdatepickerpopup.html#setDate)
///
/// @param self KDatePickerPopup*
/// @param date QDate*
void k_datepickerpopup_set_date(void* self, void* date);

/// [Qt documentation](https://api-staging.kde.org/kdatepickerpopup.html#dateChanged)
///
/// @param self KDatePickerPopup*
/// @param date QDate*
void k_datepickerpopup_date_changed(void* self, void* date);

/// [Qt documentation](https://api-staging.kde.org/kdatepickerpopup.html#dateChanged)
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QDate* date)
void k_datepickerpopup_on_date_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_datepickerpopup_tr2(const char* s, const char* c);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_datepickerpopup_tr3(const char* s, const char* c, int n);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// @param self KDatePickerPopup*
/// @param menu QMenu*
QAction* k_datepickerpopup_add_menu(void* self, void* menu);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// @param self KDatePickerPopup*
/// @param title const char*
QMenu* k_datepickerpopup_add_menu2(void* self, const char* title);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addMenu)
///
/// @param self KDatePickerPopup*
/// @param icon QIcon*
/// @param title const char*
QMenu* k_datepickerpopup_add_menu3(void* self, void* icon, const char* title);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addSeparator)
///
/// @param self KDatePickerPopup*
QAction* k_datepickerpopup_add_separator(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addSection)
///
/// @param self KDatePickerPopup*
/// @param text const char*
QAction* k_datepickerpopup_add_section(void* self, const char* text);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#addSection)
///
/// @param self KDatePickerPopup*
/// @param icon QIcon*
/// @param text const char*
QAction* k_datepickerpopup_add_section2(void* self, void* icon, const char* text);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertMenu)
///
/// @param self KDatePickerPopup*
/// @param before QAction*
/// @param menu QMenu*
QAction* k_datepickerpopup_insert_menu(void* self, void* before, void* menu);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertSeparator)
///
/// @param self KDatePickerPopup*
/// @param before QAction*
QAction* k_datepickerpopup_insert_separator(void* self, void* before);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertSection)
///
/// @param self KDatePickerPopup*
/// @param before QAction*
/// @param text const char*
QAction* k_datepickerpopup_insert_section(void* self, void* before, const char* text);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#insertSection)
///
/// @param self KDatePickerPopup*
/// @param before QAction*
/// @param icon QIcon*
/// @param text const char*
QAction* k_datepickerpopup_insert_section2(void* self, void* before, void* icon, const char* text);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#isEmpty)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_empty(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#clear)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_clear(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setTearOffEnabled)
///
/// @param self KDatePickerPopup*
/// @param tearOffEnabled bool
void k_datepickerpopup_set_tear_off_enabled(void* self, bool tearOffEnabled);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#isTearOffEnabled)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_tear_off_enabled(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#isTearOffMenuVisible)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_tear_off_menu_visible(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_show_tear_off_menu(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
///
/// @param self KDatePickerPopup*
/// @param pos QPoint*
void k_datepickerpopup_show_tear_off_menu2(void* self, void* pos);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideTearOffMenu)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_hide_tear_off_menu(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setDefaultAction)
///
/// @param self KDatePickerPopup*
/// @param defaultAction QAction*
void k_datepickerpopup_set_default_action(void* self, void* defaultAction);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#defaultAction)
///
/// @param self KDatePickerPopup*
QAction* k_datepickerpopup_default_action(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setActiveAction)
///
/// @param self KDatePickerPopup*
/// @param act QAction*
void k_datepickerpopup_set_active_action(void* self, void* act);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#activeAction)
///
/// @param self KDatePickerPopup*
QAction* k_datepickerpopup_active_action(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#popup)
///
/// @param self KDatePickerPopup*
/// @param pos QPoint*
void k_datepickerpopup_popup(void* self, void* pos);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param self KDatePickerPopup*
QAction* k_datepickerpopup_exec(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param self KDatePickerPopup*
/// @param pos QPoint*
QAction* k_datepickerpopup_exec2(void* self, void* pos);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param actions libqt_list /* of QAction* */
/// @param pos QPoint*
QAction* k_datepickerpopup_exec3(libqt_list actions, void* pos);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionGeometry)
///
/// @param self KDatePickerPopup*
/// @param param1 QAction*
QRect* k_datepickerpopup_action_geometry(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionAt)
///
/// @param self KDatePickerPopup*
/// @param param1 QPoint*
QAction* k_datepickerpopup_action_at(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#menuAction)
///
/// @param self KDatePickerPopup*
QAction* k_datepickerpopup_menu_action(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#menuInAction)
///
/// @param action QAction*
QMenu* k_datepickerpopup_menu_in_action(void* action);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#title)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
const char* k_datepickerpopup_title(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setTitle)
///
/// @param self KDatePickerPopup*
/// @param title const char*
void k_datepickerpopup_set_title(void* self, const char* title);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#icon)
///
/// @param self KDatePickerPopup*
QIcon* k_datepickerpopup_icon(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setIcon)
///
/// @param self KDatePickerPopup*
/// @param icon QIcon*
void k_datepickerpopup_set_icon(void* self, void* icon);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setNoReplayFor)
///
/// @param self KDatePickerPopup*
/// @param widget QWidget*
void k_datepickerpopup_set_no_replay_for(void* self, void* widget);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#separatorsCollapsible)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_separators_collapsible(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setSeparatorsCollapsible)
///
/// @param self KDatePickerPopup*
/// @param collapse bool
void k_datepickerpopup_set_separators_collapsible(void* self, bool collapse);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#toolTipsVisible)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_tool_tips_visible(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#setToolTipsVisible)
///
/// @param self KDatePickerPopup*
/// @param visible bool
void k_datepickerpopup_set_tool_tips_visible(void* self, bool visible);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_about_to_show(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self)
void k_datepickerpopup_on_about_to_show(void* self, void (*callback)(void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_about_to_hide(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self)
void k_datepickerpopup_on_about_to_hide(void* self, void (*callback)(void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#triggered)
///
/// @param self KDatePickerPopup*
/// @param action QAction*
void k_datepickerpopup_triggered(void* self, void* action);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#triggered)
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QAction* action)
void k_datepickerpopup_on_triggered(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hovered)
///
/// @param self KDatePickerPopup*
/// @param action QAction*
void k_datepickerpopup_hovered(void* self, void* action);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hovered)
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QAction* action)
void k_datepickerpopup_on_hovered(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#popup)
///
/// @param self KDatePickerPopup*
/// @param pos QPoint*
/// @param at QAction*
void k_datepickerpopup_popup2(void* self, void* pos, void* at);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param self KDatePickerPopup*
/// @param pos QPoint*
/// @param at QAction*
QAction* k_datepickerpopup_exec22(void* self, void* pos, void* at);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param actions libqt_list /* of QAction* */
/// @param pos QPoint*
/// @param at QAction*
QAction* k_datepickerpopup_exec32(libqt_list actions, void* pos, void* at);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#exec)
///
/// @param actions libqt_list /* of QAction* */
/// @param pos QPoint*
/// @param at QAction*
/// @param parent QWidget*
QAction* k_datepickerpopup_exec4(libqt_list actions, void* pos, void* at, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KDatePickerPopup*
uintptr_t k_datepickerpopup_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KDatePickerPopup*
uintptr_t k_datepickerpopup_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KDatePickerPopup*
uintptr_t k_datepickerpopup_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KDatePickerPopup*
QStyle* k_datepickerpopup_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KDatePickerPopup*
/// @param style QStyle*
void k_datepickerpopup_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KDatePickerPopup*
///
/// @return enum Qt__WindowModality
int32_t k_datepickerpopup_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KDatePickerPopup*
/// @param windowModality enum Qt__WindowModality
void k_datepickerpopup_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KDatePickerPopup*
/// @param param1 QWidget*
bool k_datepickerpopup_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KDatePickerPopup*
/// @param enabled bool
void k_datepickerpopup_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KDatePickerPopup*
/// @param disabled bool
void k_datepickerpopup_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KDatePickerPopup*
/// @param windowModified bool
void k_datepickerpopup_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KDatePickerPopup*
QRect* k_datepickerpopup_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KDatePickerPopup*
const QRect* k_datepickerpopup_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KDatePickerPopup*
QRect* k_datepickerpopup_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KDatePickerPopup*
QPoint* k_datepickerpopup_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KDatePickerPopup*
QSize* k_datepickerpopup_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KDatePickerPopup*
QSize* k_datepickerpopup_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KDatePickerPopup*
QRect* k_datepickerpopup_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KDatePickerPopup*
QRect* k_datepickerpopup_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KDatePickerPopup*
QRegion* k_datepickerpopup_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KDatePickerPopup*
QSize* k_datepickerpopup_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KDatePickerPopup*
QSize* k_datepickerpopup_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KDatePickerPopup*
/// @param minimumSize QSize*
void k_datepickerpopup_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KDatePickerPopup*
/// @param minw int
/// @param minh int
void k_datepickerpopup_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KDatePickerPopup*
/// @param maximumSize QSize*
void k_datepickerpopup_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KDatePickerPopup*
/// @param maxw int
/// @param maxh int
void k_datepickerpopup_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KDatePickerPopup*
/// @param minw int
void k_datepickerpopup_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KDatePickerPopup*
/// @param minh int
void k_datepickerpopup_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KDatePickerPopup*
/// @param maxw int
void k_datepickerpopup_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KDatePickerPopup*
/// @param maxh int
void k_datepickerpopup_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KDatePickerPopup*
QSize* k_datepickerpopup_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KDatePickerPopup*
/// @param sizeIncrement QSize*
void k_datepickerpopup_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KDatePickerPopup*
/// @param w int
/// @param h int
void k_datepickerpopup_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KDatePickerPopup*
QSize* k_datepickerpopup_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KDatePickerPopup*
/// @param baseSize QSize*
void k_datepickerpopup_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KDatePickerPopup*
/// @param basew int
/// @param baseh int
void k_datepickerpopup_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KDatePickerPopup*
/// @param fixedSize QSize*
void k_datepickerpopup_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KDatePickerPopup*
/// @param w int
/// @param h int
void k_datepickerpopup_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KDatePickerPopup*
/// @param w int
void k_datepickerpopup_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KDatePickerPopup*
/// @param h int
void k_datepickerpopup_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KDatePickerPopup*
/// @param param1 QPointF*
QPointF* k_datepickerpopup_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KDatePickerPopup*
/// @param param1 QPoint*
QPoint* k_datepickerpopup_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KDatePickerPopup*
/// @param param1 QPointF*
QPointF* k_datepickerpopup_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KDatePickerPopup*
/// @param param1 QPoint*
QPoint* k_datepickerpopup_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KDatePickerPopup*
/// @param param1 QPointF*
QPointF* k_datepickerpopup_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KDatePickerPopup*
/// @param param1 QPoint*
QPoint* k_datepickerpopup_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KDatePickerPopup*
/// @param param1 QPointF*
QPointF* k_datepickerpopup_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KDatePickerPopup*
/// @param param1 QPoint*
QPoint* k_datepickerpopup_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KDatePickerPopup*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_datepickerpopup_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KDatePickerPopup*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_datepickerpopup_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KDatePickerPopup*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_datepickerpopup_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KDatePickerPopup*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_datepickerpopup_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KDatePickerPopup*
QWidget* k_datepickerpopup_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KDatePickerPopup*
QWidget* k_datepickerpopup_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KDatePickerPopup*
QWidget* k_datepickerpopup_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KDatePickerPopup*
const QPalette* k_datepickerpopup_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KDatePickerPopup*
/// @param palette QPalette*
void k_datepickerpopup_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KDatePickerPopup*
/// @param backgroundRole enum QPalette__ColorRole
void k_datepickerpopup_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KDatePickerPopup*
///
/// @return enum QPalette__ColorRole
int32_t k_datepickerpopup_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KDatePickerPopup*
/// @param foregroundRole enum QPalette__ColorRole
void k_datepickerpopup_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KDatePickerPopup*
///
/// @return enum QPalette__ColorRole
int32_t k_datepickerpopup_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KDatePickerPopup*
const QFont* k_datepickerpopup_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KDatePickerPopup*
/// @param font QFont*
void k_datepickerpopup_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KDatePickerPopup*
QFontMetrics* k_datepickerpopup_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KDatePickerPopup*
QFontInfo* k_datepickerpopup_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KDatePickerPopup*
QCursor* k_datepickerpopup_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KDatePickerPopup*
/// @param cursor QCursor*
void k_datepickerpopup_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KDatePickerPopup*
/// @param enable bool
void k_datepickerpopup_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KDatePickerPopup*
/// @param enable bool
void k_datepickerpopup_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KDatePickerPopup*
/// @param mask QBitmap*
void k_datepickerpopup_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KDatePickerPopup*
/// @param mask QRegion*
void k_datepickerpopup_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KDatePickerPopup*
QRegion* k_datepickerpopup_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePickerPopup*
/// @param target QPaintDevice*
void k_datepickerpopup_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePickerPopup*
/// @param painter QPainter*
void k_datepickerpopup_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KDatePickerPopup*
QPixmap* k_datepickerpopup_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KDatePickerPopup*
QGraphicsEffect* k_datepickerpopup_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KDatePickerPopup*
/// @param effect QGraphicsEffect*
void k_datepickerpopup_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KDatePickerPopup*
/// @param typeVal enum Qt__GestureType
void k_datepickerpopup_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KDatePickerPopup*
/// @param typeVal enum Qt__GestureType
void k_datepickerpopup_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KDatePickerPopup*
/// @param windowTitle const char*
void k_datepickerpopup_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KDatePickerPopup*
/// @param styleSheet const char*
void k_datepickerpopup_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
const char* k_datepickerpopup_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
const char* k_datepickerpopup_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KDatePickerPopup*
/// @param icon QIcon*
void k_datepickerpopup_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KDatePickerPopup*
QIcon* k_datepickerpopup_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KDatePickerPopup*
/// @param windowIconText const char*
void k_datepickerpopup_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
const char* k_datepickerpopup_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KDatePickerPopup*
/// @param windowRole const char*
void k_datepickerpopup_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
const char* k_datepickerpopup_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KDatePickerPopup*
/// @param filePath const char*
void k_datepickerpopup_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
const char* k_datepickerpopup_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KDatePickerPopup*
/// @param level double
void k_datepickerpopup_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KDatePickerPopup*
double k_datepickerpopup_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KDatePickerPopup*
/// @param toolTip const char*
void k_datepickerpopup_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
const char* k_datepickerpopup_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KDatePickerPopup*
/// @param msec int
void k_datepickerpopup_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KDatePickerPopup*
/// @param statusTip const char*
void k_datepickerpopup_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
const char* k_datepickerpopup_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KDatePickerPopup*
/// @param whatsThis const char*
void k_datepickerpopup_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
const char* k_datepickerpopup_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
const char* k_datepickerpopup_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KDatePickerPopup*
/// @param name const char*
void k_datepickerpopup_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
const char* k_datepickerpopup_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KDatePickerPopup*
/// @param description const char*
void k_datepickerpopup_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KDatePickerPopup*
/// @param direction enum Qt__LayoutDirection
void k_datepickerpopup_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KDatePickerPopup*
///
/// @return enum Qt__LayoutDirection
int32_t k_datepickerpopup_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KDatePickerPopup*
/// @param locale QLocale*
void k_datepickerpopup_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KDatePickerPopup*
QLocale* k_datepickerpopup_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KDatePickerPopup*
/// @param reason enum Qt__FocusReason
void k_datepickerpopup_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KDatePickerPopup*
///
/// @return enum Qt__FocusPolicy
int32_t k_datepickerpopup_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KDatePickerPopup*
/// @param policy enum Qt__FocusPolicy
void k_datepickerpopup_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_datepickerpopup_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KDatePickerPopup*
/// @param focusProxy QWidget*
void k_datepickerpopup_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KDatePickerPopup*
QWidget* k_datepickerpopup_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KDatePickerPopup*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_datepickerpopup_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KDatePickerPopup*
/// @param policy enum Qt__ContextMenuPolicy
void k_datepickerpopup_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KDatePickerPopup*
/// @param param1 QCursor*
void k_datepickerpopup_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KDatePickerPopup*
/// @param key QKeySequence*
int32_t k_datepickerpopup_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KDatePickerPopup*
/// @param id int
void k_datepickerpopup_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KDatePickerPopup*
/// @param id int
void k_datepickerpopup_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KDatePickerPopup*
/// @param id int
void k_datepickerpopup_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_datepickerpopup_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_datepickerpopup_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KDatePickerPopup*
/// @param enable bool
void k_datepickerpopup_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KDatePickerPopup*
QGraphicsProxyWidget* k_datepickerpopup_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDatePickerPopup*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_datepickerpopup_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDatePickerPopup*
/// @param param1 QRect*
void k_datepickerpopup_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KDatePickerPopup*
/// @param param1 QRegion*
void k_datepickerpopup_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDatePickerPopup*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_datepickerpopup_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDatePickerPopup*
/// @param param1 QRect*
void k_datepickerpopup_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KDatePickerPopup*
/// @param param1 QRegion*
void k_datepickerpopup_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KDatePickerPopup*
/// @param hidden bool
void k_datepickerpopup_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KDatePickerPopup*
/// @param param1 QWidget*
void k_datepickerpopup_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KDatePickerPopup*
/// @param x int
/// @param y int
void k_datepickerpopup_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KDatePickerPopup*
/// @param param1 QPoint*
void k_datepickerpopup_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KDatePickerPopup*
/// @param w int
/// @param h int
void k_datepickerpopup_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KDatePickerPopup*
/// @param param1 QSize*
void k_datepickerpopup_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KDatePickerPopup*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_datepickerpopup_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KDatePickerPopup*
/// @param geometry QRect*
void k_datepickerpopup_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
char* k_datepickerpopup_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KDatePickerPopup*
/// @param geometry const char*
bool k_datepickerpopup_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KDatePickerPopup*
/// @param param1 QWidget*
bool k_datepickerpopup_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KDatePickerPopup*
///
/// @return flag of enum Qt__WindowState
int32_t k_datepickerpopup_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KDatePickerPopup*
/// @param state flag of enum Qt__WindowState
void k_datepickerpopup_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KDatePickerPopup*
/// @param state flag of enum Qt__WindowState
void k_datepickerpopup_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KDatePickerPopup*
QSizePolicy* k_datepickerpopup_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KDatePickerPopup*
/// @param sizePolicy QSizePolicy*
void k_datepickerpopup_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KDatePickerPopup*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_datepickerpopup_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KDatePickerPopup*
QRegion* k_datepickerpopup_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KDatePickerPopup*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_datepickerpopup_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KDatePickerPopup*
/// @param margins QMargins*
void k_datepickerpopup_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KDatePickerPopup*
QMargins* k_datepickerpopup_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KDatePickerPopup*
QRect* k_datepickerpopup_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KDatePickerPopup*
QLayout* k_datepickerpopup_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KDatePickerPopup*
/// @param layout QLayout*
void k_datepickerpopup_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KDatePickerPopup*
/// @param parent QWidget*
void k_datepickerpopup_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KDatePickerPopup*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_datepickerpopup_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KDatePickerPopup*
/// @param dx int
/// @param dy int
void k_datepickerpopup_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KDatePickerPopup*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_datepickerpopup_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KDatePickerPopup*
QWidget* k_datepickerpopup_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KDatePickerPopup*
QWidget* k_datepickerpopup_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KDatePickerPopup*
QWidget* k_datepickerpopup_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KDatePickerPopup*
/// @param on bool
void k_datepickerpopup_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDatePickerPopup*
/// @param action QAction*
void k_datepickerpopup_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KDatePickerPopup*
/// @param actions libqt_list /* of QAction* */
void k_datepickerpopup_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KDatePickerPopup*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_datepickerpopup_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KDatePickerPopup*
/// @param before QAction*
/// @param action QAction*
void k_datepickerpopup_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KDatePickerPopup*
/// @param action QAction*
void k_datepickerpopup_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KDatePickerPopup*
libqt_list /* of QAction* */ k_datepickerpopup_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDatePickerPopup*
/// @param text const char*
QAction* k_datepickerpopup_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDatePickerPopup*
/// @param icon QIcon*
/// @param text const char*
QAction* k_datepickerpopup_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDatePickerPopup*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_datepickerpopup_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KDatePickerPopup*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_datepickerpopup_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KDatePickerPopup*
QWidget* k_datepickerpopup_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KDatePickerPopup*
/// @param typeVal flag of enum Qt__WindowType
void k_datepickerpopup_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KDatePickerPopup*
///
/// @return flag of enum Qt__WindowType
int64_t k_datepickerpopup_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KDatePickerPopup*
/// @param param1 enum Qt__WindowType
void k_datepickerpopup_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KDatePickerPopup*
/// @param typeVal flag of enum Qt__WindowType
void k_datepickerpopup_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KDatePickerPopup*
///
/// @return enum Qt__WindowType
int64_t k_datepickerpopup_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_datepickerpopup_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KDatePickerPopup*
/// @param x int
/// @param y int
QWidget* k_datepickerpopup_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KDatePickerPopup*
/// @param p QPoint*
QWidget* k_datepickerpopup_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KDatePickerPopup*
/// @param p QPointF*
QWidget* k_datepickerpopup_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KDatePickerPopup*
/// @param param1 enum Qt__WidgetAttribute
void k_datepickerpopup_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KDatePickerPopup*
/// @param param1 enum Qt__WidgetAttribute
bool k_datepickerpopup_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KDatePickerPopup*
/// @param child QWidget*
bool k_datepickerpopup_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KDatePickerPopup*
/// @param enabled bool
void k_datepickerpopup_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KDatePickerPopup*
QBackingStore* k_datepickerpopup_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KDatePickerPopup*
QWindow* k_datepickerpopup_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KDatePickerPopup*
QScreen* k_datepickerpopup_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KDatePickerPopup*
/// @param screen QScreen*
void k_datepickerpopup_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_datepickerpopup_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KDatePickerPopup*
/// @param title const char*
void k_datepickerpopup_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, const char* title)
void k_datepickerpopup_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KDatePickerPopup*
/// @param icon QIcon*
void k_datepickerpopup_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QIcon* icon)
void k_datepickerpopup_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KDatePickerPopup*
/// @param iconText const char*
void k_datepickerpopup_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, const char* iconText)
void k_datepickerpopup_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KDatePickerPopup*
/// @param pos QPoint*
void k_datepickerpopup_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QPoint* pos)
void k_datepickerpopup_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KDatePickerPopup*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_datepickerpopup_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KDatePickerPopup*
/// @param hints flag of enum Qt__InputMethodHint
void k_datepickerpopup_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePickerPopup*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_datepickerpopup_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePickerPopup*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_datepickerpopup_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePickerPopup*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_datepickerpopup_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePickerPopup*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_datepickerpopup_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePickerPopup*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_datepickerpopup_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KDatePickerPopup*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_datepickerpopup_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KDatePickerPopup*
/// @param rectangle QRect*
QPixmap* k_datepickerpopup_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KDatePickerPopup*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_datepickerpopup_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KDatePickerPopup*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_datepickerpopup_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KDatePickerPopup*
/// @param id int
/// @param enable bool
void k_datepickerpopup_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KDatePickerPopup*
/// @param id int
/// @param enable bool
void k_datepickerpopup_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KDatePickerPopup*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_datepickerpopup_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KDatePickerPopup*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_datepickerpopup_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_datepickerpopup_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_datepickerpopup_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
const char* k_datepickerpopup_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KDatePickerPopup*
/// @param name char*
void k_datepickerpopup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KDatePickerPopup*
/// @param b bool
bool k_datepickerpopup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KDatePickerPopup*
QThread* k_datepickerpopup_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDatePickerPopup*
/// @param thread QThread*
bool k_datepickerpopup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDatePickerPopup*
/// @param interval int
int32_t k_datepickerpopup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDatePickerPopup*
/// @param id int
void k_datepickerpopup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KDatePickerPopup*
/// @param id enum Qt__TimerId
void k_datepickerpopup_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KDatePickerPopup*
libqt_list /* of QObject* */ k_datepickerpopup_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KDatePickerPopup*
/// @param filterObj QObject*
void k_datepickerpopup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KDatePickerPopup*
/// @param obj QObject*
void k_datepickerpopup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_datepickerpopup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDatePickerPopup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_datepickerpopup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_datepickerpopup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_datepickerpopup_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KDatePickerPopup*
/// @param name const char*
/// @param value QVariant*
bool k_datepickerpopup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KDatePickerPopup*
/// @param name const char*
QVariant* k_datepickerpopup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDatePickerPopup*
const char** k_datepickerpopup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDatePickerPopup*
QBindingStorage* k_datepickerpopup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KDatePickerPopup*
const QBindingStorage* k_datepickerpopup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self)
void k_datepickerpopup_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KDatePickerPopup*
QObject* k_datepickerpopup_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KDatePickerPopup*
/// @param classname const char*
bool k_datepickerpopup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KDatePickerPopup*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_datepickerpopup_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KDatePickerPopup*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_datepickerpopup_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_datepickerpopup_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KDatePickerPopup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_datepickerpopup_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDatePickerPopup*
/// @param param1 QObject*
void k_datepickerpopup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QObject* param1)
void k_datepickerpopup_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KDatePickerPopup*
double k_datepickerpopup_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KDatePickerPopup*
double k_datepickerpopup_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_datepickerpopup_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_datepickerpopup_encode_metric_f(int32_t metric, double value);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
QSize* k_datepickerpopup_size_hint(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
QSize* k_datepickerpopup_qbase_size_hint(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback QSize* func()
void k_datepickerpopup_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QEvent*
void k_datepickerpopup_change_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QEvent*
void k_datepickerpopup_qbase_change_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QEvent* param1)
void k_datepickerpopup_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QKeyEvent*
void k_datepickerpopup_key_press_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QKeyEvent*
void k_datepickerpopup_qbase_key_press_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QKeyEvent* param1)
void k_datepickerpopup_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QMouseEvent*
void k_datepickerpopup_mouse_release_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QMouseEvent*
void k_datepickerpopup_qbase_mouse_release_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QMouseEvent* param1)
void k_datepickerpopup_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QMouseEvent*
void k_datepickerpopup_mouse_press_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QMouseEvent*
void k_datepickerpopup_qbase_mouse_press_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QMouseEvent* param1)
void k_datepickerpopup_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QMouseEvent*
void k_datepickerpopup_mouse_move_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QMouseEvent*
void k_datepickerpopup_qbase_mouse_move_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QMouseEvent* param1)
void k_datepickerpopup_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QWheelEvent*
void k_datepickerpopup_wheel_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QWheelEvent*
void k_datepickerpopup_qbase_wheel_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QWheelEvent* param1)
void k_datepickerpopup_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QEnterEvent*
void k_datepickerpopup_enter_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QEnterEvent*
void k_datepickerpopup_qbase_enter_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QEnterEvent* param1)
void k_datepickerpopup_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QEvent*
void k_datepickerpopup_leave_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QEvent*
void k_datepickerpopup_qbase_leave_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QEvent* param1)
void k_datepickerpopup_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QHideEvent*
void k_datepickerpopup_hide_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QHideEvent*
void k_datepickerpopup_qbase_hide_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QHideEvent* param1)
void k_datepickerpopup_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QPaintEvent*
void k_datepickerpopup_paint_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QPaintEvent*
void k_datepickerpopup_qbase_paint_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QPaintEvent* param1)
void k_datepickerpopup_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QActionEvent*
void k_datepickerpopup_action_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QActionEvent*
void k_datepickerpopup_qbase_action_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QActionEvent* param1)
void k_datepickerpopup_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QTimerEvent*
void k_datepickerpopup_timer_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QTimerEvent*
void k_datepickerpopup_qbase_timer_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QTimerEvent* param1)
void k_datepickerpopup_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QEvent*
bool k_datepickerpopup_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QEvent*
bool k_datepickerpopup_qbase_event(void* self, void* param1);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback bool func(KDatePickerPopup* self, QEvent* param1)
void k_datepickerpopup_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param next bool
bool k_datepickerpopup_focus_next_prev_child(void* self, bool next);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param next bool
bool k_datepickerpopup_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback bool func(KDatePickerPopup* self, bool next)
void k_datepickerpopup_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param option QStyleOptionMenuItem*
/// @param action QAction*
void k_datepickerpopup_init_style_option(void* self, void* option, void* action);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param option QStyleOptionMenuItem*
/// @param action QAction*
void k_datepickerpopup_qbase_init_style_option(void* self, void* option, void* action);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QStyleOptionMenuItem* option, QAction* action)
void k_datepickerpopup_on_init_style_option(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback int32_t func()
void k_datepickerpopup_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param visible bool
void k_datepickerpopup_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param visible bool
void k_datepickerpopup_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, bool visible)
void k_datepickerpopup_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
QSize* k_datepickerpopup_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
QSize* k_datepickerpopup_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback QSize* func()
void k_datepickerpopup_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 int
int32_t k_datepickerpopup_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 int
int32_t k_datepickerpopup_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback int32_t func(KDatePickerPopup* self, int param1)
void k_datepickerpopup_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback bool func()
void k_datepickerpopup_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
QPaintEngine* k_datepickerpopup_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
QPaintEngine* k_datepickerpopup_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback QPaintEngine* func()
void k_datepickerpopup_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QMouseEvent*
void k_datepickerpopup_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QMouseEvent*
void k_datepickerpopup_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QMouseEvent* event)
void k_datepickerpopup_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QKeyEvent*
void k_datepickerpopup_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QKeyEvent*
void k_datepickerpopup_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QKeyEvent* event)
void k_datepickerpopup_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QFocusEvent*
void k_datepickerpopup_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QFocusEvent*
void k_datepickerpopup_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QFocusEvent* event)
void k_datepickerpopup_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QFocusEvent*
void k_datepickerpopup_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QFocusEvent*
void k_datepickerpopup_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QFocusEvent* event)
void k_datepickerpopup_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QMoveEvent*
void k_datepickerpopup_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QMoveEvent*
void k_datepickerpopup_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QMoveEvent* event)
void k_datepickerpopup_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QResizeEvent*
void k_datepickerpopup_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QResizeEvent*
void k_datepickerpopup_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QResizeEvent* event)
void k_datepickerpopup_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QCloseEvent*
void k_datepickerpopup_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QCloseEvent*
void k_datepickerpopup_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QCloseEvent* event)
void k_datepickerpopup_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QContextMenuEvent*
void k_datepickerpopup_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QContextMenuEvent*
void k_datepickerpopup_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QContextMenuEvent* event)
void k_datepickerpopup_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QTabletEvent*
void k_datepickerpopup_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QTabletEvent*
void k_datepickerpopup_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QTabletEvent* event)
void k_datepickerpopup_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QDragEnterEvent*
void k_datepickerpopup_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QDragEnterEvent*
void k_datepickerpopup_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QDragEnterEvent* event)
void k_datepickerpopup_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QDragMoveEvent*
void k_datepickerpopup_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QDragMoveEvent*
void k_datepickerpopup_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QDragMoveEvent* event)
void k_datepickerpopup_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QDragLeaveEvent*
void k_datepickerpopup_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QDragLeaveEvent*
void k_datepickerpopup_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QDragLeaveEvent* event)
void k_datepickerpopup_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QDropEvent*
void k_datepickerpopup_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QDropEvent*
void k_datepickerpopup_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QDropEvent* event)
void k_datepickerpopup_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QShowEvent*
void k_datepickerpopup_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QShowEvent*
void k_datepickerpopup_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QShowEvent* event)
void k_datepickerpopup_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_datepickerpopup_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_datepickerpopup_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback bool func(KDatePickerPopup* self, const char* eventType, void* message, intptr_t* result)
void k_datepickerpopup_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_datepickerpopup_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_datepickerpopup_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback int32_t func(KDatePickerPopup* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_datepickerpopup_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param painter QPainter*
void k_datepickerpopup_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param painter QPainter*
void k_datepickerpopup_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QPainter* painter)
void k_datepickerpopup_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param offset QPoint*
QPaintDevice* k_datepickerpopup_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param offset QPoint*
QPaintDevice* k_datepickerpopup_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback QPaintDevice* func(KDatePickerPopup* self, QPoint* offset)
void k_datepickerpopup_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
QPainter* k_datepickerpopup_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
QPainter* k_datepickerpopup_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback QPainter* func()
void k_datepickerpopup_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QInputMethodEvent*
void k_datepickerpopup_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 QInputMethodEvent*
void k_datepickerpopup_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QInputMethodEvent* param1)
void k_datepickerpopup_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_datepickerpopup_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_datepickerpopup_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback QVariant* func(KDatePickerPopup* self, enum Qt__InputMethodQuery param1)
void k_datepickerpopup_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param watched QObject*
/// @param event QEvent*
bool k_datepickerpopup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param watched QObject*
/// @param event QEvent*
bool k_datepickerpopup_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback bool func(KDatePickerPopup* self, QObject* watched, QEvent* event)
void k_datepickerpopup_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QChildEvent*
void k_datepickerpopup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QChildEvent*
void k_datepickerpopup_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QChildEvent* event)
void k_datepickerpopup_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QEvent*
void k_datepickerpopup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param event QEvent*
void k_datepickerpopup_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QEvent* event)
void k_datepickerpopup_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param signal QMetaMethod*
void k_datepickerpopup_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param signal QMetaMethod*
void k_datepickerpopup_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QMetaMethod* signal)
void k_datepickerpopup_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param signal QMetaMethod*
void k_datepickerpopup_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param signal QMetaMethod*
void k_datepickerpopup_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, QMetaMethod* signal)
void k_datepickerpopup_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_column_count(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_qbase_column_count(void* self);

/// Inherited from QMenu
///
/// [Qt documentation](https://doc.qt.io/qt-6/qmenu.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback int32_t func()
void k_datepickerpopup_on_column_count(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func()
void k_datepickerpopup_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func()
void k_datepickerpopup_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback void func()
void k_datepickerpopup_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback bool func()
void k_datepickerpopup_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
bool k_datepickerpopup_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback bool func()
void k_datepickerpopup_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
QObject* k_datepickerpopup_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
QObject* k_datepickerpopup_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback QObject* func()
void k_datepickerpopup_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
int32_t k_datepickerpopup_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback int32_t func()
void k_datepickerpopup_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param signal const char*
int32_t k_datepickerpopup_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param signal const char*
int32_t k_datepickerpopup_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback int32_t func(KDatePickerPopup* self, const char* signal)
void k_datepickerpopup_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param signal QMetaMethod*
bool k_datepickerpopup_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param signal QMetaMethod*
bool k_datepickerpopup_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback bool func(KDatePickerPopup* self, QMetaMethod* signal)
void k_datepickerpopup_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_datepickerpopup_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_datepickerpopup_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDatePickerPopup*
/// @param callback double func(KDatePickerPopup* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_datepickerpopup_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KDatePickerPopup*
/// @param callback void func(KDatePickerPopup* self, const char* objectName)
void k_datepickerpopup_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kdatepickerpopup.html#dtor.KDatePickerPopup)
///
/// Delete this object from C++ memory.
///
/// @param self KDatePickerPopup*
void k_datepickerpopup_delete(void* self);

/// https://api-staging.kde.org/kdatepickerpopup.html#types

typedef enum {
    KDATEPICKERPOPUP_MODE_NODATE = 1,
    KDATEPICKERPOPUP_MODE_DATEPICKER = 2,
    KDATEPICKERPOPUP_MODE_WORDS = 4
} KDatePickerPopup__Mode;

#endif
