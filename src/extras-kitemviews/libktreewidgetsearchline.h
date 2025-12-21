#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWS_QT6C_LIBKTREEWIDGETSEARCHLINE_H
#define SRC_EXTRAS_KITEMVIEWS_QT6C_LIBKTREEWIDGETSEARCHLINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html)

/// k_treewidgetsearchline_new constructs a new KTreeWidgetSearchLine object.
///
/// @param parent QWidget*
///
KTreeWidgetSearchLine* k_treewidgetsearchline_new(void* parent);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html)

/// k_treewidgetsearchline_new2 constructs a new KTreeWidgetSearchLine object.
///
KTreeWidgetSearchLine* k_treewidgetsearchline_new2();

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html)

/// k_treewidgetsearchline_new3 constructs a new KTreeWidgetSearchLine object.
///
/// @param parent QWidget*
/// @param treeWidgets libqt_list /* of QTreeWidget* */
///
KTreeWidgetSearchLine* k_treewidgetsearchline_new3(void* parent, libqt_list treeWidgets);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html)

/// k_treewidgetsearchline_new4 constructs a new KTreeWidgetSearchLine object.
///
/// @param parent QWidget*
/// @param treeWidget QTreeWidget*
///
KTreeWidgetSearchLine* k_treewidgetsearchline_new4(void* parent, void* treeWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTreeWidgetSearchLine*
///
const QMetaObject* k_treewidgetsearchline_meta_object(void* self);

/// @param self KTreeWidgetSearchLine*
/// @param param1 const char*
///
void* k_treewidgetsearchline_metacast(void* self, const char* param1);

/// @param self KTreeWidgetSearchLine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_treewidgetsearchline_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback int32_t func(KTreeWidgetSearchLine* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_treewidgetsearchline_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_treewidgetsearchline_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_treewidgetsearchline_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#caseSensitivity)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return enum Qt__CaseSensitivity
///
int32_t k_treewidgetsearchline_case_sensitivity(void* self);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#searchColumns)
///
/// @param self KTreeWidgetSearchLine*
///
libqt_list /* of int */ k_treewidgetsearchline_search_columns(void* self);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#keepParentsVisible)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_keep_parents_visible(void* self);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#treeWidget)
///
/// @param self KTreeWidgetSearchLine*
///
QTreeWidget* k_treewidgetsearchline_tree_widget(void* self);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#treeWidgets)
///
/// @param self KTreeWidgetSearchLine*
///
libqt_list /* of QTreeWidget* */ k_treewidgetsearchline_tree_widgets(void* self);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#hiddenChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QTreeWidgetItem*
/// @param param2 bool
///
void k_treewidgetsearchline_hidden_changed(void* self, void* param1, bool param2);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#hiddenChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QTreeWidgetItem* param1, bool param2)
///
void k_treewidgetsearchline_on_hidden_changed(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#searchUpdated)
///
/// @param self KTreeWidgetSearchLine*
/// @param searchString const char*
///
void k_treewidgetsearchline_search_updated(void* self, const char* searchString);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#searchUpdated)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, const char* searchString)
///
void k_treewidgetsearchline_on_search_updated(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#caseSensitivityChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param caseSensitivity enum Qt__CaseSensitivity
///
void k_treewidgetsearchline_case_sensitivity_changed(void* self, int32_t caseSensitivity);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#caseSensitivityChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, enum Qt__CaseSensitivity caseSensitivity)
///
void k_treewidgetsearchline_on_case_sensitivity_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#keepParentsVisibleChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param keepParentsVisible bool
///
void k_treewidgetsearchline_keep_parents_visible_changed(void* self, bool keepParentsVisible);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#keepParentsVisibleChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, bool keepParentsVisible)
///
void k_treewidgetsearchline_on_keep_parents_visible_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#addTreeWidget)
///
/// @param self KTreeWidgetSearchLine*
/// @param treeWidget QTreeWidget*
///
void k_treewidgetsearchline_add_tree_widget(void* self, void* treeWidget);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#removeTreeWidget)
///
/// @param self KTreeWidgetSearchLine*
/// @param treeWidget QTreeWidget*
///
void k_treewidgetsearchline_remove_tree_widget(void* self, void* treeWidget);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
///
/// @param self KTreeWidgetSearchLine*
/// @param pattern const char*
///
void k_treewidgetsearchline_update_search(void* self, const char* pattern);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
///
/// Allows for overriding the related default method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, const char* pattern)
///
void k_treewidgetsearchline_on_update_search(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
///
/// Base class method implementation
///
/// @param self KTreeWidgetSearchLine*
/// @param pattern const char*
///
void k_treewidgetsearchline_qbase_update_search(void* self, const char* pattern);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setCaseSensitivity)
///
/// @param self KTreeWidgetSearchLine*
/// @param caseSensitivity enum Qt__CaseSensitivity
///
void k_treewidgetsearchline_set_case_sensitivity(void* self, int32_t caseSensitivity);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setKeepParentsVisible)
///
/// @param self KTreeWidgetSearchLine*
/// @param value bool
///
void k_treewidgetsearchline_set_keep_parents_visible(void* self, bool value);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setSearchColumns)
///
/// @param self KTreeWidgetSearchLine*
/// @param columns libqt_list /* of int */
///
void k_treewidgetsearchline_set_search_columns(void* self, libqt_list columns);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setTreeWidget)
///
/// @param self KTreeWidgetSearchLine*
/// @param treeWidget QTreeWidget*
///
void k_treewidgetsearchline_set_tree_widget(void* self, void* treeWidget);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setTreeWidgets)
///
/// @param self KTreeWidgetSearchLine*
/// @param treeWidgets libqt_list /* of QTreeWidget* */
///
void k_treewidgetsearchline_set_tree_widgets(void* self, libqt_list treeWidgets);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#itemMatches)
///
/// @param self KTreeWidgetSearchLine*
/// @param item QTreeWidgetItem*
/// @param pattern const char*
///
bool k_treewidgetsearchline_item_matches(void* self, void* item, const char* pattern);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#itemMatches)
///
/// Allows for overriding the related default method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback bool func(KTreeWidgetSearchLine* self, QTreeWidgetItem* item, const char* pattern)
///
void k_treewidgetsearchline_on_item_matches(void* self, bool (*callback)(void*, void*, const char*));

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#itemMatches)
///
/// Base class method implementation
///
/// @param self KTreeWidgetSearchLine*
/// @param item QTreeWidgetItem*
/// @param pattern const char*
///
bool k_treewidgetsearchline_qbase_item_matches(void* self, void* item, const char* pattern);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#contextMenuEvent)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QContextMenuEvent*
///
void k_treewidgetsearchline_context_menu_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QContextMenuEvent* param1)
///
void k_treewidgetsearchline_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QContextMenuEvent*
///
void k_treewidgetsearchline_qbase_context_menu_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
///
/// @param self KTreeWidgetSearchLine*
/// @param treeWidget QTreeWidget*
///
void k_treewidgetsearchline_update_search2(void* self, void* treeWidget);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
///
/// Allows for overriding the related default method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QTreeWidget* treeWidget)
///
void k_treewidgetsearchline_on_update_search2(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
///
/// Base class method implementation
///
/// @param self KTreeWidgetSearchLine*
/// @param treeWidget QTreeWidget*
///
void k_treewidgetsearchline_qbase_update_search2(void* self, void* treeWidget);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#connectTreeWidget)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QTreeWidget*
///
void k_treewidgetsearchline_connect_tree_widget(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#connectTreeWidget)
///
/// Allows for overriding the related default method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QTreeWidget* param1)
///
void k_treewidgetsearchline_on_connect_tree_widget(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#connectTreeWidget)
///
/// Base class method implementation
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QTreeWidget*
///
void k_treewidgetsearchline_qbase_connect_tree_widget(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#disconnectTreeWidget)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QTreeWidget*
///
void k_treewidgetsearchline_disconnect_tree_widget(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#disconnectTreeWidget)
///
/// Allows for overriding the related default method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QTreeWidget* param1)
///
void k_treewidgetsearchline_on_disconnect_tree_widget(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#disconnectTreeWidget)
///
/// Base class method implementation
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QTreeWidget*
///
void k_treewidgetsearchline_qbase_disconnect_tree_widget(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#canChooseColumnsCheck)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_can_choose_columns_check(void* self);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#canChooseColumnsCheck)
///
/// Allows for overriding the related default method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback bool func()
///
void k_treewidgetsearchline_on_can_choose_columns_check(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#canChooseColumnsCheck)
///
/// Base class method implementation
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_qbase_can_choose_columns_check(void* self);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#event)
///
/// @param self KTreeWidgetSearchLine*
/// @param event QEvent*
///
bool k_treewidgetsearchline_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback bool func(KTreeWidgetSearchLine* self, QEvent* event)
///
void k_treewidgetsearchline_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#event)
///
/// Base class method implementation
///
/// @param self KTreeWidgetSearchLine*
/// @param event QEvent*
///
bool k_treewidgetsearchline_qbase_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_treewidgetsearchline_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_treewidgetsearchline_tr3(const char* s, const char* c, int n);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#text)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_text(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#displayText)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_display_text(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_placeholder_text(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setPlaceholderText)
///
/// @param self KTreeWidgetSearchLine*
/// @param placeholderText const char*
///
void k_treewidgetsearchline_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#maxLength)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_max_length(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setMaxLength)
///
/// @param self KTreeWidgetSearchLine*
/// @param maxLength int
///
void k_treewidgetsearchline_set_max_length(void* self, int maxLength);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setFrame)
///
/// @param self KTreeWidgetSearchLine*
/// @param frame bool
///
void k_treewidgetsearchline_set_frame(void* self, bool frame);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasFrame)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_has_frame(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setClearButtonEnabled)
///
/// @param self KTreeWidgetSearchLine*
/// @param enable bool
///
void k_treewidgetsearchline_set_clear_button_enabled(void* self, bool enable);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isClearButtonEnabled)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_clear_button_enabled(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#echoMode)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return enum QLineEdit__EchoMode
///
int32_t k_treewidgetsearchline_echo_mode(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setEchoMode)
///
/// @param self KTreeWidgetSearchLine*
/// @param echoMode enum QLineEdit__EchoMode
///
void k_treewidgetsearchline_set_echo_mode(void* self, int32_t echoMode);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isReadOnly)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_read_only(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setReadOnly)
///
/// @param self KTreeWidgetSearchLine*
/// @param readOnly bool
///
void k_treewidgetsearchline_set_read_only(void* self, bool readOnly);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setValidator)
///
/// @param self KTreeWidgetSearchLine*
/// @param validator QValidator*
///
void k_treewidgetsearchline_set_validator(void* self, void* validator);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#validator)
///
/// @param self KTreeWidgetSearchLine*
///
const QValidator* k_treewidgetsearchline_validator(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCompleter)
///
/// @param self KTreeWidgetSearchLine*
/// @param completer QCompleter*
///
void k_treewidgetsearchline_set_completer(void* self, void* completer);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#completer)
///
/// @param self KTreeWidgetSearchLine*
///
QCompleter* k_treewidgetsearchline_completer(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPosition)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_cursor_position(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorPosition)
///
/// @param self KTreeWidgetSearchLine*
/// @param cursorPosition int
///
void k_treewidgetsearchline_set_cursor_position(void* self, int cursorPosition);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionAt)
///
/// @param self KTreeWidgetSearchLine*
/// @param pos QPoint*
///
int32_t k_treewidgetsearchline_cursor_position_at(void* self, void* pos);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setAlignment)
///
/// @param self KTreeWidgetSearchLine*
/// @param flag flag of enum Qt__AlignmentFlag
///
void k_treewidgetsearchline_set_alignment(void* self, int32_t flag);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#alignment)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t k_treewidgetsearchline_alignment(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// @param self KTreeWidgetSearchLine*
/// @param mark bool
///
void k_treewidgetsearchline_cursor_forward(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// @param self KTreeWidgetSearchLine*
/// @param mark bool
///
void k_treewidgetsearchline_cursor_backward(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorWordForward)
///
/// @param self KTreeWidgetSearchLine*
/// @param mark bool
///
void k_treewidgetsearchline_cursor_word_forward(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorWordBackward)
///
/// @param self KTreeWidgetSearchLine*
/// @param mark bool
///
void k_treewidgetsearchline_cursor_word_backward(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#backspace)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_backspace(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#del)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_del(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#home)
///
/// @param self KTreeWidgetSearchLine*
/// @param mark bool
///
void k_treewidgetsearchline_home(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#end)
///
/// @param self KTreeWidgetSearchLine*
/// @param mark bool
///
void k_treewidgetsearchline_end(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isModified)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_modified(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setModified)
///
/// @param self KTreeWidgetSearchLine*
/// @param modified bool
///
void k_treewidgetsearchline_set_modified(void* self, bool modified);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setSelection)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 int
/// @param param2 int
///
void k_treewidgetsearchline_set_selection(void* self, int param1, int param2);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasSelectedText)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_has_selected_text(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectedText)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_selected_text(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionStart)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_selection_start(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionEnd)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_selection_end(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionLength)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_selection_length(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isUndoAvailable)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_undo_available(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isRedoAvailable)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_redo_available(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setDragEnabled)
///
/// @param self KTreeWidgetSearchLine*
/// @param b bool
///
void k_treewidgetsearchline_set_drag_enabled(void* self, bool b);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnabled)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_drag_enabled(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorMoveStyle)
///
/// @param self KTreeWidgetSearchLine*
/// @param style enum Qt__CursorMoveStyle
///
void k_treewidgetsearchline_set_cursor_move_style(void* self, int32_t style);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorMoveStyle)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return enum Qt__CursorMoveStyle
///
int32_t k_treewidgetsearchline_cursor_move_style(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMask)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_input_mask(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setInputMask)
///
/// @param self KTreeWidgetSearchLine*
/// @param inputMask const char*
///
void k_treewidgetsearchline_set_input_mask(void* self, const char* inputMask);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasAcceptableInput)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_has_acceptable_input(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// @param self KTreeWidgetSearchLine*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_treewidgetsearchline_set_text_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// @param self KTreeWidgetSearchLine*
/// @param margins QMargins*
///
void k_treewidgetsearchline_set_text_margins2(void* self, void* margins);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textMargins)
///
/// @param self KTreeWidgetSearchLine*
///
QMargins* k_treewidgetsearchline_text_margins(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// @param self KTreeWidgetSearchLine*
/// @param action QAction*
/// @param position enum QLineEdit__ActionPosition
///
void k_treewidgetsearchline_add_action(void* self, void* action, int32_t position);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// @param self KTreeWidgetSearchLine*
/// @param icon QIcon*
/// @param position enum QLineEdit__ActionPosition
///
QAction* k_treewidgetsearchline_add_action2(void* self, void* icon, int32_t position);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setText)
///
/// @param self KTreeWidgetSearchLine*
/// @param text const char*
///
void k_treewidgetsearchline_set_text(void* self, const char* text);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#clear)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_clear(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectAll)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_select_all(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#undo)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_undo(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#redo)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_redo(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cut)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_cut(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#copy)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_copy(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paste)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_paste(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#deselect)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_deselect(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#insert)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 const char*
///
void k_treewidgetsearchline_insert(void* self, const char* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#createStandardContextMenu)
///
/// @param self KTreeWidgetSearchLine*
///
QMenu* k_treewidgetsearchline_create_standard_context_menu(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 const char*
///
void k_treewidgetsearchline_text_changed(void* self, const char* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, const char* param1)
///
void k_treewidgetsearchline_on_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 const char*
///
void k_treewidgetsearchline_text_edited(void* self, const char* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, const char* param1)
///
void k_treewidgetsearchline_on_text_edited(void* self, void (*callback)(void*, const char*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 int
/// @param param2 int
///
void k_treewidgetsearchline_cursor_position_changed(void* self, int param1, int param2);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, int param1, int param2)
///
void k_treewidgetsearchline_on_cursor_position_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_return_pressed(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self)
///
void k_treewidgetsearchline_on_return_pressed(void* self, void (*callback)(void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_editing_finished(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self)
///
void k_treewidgetsearchline_on_editing_finished(void* self, void (*callback)(void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_selection_changed(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self)
///
void k_treewidgetsearchline_on_selection_changed(void* self, void (*callback)(void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_input_rejected(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self)
///
void k_treewidgetsearchline_on_input_rejected(void* self, void (*callback)(void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// @param self KTreeWidgetSearchLine*
/// @param property enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* k_treewidgetsearchline_input_method_query2(void* self, int64_t property, void* argument);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// @param self KTreeWidgetSearchLine*
/// @param mark bool
/// @param steps int
///
void k_treewidgetsearchline_cursor_forward2(void* self, bool mark, int steps);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// @param self KTreeWidgetSearchLine*
/// @param mark bool
/// @param steps int
///
void k_treewidgetsearchline_cursor_backward2(void* self, bool mark, int steps);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KTreeWidgetSearchLine*
///
uintptr_t k_treewidgetsearchline_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KTreeWidgetSearchLine*
///
uintptr_t k_treewidgetsearchline_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KTreeWidgetSearchLine*
///
uintptr_t k_treewidgetsearchline_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KTreeWidgetSearchLine*
///
QStyle* k_treewidgetsearchline_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KTreeWidgetSearchLine*
/// @param style QStyle*
///
void k_treewidgetsearchline_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return enum Qt__WindowModality
///
int32_t k_treewidgetsearchline_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KTreeWidgetSearchLine*
/// @param windowModality enum Qt__WindowModality
///
void k_treewidgetsearchline_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QWidget*
///
bool k_treewidgetsearchline_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KTreeWidgetSearchLine*
/// @param enabled bool
///
void k_treewidgetsearchline_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KTreeWidgetSearchLine*
/// @param disabled bool
///
void k_treewidgetsearchline_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KTreeWidgetSearchLine*
/// @param windowModified bool
///
void k_treewidgetsearchline_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KTreeWidgetSearchLine*
///
QRect* k_treewidgetsearchline_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KTreeWidgetSearchLine*
///
const QRect* k_treewidgetsearchline_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KTreeWidgetSearchLine*
///
QRect* k_treewidgetsearchline_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KTreeWidgetSearchLine*
///
QPoint* k_treewidgetsearchline_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KTreeWidgetSearchLine*
///
QSize* k_treewidgetsearchline_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KTreeWidgetSearchLine*
///
QSize* k_treewidgetsearchline_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KTreeWidgetSearchLine*
///
QRect* k_treewidgetsearchline_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KTreeWidgetSearchLine*
///
QRect* k_treewidgetsearchline_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KTreeWidgetSearchLine*
///
QRegion* k_treewidgetsearchline_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KTreeWidgetSearchLine*
///
QSize* k_treewidgetsearchline_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KTreeWidgetSearchLine*
///
QSize* k_treewidgetsearchline_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KTreeWidgetSearchLine*
/// @param minimumSize QSize*
///
void k_treewidgetsearchline_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KTreeWidgetSearchLine*
/// @param minw int
/// @param minh int
///
void k_treewidgetsearchline_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KTreeWidgetSearchLine*
/// @param maximumSize QSize*
///
void k_treewidgetsearchline_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KTreeWidgetSearchLine*
/// @param maxw int
/// @param maxh int
///
void k_treewidgetsearchline_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KTreeWidgetSearchLine*
/// @param minw int
///
void k_treewidgetsearchline_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KTreeWidgetSearchLine*
/// @param minh int
///
void k_treewidgetsearchline_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KTreeWidgetSearchLine*
/// @param maxw int
///
void k_treewidgetsearchline_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KTreeWidgetSearchLine*
/// @param maxh int
///
void k_treewidgetsearchline_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KTreeWidgetSearchLine*
///
QSize* k_treewidgetsearchline_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KTreeWidgetSearchLine*
/// @param sizeIncrement QSize*
///
void k_treewidgetsearchline_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KTreeWidgetSearchLine*
/// @param w int
/// @param h int
///
void k_treewidgetsearchline_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KTreeWidgetSearchLine*
///
QSize* k_treewidgetsearchline_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KTreeWidgetSearchLine*
/// @param baseSize QSize*
///
void k_treewidgetsearchline_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KTreeWidgetSearchLine*
/// @param basew int
/// @param baseh int
///
void k_treewidgetsearchline_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KTreeWidgetSearchLine*
/// @param fixedSize QSize*
///
void k_treewidgetsearchline_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KTreeWidgetSearchLine*
/// @param w int
/// @param h int
///
void k_treewidgetsearchline_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KTreeWidgetSearchLine*
/// @param w int
///
void k_treewidgetsearchline_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KTreeWidgetSearchLine*
/// @param h int
///
void k_treewidgetsearchline_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QPointF*
///
QPointF* k_treewidgetsearchline_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QPoint*
///
QPoint* k_treewidgetsearchline_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QPointF*
///
QPointF* k_treewidgetsearchline_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QPoint*
///
QPoint* k_treewidgetsearchline_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QPointF*
///
QPointF* k_treewidgetsearchline_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QPoint*
///
QPoint* k_treewidgetsearchline_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QPointF*
///
QPointF* k_treewidgetsearchline_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QPoint*
///
QPoint* k_treewidgetsearchline_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_treewidgetsearchline_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_treewidgetsearchline_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_treewidgetsearchline_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_treewidgetsearchline_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KTreeWidgetSearchLine*
///
QWidget* k_treewidgetsearchline_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KTreeWidgetSearchLine*
///
QWidget* k_treewidgetsearchline_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KTreeWidgetSearchLine*
///
QWidget* k_treewidgetsearchline_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KTreeWidgetSearchLine*
///
const QPalette* k_treewidgetsearchline_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KTreeWidgetSearchLine*
/// @param palette QPalette*
///
void k_treewidgetsearchline_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KTreeWidgetSearchLine*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_treewidgetsearchline_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return enum QPalette__ColorRole
///
int32_t k_treewidgetsearchline_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KTreeWidgetSearchLine*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_treewidgetsearchline_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return enum QPalette__ColorRole
///
int32_t k_treewidgetsearchline_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KTreeWidgetSearchLine*
///
const QFont* k_treewidgetsearchline_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KTreeWidgetSearchLine*
/// @param font QFont*
///
void k_treewidgetsearchline_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KTreeWidgetSearchLine*
///
QFontMetrics* k_treewidgetsearchline_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KTreeWidgetSearchLine*
///
QFontInfo* k_treewidgetsearchline_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KTreeWidgetSearchLine*
///
QCursor* k_treewidgetsearchline_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KTreeWidgetSearchLine*
/// @param cursor QCursor*
///
void k_treewidgetsearchline_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KTreeWidgetSearchLine*
/// @param enable bool
///
void k_treewidgetsearchline_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KTreeWidgetSearchLine*
/// @param enable bool
///
void k_treewidgetsearchline_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KTreeWidgetSearchLine*
/// @param mask QBitmap*
///
void k_treewidgetsearchline_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KTreeWidgetSearchLine*
/// @param mask QRegion*
///
void k_treewidgetsearchline_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KTreeWidgetSearchLine*
///
QRegion* k_treewidgetsearchline_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLine*
/// @param target QPaintDevice*
///
void k_treewidgetsearchline_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLine*
/// @param painter QPainter*
///
void k_treewidgetsearchline_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KTreeWidgetSearchLine*
///
QPixmap* k_treewidgetsearchline_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KTreeWidgetSearchLine*
///
QGraphicsEffect* k_treewidgetsearchline_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KTreeWidgetSearchLine*
/// @param effect QGraphicsEffect*
///
void k_treewidgetsearchline_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KTreeWidgetSearchLine*
/// @param type enum Qt__GestureType
///
void k_treewidgetsearchline_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KTreeWidgetSearchLine*
/// @param type enum Qt__GestureType
///
void k_treewidgetsearchline_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KTreeWidgetSearchLine*
/// @param windowTitle const char*
///
void k_treewidgetsearchline_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KTreeWidgetSearchLine*
/// @param styleSheet const char*
///
void k_treewidgetsearchline_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KTreeWidgetSearchLine*
/// @param icon QIcon*
///
void k_treewidgetsearchline_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KTreeWidgetSearchLine*
///
QIcon* k_treewidgetsearchline_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KTreeWidgetSearchLine*
/// @param windowIconText const char*
///
void k_treewidgetsearchline_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KTreeWidgetSearchLine*
/// @param windowRole const char*
///
void k_treewidgetsearchline_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KTreeWidgetSearchLine*
/// @param filePath const char*
///
void k_treewidgetsearchline_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KTreeWidgetSearchLine*
/// @param level double
///
void k_treewidgetsearchline_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KTreeWidgetSearchLine*
///
double k_treewidgetsearchline_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KTreeWidgetSearchLine*
/// @param toolTip const char*
///
void k_treewidgetsearchline_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KTreeWidgetSearchLine*
/// @param msec int
///
void k_treewidgetsearchline_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KTreeWidgetSearchLine*
/// @param statusTip const char*
///
void k_treewidgetsearchline_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KTreeWidgetSearchLine*
/// @param whatsThis const char*
///
void k_treewidgetsearchline_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KTreeWidgetSearchLine*
/// @param name const char*
///
void k_treewidgetsearchline_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KTreeWidgetSearchLine*
/// @param description const char*
///
void k_treewidgetsearchline_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KTreeWidgetSearchLine*
/// @param direction enum Qt__LayoutDirection
///
void k_treewidgetsearchline_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_treewidgetsearchline_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KTreeWidgetSearchLine*
/// @param locale QLocale*
///
void k_treewidgetsearchline_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KTreeWidgetSearchLine*
///
QLocale* k_treewidgetsearchline_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KTreeWidgetSearchLine*
/// @param reason enum Qt__FocusReason
///
void k_treewidgetsearchline_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_treewidgetsearchline_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KTreeWidgetSearchLine*
/// @param policy enum Qt__FocusPolicy
///
void k_treewidgetsearchline_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_treewidgetsearchline_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KTreeWidgetSearchLine*
/// @param focusProxy QWidget*
///
void k_treewidgetsearchline_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KTreeWidgetSearchLine*
///
QWidget* k_treewidgetsearchline_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_treewidgetsearchline_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KTreeWidgetSearchLine*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_treewidgetsearchline_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QCursor*
///
void k_treewidgetsearchline_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KTreeWidgetSearchLine*
/// @param key QKeySequence*
///
int32_t k_treewidgetsearchline_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KTreeWidgetSearchLine*
/// @param id int
///
void k_treewidgetsearchline_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KTreeWidgetSearchLine*
/// @param id int
///
void k_treewidgetsearchline_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KTreeWidgetSearchLine*
/// @param id int
///
void k_treewidgetsearchline_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_treewidgetsearchline_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_treewidgetsearchline_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KTreeWidgetSearchLine*
/// @param enable bool
///
void k_treewidgetsearchline_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KTreeWidgetSearchLine*
///
QGraphicsProxyWidget* k_treewidgetsearchline_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTreeWidgetSearchLine*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_treewidgetsearchline_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QRect*
///
void k_treewidgetsearchline_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QRegion*
///
void k_treewidgetsearchline_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTreeWidgetSearchLine*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_treewidgetsearchline_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QRect*
///
void k_treewidgetsearchline_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QRegion*
///
void k_treewidgetsearchline_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KTreeWidgetSearchLine*
/// @param hidden bool
///
void k_treewidgetsearchline_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QWidget*
///
void k_treewidgetsearchline_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KTreeWidgetSearchLine*
/// @param x int
/// @param y int
///
void k_treewidgetsearchline_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QPoint*
///
void k_treewidgetsearchline_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KTreeWidgetSearchLine*
/// @param w int
/// @param h int
///
void k_treewidgetsearchline_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QSize*
///
void k_treewidgetsearchline_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KTreeWidgetSearchLine*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_treewidgetsearchline_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KTreeWidgetSearchLine*
/// @param geometry QRect*
///
void k_treewidgetsearchline_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
char* k_treewidgetsearchline_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KTreeWidgetSearchLine*
/// @param geometry const char*
///
bool k_treewidgetsearchline_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QWidget*
///
bool k_treewidgetsearchline_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_treewidgetsearchline_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KTreeWidgetSearchLine*
/// @param state flag of enum Qt__WindowState
///
void k_treewidgetsearchline_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KTreeWidgetSearchLine*
/// @param state flag of enum Qt__WindowState
///
void k_treewidgetsearchline_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KTreeWidgetSearchLine*
///
QSizePolicy* k_treewidgetsearchline_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KTreeWidgetSearchLine*
/// @param sizePolicy QSizePolicy*
///
void k_treewidgetsearchline_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KTreeWidgetSearchLine*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_treewidgetsearchline_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KTreeWidgetSearchLine*
///
QRegion* k_treewidgetsearchline_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KTreeWidgetSearchLine*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_treewidgetsearchline_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KTreeWidgetSearchLine*
/// @param margins QMargins*
///
void k_treewidgetsearchline_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KTreeWidgetSearchLine*
///
QMargins* k_treewidgetsearchline_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KTreeWidgetSearchLine*
///
QRect* k_treewidgetsearchline_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KTreeWidgetSearchLine*
///
QLayout* k_treewidgetsearchline_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KTreeWidgetSearchLine*
/// @param layout QLayout*
///
void k_treewidgetsearchline_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KTreeWidgetSearchLine*
/// @param parent QWidget*
///
void k_treewidgetsearchline_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KTreeWidgetSearchLine*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_treewidgetsearchline_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KTreeWidgetSearchLine*
/// @param dx int
/// @param dy int
///
void k_treewidgetsearchline_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KTreeWidgetSearchLine*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_treewidgetsearchline_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KTreeWidgetSearchLine*
///
QWidget* k_treewidgetsearchline_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KTreeWidgetSearchLine*
///
QWidget* k_treewidgetsearchline_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KTreeWidgetSearchLine*
///
QWidget* k_treewidgetsearchline_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KTreeWidgetSearchLine*
/// @param on bool
///
void k_treewidgetsearchline_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KTreeWidgetSearchLine*
/// @param actions libqt_list /* of QAction* */
///
void k_treewidgetsearchline_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KTreeWidgetSearchLine*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
///
void k_treewidgetsearchline_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KTreeWidgetSearchLine*
/// @param before QAction*
/// @param action QAction*
///
void k_treewidgetsearchline_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KTreeWidgetSearchLine*
/// @param action QAction*
///
void k_treewidgetsearchline_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KTreeWidgetSearchLine*
///
libqt_list /* of QAction* */ k_treewidgetsearchline_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTreeWidgetSearchLine*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_treewidgetsearchline_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTreeWidgetSearchLine*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_treewidgetsearchline_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTreeWidgetSearchLine*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_treewidgetsearchline_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KTreeWidgetSearchLine*
///
QWidget* k_treewidgetsearchline_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KTreeWidgetSearchLine*
/// @param type flag of enum Qt__WindowType
///
void k_treewidgetsearchline_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return flag of enum Qt__WindowType
///
int64_t k_treewidgetsearchline_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 enum Qt__WindowType
///
void k_treewidgetsearchline_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KTreeWidgetSearchLine*
/// @param type flag of enum Qt__WindowType
///
void k_treewidgetsearchline_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return enum Qt__WindowType
///
int64_t k_treewidgetsearchline_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_treewidgetsearchline_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTreeWidgetSearchLine*
/// @param x int
/// @param y int
///
QWidget* k_treewidgetsearchline_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTreeWidgetSearchLine*
/// @param p QPoint*
///
QWidget* k_treewidgetsearchline_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTreeWidgetSearchLine*
/// @param p QPointF*
///
QWidget* k_treewidgetsearchline_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 enum Qt__WidgetAttribute
///
void k_treewidgetsearchline_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_treewidgetsearchline_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KTreeWidgetSearchLine*
/// @param child QWidget*
///
bool k_treewidgetsearchline_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KTreeWidgetSearchLine*
/// @param enabled bool
///
void k_treewidgetsearchline_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KTreeWidgetSearchLine*
///
QBackingStore* k_treewidgetsearchline_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KTreeWidgetSearchLine*
///
QWindow* k_treewidgetsearchline_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KTreeWidgetSearchLine*
///
QScreen* k_treewidgetsearchline_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KTreeWidgetSearchLine*
/// @param screen QScreen*
///
void k_treewidgetsearchline_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_treewidgetsearchline_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param title const char*
///
void k_treewidgetsearchline_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, const char* title)
///
void k_treewidgetsearchline_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param icon QIcon*
///
void k_treewidgetsearchline_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QIcon* icon)
///
void k_treewidgetsearchline_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param iconText const char*
///
void k_treewidgetsearchline_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, const char* iconText)
///
void k_treewidgetsearchline_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KTreeWidgetSearchLine*
/// @param pos QPoint*
///
void k_treewidgetsearchline_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QPoint* pos)
///
void k_treewidgetsearchline_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KTreeWidgetSearchLine*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t k_treewidgetsearchline_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KTreeWidgetSearchLine*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_treewidgetsearchline_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLine*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_treewidgetsearchline_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLine*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_treewidgetsearchline_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLine*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_treewidgetsearchline_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLine*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_treewidgetsearchline_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLine*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_treewidgetsearchline_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTreeWidgetSearchLine*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_treewidgetsearchline_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KTreeWidgetSearchLine*
/// @param rectangle QRect*
///
QPixmap* k_treewidgetsearchline_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KTreeWidgetSearchLine*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_treewidgetsearchline_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KTreeWidgetSearchLine*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_treewidgetsearchline_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KTreeWidgetSearchLine*
/// @param id int
/// @param enable bool
///
void k_treewidgetsearchline_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KTreeWidgetSearchLine*
/// @param id int
/// @param enable bool
///
void k_treewidgetsearchline_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_treewidgetsearchline_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_treewidgetsearchline_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_treewidgetsearchline_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_treewidgetsearchline_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char* k_treewidgetsearchline_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTreeWidgetSearchLine*
/// @param name char*
///
void k_treewidgetsearchline_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTreeWidgetSearchLine*
/// @param b bool
///
bool k_treewidgetsearchline_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTreeWidgetSearchLine*
///
QThread* k_treewidgetsearchline_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTreeWidgetSearchLine*
/// @param thread QThread*
///
bool k_treewidgetsearchline_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTreeWidgetSearchLine*
/// @param interval int
///
int32_t k_treewidgetsearchline_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTreeWidgetSearchLine*
/// @param id int
///
void k_treewidgetsearchline_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTreeWidgetSearchLine*
/// @param id enum Qt__TimerId
///
void k_treewidgetsearchline_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTreeWidgetSearchLine*
///
libqt_list /* of QObject* */ k_treewidgetsearchline_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTreeWidgetSearchLine*
/// @param filterObj QObject*
///
void k_treewidgetsearchline_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTreeWidgetSearchLine*
/// @param obj QObject*
///
void k_treewidgetsearchline_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_treewidgetsearchline_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTreeWidgetSearchLine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_treewidgetsearchline_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_treewidgetsearchline_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_treewidgetsearchline_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTreeWidgetSearchLine*
/// @param name const char*
/// @param value QVariant*
///
bool k_treewidgetsearchline_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTreeWidgetSearchLine*
/// @param name const char*
///
QVariant* k_treewidgetsearchline_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KTreeWidgetSearchLine*
///
const char** k_treewidgetsearchline_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTreeWidgetSearchLine*
///
QBindingStorage* k_treewidgetsearchline_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTreeWidgetSearchLine*
///
const QBindingStorage* k_treewidgetsearchline_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self)
///
void k_treewidgetsearchline_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTreeWidgetSearchLine*
///
QObject* k_treewidgetsearchline_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTreeWidgetSearchLine*
/// @param classname const char*
///
bool k_treewidgetsearchline_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTreeWidgetSearchLine*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_treewidgetsearchline_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTreeWidgetSearchLine*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_treewidgetsearchline_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_treewidgetsearchline_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTreeWidgetSearchLine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_treewidgetsearchline_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QObject*
///
void k_treewidgetsearchline_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QObject* param1)
///
void k_treewidgetsearchline_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KTreeWidgetSearchLine*
///
double k_treewidgetsearchline_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KTreeWidgetSearchLine*
///
double k_treewidgetsearchline_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_treewidgetsearchline_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_treewidgetsearchline_encode_metric_f(int32_t metric, double value);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
QSize* k_treewidgetsearchline_size_hint(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
QSize* k_treewidgetsearchline_qbase_size_hint(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback QSize* func()
///
void k_treewidgetsearchline_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
QSize* k_treewidgetsearchline_minimum_size_hint(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
QSize* k_treewidgetsearchline_qbase_minimum_size_hint(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback QSize* func()
///
void k_treewidgetsearchline_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_treewidgetsearchline_mouse_press_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_treewidgetsearchline_qbase_mouse_press_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QMouseEvent* param1)
///
void k_treewidgetsearchline_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_treewidgetsearchline_mouse_move_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_treewidgetsearchline_qbase_mouse_move_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QMouseEvent* param1)
///
void k_treewidgetsearchline_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_treewidgetsearchline_mouse_release_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_treewidgetsearchline_qbase_mouse_release_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QMouseEvent* param1)
///
void k_treewidgetsearchline_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_treewidgetsearchline_mouse_double_click_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_treewidgetsearchline_qbase_mouse_double_click_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QMouseEvent* param1)
///
void k_treewidgetsearchline_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QKeyEvent*
///
void k_treewidgetsearchline_key_press_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QKeyEvent*
///
void k_treewidgetsearchline_qbase_key_press_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QKeyEvent* param1)
///
void k_treewidgetsearchline_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QKeyEvent*
///
void k_treewidgetsearchline_key_release_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QKeyEvent*
///
void k_treewidgetsearchline_qbase_key_release_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QKeyEvent* param1)
///
void k_treewidgetsearchline_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QFocusEvent*
///
void k_treewidgetsearchline_focus_in_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QFocusEvent*
///
void k_treewidgetsearchline_qbase_focus_in_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QFocusEvent* param1)
///
void k_treewidgetsearchline_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QFocusEvent*
///
void k_treewidgetsearchline_focus_out_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QFocusEvent*
///
void k_treewidgetsearchline_qbase_focus_out_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QFocusEvent* param1)
///
void k_treewidgetsearchline_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QPaintEvent*
///
void k_treewidgetsearchline_paint_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QPaintEvent*
///
void k_treewidgetsearchline_qbase_paint_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QPaintEvent* param1)
///
void k_treewidgetsearchline_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QDragEnterEvent*
///
void k_treewidgetsearchline_drag_enter_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QDragEnterEvent*
///
void k_treewidgetsearchline_qbase_drag_enter_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QDragEnterEvent* param1)
///
void k_treewidgetsearchline_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param e QDragMoveEvent*
///
void k_treewidgetsearchline_drag_move_event(void* self, void* e);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param e QDragMoveEvent*
///
void k_treewidgetsearchline_qbase_drag_move_event(void* self, void* e);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QDragMoveEvent* e)
///
void k_treewidgetsearchline_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param e QDragLeaveEvent*
///
void k_treewidgetsearchline_drag_leave_event(void* self, void* e);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param e QDragLeaveEvent*
///
void k_treewidgetsearchline_qbase_drag_leave_event(void* self, void* e);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QDragLeaveEvent* e)
///
void k_treewidgetsearchline_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QDropEvent*
///
void k_treewidgetsearchline_drop_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QDropEvent*
///
void k_treewidgetsearchline_qbase_drop_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QDropEvent* param1)
///
void k_treewidgetsearchline_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QEvent*
///
void k_treewidgetsearchline_change_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QEvent*
///
void k_treewidgetsearchline_qbase_change_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QEvent* param1)
///
void k_treewidgetsearchline_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QInputMethodEvent*
///
void k_treewidgetsearchline_input_method_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QInputMethodEvent*
///
void k_treewidgetsearchline_qbase_input_method_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QInputMethodEvent* param1)
///
void k_treewidgetsearchline_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param option QStyleOptionFrame*
///
void k_treewidgetsearchline_init_style_option(void* self, void* option);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param option QStyleOptionFrame*
///
void k_treewidgetsearchline_qbase_init_style_option(void* self, void* option);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QStyleOptionFrame* option)
///
void k_treewidgetsearchline_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_treewidgetsearchline_input_method_query(void* self, int64_t param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_treewidgetsearchline_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback QVariant* func(KTreeWidgetSearchLine* self, enum Qt__InputMethodQuery param1)
///
void k_treewidgetsearchline_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QTimerEvent*
///
void k_treewidgetsearchline_timer_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 QTimerEvent*
///
void k_treewidgetsearchline_qbase_timer_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QTimerEvent* param1)
///
void k_treewidgetsearchline_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback int32_t func()
///
void k_treewidgetsearchline_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param visible bool
///
void k_treewidgetsearchline_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param visible bool
///
void k_treewidgetsearchline_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, bool visible)
///
void k_treewidgetsearchline_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 int
///
int32_t k_treewidgetsearchline_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 int
///
int32_t k_treewidgetsearchline_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback int32_t func(KTreeWidgetSearchLine* self, int param1)
///
void k_treewidgetsearchline_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback bool func()
///
void k_treewidgetsearchline_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
QPaintEngine* k_treewidgetsearchline_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
QPaintEngine* k_treewidgetsearchline_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback QPaintEngine* func()
///
void k_treewidgetsearchline_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QWheelEvent*
///
void k_treewidgetsearchline_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QWheelEvent*
///
void k_treewidgetsearchline_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QWheelEvent* event)
///
void k_treewidgetsearchline_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QEnterEvent*
///
void k_treewidgetsearchline_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QEnterEvent*
///
void k_treewidgetsearchline_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QEnterEvent* event)
///
void k_treewidgetsearchline_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QEvent*
///
void k_treewidgetsearchline_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QEvent*
///
void k_treewidgetsearchline_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QEvent* event)
///
void k_treewidgetsearchline_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QMoveEvent*
///
void k_treewidgetsearchline_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QMoveEvent*
///
void k_treewidgetsearchline_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QMoveEvent* event)
///
void k_treewidgetsearchline_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QResizeEvent*
///
void k_treewidgetsearchline_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QResizeEvent*
///
void k_treewidgetsearchline_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QResizeEvent* event)
///
void k_treewidgetsearchline_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QCloseEvent*
///
void k_treewidgetsearchline_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QCloseEvent*
///
void k_treewidgetsearchline_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QCloseEvent* event)
///
void k_treewidgetsearchline_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QTabletEvent*
///
void k_treewidgetsearchline_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QTabletEvent*
///
void k_treewidgetsearchline_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QTabletEvent* event)
///
void k_treewidgetsearchline_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QActionEvent*
///
void k_treewidgetsearchline_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QActionEvent*
///
void k_treewidgetsearchline_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QActionEvent* event)
///
void k_treewidgetsearchline_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QShowEvent*
///
void k_treewidgetsearchline_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QShowEvent*
///
void k_treewidgetsearchline_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QShowEvent* event)
///
void k_treewidgetsearchline_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QHideEvent*
///
void k_treewidgetsearchline_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QHideEvent*
///
void k_treewidgetsearchline_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QHideEvent* event)
///
void k_treewidgetsearchline_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_treewidgetsearchline_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_treewidgetsearchline_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback bool func(KTreeWidgetSearchLine* self, const char* eventType, void* message, intptr_t* result)
///
void k_treewidgetsearchline_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_treewidgetsearchline_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_treewidgetsearchline_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback int32_t func(KTreeWidgetSearchLine* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_treewidgetsearchline_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param painter QPainter*
///
void k_treewidgetsearchline_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param painter QPainter*
///
void k_treewidgetsearchline_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QPainter* painter)
///
void k_treewidgetsearchline_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param offset QPoint*
///
QPaintDevice* k_treewidgetsearchline_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param offset QPoint*
///
QPaintDevice* k_treewidgetsearchline_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback QPaintDevice* func(KTreeWidgetSearchLine* self, QPoint* offset)
///
void k_treewidgetsearchline_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
QPainter* k_treewidgetsearchline_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
QPainter* k_treewidgetsearchline_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback QPainter* func()
///
void k_treewidgetsearchline_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param next bool
///
bool k_treewidgetsearchline_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param next bool
///
bool k_treewidgetsearchline_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback bool func(KTreeWidgetSearchLine* self, bool next)
///
void k_treewidgetsearchline_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_treewidgetsearchline_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_treewidgetsearchline_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback bool func(KTreeWidgetSearchLine* self, QObject* watched, QEvent* event)
///
void k_treewidgetsearchline_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QChildEvent*
///
void k_treewidgetsearchline_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QChildEvent*
///
void k_treewidgetsearchline_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QChildEvent* event)
///
void k_treewidgetsearchline_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QEvent*
///
void k_treewidgetsearchline_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param event QEvent*
///
void k_treewidgetsearchline_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QEvent* event)
///
void k_treewidgetsearchline_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param signal QMetaMethod*
///
void k_treewidgetsearchline_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param signal QMetaMethod*
///
void k_treewidgetsearchline_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QMetaMethod* signal)
///
void k_treewidgetsearchline_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param signal QMetaMethod*
///
void k_treewidgetsearchline_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param signal QMetaMethod*
///
void k_treewidgetsearchline_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, QMetaMethod* signal)
///
void k_treewidgetsearchline_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
QRect* k_treewidgetsearchline_cursor_rect(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
QRect* k_treewidgetsearchline_qbase_cursor_rect(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback QRect* func()
///
void k_treewidgetsearchline_on_cursor_rect(void* self, QRect* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func()
///
void k_treewidgetsearchline_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func()
///
void k_treewidgetsearchline_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func()
///
void k_treewidgetsearchline_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback bool func()
///
void k_treewidgetsearchline_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
bool k_treewidgetsearchline_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback bool func()
///
void k_treewidgetsearchline_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
QObject* k_treewidgetsearchline_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
QObject* k_treewidgetsearchline_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback QObject* func()
///
void k_treewidgetsearchline_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
///
int32_t k_treewidgetsearchline_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback int32_t func()
///
void k_treewidgetsearchline_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param signal const char*
///
int32_t k_treewidgetsearchline_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param signal const char*
///
int32_t k_treewidgetsearchline_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback int32_t func(KTreeWidgetSearchLine* self, const char* signal)
///
void k_treewidgetsearchline_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param signal QMetaMethod*
///
bool k_treewidgetsearchline_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param signal QMetaMethod*
///
bool k_treewidgetsearchline_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback bool func(KTreeWidgetSearchLine* self, QMetaMethod* signal)
///
void k_treewidgetsearchline_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_treewidgetsearchline_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_treewidgetsearchline_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTreeWidgetSearchLine*
/// @param callback double func(KTreeWidgetSearchLine* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_treewidgetsearchline_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTreeWidgetSearchLine*
/// @param callback void func(KTreeWidgetSearchLine* self, const char* objectName)
///
void k_treewidgetsearchline_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#dtor.KTreeWidgetSearchLine)
///
/// Delete this object from C++ memory.
///
/// @param self KTreeWidgetSearchLine*
///
void k_treewidgetsearchline_delete(void* self);

#endif
