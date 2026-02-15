#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBVIEW_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTextEditor__View*
///
const QMetaObject* k_texteditor__view_meta_object(void* self);

/// @param self KTextEditor__View*
/// @param param1 const char*
///
void* k_texteditor__view_metacast(void* self, const char* param1);

/// @param self KTextEditor__View*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texteditor__view_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texteditor__view_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#document)
///
/// @param self KTextEditor__View*
///
KTextEditor__Document* k_texteditor__view_document(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewMode)
///
/// @param self KTextEditor__View*
///
/// @return enum KTextEditor__View__ViewMode
///
int32_t k_texteditor__view_view_mode(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewModeHuman)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_view_mode_human(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setViewInputMode)
///
/// @param self KTextEditor__View*
/// @param inputMode enum KTextEditor__View__InputMode
///
void k_texteditor__view_set_view_input_mode(void* self, int32_t inputMode);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewInputMode)
///
/// @param self KTextEditor__View*
///
/// @return enum KTextEditor__View__InputMode
///
int32_t k_texteditor__view_view_input_mode(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewInputModeHuman)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_view_input_mode_human(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#mainWindow)
///
/// @param self KTextEditor__View*
///
KTextEditor__MainWindow* k_texteditor__view_main_window(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#focusIn)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
///
void k_texteditor__view_focus_in(void* self, void* view);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#focusIn)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view)
///
void k_texteditor__view_on_focus_in(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#focusOut)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
///
void k_texteditor__view_focus_out(void* self, void* view);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#focusOut)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view)
///
void k_texteditor__view_on_focus_out(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewModeChanged)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
/// @param mode enum KTextEditor__View__ViewMode
///
void k_texteditor__view_view_mode_changed(void* self, void* view, int32_t mode);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewModeChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view, enum KTextEditor__View__ViewMode mode)
///
void k_texteditor__view_on_view_mode_changed(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewInputModeChanged)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
/// @param mode enum KTextEditor__View__InputMode
///
void k_texteditor__view_view_input_mode_changed(void* self, void* view, int32_t mode);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#viewInputModeChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view, enum KTextEditor__View__InputMode mode)
///
void k_texteditor__view_on_view_input_mode_changed(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#textInserted)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
/// @param position KTextEditor__Cursor*
/// @param text const char*
///
void k_texteditor__view_text_inserted(void* self, void* view, void* position, const char* text);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#textInserted)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view, KTextEditor__Cursor* position, const char* text)
///
void k_texteditor__view_on_text_inserted(void* self, void (*callback)(void*, void*, void*, const char*));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setContextMenu)
///
/// @param self KTextEditor__View*
/// @param menu QMenu*
///
void k_texteditor__view_set_context_menu(void* self, void* menu);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#contextMenu)
///
/// @param self KTextEditor__View*
///
QMenu* k_texteditor__view_context_menu(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#defaultContextMenu)
///
/// @param self KTextEditor__View*
/// @param menu QMenu*
///
QMenu* k_texteditor__view_default_context_menu(void* self, void* menu);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#contextMenuAboutToShow)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
/// @param menu QMenu*
///
void k_texteditor__view_context_menu_about_to_show(void* self, void* view, void* menu);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#contextMenuAboutToShow)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view, QMenu* menu)
///
void k_texteditor__view_on_context_menu_about_to_show(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setCursorPosition)
///
/// @param self KTextEditor__View*
/// @param position KTextEditor__Cursor*
///
bool k_texteditor__view_set_cursor_position(void* self, void* position);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setCursorPositions)
///
/// @param self KTextEditor__View*
/// @param positions libqt_list of KTextEditor__Cursor*
///
void k_texteditor__view_set_cursor_positions(void* self, libqt_list positions);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPosition)
///
/// @param self KTextEditor__View*
///
KTextEditor__Cursor* k_texteditor__view_cursor_position(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositions)
///
/// @param self KTextEditor__View*
///
/// @return libqt_list of KTextEditor__Cursor*
///
libqt_list k_texteditor__view_cursor_positions(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositionVirtual)
///
/// @param self KTextEditor__View*
///
KTextEditor__Cursor* k_texteditor__view_cursor_position_virtual(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorToCoordinate)
///
/// @param self KTextEditor__View*
/// @param cursor KTextEditor__Cursor*
///
QPoint* k_texteditor__view_cursor_to_coordinate(void* self, void* cursor);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositionCoordinates)
///
/// @param self KTextEditor__View*
///
QPoint* k_texteditor__view_cursor_position_coordinates(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#coordinatesToCursor)
///
/// @param self KTextEditor__View*
/// @param coord QPoint*
///
KTextEditor__Cursor* k_texteditor__view_coordinates_to_cursor(void* self, void* coord);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositionChanged)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
/// @param newPosition KTextEditor__Cursor*
///
void k_texteditor__view_cursor_position_changed(void* self, void* view, void* newPosition);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#cursorPositionChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view, KTextEditor__Cursor* newPosition)
///
void k_texteditor__view_on_cursor_position_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#verticalScrollPositionChanged)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
/// @param newPos KTextEditor__Cursor*
///
void k_texteditor__view_vertical_scroll_position_changed(void* self, void* view, void* newPos);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#verticalScrollPositionChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view, KTextEditor__Cursor* newPos)
///
void k_texteditor__view_on_vertical_scroll_position_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#horizontalScrollPositionChanged)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
///
void k_texteditor__view_horizontal_scroll_position_changed(void* self, void* view);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#horizontalScrollPositionChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view)
///
void k_texteditor__view_on_horizontal_scroll_position_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#mouseTrackingEnabled)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_mouse_tracking_enabled(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setMouseTrackingEnabled)
///
/// @param self KTextEditor__View*
/// @param enable bool
///
bool k_texteditor__view_set_mouse_tracking_enabled(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#mousePositionChanged)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
/// @param newPosition KTextEditor__Cursor*
///
void k_texteditor__view_mouse_position_changed(void* self, void* view, void* newPosition);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#mousePositionChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view, KTextEditor__Cursor* newPosition)
///
void k_texteditor__view_on_mouse_position_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setSelection)
///
/// @param self KTextEditor__View*
/// @param range KTextEditor__Range*
///
bool k_texteditor__view_set_selection(void* self, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setSelections)
///
/// @param self KTextEditor__View*
/// @param ranges libqt_list of KTextEditor__Range*
///
void k_texteditor__view_set_selections(void* self, libqt_list ranges);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#selection)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_selection(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionRange)
///
/// @param self KTextEditor__View*
///
KTextEditor__Range* k_texteditor__view_selection_range(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionRanges)
///
/// @param self KTextEditor__View*
///
/// @return libqt_list of KTextEditor__Range*
///
libqt_list k_texteditor__view_selection_ranges(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_selection_text(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#removeSelection)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_remove_selection(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#removeSelectionText)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_remove_selection_text(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setBlockSelection)
///
/// @param self KTextEditor__View*
/// @param on bool
///
bool k_texteditor__view_set_block_selection(void* self, bool on);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#blockSelection)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_block_selection(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionChanged)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
///
void k_texteditor__view_selection_changed(void* self, void* view);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#selectionChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view)
///
void k_texteditor__view_on_selection_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#insertText)
///
/// @param self KTextEditor__View*
/// @param text const char*
///
bool k_texteditor__view_insert_text(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#insertTemplate)
///
/// @param self KTextEditor__View*
/// @param insertPosition KTextEditor__Cursor*
/// @param templateString const char*
///
bool k_texteditor__view_insert_template(void* self, void* insertPosition, const char* templateString);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setScrollPosition)
///
/// @param self KTextEditor__View*
/// @param cursor KTextEditor__Cursor*
///
void k_texteditor__view_set_scroll_position(void* self, void* cursor);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setHorizontalScrollPosition)
///
/// @param self KTextEditor__View*
/// @param x int
///
void k_texteditor__view_set_horizontal_scroll_position(void* self, int x);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#maxScrollPosition)
///
/// @param self KTextEditor__View*
///
KTextEditor__Cursor* k_texteditor__view_max_scroll_position(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#firstDisplayedLine)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_first_displayed_line(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#lastDisplayedLine)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_last_displayed_line(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#textAreaRect)
///
/// @param self KTextEditor__View*
///
QRect* k_texteditor__view_text_area_rect(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#verticalScrollBar)
///
/// @param self KTextEditor__View*
///
QScrollBar* k_texteditor__view_vertical_scroll_bar(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#horizontalScrollBar)
///
/// @param self KTextEditor__View*
///
QScrollBar* k_texteditor__view_horizontal_scroll_bar(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#displayRangeChanged)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
///
void k_texteditor__view_display_range_changed(void* self, void* view);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#displayRangeChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view)
///
void k_texteditor__view_on_display_range_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#print)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_print(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#printPreview)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_print_preview(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#isStatusBarEnabled)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_status_bar_enabled(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setStatusBarEnabled)
///
/// @param self KTextEditor__View*
/// @param enable bool
///
void k_texteditor__view_set_status_bar_enabled(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#statusBarEnabledChanged)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
/// @param enabled bool
///
void k_texteditor__view_status_bar_enabled_changed(void* self, void* view, bool enabled);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#statusBarEnabledChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view, bool enabled)
///
void k_texteditor__view_on_status_bar_enabled_changed(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#readSessionConfig)
///
/// @param self KTextEditor__View*
/// @param config KConfigGroup*
/// @param flags libqt_list /* set of const char* */ flags
///
void k_texteditor__view_read_session_config(void* self, void* config, libqt_list flags);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#writeSessionConfig)
///
/// @param self KTextEditor__View*
/// @param config KConfigGroup*
/// @param flags libqt_list /* set of const char* */ flags
///
void k_texteditor__view_write_session_config(void* self, void* config, libqt_list flags);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#lineAttributes)
///
/// @param self KTextEditor__View*
/// @param line int
///
/// @return libqt_list of KTextEditor__AttributeBlock*
///
libqt_list k_texteditor__view_line_attributes(void* self, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#configChanged)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
///
void k_texteditor__view_config_changed(void* self, void* view);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#configChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view)
///
void k_texteditor__view_on_config_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#configKeys)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__View*
///
const char** k_texteditor__view_config_keys(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#configValue)
///
/// @param self KTextEditor__View*
/// @param key const char*
///
QVariant* k_texteditor__view_config_value(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setConfigValue)
///
/// @param self KTextEditor__View*
/// @param key const char*
/// @param value QVariant*
///
void k_texteditor__view_set_config_value(void* self, const char* key, void* value);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAnnotationModel)
///
/// @param self KTextEditor__View*
/// @param model KTextEditor__AnnotationModel*
///
void k_texteditor__view_set_annotation_model(void* self, void* model);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationModel)
///
/// @param self KTextEditor__View*
///
KTextEditor__AnnotationModel* k_texteditor__view_annotation_model(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAnnotationBorderVisible)
///
/// @param self KTextEditor__View*
/// @param visible bool
///
void k_texteditor__view_set_annotation_border_visible(void* self, bool visible);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#isAnnotationBorderVisible)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_annotation_border_visible(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAnnotationItemDelegate)
///
/// @param self KTextEditor__View*
/// @param delegate KTextEditor__AbstractAnnotationItemDelegate*
///
void k_texteditor__view_set_annotation_item_delegate(void* self, void* delegate);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationItemDelegate)
///
/// @param self KTextEditor__View*
///
KTextEditor__AbstractAnnotationItemDelegate* k_texteditor__view_annotation_item_delegate(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAnnotationUniformItemSizes)
///
/// @param self KTextEditor__View*
/// @param uniformItemSizes bool
///
void k_texteditor__view_set_annotation_uniform_item_sizes(void* self, bool uniformItemSizes);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#uniformAnnotationItemSizes)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_uniform_annotation_item_sizes(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationContextMenuAboutToShow)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
/// @param menu QMenu*
/// @param line int
///
void k_texteditor__view_annotation_context_menu_about_to_show(void* self, void* view, void* menu, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationContextMenuAboutToShow)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view, QMenu* menu, int line)
///
void k_texteditor__view_on_annotation_context_menu_about_to_show(void* self, void (*callback)(void*, void*, void*, int));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationActivated)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
/// @param line int
///
void k_texteditor__view_annotation_activated(void* self, void* view, int line);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationActivated)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view, int line)
///
void k_texteditor__view_on_annotation_activated(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationBorderVisibilityChanged)
///
/// @param self KTextEditor__View*
/// @param view KTextEditor__View*
/// @param visible bool
///
void k_texteditor__view_annotation_border_visibility_changed(void* self, void* view, bool visible);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#annotationBorderVisibilityChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, KTextEditor__View* view, bool visible)
///
void k_texteditor__view_on_annotation_border_visibility_changed(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#registerInlineNoteProvider)
///
/// @param self KTextEditor__View*
/// @param provider KTextEditor__InlineNoteProvider*
///
void k_texteditor__view_register_inline_note_provider(void* self, void* provider);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#unregisterInlineNoteProvider)
///
/// @param self KTextEditor__View*
/// @param provider KTextEditor__InlineNoteProvider*
///
void k_texteditor__view_unregister_inline_note_provider(void* self, void* provider);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#registerTextHintProvider)
///
/// @param self KTextEditor__View*
/// @param provider KTextEditor__TextHintProvider*
///
void k_texteditor__view_register_text_hint_provider(void* self, void* provider);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#unregisterTextHintProvider)
///
/// @param self KTextEditor__View*
/// @param provider KTextEditor__TextHintProvider*
///
void k_texteditor__view_unregister_text_hint_provider(void* self, void* provider);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setTextHintDelay)
///
/// @param self KTextEditor__View*
/// @param delay int
///
void k_texteditor__view_set_text_hint_delay(void* self, int delay);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#textHintDelay)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_text_hint_delay(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#isCompletionActive)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_completion_active(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#startCompletion)
///
/// @param self KTextEditor__View*
/// @param word KTextEditor__Range*
/// @param model KTextEditor__CodeCompletionModel*
///
void k_texteditor__view_start_completion(void* self, void* word, void* model);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#abortCompletion)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_abort_completion(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#forceCompletion)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_force_completion(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#registerCompletionModel)
///
/// @param self KTextEditor__View*
/// @param model KTextEditor__CodeCompletionModel*
///
void k_texteditor__view_register_completion_model(void* self, void* model);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#unregisterCompletionModel)
///
/// @param self KTextEditor__View*
/// @param model KTextEditor__CodeCompletionModel*
///
void k_texteditor__view_unregister_completion_model(void* self, void* model);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#isAutomaticInvocationEnabled)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_automatic_invocation_enabled(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#setAutomaticInvocationEnabled)
///
/// @param self KTextEditor__View*
/// @param enabled bool
///
void k_texteditor__view_set_automatic_invocation_enabled(void* self, bool enabled);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#startCompletion)
///
/// @param self KTextEditor__View*
/// @param word KTextEditor__Range*
/// @param models libqt_list of KTextEditor__CodeCompletionModel*
/// @param invocationType enum KTextEditor__CodeCompletionModel__InvocationType
///
void k_texteditor__view_start_completion2(void* self, void* word, libqt_list models, int32_t invocationType);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#codeCompletionModels)
///
/// @param self KTextEditor__View*
///
/// @return libqt_list of KTextEditor__CodeCompletionModel*
///
libqt_list k_texteditor__view_code_completion_models(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#theme)
///
/// @param self KTextEditor__View*
///
KSyntaxHighlighting__Theme* k_texteditor__view_theme(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texteditor__view_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texteditor__view_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#insertTemplate)
///
/// @param self KTextEditor__View*
/// @param insertPosition KTextEditor__Cursor*
/// @param templateString const char*
/// @param script const char*
///
bool k_texteditor__view_insert_template3(void* self, void* insertPosition, const char* templateString, const char* script);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#firstDisplayedLine)
///
/// @param self KTextEditor__View*
/// @param lineType enum KTextEditor__View__LineType
///
int32_t k_texteditor__view_first_displayed_line1(void* self, int32_t lineType);

/// [Upstream resources](https://api.kde.org/ktexteditor-view.html#lastDisplayedLine)
///
/// @param self KTextEditor__View*
/// @param lineType enum KTextEditor__View__LineType
///
int32_t k_texteditor__view_last_displayed_line1(void* self, int32_t lineType);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KTextEditor__View*
///
uintptr_t k_texteditor__view_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KTextEditor__View*
///
uintptr_t k_texteditor__view_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KTextEditor__View*
///
uintptr_t k_texteditor__view_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KTextEditor__View*
///
QStyle* k_texteditor__view_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KTextEditor__View*
/// @param style QStyle*
///
void k_texteditor__view_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KTextEditor__View*
///
/// @return enum Qt__WindowModality
///
int32_t k_texteditor__view_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KTextEditor__View*
/// @param windowModality enum Qt__WindowModality
///
void k_texteditor__view_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KTextEditor__View*
/// @param param1 QWidget*
///
bool k_texteditor__view_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KTextEditor__View*
/// @param enabled bool
///
void k_texteditor__view_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KTextEditor__View*
/// @param disabled bool
///
void k_texteditor__view_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KTextEditor__View*
/// @param windowModified bool
///
void k_texteditor__view_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KTextEditor__View*
///
QRect* k_texteditor__view_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KTextEditor__View*
///
const QRect* k_texteditor__view_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KTextEditor__View*
///
QRect* k_texteditor__view_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KTextEditor__View*
///
QPoint* k_texteditor__view_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KTextEditor__View*
///
QSize* k_texteditor__view_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KTextEditor__View*
///
QSize* k_texteditor__view_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KTextEditor__View*
///
QRect* k_texteditor__view_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KTextEditor__View*
///
QRect* k_texteditor__view_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KTextEditor__View*
///
QRegion* k_texteditor__view_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KTextEditor__View*
///
QSize* k_texteditor__view_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KTextEditor__View*
///
QSize* k_texteditor__view_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KTextEditor__View*
/// @param minimumSize QSize*
///
void k_texteditor__view_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KTextEditor__View*
/// @param minw int
/// @param minh int
///
void k_texteditor__view_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KTextEditor__View*
/// @param maximumSize QSize*
///
void k_texteditor__view_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KTextEditor__View*
/// @param maxw int
/// @param maxh int
///
void k_texteditor__view_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KTextEditor__View*
/// @param minw int
///
void k_texteditor__view_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KTextEditor__View*
/// @param minh int
///
void k_texteditor__view_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KTextEditor__View*
/// @param maxw int
///
void k_texteditor__view_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KTextEditor__View*
/// @param maxh int
///
void k_texteditor__view_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KTextEditor__View*
///
QSize* k_texteditor__view_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KTextEditor__View*
/// @param sizeIncrement QSize*
///
void k_texteditor__view_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KTextEditor__View*
/// @param w int
/// @param h int
///
void k_texteditor__view_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KTextEditor__View*
///
QSize* k_texteditor__view_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KTextEditor__View*
/// @param baseSize QSize*
///
void k_texteditor__view_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KTextEditor__View*
/// @param basew int
/// @param baseh int
///
void k_texteditor__view_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KTextEditor__View*
/// @param fixedSize QSize*
///
void k_texteditor__view_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KTextEditor__View*
/// @param w int
/// @param h int
///
void k_texteditor__view_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KTextEditor__View*
/// @param w int
///
void k_texteditor__view_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KTextEditor__View*
/// @param h int
///
void k_texteditor__view_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KTextEditor__View*
/// @param param1 QPointF*
///
QPointF* k_texteditor__view_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KTextEditor__View*
/// @param param1 QPoint*
///
QPoint* k_texteditor__view_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KTextEditor__View*
/// @param param1 QPointF*
///
QPointF* k_texteditor__view_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KTextEditor__View*
/// @param param1 QPoint*
///
QPoint* k_texteditor__view_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KTextEditor__View*
/// @param param1 QPointF*
///
QPointF* k_texteditor__view_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KTextEditor__View*
/// @param param1 QPoint*
///
QPoint* k_texteditor__view_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KTextEditor__View*
/// @param param1 QPointF*
///
QPointF* k_texteditor__view_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KTextEditor__View*
/// @param param1 QPoint*
///
QPoint* k_texteditor__view_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KTextEditor__View*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_texteditor__view_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KTextEditor__View*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_texteditor__view_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KTextEditor__View*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_texteditor__view_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KTextEditor__View*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_texteditor__view_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KTextEditor__View*
///
QWidget* k_texteditor__view_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KTextEditor__View*
///
QWidget* k_texteditor__view_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KTextEditor__View*
///
QWidget* k_texteditor__view_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KTextEditor__View*
///
const QPalette* k_texteditor__view_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KTextEditor__View*
/// @param palette QPalette*
///
void k_texteditor__view_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KTextEditor__View*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_texteditor__view_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KTextEditor__View*
///
/// @return enum QPalette__ColorRole
///
int32_t k_texteditor__view_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KTextEditor__View*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_texteditor__view_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KTextEditor__View*
///
/// @return enum QPalette__ColorRole
///
int32_t k_texteditor__view_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KTextEditor__View*
///
const QFont* k_texteditor__view_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KTextEditor__View*
/// @param font QFont*
///
void k_texteditor__view_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KTextEditor__View*
///
QFontMetrics* k_texteditor__view_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KTextEditor__View*
///
QFontInfo* k_texteditor__view_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KTextEditor__View*
///
QCursor* k_texteditor__view_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KTextEditor__View*
/// @param cursor QCursor*
///
void k_texteditor__view_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KTextEditor__View*
/// @param enable bool
///
void k_texteditor__view_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KTextEditor__View*
/// @param enable bool
///
void k_texteditor__view_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KTextEditor__View*
/// @param mask QBitmap*
///
void k_texteditor__view_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KTextEditor__View*
/// @param mask QRegion*
///
void k_texteditor__view_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KTextEditor__View*
///
QRegion* k_texteditor__view_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__View*
/// @param target QPaintDevice*
///
void k_texteditor__view_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__View*
/// @param painter QPainter*
///
void k_texteditor__view_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KTextEditor__View*
///
QPixmap* k_texteditor__view_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KTextEditor__View*
///
QGraphicsEffect* k_texteditor__view_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KTextEditor__View*
/// @param effect QGraphicsEffect*
///
void k_texteditor__view_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KTextEditor__View*
/// @param type enum Qt__GestureType
///
void k_texteditor__view_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KTextEditor__View*
/// @param type enum Qt__GestureType
///
void k_texteditor__view_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KTextEditor__View*
/// @param windowTitle const char*
///
void k_texteditor__view_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KTextEditor__View*
/// @param styleSheet const char*
///
void k_texteditor__view_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KTextEditor__View*
/// @param icon QIcon*
///
void k_texteditor__view_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KTextEditor__View*
///
QIcon* k_texteditor__view_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KTextEditor__View*
/// @param windowIconText const char*
///
void k_texteditor__view_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KTextEditor__View*
/// @param windowRole const char*
///
void k_texteditor__view_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KTextEditor__View*
/// @param filePath const char*
///
void k_texteditor__view_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KTextEditor__View*
/// @param level double
///
void k_texteditor__view_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KTextEditor__View*
///
double k_texteditor__view_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KTextEditor__View*
/// @param toolTip const char*
///
void k_texteditor__view_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KTextEditor__View*
/// @param msec int
///
void k_texteditor__view_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KTextEditor__View*
/// @param statusTip const char*
///
void k_texteditor__view_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KTextEditor__View*
/// @param whatsThis const char*
///
void k_texteditor__view_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KTextEditor__View*
/// @param name const char*
///
void k_texteditor__view_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KTextEditor__View*
/// @param description const char*
///
void k_texteditor__view_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KTextEditor__View*
/// @param direction enum Qt__LayoutDirection
///
void k_texteditor__view_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KTextEditor__View*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_texteditor__view_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KTextEditor__View*
/// @param locale QLocale*
///
void k_texteditor__view_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KTextEditor__View*
///
QLocale* k_texteditor__view_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KTextEditor__View*
/// @param reason enum Qt__FocusReason
///
void k_texteditor__view_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KTextEditor__View*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_texteditor__view_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KTextEditor__View*
/// @param policy enum Qt__FocusPolicy
///
void k_texteditor__view_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_texteditor__view_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KTextEditor__View*
/// @param focusProxy QWidget*
///
void k_texteditor__view_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KTextEditor__View*
///
QWidget* k_texteditor__view_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KTextEditor__View*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_texteditor__view_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KTextEditor__View*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_texteditor__view_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KTextEditor__View*
/// @param param1 QCursor*
///
void k_texteditor__view_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KTextEditor__View*
/// @param key QKeySequence*
///
int32_t k_texteditor__view_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KTextEditor__View*
/// @param id int
///
void k_texteditor__view_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KTextEditor__View*
/// @param id int
///
void k_texteditor__view_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KTextEditor__View*
/// @param id int
///
void k_texteditor__view_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_texteditor__view_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_texteditor__view_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KTextEditor__View*
/// @param enable bool
///
void k_texteditor__view_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KTextEditor__View*
///
QGraphicsProxyWidget* k_texteditor__view_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTextEditor__View*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_texteditor__view_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTextEditor__View*
/// @param param1 QRect*
///
void k_texteditor__view_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTextEditor__View*
/// @param param1 QRegion*
///
void k_texteditor__view_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTextEditor__View*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_texteditor__view_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTextEditor__View*
/// @param param1 QRect*
///
void k_texteditor__view_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTextEditor__View*
/// @param param1 QRegion*
///
void k_texteditor__view_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// @param self KTextEditor__View*
/// @param visible bool
///
void k_texteditor__view_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KTextEditor__View*
/// @param hidden bool
///
void k_texteditor__view_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KTextEditor__View*
/// @param param1 QWidget*
///
void k_texteditor__view_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KTextEditor__View*
/// @param x int
/// @param y int
///
void k_texteditor__view_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KTextEditor__View*
/// @param param1 QPoint*
///
void k_texteditor__view_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KTextEditor__View*
/// @param w int
/// @param h int
///
void k_texteditor__view_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KTextEditor__View*
/// @param param1 QSize*
///
void k_texteditor__view_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KTextEditor__View*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_texteditor__view_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KTextEditor__View*
/// @param geometry QRect*
///
void k_texteditor__view_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__View*
///
char* k_texteditor__view_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KTextEditor__View*
/// @param geometry char*
///
bool k_texteditor__view_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KTextEditor__View*
/// @param param1 QWidget*
///
bool k_texteditor__view_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KTextEditor__View*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_texteditor__view_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KTextEditor__View*
/// @param state flag of enum Qt__WindowState
///
void k_texteditor__view_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KTextEditor__View*
/// @param state flag of enum Qt__WindowState
///
void k_texteditor__view_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// @param self KTextEditor__View*
///
QSize* k_texteditor__view_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// @param self KTextEditor__View*
///
QSize* k_texteditor__view_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KTextEditor__View*
///
QSizePolicy* k_texteditor__view_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KTextEditor__View*
/// @param sizePolicy QSizePolicy*
///
void k_texteditor__view_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KTextEditor__View*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_texteditor__view_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// @param self KTextEditor__View*
/// @param param1 int
///
int32_t k_texteditor__view_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KTextEditor__View*
///
QRegion* k_texteditor__view_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KTextEditor__View*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_texteditor__view_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KTextEditor__View*
/// @param margins QMargins*
///
void k_texteditor__view_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KTextEditor__View*
///
QMargins* k_texteditor__view_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KTextEditor__View*
///
QRect* k_texteditor__view_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KTextEditor__View*
///
QLayout* k_texteditor__view_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KTextEditor__View*
/// @param layout QLayout*
///
void k_texteditor__view_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KTextEditor__View*
/// @param parent QWidget*
///
void k_texteditor__view_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KTextEditor__View*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_texteditor__view_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KTextEditor__View*
/// @param dx int
/// @param dy int
///
void k_texteditor__view_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KTextEditor__View*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_texteditor__view_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KTextEditor__View*
///
QWidget* k_texteditor__view_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KTextEditor__View*
///
QWidget* k_texteditor__view_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KTextEditor__View*
///
QWidget* k_texteditor__view_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KTextEditor__View*
/// @param on bool
///
void k_texteditor__view_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEditor__View*
/// @param action QAction*
///
void k_texteditor__view_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KTextEditor__View*
/// @param actions libqt_list of QAction*
///
void k_texteditor__view_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KTextEditor__View*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_texteditor__view_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KTextEditor__View*
/// @param before QAction*
/// @param action QAction*
///
void k_texteditor__view_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KTextEditor__View*
/// @param action QAction*
///
void k_texteditor__view_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KTextEditor__View*
///
/// @return libqt_list of QAction*
///
libqt_list k_texteditor__view_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEditor__View*
/// @param text const char*
///
QAction* k_texteditor__view_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEditor__View*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_texteditor__view_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEditor__View*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_texteditor__view_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEditor__View*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_texteditor__view_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KTextEditor__View*
///
QWidget* k_texteditor__view_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KTextEditor__View*
/// @param type flag of enum Qt__WindowType
///
void k_texteditor__view_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KTextEditor__View*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_texteditor__view_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KTextEditor__View*
/// @param param1 enum Qt__WindowType
///
void k_texteditor__view_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KTextEditor__View*
/// @param type flag of enum Qt__WindowType
///
void k_texteditor__view_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KTextEditor__View*
///
/// @return enum Qt__WindowType
///
int32_t k_texteditor__view_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_texteditor__view_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTextEditor__View*
/// @param x int
/// @param y int
///
QWidget* k_texteditor__view_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTextEditor__View*
/// @param p QPoint*
///
QWidget* k_texteditor__view_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTextEditor__View*
/// @param p QPointF*
///
QWidget* k_texteditor__view_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KTextEditor__View*
/// @param param1 enum Qt__WidgetAttribute
///
void k_texteditor__view_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KTextEditor__View*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_texteditor__view_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// @param self KTextEditor__View*
///
QPaintEngine* k_texteditor__view_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KTextEditor__View*
/// @param child QWidget*
///
bool k_texteditor__view_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KTextEditor__View*
/// @param enabled bool
///
void k_texteditor__view_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KTextEditor__View*
///
QBackingStore* k_texteditor__view_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KTextEditor__View*
///
QWindow* k_texteditor__view_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KTextEditor__View*
///
QScreen* k_texteditor__view_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KTextEditor__View*
/// @param screen QScreen*
///
void k_texteditor__view_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_texteditor__view_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KTextEditor__View*
/// @param title const char*
///
void k_texteditor__view_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, const char* title)
///
void k_texteditor__view_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KTextEditor__View*
/// @param icon QIcon*
///
void k_texteditor__view_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, QIcon* icon)
///
void k_texteditor__view_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KTextEditor__View*
/// @param iconText const char*
///
void k_texteditor__view_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, const char* iconText)
///
void k_texteditor__view_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KTextEditor__View*
/// @param pos QPoint*
///
void k_texteditor__view_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, QPoint* pos)
///
void k_texteditor__view_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// @param self KTextEditor__View*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_texteditor__view_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KTextEditor__View*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_texteditor__view_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KTextEditor__View*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_texteditor__view_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__View*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_texteditor__view_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__View*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_texteditor__view_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__View*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_texteditor__view_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__View*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_texteditor__view_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__View*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_texteditor__view_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__View*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_texteditor__view_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KTextEditor__View*
/// @param rectangle QRect*
///
QPixmap* k_texteditor__view_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KTextEditor__View*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_texteditor__view_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KTextEditor__View*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_texteditor__view_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KTextEditor__View*
/// @param id int
/// @param enable bool
///
void k_texteditor__view_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KTextEditor__View*
/// @param id int
/// @param enable bool
///
void k_texteditor__view_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KTextEditor__View*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_texteditor__view_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KTextEditor__View*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_texteditor__view_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_texteditor__view_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_texteditor__view_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KTextEditor__View*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texteditor__view_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__View*
/// @param name const char*
///
void k_texteditor__view_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__View*
/// @param b bool
///
bool k_texteditor__view_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTextEditor__View*
///
QThread* k_texteditor__view_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__View*
/// @param thread QThread*
///
bool k_texteditor__view_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__View*
/// @param interval int
///
int32_t k_texteditor__view_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__View*
/// @param time int64_t of nanoseconds
///
int32_t k_texteditor__view_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__View*
/// @param id int
///
void k_texteditor__view_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__View*
/// @param id enum Qt__TimerId
///
void k_texteditor__view_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTextEditor__View*
///
/// @return libqt_list of QObject*
///
libqt_list k_texteditor__view_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__View*
/// @param filterObj QObject*
///
void k_texteditor__view_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__View*
/// @param obj QObject*
///
void k_texteditor__view_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__view_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texteditor__view_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__View*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texteditor__view_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__view_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texteditor__view_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KTextEditor__View*
/// @param receiver QObject*
///
bool k_texteditor__view_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texteditor__view_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__View*
/// @param name const char*
/// @param value QVariant*
///
bool k_texteditor__view_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTextEditor__View*
/// @param name const char*
///
QVariant* k_texteditor__view_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KTextEditor__View*
///
const char** k_texteditor__view_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__View*
///
QBindingStorage* k_texteditor__view_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__View*
///
const QBindingStorage* k_texteditor__view_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self)
///
void k_texteditor__view_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTextEditor__View*
///
QObject* k_texteditor__view_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTextEditor__View*
/// @param classname const char*
///
bool k_texteditor__view_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__View*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__view_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__View*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texteditor__view_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_texteditor__view_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_texteditor__view_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__View*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texteditor__view_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KTextEditor__View*
/// @param signal const char*
///
bool k_texteditor__view_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KTextEditor__View*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_texteditor__view_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KTextEditor__View*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__view_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KTextEditor__View*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texteditor__view_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__View*
/// @param param1 QObject*
///
void k_texteditor__view_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, QObject* param1)
///
void k_texteditor__view_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KTextEditor__View*
///
bool k_texteditor__view_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KTextEditor__View*
///
double k_texteditor__view_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KTextEditor__View*
///
double k_texteditor__view_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KTextEditor__View*
///
int32_t k_texteditor__view_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_texteditor__view_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_texteditor__view_encode_metric_f(int32_t metric, double value);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// @param self KTextEditor__View*
/// @param name const char*
///
QAction* k_texteditor__view_action(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// @param self KTextEditor__View*
/// @param element QDomElement*
///
QAction* k_texteditor__view_action2(void* self, void* element);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// @param self KTextEditor__View*
///
KActionCollection* k_texteditor__view_action_collection(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_component_name(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// @param self KTextEditor__View*
///
QDomDocument* k_texteditor__view_dom_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KTextEditor__View*
///
const char* k_texteditor__view_local_x_m_l_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
///
/// @param self KTextEditor__View*
/// @param doc QDomDocument*
///
void k_texteditor__view_set_x_m_l_g_u_i_build_document(void* self, void* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
///
/// @param self KTextEditor__View*
///
QDomDocument* k_texteditor__view_xmlgui_build_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
///
/// @param self KTextEditor__View*
/// @param factory KXMLGUIFactory*
///
void k_texteditor__view_set_factory(void* self, void* factory);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
///
/// @param self KTextEditor__View*
///
KXMLGUIFactory* k_texteditor__view_factory(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
///
/// @param self KTextEditor__View*
///
KXMLGUIClient* k_texteditor__view_parent_client(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
///
/// @param self KTextEditor__View*
/// @param child KXMLGUIClient*
///
void k_texteditor__view_insert_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
///
/// @param self KTextEditor__View*
/// @param child KXMLGUIClient*
///
void k_texteditor__view_remove_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
///
/// @param self KTextEditor__View*
///
/// @return libqt_list of KXMLGUIClient*
///
libqt_list k_texteditor__view_child_clients(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
///
/// @param self KTextEditor__View*
/// @param builder KXMLGUIBuilder*
///
void k_texteditor__view_set_client_builder(void* self, void* builder);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
///
/// @param self KTextEditor__View*
///
KXMLGUIBuilder* k_texteditor__view_client_builder(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_reload_x_m_l(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
///
/// @param self KTextEditor__View*
/// @param name const char*
/// @param actionList libqt_list of QAction*
///
void k_texteditor__view_plug_action_list(void* self, const char* name, libqt_list actionList);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
///
/// @param self KTextEditor__View*
/// @param name const char*
///
void k_texteditor__view_unplug_action_list(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param files const char**
/// @param doc const char*
///
const char* k_texteditor__view_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
///
/// @param self KTextEditor__View*
/// @param state const char*
/// @param action const char*
///
void k_texteditor__view_add_state_action_enabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
///
/// @param self KTextEditor__View*
/// @param state const char*
/// @param action const char*
///
void k_texteditor__view_add_state_action_disabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
///
/// @param self KTextEditor__View*
/// @param state const char*
///
KXMLGUIClient__StateChange* k_texteditor__view_get_actions_to_change_for_state(void* self, const char* state);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
///
/// @param self KTextEditor__View*
/// @param param1 QWidget*
///
void k_texteditor__view_begin_x_m_l_plug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_end_x_m_l_plug(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
///
/// @param self KTextEditor__View*
/// @param param1 QWidget*
///
void k_texteditor__view_prepare_x_m_l_unplug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KTextEditor__View*
/// @param xmlfile const char*
/// @param localxmlfile const char*
///
void k_texteditor__view_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param xml const char*
///
const char* k_texteditor__view_find_version_number(const char* xml);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KTextEditor__View*
/// @param xmlfile const char*
/// @param localxmlfile const char*
/// @param merge bool
///
void k_texteditor__view_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__View*
/// @param callback void func(KTextEditor__View* self, const char* objectName)
///
void k_texteditor__view_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__View*
///
void k_texteditor__view_delete(void* self);

/// [Upstream resources](https://api.kde.org/view.html#public-types)

typedef enum {
    KTEXTEDITOR_VIEW_INPUTMODE_NORMALINPUTMODE = 0,
    KTEXTEDITOR_VIEW_INPUTMODE_VIINPUTMODE = 1
} KTextEditor__View__InputMode;

/// [Upstream resources](https://api.kde.org/view.html#public-types)

typedef enum {
    KTEXTEDITOR_VIEW_VIEWMODE_NORMALMODEINSERT = 0,
    KTEXTEDITOR_VIEW_VIEWMODE_NORMALMODEOVERWRITE = 1,
    KTEXTEDITOR_VIEW_VIEWMODE_VIMODENORMAL = 10,
    KTEXTEDITOR_VIEW_VIEWMODE_VIMODEINSERT = 11,
    KTEXTEDITOR_VIEW_VIEWMODE_VIMODEVISUAL = 12,
    KTEXTEDITOR_VIEW_VIEWMODE_VIMODEVISUALLINE = 13,
    KTEXTEDITOR_VIEW_VIEWMODE_VIMODEVISUALBLOCK = 14,
    KTEXTEDITOR_VIEW_VIEWMODE_VIMODEREPLACE = 15
} KTextEditor__View__ViewMode;

/// [Upstream resources](https://api.kde.org/view.html#public-types)

typedef enum {
    KTEXTEDITOR_VIEW_LINETYPE_REALLINE = 0,
    KTEXTEDITOR_VIEW_LINETYPE_VISIBLELINE = 1
} KTextEditor__View__LineType;

#endif
