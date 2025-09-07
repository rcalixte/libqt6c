#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONQT6C_LIBKCOMPLETIONBOX_H
#define SRC_EXTRAS_KCOMPLETIONQT6C_LIBKCOMPLETIONBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kcompletionbox.html

/// k_completionbox_new constructs a new KCompletionBox object.
///
/// @param parent QWidget*
KCompletionBox* k_completionbox_new(void* parent);

/// k_completionbox_new2 constructs a new KCompletionBox object.
///
KCompletionBox* k_completionbox_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KCompletionBox*
const QMetaObject* k_completionbox_meta_object(void* self);

/// @param self KCompletionBox*
/// @param param1 const char*
void* k_completionbox_metacast(void* self, const char* param1);

/// @param self KCompletionBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_completionbox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCompletionBox*
/// @param callback int32_t func(KCompletionBox* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_completionbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KCompletionBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_completionbox_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_completionbox_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#sizeHint)
///
/// @param self KCompletionBox*
QSize* k_completionbox_size_hint(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBox*
/// @param callback QSize* func()
void k_completionbox_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#sizeHint)
///
/// Base class method implementation
///
/// @param self KCompletionBox*
QSize* k_completionbox_qbase_size_hint(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#activateOnSelect)
///
/// @param self KCompletionBox*
bool k_completionbox_activate_on_select(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#items)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char** k_completionbox_items(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#isTabHandling)
///
/// @param self KCompletionBox*
bool k_completionbox_is_tab_handling(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#cancelledText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char* k_completionbox_cancelled_text(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#insertItems)
///
/// @param self KCompletionBox*
/// @param items const char**
void k_completionbox_insert_items(void* self, const char* items[]);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#setItems)
///
/// @param self KCompletionBox*
/// @param items const char**
void k_completionbox_set_items(void* self, const char* items[]);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#popup)
///
/// @param self KCompletionBox*
void k_completionbox_popup(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#popup)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_popup(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#popup)
///
/// Base class method implementation
///
/// @param self KCompletionBox*
void k_completionbox_qbase_popup(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#setTabHandling)
///
/// @param self KCompletionBox*
/// @param enable bool
void k_completionbox_set_tab_handling(void* self, bool enable);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#setCancelledText)
///
/// @param self KCompletionBox*
/// @param text const char*
void k_completionbox_set_cancelled_text(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#setActivateOnSelect)
///
/// @param self KCompletionBox*
/// @param doEmit bool
void k_completionbox_set_activate_on_select(void* self, bool doEmit);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#down)
///
/// @param self KCompletionBox*
void k_completionbox_down(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#up)
///
/// @param self KCompletionBox*
void k_completionbox_up(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#pageDown)
///
/// @param self KCompletionBox*
void k_completionbox_page_down(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#pageUp)
///
/// @param self KCompletionBox*
void k_completionbox_page_up(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#home)
///
/// @param self KCompletionBox*
void k_completionbox_home(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#end)
///
/// @param self KCompletionBox*
void k_completionbox_end(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#setVisible)
///
/// @param self KCompletionBox*
/// @param visible bool
void k_completionbox_set_visible(void* self, bool visible);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#setVisible)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, bool visible)
void k_completionbox_on_set_visible(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#setVisible)
///
/// Base class method implementation
///
/// @param self KCompletionBox*
/// @param visible bool
void k_completionbox_qbase_set_visible(void* self, bool visible);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#textActivated)
///
/// @param self KCompletionBox*
/// @param text const char*
void k_completionbox_text_activated(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#textActivated)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, const char* text)
void k_completionbox_on_text_activated(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#userCancelled)
///
/// @param self KCompletionBox*
/// @param param1 const char*
void k_completionbox_user_cancelled(void* self, const char* param1);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#userCancelled)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, const char* param1)
void k_completionbox_on_user_cancelled(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#calculateGeometry)
///
/// @param self KCompletionBox*
QRect* k_completionbox_calculate_geometry(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#calculateGeometry)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBox*
/// @param callback QRect* func()
void k_completionbox_on_calculate_geometry(void* self, QRect* (*callback)());

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#calculateGeometry)
///
/// Base class method implementation
///
/// @param self KCompletionBox*
QRect* k_completionbox_qbase_calculate_geometry(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#resizeAndReposition)
///
/// @param self KCompletionBox*
void k_completionbox_resize_and_reposition(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#resizeAndReposition)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_resize_and_reposition(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#resizeAndReposition)
///
/// Base class method implementation
///
/// @param self KCompletionBox*
void k_completionbox_qbase_resize_and_reposition(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#eventFilter)
///
/// @param self KCompletionBox*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_completionbox_event_filter(void* self, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBox*
/// @param callback bool func(KCompletionBox* self, QObject* param1, QEvent* param2)
void k_completionbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KCompletionBox*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_completionbox_qbase_event_filter(void* self, void* param1, void* param2);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#globalPositionHint)
///
/// @param self KCompletionBox*
QPoint* k_completionbox_global_position_hint(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#globalPositionHint)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBox*
/// @param callback QPoint* func()
void k_completionbox_on_global_position_hint(void* self, QPoint* (*callback)());

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#globalPositionHint)
///
/// Base class method implementation
///
/// @param self KCompletionBox*
QPoint* k_completionbox_qbase_global_position_hint(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#slotActivated)
///
/// @param self KCompletionBox*
/// @param param1 QListWidgetItem*
void k_completionbox_slot_activated(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#slotActivated)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QListWidgetItem* param1)
void k_completionbox_on_slot_activated(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#slotActivated)
///
/// Base class method implementation
///
/// @param self KCompletionBox*
/// @param param1 QListWidgetItem*
void k_completionbox_qbase_slot_activated(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_completionbox_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_completionbox_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#insertItems)
///
/// @param self KCompletionBox*
/// @param items const char**
/// @param index int
void k_completionbox_insert_items2(void* self, const char* items[], int index);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#item)
///
/// @param self KCompletionBox*
/// @param row int
QListWidgetItem* k_completionbox_item(void* self, int row);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#row)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
int32_t k_completionbox_row(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItem)
///
/// @param self KCompletionBox*
/// @param row int
/// @param item QListWidgetItem*
void k_completionbox_insert_item(void* self, int row, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItem)
///
/// @param self KCompletionBox*
/// @param row int
/// @param label const char*
void k_completionbox_insert_item2(void* self, int row, const char* label);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItem)
///
/// @param self KCompletionBox*
/// @param label const char*
void k_completionbox_add_item(void* self, const char* label);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItem)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
void k_completionbox_add_item2(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItems)
///
/// @param self KCompletionBox*
/// @param labels const char**
void k_completionbox_add_items(void* self, const char* labels[]);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#takeItem)
///
/// @param self KCompletionBox*
/// @param row int
QListWidgetItem* k_completionbox_take_item(void* self, int row);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#count)
///
/// @param self KCompletionBox*
int32_t k_completionbox_count(void* self);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItem)
///
/// @param self KCompletionBox*
QListWidgetItem* k_completionbox_current_item(void* self);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentItem)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
void k_completionbox_set_current_item(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentItem)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void k_completionbox_set_current_item2(void* self, void* item, int32_t command);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRow)
///
/// @param self KCompletionBox*
int32_t k_completionbox_current_row(void* self);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentRow)
///
/// @param self KCompletionBox*
/// @param row int
void k_completionbox_set_current_row(void* self, int row);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentRow)
///
/// @param self KCompletionBox*
/// @param row int
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void k_completionbox_set_current_row2(void* self, int row, int32_t command);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemAt)
///
/// @param self KCompletionBox*
/// @param p QPoint*
QListWidgetItem* k_completionbox_item_at(void* self, void* p);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemAt)
///
/// @param self KCompletionBox*
/// @param x int
/// @param y int
QListWidgetItem* k_completionbox_item_at2(void* self, int x, int y);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#visualItemRect)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
QRect* k_completionbox_visual_item_rect(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#sortItems)
///
/// @param self KCompletionBox*
void k_completionbox_sort_items(void* self);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSortingEnabled)
///
/// @param self KCompletionBox*
/// @param enable bool
void k_completionbox_set_sorting_enabled(void* self, bool enable);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#isSortingEnabled)
///
/// @param self KCompletionBox*
bool k_completionbox_is_sorting_enabled(void* self);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#editItem)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
void k_completionbox_edit_item(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#openPersistentEditor)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
void k_completionbox_open_persistent_editor(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#closePersistentEditor)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
void k_completionbox_close_persistent_editor(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#isPersistentEditorOpen)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
bool k_completionbox_is_persistent_editor_open(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemWidget)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
QWidget* k_completionbox_item_widget(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setItemWidget)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
/// @param widget QWidget*
void k_completionbox_set_item_widget(void* self, void* item, void* widget);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#removeItemWidget)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
void k_completionbox_remove_item_widget(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#selectedItems)
///
/// @param self KCompletionBox*
libqt_list /* of QListWidgetItem* */ k_completionbox_selected_items(void* self);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#findItems)
///
/// @param self KCompletionBox*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QListWidgetItem* */ k_completionbox_find_items(void* self, const char* text, int32_t flags);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#indexFromItem)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
QModelIndex* k_completionbox_index_from_item(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemFromIndex)
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
QListWidgetItem* k_completionbox_item_from_index(void* self, void* index);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#scrollToItem)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
void k_completionbox_scroll_to_item(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#clear)
///
/// @param self KCompletionBox*
void k_completionbox_clear(void* self);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemPressed)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
void k_completionbox_item_pressed(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemPressed)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QListWidgetItem* item)
void k_completionbox_on_item_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemClicked)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
void k_completionbox_item_clicked(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemClicked)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QListWidgetItem* item)
void k_completionbox_on_item_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemDoubleClicked)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
void k_completionbox_item_double_clicked(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemDoubleClicked)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QListWidgetItem* item)
void k_completionbox_on_item_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemActivated)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
void k_completionbox_item_activated(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemActivated)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QListWidgetItem* item)
void k_completionbox_on_item_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemEntered)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
void k_completionbox_item_entered(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemEntered)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QListWidgetItem* item)
void k_completionbox_on_item_entered(void* self, void (*callback)(void*, void*));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemChanged)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
void k_completionbox_item_changed(void* self, void* item);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemChanged)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QListWidgetItem* item)
void k_completionbox_on_item_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItemChanged)
///
/// @param self KCompletionBox*
/// @param current QListWidgetItem*
/// @param previous QListWidgetItem*
void k_completionbox_current_item_changed(void* self, void* current, void* previous);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItemChanged)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QListWidgetItem* current, QListWidgetItem* previous)
void k_completionbox_on_current_item_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentTextChanged)
///
/// @param self KCompletionBox*
/// @param currentText const char*
void k_completionbox_current_text_changed(void* self, const char* currentText);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentTextChanged)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, const char* currentText)
void k_completionbox_on_current_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRowChanged)
///
/// @param self KCompletionBox*
/// @param currentRow int
void k_completionbox_current_row_changed(void* self, int currentRow);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRowChanged)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, int currentRow)
void k_completionbox_on_current_row_changed(void* self, void (*callback)(void*, int));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemSelectionChanged)
///
/// @param self KCompletionBox*
void k_completionbox_item_selection_changed(void* self);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemSelectionChanged)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self)
void k_completionbox_on_item_selection_changed(void* self, void (*callback)(void*));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#sortItems)
///
/// @param self KCompletionBox*
/// @param order enum Qt__SortOrder
void k_completionbox_sort_items1(void* self, int32_t order);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#scrollToItem)
///
/// @param self KCompletionBox*
/// @param item QListWidgetItem*
/// @param hint enum QAbstractItemView__ScrollHint
void k_completionbox_scroll_to_item2(void* self, void* item, int32_t hint);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setMovement)
///
/// @param self KCompletionBox*
/// @param movement enum QListView__Movement
void k_completionbox_set_movement(void* self, int32_t movement);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#movement)
///
/// @param self KCompletionBox*
///
/// @return enum QListView__Movement
int32_t k_completionbox_movement(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setFlow)
///
/// @param self KCompletionBox*
/// @param flow enum QListView__Flow
void k_completionbox_set_flow(void* self, int32_t flow);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#flow)
///
/// @param self KCompletionBox*
///
/// @return enum QListView__Flow
int32_t k_completionbox_flow(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
///
/// @param self KCompletionBox*
/// @param enable bool
void k_completionbox_set_wrapping(void* self, bool enable);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
///
/// @param self KCompletionBox*
bool k_completionbox_is_wrapping(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
///
/// @param self KCompletionBox*
/// @param mode enum QListView__ResizeMode
void k_completionbox_set_resize_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
///
/// @param self KCompletionBox*
///
/// @return enum QListView__ResizeMode
int32_t k_completionbox_resize_mode(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
///
/// @param self KCompletionBox*
/// @param mode enum QListView__LayoutMode
void k_completionbox_set_layout_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
///
/// @param self KCompletionBox*
///
/// @return enum QListView__LayoutMode
int32_t k_completionbox_layout_mode(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
///
/// @param self KCompletionBox*
/// @param space int
void k_completionbox_set_spacing(void* self, int space);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#spacing)
///
/// @param self KCompletionBox*
int32_t k_completionbox_spacing(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
///
/// @param self KCompletionBox*
/// @param batchSize int
void k_completionbox_set_batch_size(void* self, int batchSize);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#batchSize)
///
/// @param self KCompletionBox*
int32_t k_completionbox_batch_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setGridSize)
///
/// @param self KCompletionBox*
/// @param size QSize*
void k_completionbox_set_grid_size(void* self, void* size);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#gridSize)
///
/// @param self KCompletionBox*
QSize* k_completionbox_grid_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
///
/// @param self KCompletionBox*
/// @param mode enum QListView__ViewMode
void k_completionbox_set_view_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewMode)
///
/// @param self KCompletionBox*
///
/// @return enum QListView__ViewMode
int32_t k_completionbox_view_mode(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
///
/// @param self KCompletionBox*
void k_completionbox_clear_property_flags(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
///
/// @param self KCompletionBox*
/// @param row int
bool k_completionbox_is_row_hidden(void* self, int row);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
///
/// @param self KCompletionBox*
/// @param row int
/// @param hide bool
void k_completionbox_set_row_hidden(void* self, int row, bool hide);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
///
/// @param self KCompletionBox*
/// @param column int
void k_completionbox_set_model_column(void* self, int column);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
///
/// @param self KCompletionBox*
int32_t k_completionbox_model_column(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
///
/// @param self KCompletionBox*
/// @param enable bool
void k_completionbox_set_uniform_item_sizes(void* self, bool enable);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
///
/// @param self KCompletionBox*
bool k_completionbox_uniform_item_sizes(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
///
/// @param self KCompletionBox*
/// @param on bool
void k_completionbox_set_word_wrap(void* self, bool on);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
///
/// @param self KCompletionBox*
bool k_completionbox_word_wrap(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
///
/// @param self KCompletionBox*
/// @param show bool
void k_completionbox_set_selection_rect_visible(void* self, bool show);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
///
/// @param self KCompletionBox*
bool k_completionbox_is_selection_rect_visible(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
///
/// @param self KCompletionBox*
/// @param alignment flag of enum Qt__AlignmentFlag
void k_completionbox_set_item_alignment(void* self, int32_t alignment);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
///
/// @param self KCompletionBox*
///
/// @return flag of enum Qt__AlignmentFlag
int32_t k_completionbox_item_alignment(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// @param self KCompletionBox*
/// @param indexes libqt_list /* of QModelIndex* */
void k_completionbox_indexes_moved(void* self, libqt_list indexes);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, libqt_list /* of QModelIndex* */ /* of QModelIndex* */)
void k_completionbox_on_indexes_moved(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// @param self KCompletionBox*
/// @param model QAbstractItemModel*
void k_completionbox_set_model(void* self, void* model);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QAbstractItemModel* model)
void k_completionbox_on_set_model(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Base class method implementation
///
/// @param self KCompletionBox*
/// @param model QAbstractItemModel*
void k_completionbox_qbase_set_model(void* self, void* model);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// @param self KCompletionBox*
QAbstractItemModel* k_completionbox_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// @param self KCompletionBox*
QItemSelectionModel* k_completionbox_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// @param self KCompletionBox*
/// @param delegate QAbstractItemDelegate*
void k_completionbox_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self KCompletionBox*
QAbstractItemDelegate* k_completionbox_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// @param self KCompletionBox*
/// @param mode enum QAbstractItemView__SelectionMode
void k_completionbox_set_selection_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// @param self KCompletionBox*
///
/// @return enum QAbstractItemView__SelectionMode
int32_t k_completionbox_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// @param self KCompletionBox*
/// @param behavior enum QAbstractItemView__SelectionBehavior
void k_completionbox_set_selection_behavior(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// @param self KCompletionBox*
///
/// @return enum QAbstractItemView__SelectionBehavior
int32_t k_completionbox_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// @param self KCompletionBox*
QModelIndex* k_completionbox_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// @param self KCompletionBox*
QModelIndex* k_completionbox_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// @param self KCompletionBox*
/// @param triggers flag of enum QAbstractItemView__EditTrigger
void k_completionbox_set_edit_triggers(void* self, int32_t triggers);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// @param self KCompletionBox*
///
/// @return flag of enum QAbstractItemView__EditTrigger
int32_t k_completionbox_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// @param self KCompletionBox*
/// @param mode enum QAbstractItemView__ScrollMode
void k_completionbox_set_vertical_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// @param self KCompletionBox*
///
/// @return enum QAbstractItemView__ScrollMode
int32_t k_completionbox_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// @param self KCompletionBox*
void k_completionbox_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// @param self KCompletionBox*
/// @param mode enum QAbstractItemView__ScrollMode
void k_completionbox_set_horizontal_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// @param self KCompletionBox*
///
/// @return enum QAbstractItemView__ScrollMode
int32_t k_completionbox_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// @param self KCompletionBox*
void k_completionbox_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// @param self KCompletionBox*
/// @param enable bool
void k_completionbox_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// @param self KCompletionBox*
bool k_completionbox_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// @param self KCompletionBox*
/// @param margin int
void k_completionbox_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// @param self KCompletionBox*
int32_t k_completionbox_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// @param self KCompletionBox*
/// @param enable bool
void k_completionbox_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// @param self KCompletionBox*
bool k_completionbox_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// @param self KCompletionBox*
/// @param enable bool
void k_completionbox_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// @param self KCompletionBox*
bool k_completionbox_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// @param self KCompletionBox*
/// @param enable bool
void k_completionbox_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// @param self KCompletionBox*
bool k_completionbox_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// @param self KCompletionBox*
/// @param overwrite bool
void k_completionbox_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// @param self KCompletionBox*
bool k_completionbox_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// @param self KCompletionBox*
/// @param behavior enum QAbstractItemView__DragDropMode
void k_completionbox_set_drag_drop_mode(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// @param self KCompletionBox*
///
/// @return enum QAbstractItemView__DragDropMode
int32_t k_completionbox_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// @param self KCompletionBox*
/// @param dropAction enum Qt__DropAction
void k_completionbox_set_default_drop_action(void* self, int32_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// @param self KCompletionBox*
///
/// @return enum Qt__DropAction
int32_t k_completionbox_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// @param self KCompletionBox*
/// @param enable bool
void k_completionbox_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// @param self KCompletionBox*
bool k_completionbox_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// @param self KCompletionBox*
/// @param size QSize*
void k_completionbox_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// @param self KCompletionBox*
QSize* k_completionbox_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// @param self KCompletionBox*
/// @param mode enum Qt__TextElideMode
void k_completionbox_set_text_elide_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// @param self KCompletionBox*
///
/// @return enum Qt__TextElideMode
int32_t k_completionbox_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
QSize* k_completionbox_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
/// @param widget QWidget*
void k_completionbox_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
QWidget* k_completionbox_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// @param self KCompletionBox*
/// @param row int
/// @param delegate QAbstractItemDelegate*
void k_completionbox_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// @param self KCompletionBox*
/// @param row int
QAbstractItemDelegate* k_completionbox_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// @param self KCompletionBox*
/// @param column int
/// @param delegate QAbstractItemDelegate*
void k_completionbox_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// @param self KCompletionBox*
/// @param column int
QAbstractItemDelegate* k_completionbox_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
QAbstractItemDelegate* k_completionbox_item_delegate2(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
void k_completionbox_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// @param self KCompletionBox*
void k_completionbox_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
void k_completionbox_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// @param self KCompletionBox*
void k_completionbox_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// @param self KCompletionBox*
void k_completionbox_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
void k_completionbox_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
void k_completionbox_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QModelIndex* index)
void k_completionbox_on_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
void k_completionbox_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QModelIndex* index)
void k_completionbox_on_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
void k_completionbox_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QModelIndex* index)
void k_completionbox_on_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
void k_completionbox_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QModelIndex* index)
void k_completionbox_on_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
void k_completionbox_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QModelIndex* index)
void k_completionbox_on_entered(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self KCompletionBox*
void k_completionbox_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self)
void k_completionbox_on_viewport_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self KCompletionBox*
/// @param size QSize*
void k_completionbox_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QSize* size)
void k_completionbox_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self KCompletionBox*
///
/// @return enum Qt__ScrollBarPolicy
int32_t k_completionbox_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self KCompletionBox*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
void k_completionbox_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self KCompletionBox*
QScrollBar* k_completionbox_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self KCompletionBox*
/// @param scrollbar QScrollBar*
void k_completionbox_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self KCompletionBox*
///
/// @return enum Qt__ScrollBarPolicy
int32_t k_completionbox_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self KCompletionBox*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
void k_completionbox_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self KCompletionBox*
QScrollBar* k_completionbox_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self KCompletionBox*
/// @param scrollbar QScrollBar*
void k_completionbox_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self KCompletionBox*
QWidget* k_completionbox_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self KCompletionBox*
/// @param widget QWidget*
void k_completionbox_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self KCompletionBox*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
void k_completionbox_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self KCompletionBox*
/// @param alignment flag of enum Qt__AlignmentFlag
libqt_list /* of QWidget* */ k_completionbox_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self KCompletionBox*
QWidget* k_completionbox_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self KCompletionBox*
/// @param widget QWidget*
void k_completionbox_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self KCompletionBox*
QSize* k_completionbox_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self KCompletionBox*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
int32_t k_completionbox_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self KCompletionBox*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
void k_completionbox_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self KCompletionBox*
int32_t k_completionbox_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self KCompletionBox*
/// @param frameStyle int
void k_completionbox_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self KCompletionBox*
int32_t k_completionbox_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self KCompletionBox*
///
/// @return enum QFrame__Shape
int32_t k_completionbox_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self KCompletionBox*
/// @param frameShape enum QFrame__Shape
void k_completionbox_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self KCompletionBox*
///
/// @return enum QFrame__Shadow
int32_t k_completionbox_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self KCompletionBox*
/// @param frameShadow enum QFrame__Shadow
void k_completionbox_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self KCompletionBox*
int32_t k_completionbox_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self KCompletionBox*
/// @param lineWidth int
void k_completionbox_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self KCompletionBox*
int32_t k_completionbox_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self KCompletionBox*
/// @param midLineWidth int
void k_completionbox_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self KCompletionBox*
QRect* k_completionbox_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self KCompletionBox*
/// @param frameRect QRect*
void k_completionbox_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KCompletionBox*
uintptr_t k_completionbox_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KCompletionBox*
void k_completionbox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KCompletionBox*
uintptr_t k_completionbox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KCompletionBox*
uintptr_t k_completionbox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KCompletionBox*
QStyle* k_completionbox_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KCompletionBox*
/// @param style QStyle*
void k_completionbox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KCompletionBox*
bool k_completionbox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KCompletionBox*
bool k_completionbox_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KCompletionBox*
bool k_completionbox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KCompletionBox*
///
/// @return enum Qt__WindowModality
int32_t k_completionbox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KCompletionBox*
/// @param windowModality enum Qt__WindowModality
void k_completionbox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KCompletionBox*
bool k_completionbox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KCompletionBox*
/// @param param1 QWidget*
bool k_completionbox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KCompletionBox*
/// @param enabled bool
void k_completionbox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KCompletionBox*
/// @param disabled bool
void k_completionbox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KCompletionBox*
/// @param windowModified bool
void k_completionbox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KCompletionBox*
QRect* k_completionbox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KCompletionBox*
const QRect* k_completionbox_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KCompletionBox*
QRect* k_completionbox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KCompletionBox*
int32_t k_completionbox_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KCompletionBox*
int32_t k_completionbox_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KCompletionBox*
QPoint* k_completionbox_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KCompletionBox*
QSize* k_completionbox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KCompletionBox*
QSize* k_completionbox_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KCompletionBox*
int32_t k_completionbox_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KCompletionBox*
int32_t k_completionbox_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KCompletionBox*
QRect* k_completionbox_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KCompletionBox*
QRect* k_completionbox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KCompletionBox*
QRegion* k_completionbox_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KCompletionBox*
QSize* k_completionbox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KCompletionBox*
QSize* k_completionbox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KCompletionBox*
int32_t k_completionbox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KCompletionBox*
int32_t k_completionbox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KCompletionBox*
int32_t k_completionbox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KCompletionBox*
int32_t k_completionbox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KCompletionBox*
/// @param minimumSize QSize*
void k_completionbox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KCompletionBox*
/// @param minw int
/// @param minh int
void k_completionbox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KCompletionBox*
/// @param maximumSize QSize*
void k_completionbox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KCompletionBox*
/// @param maxw int
/// @param maxh int
void k_completionbox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KCompletionBox*
/// @param minw int
void k_completionbox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KCompletionBox*
/// @param minh int
void k_completionbox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KCompletionBox*
/// @param maxw int
void k_completionbox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KCompletionBox*
/// @param maxh int
void k_completionbox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KCompletionBox*
QSize* k_completionbox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KCompletionBox*
/// @param sizeIncrement QSize*
void k_completionbox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KCompletionBox*
/// @param w int
/// @param h int
void k_completionbox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KCompletionBox*
QSize* k_completionbox_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KCompletionBox*
/// @param baseSize QSize*
void k_completionbox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KCompletionBox*
/// @param basew int
/// @param baseh int
void k_completionbox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KCompletionBox*
/// @param fixedSize QSize*
void k_completionbox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KCompletionBox*
/// @param w int
/// @param h int
void k_completionbox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KCompletionBox*
/// @param w int
void k_completionbox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KCompletionBox*
/// @param h int
void k_completionbox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KCompletionBox*
/// @param param1 QPointF*
QPointF* k_completionbox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KCompletionBox*
/// @param param1 QPoint*
QPoint* k_completionbox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KCompletionBox*
/// @param param1 QPointF*
QPointF* k_completionbox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KCompletionBox*
/// @param param1 QPoint*
QPoint* k_completionbox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KCompletionBox*
/// @param param1 QPointF*
QPointF* k_completionbox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KCompletionBox*
/// @param param1 QPoint*
QPoint* k_completionbox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KCompletionBox*
/// @param param1 QPointF*
QPointF* k_completionbox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KCompletionBox*
/// @param param1 QPoint*
QPoint* k_completionbox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KCompletionBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_completionbox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KCompletionBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_completionbox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KCompletionBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_completionbox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KCompletionBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_completionbox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KCompletionBox*
QWidget* k_completionbox_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KCompletionBox*
QWidget* k_completionbox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KCompletionBox*
QWidget* k_completionbox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KCompletionBox*
const QPalette* k_completionbox_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KCompletionBox*
/// @param palette QPalette*
void k_completionbox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KCompletionBox*
/// @param backgroundRole enum QPalette__ColorRole
void k_completionbox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KCompletionBox*
///
/// @return enum QPalette__ColorRole
int32_t k_completionbox_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KCompletionBox*
/// @param foregroundRole enum QPalette__ColorRole
void k_completionbox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KCompletionBox*
///
/// @return enum QPalette__ColorRole
int32_t k_completionbox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KCompletionBox*
const QFont* k_completionbox_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KCompletionBox*
/// @param font QFont*
void k_completionbox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KCompletionBox*
QFontMetrics* k_completionbox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KCompletionBox*
QFontInfo* k_completionbox_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KCompletionBox*
QCursor* k_completionbox_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KCompletionBox*
/// @param cursor QCursor*
void k_completionbox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KCompletionBox*
void k_completionbox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KCompletionBox*
/// @param enable bool
void k_completionbox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KCompletionBox*
bool k_completionbox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KCompletionBox*
bool k_completionbox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KCompletionBox*
/// @param enable bool
void k_completionbox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KCompletionBox*
bool k_completionbox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KCompletionBox*
/// @param mask QBitmap*
void k_completionbox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KCompletionBox*
/// @param mask QRegion*
void k_completionbox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KCompletionBox*
QRegion* k_completionbox_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KCompletionBox*
void k_completionbox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCompletionBox*
/// @param target QPaintDevice*
void k_completionbox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCompletionBox*
/// @param painter QPainter*
void k_completionbox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KCompletionBox*
QPixmap* k_completionbox_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KCompletionBox*
QGraphicsEffect* k_completionbox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KCompletionBox*
/// @param effect QGraphicsEffect*
void k_completionbox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KCompletionBox*
/// @param typeVal enum Qt__GestureType
void k_completionbox_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KCompletionBox*
/// @param typeVal enum Qt__GestureType
void k_completionbox_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KCompletionBox*
/// @param windowTitle const char*
void k_completionbox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KCompletionBox*
/// @param styleSheet const char*
void k_completionbox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char* k_completionbox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char* k_completionbox_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KCompletionBox*
/// @param icon QIcon*
void k_completionbox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KCompletionBox*
QIcon* k_completionbox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KCompletionBox*
/// @param windowIconText const char*
void k_completionbox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char* k_completionbox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KCompletionBox*
/// @param windowRole const char*
void k_completionbox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char* k_completionbox_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KCompletionBox*
/// @param filePath const char*
void k_completionbox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char* k_completionbox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KCompletionBox*
/// @param level double
void k_completionbox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KCompletionBox*
double k_completionbox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KCompletionBox*
bool k_completionbox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KCompletionBox*
/// @param toolTip const char*
void k_completionbox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char* k_completionbox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KCompletionBox*
/// @param msec int
void k_completionbox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KCompletionBox*
int32_t k_completionbox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KCompletionBox*
/// @param statusTip const char*
void k_completionbox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char* k_completionbox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KCompletionBox*
/// @param whatsThis const char*
void k_completionbox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char* k_completionbox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char* k_completionbox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KCompletionBox*
/// @param name const char*
void k_completionbox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char* k_completionbox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KCompletionBox*
/// @param description const char*
void k_completionbox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KCompletionBox*
/// @param direction enum Qt__LayoutDirection
void k_completionbox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KCompletionBox*
///
/// @return enum Qt__LayoutDirection
int32_t k_completionbox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KCompletionBox*
void k_completionbox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KCompletionBox*
/// @param locale QLocale*
void k_completionbox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KCompletionBox*
QLocale* k_completionbox_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KCompletionBox*
void k_completionbox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KCompletionBox*
bool k_completionbox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KCompletionBox*
bool k_completionbox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KCompletionBox*
void k_completionbox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KCompletionBox*
bool k_completionbox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KCompletionBox*
void k_completionbox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KCompletionBox*
void k_completionbox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KCompletionBox*
/// @param reason enum Qt__FocusReason
void k_completionbox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KCompletionBox*
///
/// @return enum Qt__FocusPolicy
int32_t k_completionbox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KCompletionBox*
/// @param policy enum Qt__FocusPolicy
void k_completionbox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KCompletionBox*
bool k_completionbox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_completionbox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KCompletionBox*
/// @param focusProxy QWidget*
void k_completionbox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KCompletionBox*
QWidget* k_completionbox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KCompletionBox*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_completionbox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KCompletionBox*
/// @param policy enum Qt__ContextMenuPolicy
void k_completionbox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KCompletionBox*
void k_completionbox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KCompletionBox*
/// @param param1 QCursor*
void k_completionbox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KCompletionBox*
void k_completionbox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KCompletionBox*
void k_completionbox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KCompletionBox*
void k_completionbox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KCompletionBox*
/// @param key QKeySequence*
int32_t k_completionbox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KCompletionBox*
/// @param id int
void k_completionbox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KCompletionBox*
/// @param id int
void k_completionbox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KCompletionBox*
/// @param id int
void k_completionbox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_completionbox_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_completionbox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KCompletionBox*
bool k_completionbox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KCompletionBox*
/// @param enable bool
void k_completionbox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KCompletionBox*
QGraphicsProxyWidget* k_completionbox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KCompletionBox*
void k_completionbox_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KCompletionBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_completionbox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KCompletionBox*
/// @param param1 QRect*
void k_completionbox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KCompletionBox*
/// @param param1 QRegion*
void k_completionbox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KCompletionBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_completionbox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KCompletionBox*
/// @param param1 QRect*
void k_completionbox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KCompletionBox*
/// @param param1 QRegion*
void k_completionbox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KCompletionBox*
/// @param hidden bool
void k_completionbox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KCompletionBox*
void k_completionbox_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KCompletionBox*
void k_completionbox_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KCompletionBox*
void k_completionbox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KCompletionBox*
void k_completionbox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KCompletionBox*
void k_completionbox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KCompletionBox*
void k_completionbox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KCompletionBox*
bool k_completionbox_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KCompletionBox*
void k_completionbox_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KCompletionBox*
void k_completionbox_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KCompletionBox*
/// @param param1 QWidget*
void k_completionbox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KCompletionBox*
/// @param x int
/// @param y int
void k_completionbox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KCompletionBox*
/// @param param1 QPoint*
void k_completionbox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KCompletionBox*
/// @param w int
/// @param h int
void k_completionbox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KCompletionBox*
/// @param param1 QSize*
void k_completionbox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KCompletionBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_completionbox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KCompletionBox*
/// @param geometry QRect*
void k_completionbox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
char* k_completionbox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KCompletionBox*
/// @param geometry const char*
bool k_completionbox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KCompletionBox*
void k_completionbox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KCompletionBox*
bool k_completionbox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KCompletionBox*
/// @param param1 QWidget*
bool k_completionbox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KCompletionBox*
bool k_completionbox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KCompletionBox*
bool k_completionbox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KCompletionBox*
bool k_completionbox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KCompletionBox*
bool k_completionbox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KCompletionBox*
///
/// @return flag of enum Qt__WindowState
int32_t k_completionbox_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KCompletionBox*
/// @param state flag of enum Qt__WindowState
void k_completionbox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KCompletionBox*
/// @param state flag of enum Qt__WindowState
void k_completionbox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KCompletionBox*
QSizePolicy* k_completionbox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KCompletionBox*
/// @param sizePolicy QSizePolicy*
void k_completionbox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KCompletionBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_completionbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KCompletionBox*
QRegion* k_completionbox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KCompletionBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_completionbox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KCompletionBox*
/// @param margins QMargins*
void k_completionbox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KCompletionBox*
QMargins* k_completionbox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KCompletionBox*
QRect* k_completionbox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KCompletionBox*
QLayout* k_completionbox_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KCompletionBox*
/// @param layout QLayout*
void k_completionbox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KCompletionBox*
void k_completionbox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KCompletionBox*
/// @param parent QWidget*
void k_completionbox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KCompletionBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_completionbox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KCompletionBox*
/// @param dx int
/// @param dy int
void k_completionbox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KCompletionBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_completionbox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KCompletionBox*
QWidget* k_completionbox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KCompletionBox*
QWidget* k_completionbox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KCompletionBox*
QWidget* k_completionbox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KCompletionBox*
bool k_completionbox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KCompletionBox*
/// @param on bool
void k_completionbox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCompletionBox*
/// @param action QAction*
void k_completionbox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KCompletionBox*
/// @param actions libqt_list /* of QAction* */
void k_completionbox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KCompletionBox*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_completionbox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KCompletionBox*
/// @param before QAction*
/// @param action QAction*
void k_completionbox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KCompletionBox*
/// @param action QAction*
void k_completionbox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KCompletionBox*
libqt_list /* of QAction* */ k_completionbox_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCompletionBox*
/// @param text const char*
QAction* k_completionbox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCompletionBox*
/// @param icon QIcon*
/// @param text const char*
QAction* k_completionbox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCompletionBox*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_completionbox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCompletionBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_completionbox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KCompletionBox*
QWidget* k_completionbox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KCompletionBox*
/// @param typeVal flag of enum Qt__WindowType
void k_completionbox_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KCompletionBox*
///
/// @return flag of enum Qt__WindowType
int64_t k_completionbox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KCompletionBox*
/// @param param1 enum Qt__WindowType
void k_completionbox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KCompletionBox*
/// @param typeVal flag of enum Qt__WindowType
void k_completionbox_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KCompletionBox*
///
/// @return enum Qt__WindowType
int64_t k_completionbox_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_completionbox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KCompletionBox*
/// @param x int
/// @param y int
QWidget* k_completionbox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KCompletionBox*
/// @param p QPoint*
QWidget* k_completionbox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KCompletionBox*
/// @param p QPointF*
QWidget* k_completionbox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KCompletionBox*
/// @param param1 enum Qt__WidgetAttribute
void k_completionbox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KCompletionBox*
/// @param param1 enum Qt__WidgetAttribute
bool k_completionbox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KCompletionBox*
void k_completionbox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KCompletionBox*
/// @param child QWidget*
bool k_completionbox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KCompletionBox*
bool k_completionbox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KCompletionBox*
/// @param enabled bool
void k_completionbox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KCompletionBox*
QBackingStore* k_completionbox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KCompletionBox*
QWindow* k_completionbox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KCompletionBox*
QScreen* k_completionbox_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KCompletionBox*
/// @param screen QScreen*
void k_completionbox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_completionbox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KCompletionBox*
/// @param title const char*
void k_completionbox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, const char* title)
void k_completionbox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KCompletionBox*
/// @param icon QIcon*
void k_completionbox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QIcon* icon)
void k_completionbox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KCompletionBox*
/// @param iconText const char*
void k_completionbox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, const char* iconText)
void k_completionbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KCompletionBox*
/// @param pos QPoint*
void k_completionbox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QPoint* pos)
void k_completionbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KCompletionBox*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_completionbox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KCompletionBox*
/// @param hints flag of enum Qt__InputMethodHint
void k_completionbox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCompletionBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_completionbox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCompletionBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_completionbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCompletionBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_completionbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCompletionBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_completionbox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCompletionBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_completionbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCompletionBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_completionbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KCompletionBox*
/// @param rectangle QRect*
QPixmap* k_completionbox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KCompletionBox*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_completionbox_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KCompletionBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_completionbox_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KCompletionBox*
/// @param id int
/// @param enable bool
void k_completionbox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KCompletionBox*
/// @param id int
/// @param enable bool
void k_completionbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KCompletionBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_completionbox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KCompletionBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_completionbox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_completionbox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_completionbox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char* k_completionbox_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCompletionBox*
/// @param name char*
void k_completionbox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCompletionBox*
bool k_completionbox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCompletionBox*
bool k_completionbox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCompletionBox*
bool k_completionbox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCompletionBox*
bool k_completionbox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCompletionBox*
/// @param b bool
bool k_completionbox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCompletionBox*
QThread* k_completionbox_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCompletionBox*
/// @param thread QThread*
bool k_completionbox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCompletionBox*
/// @param interval int
int32_t k_completionbox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCompletionBox*
/// @param id int
void k_completionbox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCompletionBox*
/// @param id enum Qt__TimerId
void k_completionbox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCompletionBox*
libqt_list /* of QObject* */ k_completionbox_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCompletionBox*
/// @param filterObj QObject*
void k_completionbox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCompletionBox*
/// @param obj QObject*
void k_completionbox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_completionbox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCompletionBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_completionbox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_completionbox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_completionbox_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCompletionBox*
void k_completionbox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCompletionBox*
void k_completionbox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCompletionBox*
/// @param name const char*
/// @param value QVariant*
bool k_completionbox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCompletionBox*
/// @param name const char*
QVariant* k_completionbox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCompletionBox*
const char** k_completionbox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCompletionBox*
QBindingStorage* k_completionbox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCompletionBox*
const QBindingStorage* k_completionbox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompletionBox*
void k_completionbox_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self)
void k_completionbox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KCompletionBox*
QObject* k_completionbox_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCompletionBox*
/// @param classname const char*
bool k_completionbox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCompletionBox*
void k_completionbox_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCompletionBox*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_completionbox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCompletionBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_completionbox_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_completionbox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCompletionBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_completionbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompletionBox*
/// @param param1 QObject*
void k_completionbox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QObject* param1)
void k_completionbox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KCompletionBox*
bool k_completionbox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KCompletionBox*
int32_t k_completionbox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KCompletionBox*
int32_t k_completionbox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KCompletionBox*
int32_t k_completionbox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KCompletionBox*
int32_t k_completionbox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KCompletionBox*
int32_t k_completionbox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KCompletionBox*
int32_t k_completionbox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KCompletionBox*
double k_completionbox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KCompletionBox*
double k_completionbox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KCompletionBox*
int32_t k_completionbox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KCompletionBox*
int32_t k_completionbox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_completionbox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_completionbox_encode_metric_f(int32_t metric, double value);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param selectionModel QItemSelectionModel*
void k_completionbox_set_selection_model(void* self, void* selectionModel);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param selectionModel QItemSelectionModel*
void k_completionbox_qbase_set_selection_model(void* self, void* selectionModel);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QItemSelectionModel* selectionModel)
void k_completionbox_on_set_selection_model(void* self, void (*callback)(void*, void*));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QDropEvent*
void k_completionbox_drop_event(void* self, void* event);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QDropEvent*
void k_completionbox_qbase_drop_event(void* self, void* event);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QDropEvent* event)
void k_completionbox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QEvent*
bool k_completionbox_event(void* self, void* e);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QEvent*
bool k_completionbox_qbase_event(void* self, void* e);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback bool func(KCompletionBox* self, QEvent* e)
void k_completionbox_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
const char** k_completionbox_mime_types(void* self);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
const char** k_completionbox_qbase_mime_types(void* self);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback const char** func()
void k_completionbox_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param items libqt_list /* of QListWidgetItem* */
QMimeData* k_completionbox_mime_data(void* self, libqt_list items);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param items libqt_list /* of QListWidgetItem* */
QMimeData* k_completionbox_qbase_mime_data(void* self, libqt_list items);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QMimeData* func(KCompletionBox* self, libqt_list /* of QListWidgetItem* */ /* of QListWidgetItem* */)
void k_completionbox_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param index int
/// @param data QMimeData*
/// @param action enum Qt__DropAction
bool k_completionbox_drop_mime_data(void* self, int index, void* data, int32_t action);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param index int
/// @param data QMimeData*
/// @param action enum Qt__DropAction
bool k_completionbox_qbase_drop_mime_data(void* self, int index, void* data, int32_t action);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback bool func(KCompletionBox* self, int index, QMimeData* data, enum Qt__DropAction action)
void k_completionbox_on_drop_mime_data(void* self, bool (*callback)(void*, int, void*, int32_t));

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
///
/// @return flag of enum Qt__DropAction
int32_t k_completionbox_supported_drop_actions(void* self);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
///
/// @return flag of enum Qt__DropAction
int32_t k_completionbox_qbase_supported_drop_actions(void* self);

/// Inherited from QListWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback int32_t func()
void k_completionbox_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
QRect* k_completionbox_visual_rect(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
QRect* k_completionbox_qbase_visual_rect(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QRect* func(KCompletionBox* self, QModelIndex* index)
void k_completionbox_on_visual_rect(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
void k_completionbox_scroll_to(void* self, void* index, int32_t hint);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
void k_completionbox_qbase_scroll_to(void* self, void* index, int32_t hint);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint)
void k_completionbox_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param p QPoint*
QModelIndex* k_completionbox_index_at(void* self, void* p);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param p QPoint*
QModelIndex* k_completionbox_qbase_index_at(void* self, void* p);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QModelIndex* func(KCompletionBox* self, QPoint* p)
void k_completionbox_on_index_at(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_do_items_layout(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_do_items_layout(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_do_items_layout(void* self, void (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_reset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_reset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_reset(void* self, void (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
void k_completionbox_set_root_index(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
void k_completionbox_qbase_set_root_index(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QModelIndex* index)
void k_completionbox_on_set_root_index(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param dx int
/// @param dy int
void k_completionbox_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param dx int
/// @param dy int
void k_completionbox_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, int dx, int dy)
void k_completionbox_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void k_completionbox_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void k_completionbox_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
void k_completionbox_on_data_changed(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void k_completionbox_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void k_completionbox_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QModelIndex* parent, int start, int end)
void k_completionbox_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void k_completionbox_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void k_completionbox_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QModelIndex* parent, int start, int end)
void k_completionbox_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QMouseEvent*
void k_completionbox_mouse_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QMouseEvent*
void k_completionbox_qbase_mouse_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QMouseEvent* e)
void k_completionbox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QMouseEvent*
void k_completionbox_mouse_release_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QMouseEvent*
void k_completionbox_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QMouseEvent* e)
void k_completionbox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QWheelEvent*
void k_completionbox_wheel_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QWheelEvent*
void k_completionbox_qbase_wheel_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QWheelEvent* e)
void k_completionbox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QTimerEvent*
void k_completionbox_timer_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QTimerEvent*
void k_completionbox_qbase_timer_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QTimerEvent* e)
void k_completionbox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QResizeEvent*
void k_completionbox_resize_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QResizeEvent*
void k_completionbox_qbase_resize_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QResizeEvent* e)
void k_completionbox_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QDragMoveEvent*
void k_completionbox_drag_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QDragMoveEvent*
void k_completionbox_qbase_drag_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QDragMoveEvent* e)
void k_completionbox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QDragLeaveEvent*
void k_completionbox_drag_leave_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QDragLeaveEvent*
void k_completionbox_qbase_drag_leave_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QDragLeaveEvent* e)
void k_completionbox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param supportedActions flag of enum Qt__DropAction
void k_completionbox_start_drag(void* self, int32_t supportedActions);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param supportedActions flag of enum Qt__DropAction
void k_completionbox_qbase_start_drag(void* self, int32_t supportedActions);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, flag of enum Qt__DropAction supportedActions)
void k_completionbox_on_start_drag(void* self, void (*callback)(void*, int32_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param option QStyleOptionViewItem*
void k_completionbox_init_view_item_option(void* self, void* option);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param option QStyleOptionViewItem*
void k_completionbox_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QStyleOptionViewItem* option)
void k_completionbox_on_init_view_item_option(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QPaintEvent*
void k_completionbox_paint_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param e QPaintEvent*
void k_completionbox_qbase_paint_event(void* self, void* e);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QPaintEvent* e)
void k_completionbox_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
int32_t k_completionbox_horizontal_offset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
int32_t k_completionbox_qbase_horizontal_offset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback int32_t func()
void k_completionbox_on_horizontal_offset(void* self, int32_t (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
int32_t k_completionbox_vertical_offset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
int32_t k_completionbox_qbase_vertical_offset(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback int32_t func()
void k_completionbox_on_vertical_offset(void* self, int32_t (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
QModelIndex* k_completionbox_move_cursor(void* self, int32_t cursorAction, int64_t modifiers);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
QModelIndex* k_completionbox_qbase_move_cursor(void* self, int32_t cursorAction, int64_t modifiers);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QModelIndex* func(KCompletionBox* self, enum QAbstractItemView__CursorAction cursorAction, flag of enum Qt__KeyboardModifier modifiers)
void k_completionbox_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int64_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void k_completionbox_set_selection(void* self, void* rect, int32_t command);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void k_completionbox_qbase_set_selection(void* self, void* rect, int32_t command);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QRect* rect, flag of enum QItemSelectionModel__SelectionFlag command)
void k_completionbox_on_set_selection(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param selection QItemSelection*
QRegion* k_completionbox_visual_region_for_selection(void* self, void* selection);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param selection QItemSelection*
QRegion* k_completionbox_qbase_visual_region_for_selection(void* self, void* selection);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QRegion* func(KCompletionBox* self, QItemSelection* selection)
void k_completionbox_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
libqt_list /* of QModelIndex* */ k_completionbox_selected_indexes(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
libqt_list /* of QModelIndex* */ k_completionbox_qbase_selected_indexes(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback libqt_list /* of QModelIndex* */ func()
void k_completionbox_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_update_geometries(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_update_geometries(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_update_geometries(void* self, void (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
bool k_completionbox_is_index_hidden(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
bool k_completionbox_qbase_is_index_hidden(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback bool func(KCompletionBox* self, QModelIndex* index)
void k_completionbox_on_is_index_hidden(void* self, bool (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
void k_completionbox_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
void k_completionbox_qbase_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QItemSelection* selected, QItemSelection* deselected)
void k_completionbox_on_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param current QModelIndex*
/// @param previous QModelIndex*
void k_completionbox_current_changed(void* self, void* current, void* previous);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param current QModelIndex*
/// @param previous QModelIndex*
void k_completionbox_qbase_current_changed(void* self, void* current, void* previous);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QModelIndex* current, QModelIndex* previous)
void k_completionbox_on_current_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
QSize* k_completionbox_viewport_size_hint(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
QSize* k_completionbox_qbase_viewport_size_hint(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QSize* func()
void k_completionbox_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param search const char*
void k_completionbox_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param search const char*
void k_completionbox_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, const char* search)
void k_completionbox_on_keyboard_search(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param row int
int32_t k_completionbox_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param row int
int32_t k_completionbox_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback int32_t func(KCompletionBox* self, int row)
void k_completionbox_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param column int
int32_t k_completionbox_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param column int
int32_t k_completionbox_qbase_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback int32_t func(KCompletionBox* self, int column)
void k_completionbox_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
QAbstractItemDelegate* k_completionbox_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
QAbstractItemDelegate* k_completionbox_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QAbstractItemDelegate* func(KCompletionBox* self, QModelIndex* index)
void k_completionbox_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param query enum Qt__InputMethodQuery
QVariant* k_completionbox_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param query enum Qt__InputMethodQuery
QVariant* k_completionbox_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QVariant* func(KCompletionBox* self, enum Qt__InputMethodQuery query)
void k_completionbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_select_all(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_update_editor_data(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_update_editor_geometries(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param action int
void k_completionbox_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param action int
void k_completionbox_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, int action)
void k_completionbox_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param action int
void k_completionbox_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param action int
void k_completionbox_qbase_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, int action)
void k_completionbox_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param value int
void k_completionbox_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param value int
void k_completionbox_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, int value)
void k_completionbox_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param value int
void k_completionbox_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param value int
void k_completionbox_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, int value)
void k_completionbox_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
void k_completionbox_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
void k_completionbox_qbase_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
void k_completionbox_on_close_editor(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param editor QWidget*
void k_completionbox_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param editor QWidget*
void k_completionbox_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QWidget* editor)
void k_completionbox_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param editor QObject*
void k_completionbox_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param editor QObject*
void k_completionbox_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QObject* editor)
void k_completionbox_on_editor_destroyed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
bool k_completionbox_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
bool k_completionbox_qbase_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback bool func(KCompletionBox* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event)
void k_completionbox_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
int32_t k_completionbox_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
int32_t k_completionbox_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback int32_t func(KCompletionBox* self, QModelIndex* index, QEvent* event)
void k_completionbox_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param next bool
bool k_completionbox_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param next bool
bool k_completionbox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback bool func(KCompletionBox* self, bool next)
void k_completionbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QEvent*
bool k_completionbox_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QEvent*
bool k_completionbox_qbase_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback bool func(KCompletionBox* self, QEvent* event)
void k_completionbox_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QMouseEvent*
void k_completionbox_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QMouseEvent*
void k_completionbox_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QMouseEvent* event)
void k_completionbox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QMouseEvent*
void k_completionbox_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QMouseEvent*
void k_completionbox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QMouseEvent* event)
void k_completionbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QDragEnterEvent*
void k_completionbox_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QDragEnterEvent*
void k_completionbox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QDragEnterEvent* event)
void k_completionbox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QFocusEvent*
void k_completionbox_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QFocusEvent*
void k_completionbox_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QFocusEvent* event)
void k_completionbox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QFocusEvent*
void k_completionbox_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QFocusEvent*
void k_completionbox_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QFocusEvent* event)
void k_completionbox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QKeyEvent*
void k_completionbox_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QKeyEvent*
void k_completionbox_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QKeyEvent* event)
void k_completionbox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QInputMethodEvent*
void k_completionbox_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QInputMethodEvent*
void k_completionbox_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QInputMethodEvent* event)
void k_completionbox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
QSize* k_completionbox_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
QSize* k_completionbox_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QSize* func()
void k_completionbox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param viewport QWidget*
void k_completionbox_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param viewport QWidget*
void k_completionbox_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QWidget* viewport)
void k_completionbox_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param param1 QContextMenuEvent*
void k_completionbox_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param param1 QContextMenuEvent*
void k_completionbox_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QContextMenuEvent* param1)
void k_completionbox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param param1 QEvent*
void k_completionbox_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param param1 QEvent*
void k_completionbox_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QEvent* param1)
void k_completionbox_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param option QStyleOptionFrame*
void k_completionbox_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param option QStyleOptionFrame*
void k_completionbox_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QStyleOptionFrame* option)
void k_completionbox_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
int32_t k_completionbox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
int32_t k_completionbox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback int32_t func()
void k_completionbox_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param param1 int
int32_t k_completionbox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param param1 int
int32_t k_completionbox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback int32_t func(KCompletionBox* self, int param1)
void k_completionbox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
bool k_completionbox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
bool k_completionbox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback bool func()
void k_completionbox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
QPaintEngine* k_completionbox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
QPaintEngine* k_completionbox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QPaintEngine* func()
void k_completionbox_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QKeyEvent*
void k_completionbox_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QKeyEvent*
void k_completionbox_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QKeyEvent* event)
void k_completionbox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QEnterEvent*
void k_completionbox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QEnterEvent*
void k_completionbox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QEnterEvent* event)
void k_completionbox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QEvent*
void k_completionbox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QEvent*
void k_completionbox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QEvent* event)
void k_completionbox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QMoveEvent*
void k_completionbox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QMoveEvent*
void k_completionbox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QMoveEvent* event)
void k_completionbox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QCloseEvent*
void k_completionbox_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QCloseEvent*
void k_completionbox_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QCloseEvent* event)
void k_completionbox_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QTabletEvent*
void k_completionbox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QTabletEvent*
void k_completionbox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QTabletEvent* event)
void k_completionbox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QActionEvent*
void k_completionbox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QActionEvent*
void k_completionbox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QActionEvent* event)
void k_completionbox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QShowEvent*
void k_completionbox_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QShowEvent*
void k_completionbox_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QShowEvent* event)
void k_completionbox_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QHideEvent*
void k_completionbox_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QHideEvent*
void k_completionbox_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QHideEvent* event)
void k_completionbox_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_completionbox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_completionbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback bool func(KCompletionBox* self, const char* eventType, void* message, intptr_t* result)
void k_completionbox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_completionbox_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_completionbox_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback int32_t func(KCompletionBox* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_completionbox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param painter QPainter*
void k_completionbox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param painter QPainter*
void k_completionbox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QPainter* painter)
void k_completionbox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param offset QPoint*
QPaintDevice* k_completionbox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param offset QPoint*
QPaintDevice* k_completionbox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QPaintDevice* func(KCompletionBox* self, QPoint* offset)
void k_completionbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
QPainter* k_completionbox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
QPainter* k_completionbox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QPainter* func()
void k_completionbox_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QChildEvent*
void k_completionbox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QChildEvent*
void k_completionbox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QChildEvent* event)
void k_completionbox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QEvent*
void k_completionbox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param event QEvent*
void k_completionbox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QEvent* event)
void k_completionbox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param signal QMetaMethod*
void k_completionbox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param signal QMetaMethod*
void k_completionbox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QMetaMethod* signal)
void k_completionbox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param signal QMetaMethod*
void k_completionbox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param signal QMetaMethod*
void k_completionbox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QMetaMethod* signal)
void k_completionbox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param width int
/// @param height int
void k_completionbox_resize_contents(void* self, int width, int height);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param width int
/// @param height int
void k_completionbox_qbase_resize_contents(void* self, int width, int height);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, int width, int height)
void k_completionbox_on_resize_contents(void* self, void (*callback)(void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
QSize* k_completionbox_contents_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
QSize* k_completionbox_qbase_contents_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QSize* func()
void k_completionbox_on_contents_size(void* self, QSize* (*callback)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
QRect* k_completionbox_rect_for_index(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param index QModelIndex*
QRect* k_completionbox_qbase_rect_for_index(void* self, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QRect* func(KCompletionBox* self, QModelIndex* index)
void k_completionbox_on_rect_for_index(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param position QPoint*
/// @param index QModelIndex*
void k_completionbox_set_position_for_index(void* self, void* position, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param position QPoint*
/// @param index QModelIndex*
void k_completionbox_qbase_set_position_for_index(void* self, void* position, void* index);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QPoint* position, QModelIndex* index)
void k_completionbox_on_set_position_for_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
///
/// @return enum QAbstractItemView__State
int32_t k_completionbox_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
///
/// @return enum QAbstractItemView__State
int32_t k_completionbox_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback int32_t func()
void k_completionbox_on_state(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param state enum QAbstractItemView__State
void k_completionbox_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param state enum QAbstractItemView__State
void k_completionbox_qbase_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, enum QAbstractItemView__State state)
void k_completionbox_on_set_state(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_schedule_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_execute_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param region QRegion*
void k_completionbox_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param region QRegion*
void k_completionbox_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QRegion* region)
void k_completionbox_on_set_dirty_region(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param dx int
/// @param dy int
void k_completionbox_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param dx int
/// @param dy int
void k_completionbox_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, int dx, int dy)
void k_completionbox_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
QPoint* k_completionbox_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
QPoint* k_completionbox_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QPoint* func()
void k_completionbox_on_dirty_region_offset(void* self, QPoint* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_start_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_stop_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_do_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
int32_t k_completionbox_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
int32_t k_completionbox_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback int32_t func()
void k_completionbox_on_drop_indicator_position(void* self, int32_t (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_completionbox_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_completionbox_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, int left, int top, int right, int bottom)
void k_completionbox_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
QMargins* k_completionbox_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
QMargins* k_completionbox_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QMargins* func()
void k_completionbox_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param param1 QPainter*
void k_completionbox_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param param1 QPainter*
void k_completionbox_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, QPainter* param1)
void k_completionbox_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
void k_completionbox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback void func()
void k_completionbox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
bool k_completionbox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
bool k_completionbox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback bool func()
void k_completionbox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
bool k_completionbox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
bool k_completionbox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback bool func()
void k_completionbox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
QObject* k_completionbox_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
QObject* k_completionbox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback QObject* func()
void k_completionbox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
int32_t k_completionbox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
int32_t k_completionbox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback int32_t func()
void k_completionbox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param signal const char*
int32_t k_completionbox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param signal const char*
int32_t k_completionbox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback int32_t func(KCompletionBox* self, const char* signal)
void k_completionbox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param signal QMetaMethod*
bool k_completionbox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param signal QMetaMethod*
bool k_completionbox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback bool func(KCompletionBox* self, QMetaMethod* signal)
void k_completionbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletionBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_completionbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_completionbox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletionBox*
/// @param callback double func(KCompletionBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_completionbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCompletionBox*
/// @param callback void func(KCompletionBox* self, const char* objectName)
void k_completionbox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kcompletionbox.html#dtor.KCompletionBox)
///
/// Delete this object from C++ memory.
///
/// @param self KCompletionBox*
void k_completionbox_delete(void* self);

#endif
