#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKURLCOMBOBOX_H
#define SRC_EXTRAS_KIO_QT6C_LIBKURLCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kurlcombobox.html)

/// k_urlcombobox_new constructs a new KUrlComboBox object.
///
/// @param mode enum KUrlComboBox__Mode
///
KUrlComboBox* k_urlcombobox_new(int32_t mode);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html)

/// k_urlcombobox_new2 constructs a new KUrlComboBox object.
///
/// @param mode enum KUrlComboBox__Mode
/// @param rw bool
///
KUrlComboBox* k_urlcombobox_new2(int32_t mode, bool rw);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html)

/// k_urlcombobox_new3 constructs a new KUrlComboBox object.
///
/// @param mode enum KUrlComboBox__Mode
/// @param parent QWidget*
///
KUrlComboBox* k_urlcombobox_new3(int32_t mode, void* parent);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html)

/// k_urlcombobox_new4 constructs a new KUrlComboBox object.
///
/// @param mode enum KUrlComboBox__Mode
/// @param rw bool
/// @param parent QWidget*
///
KUrlComboBox* k_urlcombobox_new4(int32_t mode, bool rw, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KUrlComboBox*
///
const QMetaObject* k_urlcombobox_meta_object(void* self);

/// @param self KUrlComboBox*
/// @param param1 const char*
///
void* k_urlcombobox_metacast(void* self, const char* param1);

/// @param self KUrlComboBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_urlcombobox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KUrlComboBox*
/// @param callback int32_t func(KUrlComboBox* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_urlcombobox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KUrlComboBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_urlcombobox_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_urlcombobox_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#setUrl)
///
/// @param self KUrlComboBox*
/// @param url QUrl*
///
void k_urlcombobox_set_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#setUrls)
///
/// @param self KUrlComboBox*
/// @param urls const char**
///
void k_urlcombobox_set_urls(void* self, const char* urls[static 1]);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#setUrls)
///
/// @param self KUrlComboBox*
/// @param urls const char**
/// @param remove enum KUrlComboBox__OverLoadResolving
///
void k_urlcombobox_set_urls2(void* self, const char* urls[static 1], int32_t remove);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#urls)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char** k_urlcombobox_urls(void* self);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#setMaxItems)
///
/// @param self KUrlComboBox*
/// @param maxItems int
///
void k_urlcombobox_set_max_items(void* self, int maxItems);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#maxItems)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_max_items(void* self);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#addDefaultUrl)
///
/// @param self KUrlComboBox*
/// @param url QUrl*
///
void k_urlcombobox_add_default_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#addDefaultUrl)
///
/// @param self KUrlComboBox*
/// @param url QUrl*
/// @param icon QIcon*
///
void k_urlcombobox_add_default_url2(void* self, void* url, void* icon);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#setDefaults)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_set_defaults(void* self);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#removeUrl)
///
/// @param self KUrlComboBox*
/// @param url QUrl*
///
void k_urlcombobox_remove_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#setCompletionObject)
///
/// @param self KUrlComboBox*
/// @param compObj KCompletion*
/// @param hsig bool
///
void k_urlcombobox_set_completion_object(void* self, void* compObj, bool hsig);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#setCompletionObject)
///
/// Allows for overriding the related default method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, KCompletion* compObj, bool hsig)
///
void k_urlcombobox_on_set_completion_object(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#setCompletionObject)
///
/// Base class method implementation
///
/// @param self KUrlComboBox*
/// @param compObj KCompletion*
/// @param hsig bool
///
void k_urlcombobox_qbase_set_completion_object(void* self, void* compObj, bool hsig);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#urlActivated)
///
/// @param self KUrlComboBox*
/// @param url QUrl*
///
void k_urlcombobox_url_activated(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#urlActivated)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QUrl* url)
///
void k_urlcombobox_on_url_activated(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#mousePressEvent)
///
/// @param self KUrlComboBox*
/// @param event QMouseEvent*
///
void k_urlcombobox_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QMouseEvent* event)
///
void k_urlcombobox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self KUrlComboBox*
/// @param event QMouseEvent*
///
void k_urlcombobox_qbase_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#mouseMoveEvent)
///
/// @param self KUrlComboBox*
/// @param event QMouseEvent*
///
void k_urlcombobox_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QMouseEvent* event)
///
void k_urlcombobox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self KUrlComboBox*
/// @param event QMouseEvent*
///
void k_urlcombobox_qbase_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_urlcombobox_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_urlcombobox_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#addDefaultUrl)
///
/// @param self KUrlComboBox*
/// @param url QUrl*
/// @param text const char*
///
void k_urlcombobox_add_default_url22(void* self, void* url, const char* text);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#addDefaultUrl)
///
/// @param self KUrlComboBox*
/// @param url QUrl*
/// @param icon QIcon*
/// @param text const char*
///
void k_urlcombobox_add_default_url3(void* self, void* url, void* icon, const char* text);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#removeUrl)
///
/// @param self KUrlComboBox*
/// @param url QUrl*
/// @param checkDefaultURLs bool
///
void k_urlcombobox_remove_url2(void* self, void* url, bool checkDefaultURLs);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setEditUrl)
///
/// @param self KUrlComboBox*
/// @param url QUrl*
///
void k_urlcombobox_set_edit_url(void* self, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#addUrl)
///
/// @param self KUrlComboBox*
/// @param url QUrl*
///
void k_urlcombobox_add_url(void* self, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#addUrl)
///
/// @param self KUrlComboBox*
/// @param icon QIcon*
/// @param url QUrl*
///
void k_urlcombobox_add_url2(void* self, void* icon, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#insertUrl)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param url QUrl*
///
void k_urlcombobox_insert_url(void* self, int index, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#insertUrl)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param icon QIcon*
/// @param url QUrl*
///
void k_urlcombobox_insert_url2(void* self, int index, void* icon, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#changeUrl)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param url QUrl*
///
void k_urlcombobox_change_url(void* self, int index, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#changeUrl)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param icon QIcon*
/// @param url QUrl*
///
void k_urlcombobox_change_url2(void* self, int index, void* icon, void* url);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#cursorPosition)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_cursor_position(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#autoCompletion)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_auto_completion(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#urlDropsEnabled)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_url_drops_enabled(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#contains)
///
/// @param self KUrlComboBox*
/// @param text const char*
///
bool k_urlcombobox_contains(void* self, const char* text);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setTrapReturnKey)
///
/// @param self KUrlComboBox*
/// @param trap bool
///
void k_urlcombobox_set_trap_return_key(void* self, bool trap);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#trapReturnKey)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_trap_return_key(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completionBox)
///
/// @param self KUrlComboBox*
///
KCompletionBox* k_urlcombobox_completion_box(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setEditable)
///
/// @param self KUrlComboBox*
/// @param editable bool
///
void k_urlcombobox_set_editable(void* self, bool editable);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#contextMenu)
///
/// @param self KUrlComboBox*
///
QMenu* k_urlcombobox_context_menu(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#returnPressed)
///
/// @param self KUrlComboBox*
/// @param text const char*
///
void k_urlcombobox_return_pressed(void* self, const char* text);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#returnPressed)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, const char* text)
///
void k_urlcombobox_on_return_pressed(void* self, void (*callback)(void*, const char*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completion)
///
/// @param self KUrlComboBox*
/// @param param1 const char*
///
void k_urlcombobox_completion(void* self, const char* param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completion)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, const char* param1)
///
void k_urlcombobox_on_completion(void* self, void (*callback)(void*, const char*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#substringCompletion)
///
/// @param self KUrlComboBox*
/// @param param1 const char*
///
void k_urlcombobox_substring_completion(void* self, const char* param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#substringCompletion)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, const char* param1)
///
void k_urlcombobox_on_substring_completion(void* self, void (*callback)(void*, const char*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#textRotation)
///
/// @param self KUrlComboBox*
/// @param param1 enum KCompletionBase__KeyBindingType
///
void k_urlcombobox_text_rotation(void* self, int32_t param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#textRotation)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, enum KCompletionBase__KeyBindingType param1)
///
void k_urlcombobox_on_text_rotation(void* self, void (*callback)(void*, int32_t));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completionModeChanged)
///
/// @param self KUrlComboBox*
/// @param param1 enum KCompletion__CompletionMode
///
void k_urlcombobox_completion_mode_changed(void* self, int32_t param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completionModeChanged)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, enum KCompletion__CompletionMode param1)
///
void k_urlcombobox_on_completion_mode_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#aboutToShowContextMenu)
///
/// @param self KUrlComboBox*
/// @param contextMenu QMenu*
///
void k_urlcombobox_about_to_show_context_menu(void* self, void* contextMenu);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#aboutToShowContextMenu)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QMenu* contextMenu)
///
void k_urlcombobox_on_about_to_show_context_menu(void* self, void (*callback)(void*, void*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#rotateText)
///
/// @param self KUrlComboBox*
/// @param type enum KCompletionBase__KeyBindingType
///
void k_urlcombobox_rotate_text(void* self, int32_t type);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCurrentItem)
///
/// @param self KUrlComboBox*
/// @param item const char*
///
void k_urlcombobox_set_current_item(void* self, const char* item);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#completionBox)
///
/// @param self KUrlComboBox*
/// @param create bool
///
KCompletionBox* k_urlcombobox_completion_box1(void* self, bool create);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCurrentItem)
///
/// @param self KUrlComboBox*
/// @param item const char*
/// @param insert bool
///
void k_urlcombobox_set_current_item2(void* self, const char* item, bool insert);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCurrentItem)
///
/// @param self KUrlComboBox*
/// @param item const char*
/// @param insert bool
/// @param index int
///
void k_urlcombobox_set_current_item3(void* self, const char* item, bool insert, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_max_visible_items(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
///
/// @param self KUrlComboBox*
/// @param maxItems int
///
void k_urlcombobox_set_max_visible_items(void* self, int maxItems);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#count)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_count(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
///
/// @param self KUrlComboBox*
/// @param max int
///
void k_urlcombobox_set_max_count(void* self, int max);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_max_count(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_duplicates_enabled(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
///
/// @param self KUrlComboBox*
/// @param enable bool
///
void k_urlcombobox_set_duplicates_enabled(void* self, bool enable);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
///
/// @param self KUrlComboBox*
/// @param frame bool
///
void k_urlcombobox_set_frame(void* self, bool frame);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_has_frame(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self KUrlComboBox*
/// @param text const char*
///
int32_t k_urlcombobox_find_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self KUrlComboBox*
/// @param data QVariant*
///
int32_t k_urlcombobox_find_data(void* self, void* data);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
///
/// @param self KUrlComboBox*
///
/// @return enum QComboBox__InsertPolicy
///
int32_t k_urlcombobox_insert_policy(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
///
/// @param self KUrlComboBox*
/// @param policy enum QComboBox__InsertPolicy
///
void k_urlcombobox_set_insert_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
///
/// @param self KUrlComboBox*
///
/// @return enum QComboBox__SizeAdjustPolicy
///
int32_t k_urlcombobox_size_adjust_policy(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
///
/// @param self KUrlComboBox*
/// @param policy enum QComboBox__SizeAdjustPolicy
///
void k_urlcombobox_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_minimum_contents_length(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
///
/// @param self KUrlComboBox*
/// @param characters int
///
void k_urlcombobox_set_minimum_contents_length(void* self, int characters);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
///
/// @param self KUrlComboBox*
///
QSize* k_urlcombobox_icon_size(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
///
/// @param self KUrlComboBox*
/// @param size QSize*
///
void k_urlcombobox_set_icon_size(void* self, void* size);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
///
/// @param self KUrlComboBox*
/// @param placeholderText const char*
///
void k_urlcombobox_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char* k_urlcombobox_placeholder_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_editable(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
///
/// @param self KUrlComboBox*
///
QLineEdit* k_urlcombobox_line_edit(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
///
/// @param self KUrlComboBox*
/// @param v QValidator*
///
void k_urlcombobox_set_validator(void* self, void* v);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#validator)
///
/// @param self KUrlComboBox*
///
const QValidator* k_urlcombobox_validator(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
///
/// @param self KUrlComboBox*
/// @param c QCompleter*
///
void k_urlcombobox_set_completer(void* self, void* c);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#completer)
///
/// @param self KUrlComboBox*
///
QCompleter* k_urlcombobox_completer(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
///
/// @param self KUrlComboBox*
///
QAbstractItemDelegate* k_urlcombobox_item_delegate(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
///
/// @param self KUrlComboBox*
/// @param delegate QAbstractItemDelegate*
///
void k_urlcombobox_set_item_delegate(void* self, void* delegate);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#model)
///
/// @param self KUrlComboBox*
///
QAbstractItemModel* k_urlcombobox_model(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
///
/// @param self KUrlComboBox*
///
QModelIndex* k_urlcombobox_root_model_index(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
///
/// @param self KUrlComboBox*
/// @param index QModelIndex*
///
void k_urlcombobox_set_root_model_index(void* self, void* index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_model_column(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
///
/// @param self KUrlComboBox*
/// @param visibleColumn int
///
void k_urlcombobox_set_model_column(void* self, int visibleColumn);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_current_index(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentText)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char* k_urlcombobox_current_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self KUrlComboBox*
///
QVariant* k_urlcombobox_current_data(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemText)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
/// @param index int
///
const char* k_urlcombobox_item_text(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
///
/// @param self KUrlComboBox*
/// @param index int
///
QIcon* k_urlcombobox_item_icon(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self KUrlComboBox*
/// @param index int
///
QVariant* k_urlcombobox_item_data(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KUrlComboBox*
/// @param text const char*
///
void k_urlcombobox_add_item(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KUrlComboBox*
/// @param icon QIcon*
/// @param text const char*
///
void k_urlcombobox_add_item2(void* self, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItems)
///
/// @param self KUrlComboBox*
/// @param texts const char**
///
void k_urlcombobox_add_items(void* self, const char* texts[static 1]);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param text const char*
///
void k_urlcombobox_insert_item(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
///
void k_urlcombobox_insert_item2(void* self, int index, void* icon, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItems)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param texts const char**
///
void k_urlcombobox_insert_items(void* self, int index, const char* texts[static 1]);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertSeparator)
///
/// @param self KUrlComboBox*
/// @param index int
///
void k_urlcombobox_insert_separator(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
///
/// @param self KUrlComboBox*
/// @param index int
///
void k_urlcombobox_remove_item(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param text const char*
///
void k_urlcombobox_set_item_text(void* self, int index, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemIcon)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param icon QIcon*
///
void k_urlcombobox_set_item_icon(void* self, int index, void* icon);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param value QVariant*
///
void k_urlcombobox_set_item_data(void* self, int index, void* value);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#view)
///
/// @param self KUrlComboBox*
///
QAbstractItemView* k_urlcombobox_view(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setView)
///
/// @param self KUrlComboBox*
/// @param itemView QAbstractItemView*
///
void k_urlcombobox_set_view(void* self, void* itemView);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// @param self KUrlComboBox*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* k_urlcombobox_input_method_query2(void* self, int64_t query, void* argument);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clear)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_clear(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_clear_edit_text(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
///
/// @param self KUrlComboBox*
/// @param text const char*
///
void k_urlcombobox_set_edit_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentIndex)
///
/// @param self KUrlComboBox*
/// @param index int
///
void k_urlcombobox_set_current_index(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
///
/// @param self KUrlComboBox*
/// @param text const char*
///
void k_urlcombobox_set_current_text(void* self, const char* text);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self KUrlComboBox*
/// @param param1 const char*
///
void k_urlcombobox_edit_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, const char* param1)
///
void k_urlcombobox_on_edit_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self KUrlComboBox*
/// @param index int
///
void k_urlcombobox_activated(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#activated)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, int index)
///
void k_urlcombobox_on_activated(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self KUrlComboBox*
/// @param param1 const char*
///
void k_urlcombobox_text_activated(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, const char* param1)
///
void k_urlcombobox_on_text_activated(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self KUrlComboBox*
/// @param index int
///
void k_urlcombobox_highlighted(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, int index)
///
void k_urlcombobox_on_highlighted(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self KUrlComboBox*
/// @param param1 const char*
///
void k_urlcombobox_text_highlighted(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, const char* param1)
///
void k_urlcombobox_on_text_highlighted(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self KUrlComboBox*
/// @param index int
///
void k_urlcombobox_current_index_changed(void* self, int index);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, int index)
///
void k_urlcombobox_on_current_index_changed(void* self, void (*callback)(void*, int));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self KUrlComboBox*
/// @param param1 const char*
///
void k_urlcombobox_current_text_changed(void* self, const char* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, const char* param1)
///
void k_urlcombobox_on_current_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findText)
///
/// @param self KUrlComboBox*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
///
int32_t k_urlcombobox_find_text2(void* self, const char* text, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self KUrlComboBox*
/// @param data QVariant*
/// @param role int
///
int32_t k_urlcombobox_find_data2(void* self, void* data, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#findData)
///
/// @param self KUrlComboBox*
/// @param data QVariant*
/// @param role int
/// @param flags flag of enum Qt__MatchFlag
///
int32_t k_urlcombobox_find_data3(void* self, void* data, int role, int32_t flags);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#currentData)
///
/// @param self KUrlComboBox*
/// @param role int
///
QVariant* k_urlcombobox_current_data1(void* self, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#itemData)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param role int
///
QVariant* k_urlcombobox_item_data2(void* self, int index, int role);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KUrlComboBox*
/// @param text const char*
/// @param userData QVariant*
///
void k_urlcombobox_add_item22(void* self, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#addItem)
///
/// @param self KUrlComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void k_urlcombobox_add_item3(void* self, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param text const char*
/// @param userData QVariant*
///
void k_urlcombobox_insert_item3(void* self, int index, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param icon QIcon*
/// @param text const char*
/// @param userData QVariant*
///
void k_urlcombobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
///
/// @param self KUrlComboBox*
/// @param index int
/// @param value QVariant*
/// @param role int
///
void k_urlcombobox_set_item_data3(void* self, int index, void* value, int role);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KUrlComboBox*
///
uintptr_t k_urlcombobox_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KUrlComboBox*
///
uintptr_t k_urlcombobox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KUrlComboBox*
///
uintptr_t k_urlcombobox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KUrlComboBox*
///
QStyle* k_urlcombobox_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KUrlComboBox*
/// @param style QStyle*
///
void k_urlcombobox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KUrlComboBox*
///
/// @return enum Qt__WindowModality
///
int32_t k_urlcombobox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KUrlComboBox*
/// @param windowModality enum Qt__WindowModality
///
void k_urlcombobox_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KUrlComboBox*
/// @param param1 QWidget*
///
bool k_urlcombobox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KUrlComboBox*
/// @param enabled bool
///
void k_urlcombobox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KUrlComboBox*
/// @param disabled bool
///
void k_urlcombobox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KUrlComboBox*
/// @param windowModified bool
///
void k_urlcombobox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KUrlComboBox*
///
QRect* k_urlcombobox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KUrlComboBox*
///
const QRect* k_urlcombobox_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KUrlComboBox*
///
QRect* k_urlcombobox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KUrlComboBox*
///
QPoint* k_urlcombobox_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KUrlComboBox*
///
QSize* k_urlcombobox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KUrlComboBox*
///
QSize* k_urlcombobox_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KUrlComboBox*
///
QRect* k_urlcombobox_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KUrlComboBox*
///
QRect* k_urlcombobox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KUrlComboBox*
///
QRegion* k_urlcombobox_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KUrlComboBox*
///
QSize* k_urlcombobox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KUrlComboBox*
///
QSize* k_urlcombobox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KUrlComboBox*
/// @param minimumSize QSize*
///
void k_urlcombobox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KUrlComboBox*
/// @param minw int
/// @param minh int
///
void k_urlcombobox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KUrlComboBox*
/// @param maximumSize QSize*
///
void k_urlcombobox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KUrlComboBox*
/// @param maxw int
/// @param maxh int
///
void k_urlcombobox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KUrlComboBox*
/// @param minw int
///
void k_urlcombobox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KUrlComboBox*
/// @param minh int
///
void k_urlcombobox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KUrlComboBox*
/// @param maxw int
///
void k_urlcombobox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KUrlComboBox*
/// @param maxh int
///
void k_urlcombobox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KUrlComboBox*
///
QSize* k_urlcombobox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KUrlComboBox*
/// @param sizeIncrement QSize*
///
void k_urlcombobox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KUrlComboBox*
/// @param w int
/// @param h int
///
void k_urlcombobox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KUrlComboBox*
///
QSize* k_urlcombobox_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KUrlComboBox*
/// @param baseSize QSize*
///
void k_urlcombobox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KUrlComboBox*
/// @param basew int
/// @param baseh int
///
void k_urlcombobox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KUrlComboBox*
/// @param fixedSize QSize*
///
void k_urlcombobox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KUrlComboBox*
/// @param w int
/// @param h int
///
void k_urlcombobox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KUrlComboBox*
/// @param w int
///
void k_urlcombobox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KUrlComboBox*
/// @param h int
///
void k_urlcombobox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KUrlComboBox*
/// @param param1 QPointF*
///
QPointF* k_urlcombobox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KUrlComboBox*
/// @param param1 QPoint*
///
QPoint* k_urlcombobox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KUrlComboBox*
/// @param param1 QPointF*
///
QPointF* k_urlcombobox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KUrlComboBox*
/// @param param1 QPoint*
///
QPoint* k_urlcombobox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KUrlComboBox*
/// @param param1 QPointF*
///
QPointF* k_urlcombobox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KUrlComboBox*
/// @param param1 QPoint*
///
QPoint* k_urlcombobox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KUrlComboBox*
/// @param param1 QPointF*
///
QPointF* k_urlcombobox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KUrlComboBox*
/// @param param1 QPoint*
///
QPoint* k_urlcombobox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KUrlComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_urlcombobox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KUrlComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_urlcombobox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KUrlComboBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_urlcombobox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KUrlComboBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_urlcombobox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KUrlComboBox*
///
QWidget* k_urlcombobox_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KUrlComboBox*
///
QWidget* k_urlcombobox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KUrlComboBox*
///
QWidget* k_urlcombobox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KUrlComboBox*
///
const QPalette* k_urlcombobox_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KUrlComboBox*
/// @param palette QPalette*
///
void k_urlcombobox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KUrlComboBox*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_urlcombobox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KUrlComboBox*
///
/// @return enum QPalette__ColorRole
///
int32_t k_urlcombobox_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KUrlComboBox*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_urlcombobox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KUrlComboBox*
///
/// @return enum QPalette__ColorRole
///
int32_t k_urlcombobox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KUrlComboBox*
///
const QFont* k_urlcombobox_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KUrlComboBox*
/// @param font QFont*
///
void k_urlcombobox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KUrlComboBox*
///
QFontMetrics* k_urlcombobox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KUrlComboBox*
///
QFontInfo* k_urlcombobox_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KUrlComboBox*
///
QCursor* k_urlcombobox_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KUrlComboBox*
/// @param cursor QCursor*
///
void k_urlcombobox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KUrlComboBox*
/// @param enable bool
///
void k_urlcombobox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KUrlComboBox*
/// @param enable bool
///
void k_urlcombobox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KUrlComboBox*
/// @param mask QBitmap*
///
void k_urlcombobox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KUrlComboBox*
/// @param mask QRegion*
///
void k_urlcombobox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KUrlComboBox*
///
QRegion* k_urlcombobox_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboBox*
/// @param target QPaintDevice*
///
void k_urlcombobox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboBox*
/// @param painter QPainter*
///
void k_urlcombobox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KUrlComboBox*
///
QPixmap* k_urlcombobox_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KUrlComboBox*
///
QGraphicsEffect* k_urlcombobox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KUrlComboBox*
/// @param effect QGraphicsEffect*
///
void k_urlcombobox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KUrlComboBox*
/// @param type enum Qt__GestureType
///
void k_urlcombobox_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KUrlComboBox*
/// @param type enum Qt__GestureType
///
void k_urlcombobox_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KUrlComboBox*
/// @param windowTitle const char*
///
void k_urlcombobox_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KUrlComboBox*
/// @param styleSheet const char*
///
void k_urlcombobox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char* k_urlcombobox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char* k_urlcombobox_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KUrlComboBox*
/// @param icon QIcon*
///
void k_urlcombobox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KUrlComboBox*
///
QIcon* k_urlcombobox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KUrlComboBox*
/// @param windowIconText const char*
///
void k_urlcombobox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char* k_urlcombobox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KUrlComboBox*
/// @param windowRole const char*
///
void k_urlcombobox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char* k_urlcombobox_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KUrlComboBox*
/// @param filePath const char*
///
void k_urlcombobox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char* k_urlcombobox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KUrlComboBox*
/// @param level double
///
void k_urlcombobox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KUrlComboBox*
///
double k_urlcombobox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KUrlComboBox*
/// @param toolTip const char*
///
void k_urlcombobox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char* k_urlcombobox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KUrlComboBox*
/// @param msec int
///
void k_urlcombobox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KUrlComboBox*
/// @param statusTip const char*
///
void k_urlcombobox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char* k_urlcombobox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KUrlComboBox*
/// @param whatsThis const char*
///
void k_urlcombobox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char* k_urlcombobox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char* k_urlcombobox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KUrlComboBox*
/// @param name const char*
///
void k_urlcombobox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char* k_urlcombobox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KUrlComboBox*
/// @param description const char*
///
void k_urlcombobox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KUrlComboBox*
/// @param direction enum Qt__LayoutDirection
///
void k_urlcombobox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KUrlComboBox*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_urlcombobox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KUrlComboBox*
/// @param locale QLocale*
///
void k_urlcombobox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KUrlComboBox*
///
QLocale* k_urlcombobox_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KUrlComboBox*
/// @param reason enum Qt__FocusReason
///
void k_urlcombobox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KUrlComboBox*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_urlcombobox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KUrlComboBox*
/// @param policy enum Qt__FocusPolicy
///
void k_urlcombobox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_urlcombobox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KUrlComboBox*
/// @param focusProxy QWidget*
///
void k_urlcombobox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KUrlComboBox*
///
QWidget* k_urlcombobox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KUrlComboBox*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_urlcombobox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KUrlComboBox*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_urlcombobox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KUrlComboBox*
/// @param param1 QCursor*
///
void k_urlcombobox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KUrlComboBox*
/// @param key QKeySequence*
///
int32_t k_urlcombobox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KUrlComboBox*
/// @param id int
///
void k_urlcombobox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KUrlComboBox*
/// @param id int
///
void k_urlcombobox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KUrlComboBox*
/// @param id int
///
void k_urlcombobox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_urlcombobox_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_urlcombobox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KUrlComboBox*
/// @param enable bool
///
void k_urlcombobox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KUrlComboBox*
///
QGraphicsProxyWidget* k_urlcombobox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_urlcombobox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlComboBox*
/// @param param1 QRect*
///
void k_urlcombobox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlComboBox*
/// @param param1 QRegion*
///
void k_urlcombobox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_urlcombobox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlComboBox*
/// @param param1 QRect*
///
void k_urlcombobox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlComboBox*
/// @param param1 QRegion*
///
void k_urlcombobox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KUrlComboBox*
/// @param hidden bool
///
void k_urlcombobox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KUrlComboBox*
/// @param param1 QWidget*
///
void k_urlcombobox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KUrlComboBox*
/// @param x int
/// @param y int
///
void k_urlcombobox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KUrlComboBox*
/// @param param1 QPoint*
///
void k_urlcombobox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KUrlComboBox*
/// @param w int
/// @param h int
///
void k_urlcombobox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KUrlComboBox*
/// @param param1 QSize*
///
void k_urlcombobox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KUrlComboBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_urlcombobox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KUrlComboBox*
/// @param geometry QRect*
///
void k_urlcombobox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
char* k_urlcombobox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KUrlComboBox*
/// @param geometry const char*
///
bool k_urlcombobox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KUrlComboBox*
/// @param param1 QWidget*
///
bool k_urlcombobox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KUrlComboBox*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_urlcombobox_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KUrlComboBox*
/// @param state flag of enum Qt__WindowState
///
void k_urlcombobox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KUrlComboBox*
/// @param state flag of enum Qt__WindowState
///
void k_urlcombobox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KUrlComboBox*
///
QSizePolicy* k_urlcombobox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KUrlComboBox*
/// @param sizePolicy QSizePolicy*
///
void k_urlcombobox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KUrlComboBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_urlcombobox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KUrlComboBox*
///
QRegion* k_urlcombobox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KUrlComboBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_urlcombobox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KUrlComboBox*
/// @param margins QMargins*
///
void k_urlcombobox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KUrlComboBox*
///
QMargins* k_urlcombobox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KUrlComboBox*
///
QRect* k_urlcombobox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KUrlComboBox*
///
QLayout* k_urlcombobox_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KUrlComboBox*
/// @param layout QLayout*
///
void k_urlcombobox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KUrlComboBox*
/// @param parent QWidget*
///
void k_urlcombobox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KUrlComboBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_urlcombobox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KUrlComboBox*
/// @param dx int
/// @param dy int
///
void k_urlcombobox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KUrlComboBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_urlcombobox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KUrlComboBox*
///
QWidget* k_urlcombobox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KUrlComboBox*
///
QWidget* k_urlcombobox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KUrlComboBox*
///
QWidget* k_urlcombobox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KUrlComboBox*
/// @param on bool
///
void k_urlcombobox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlComboBox*
/// @param action QAction*
///
void k_urlcombobox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KUrlComboBox*
/// @param actions libqt_list /* of QAction* */
///
void k_urlcombobox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KUrlComboBox*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
///
void k_urlcombobox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KUrlComboBox*
/// @param before QAction*
/// @param action QAction*
///
void k_urlcombobox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KUrlComboBox*
/// @param action QAction*
///
void k_urlcombobox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KUrlComboBox*
///
libqt_list /* of QAction* */ k_urlcombobox_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlComboBox*
/// @param text const char*
///
QAction* k_urlcombobox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlComboBox*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_urlcombobox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlComboBox*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_urlcombobox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlComboBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_urlcombobox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KUrlComboBox*
///
QWidget* k_urlcombobox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KUrlComboBox*
/// @param type flag of enum Qt__WindowType
///
void k_urlcombobox_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KUrlComboBox*
///
/// @return flag of enum Qt__WindowType
///
int64_t k_urlcombobox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KUrlComboBox*
/// @param param1 enum Qt__WindowType
///
void k_urlcombobox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KUrlComboBox*
/// @param type flag of enum Qt__WindowType
///
void k_urlcombobox_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KUrlComboBox*
///
/// @return enum Qt__WindowType
///
int64_t k_urlcombobox_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_urlcombobox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlComboBox*
/// @param x int
/// @param y int
///
QWidget* k_urlcombobox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlComboBox*
/// @param p QPoint*
///
QWidget* k_urlcombobox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlComboBox*
/// @param p QPointF*
///
QWidget* k_urlcombobox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KUrlComboBox*
/// @param param1 enum Qt__WidgetAttribute
///
void k_urlcombobox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KUrlComboBox*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_urlcombobox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KUrlComboBox*
/// @param child QWidget*
///
bool k_urlcombobox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KUrlComboBox*
/// @param enabled bool
///
void k_urlcombobox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KUrlComboBox*
///
QBackingStore* k_urlcombobox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KUrlComboBox*
///
QWindow* k_urlcombobox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KUrlComboBox*
///
QScreen* k_urlcombobox_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KUrlComboBox*
/// @param screen QScreen*
///
void k_urlcombobox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_urlcombobox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KUrlComboBox*
/// @param title const char*
///
void k_urlcombobox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, const char* title)
///
void k_urlcombobox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KUrlComboBox*
/// @param icon QIcon*
///
void k_urlcombobox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QIcon* icon)
///
void k_urlcombobox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KUrlComboBox*
/// @param iconText const char*
///
void k_urlcombobox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, const char* iconText)
///
void k_urlcombobox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KUrlComboBox*
/// @param pos QPoint*
///
void k_urlcombobox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QPoint* pos)
///
void k_urlcombobox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KUrlComboBox*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t k_urlcombobox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KUrlComboBox*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_urlcombobox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_urlcombobox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_urlcombobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_urlcombobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_urlcombobox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_urlcombobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlComboBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_urlcombobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KUrlComboBox*
/// @param rectangle QRect*
///
QPixmap* k_urlcombobox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KUrlComboBox*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_urlcombobox_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KUrlComboBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_urlcombobox_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KUrlComboBox*
/// @param id int
/// @param enable bool
///
void k_urlcombobox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KUrlComboBox*
/// @param id int
/// @param enable bool
///
void k_urlcombobox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KUrlComboBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_urlcombobox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KUrlComboBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_urlcombobox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_urlcombobox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_urlcombobox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char* k_urlcombobox_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KUrlComboBox*
/// @param name char*
///
void k_urlcombobox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KUrlComboBox*
/// @param b bool
///
bool k_urlcombobox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KUrlComboBox*
///
QThread* k_urlcombobox_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUrlComboBox*
/// @param thread QThread*
///
bool k_urlcombobox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlComboBox*
/// @param interval int
///
int32_t k_urlcombobox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlComboBox*
/// @param id int
///
void k_urlcombobox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlComboBox*
/// @param id enum Qt__TimerId
///
void k_urlcombobox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KUrlComboBox*
///
libqt_list /* of QObject* */ k_urlcombobox_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KUrlComboBox*
/// @param filterObj QObject*
///
void k_urlcombobox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KUrlComboBox*
/// @param obj QObject*
///
void k_urlcombobox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_urlcombobox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUrlComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_urlcombobox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_urlcombobox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_urlcombobox_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KUrlComboBox*
/// @param name const char*
/// @param value QVariant*
///
bool k_urlcombobox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KUrlComboBox*
/// @param name const char*
///
QVariant* k_urlcombobox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KUrlComboBox*
///
const char** k_urlcombobox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUrlComboBox*
///
QBindingStorage* k_urlcombobox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUrlComboBox*
///
const QBindingStorage* k_urlcombobox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self)
///
void k_urlcombobox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KUrlComboBox*
///
QObject* k_urlcombobox_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KUrlComboBox*
/// @param classname const char*
///
bool k_urlcombobox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUrlComboBox*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_urlcombobox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlComboBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_urlcombobox_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_urlcombobox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUrlComboBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_urlcombobox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlComboBox*
/// @param param1 QObject*
///
void k_urlcombobox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QObject* param1)
///
void k_urlcombobox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KUrlComboBox*
///
double k_urlcombobox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KUrlComboBox*
///
double k_urlcombobox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_urlcombobox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_urlcombobox_encode_metric_f(int32_t metric, double value);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
///
/// @param self KUrlComboBox*
///
KCompletion* k_urlcombobox_completion_object(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#isCompletionObjectAutoDeleted)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_is_completion_object_auto_deleted(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setAutoDeleteCompletionObject)
///
/// @param self KUrlComboBox*
/// @param autoDelete bool
///
void k_urlcombobox_set_auto_delete_completion_object(void* self, bool autoDelete);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setEnableSignals)
///
/// @param self KUrlComboBox*
/// @param enable bool
///
void k_urlcombobox_set_enable_signals(void* self, bool enable);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#handleSignals)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_handle_signals(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#emitSignals)
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_emit_signals(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setEmitSignals)
///
/// @param self KUrlComboBox*
/// @param emitRotationSignals bool
///
void k_urlcombobox_set_emit_signals(void* self, bool emitRotationSignals);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#completionMode)
///
/// @param self KUrlComboBox*
///
/// @return enum KCompletion__CompletionMode
///
int32_t k_urlcombobox_completion_mode(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBinding)
///
/// @param self KUrlComboBox*
/// @param item enum KCompletionBase__KeyBindingType
/// @param key libqt_list /* of QKeySequence* */
///
bool k_urlcombobox_set_key_binding(void* self, int32_t item, libqt_list key);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBinding)
///
/// @param self KUrlComboBox*
/// @param item enum KCompletionBase__KeyBindingType
///
libqt_list /* of QKeySequence* */ k_urlcombobox_key_binding(void* self, int32_t item);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#useGlobalKeyBindings)
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_use_global_key_bindings(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#compObj)
///
/// @param self KUrlComboBox*
///
KCompletion* k_urlcombobox_comp_obj(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#completionObject)
///
/// @param self KUrlComboBox*
/// @param handleSignals bool
///
KCompletion* k_urlcombobox_completion_object1(void* self, bool handleSignals);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setAutoCompletion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param autocomplete bool
///
void k_urlcombobox_set_auto_completion(void* self, bool autocomplete);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setAutoCompletion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param autocomplete bool
///
void k_urlcombobox_qbase_set_auto_completion(void* self, bool autocomplete);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setAutoCompletion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, bool autocomplete)
///
void k_urlcombobox_on_set_auto_completion(void* self, void (*callback)(void*, bool));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setLineEdit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param lineEdit QLineEdit*
///
void k_urlcombobox_set_line_edit(void* self, void* lineEdit);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setLineEdit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param lineEdit QLineEdit*
///
void k_urlcombobox_qbase_set_line_edit(void* self, void* lineEdit);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setLineEdit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QLineEdit* lineEdit)
///
void k_urlcombobox_on_set_line_edit(void* self, void (*callback)(void*, void*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
QSize* k_urlcombobox_minimum_size_hint(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
QSize* k_urlcombobox_qbase_minimum_size_hint(void* self);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback QSize* func()
///
void k_urlcombobox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param completedText const char*
///
void k_urlcombobox_set_completed_text(void* self, const char* completedText);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param completedText const char*
///
void k_urlcombobox_qbase_set_completed_text(void* self, const char* completedText);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, const char* completedText)
///
void k_urlcombobox_on_set_completed_text(void* self, void (*callback)(void*, const char*));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedItems)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param items const char**
/// @param autoSuggest bool
///
void k_urlcombobox_set_completed_items(void* self, const char* items[static 1], bool autoSuggest);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedItems)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param items const char**
/// @param autoSuggest bool
///
void k_urlcombobox_qbase_set_completed_items(void* self, const char* items[static 1], bool autoSuggest);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#setCompletedItems)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, const char** items, bool autoSuggest)
///
void k_urlcombobox_on_set_completed_items(void* self, void (*callback)(void*, const char**, bool));

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#makeCompletion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param param1 const char*
///
void k_urlcombobox_make_completion(void* self, const char* param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#makeCompletion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param param1 const char*
///
void k_urlcombobox_qbase_make_completion(void* self, const char* param1);

/// Inherited from KComboBox
///
/// [Upstream resources](https://api.kde.org/kcombobox.html#makeCompletion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, const char* param1)
///
void k_urlcombobox_on_make_completion(void* self, void (*callback)(void*, const char*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param model QAbstractItemModel*
///
void k_urlcombobox_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param model QAbstractItemModel*
///
void k_urlcombobox_qbase_set_model(void* self, void* model);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#setModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QAbstractItemModel* model)
///
void k_urlcombobox_on_set_model(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
QSize* k_urlcombobox_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
QSize* k_urlcombobox_qbase_size_hint(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback QSize* func()
///
void k_urlcombobox_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_qbase_show_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showPopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func()
///
void k_urlcombobox_on_show_popup(void* self, void (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_qbase_hide_popup(void* self);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hidePopup)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func()
///
void k_urlcombobox_on_hide_popup(void* self, void (*callback)());

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QEvent*
///
bool k_urlcombobox_event(void* self, void* event);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QEvent*
///
bool k_urlcombobox_qbase_event(void* self, void* event);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback bool func(KUrlComboBox* self, QEvent* event)
///
void k_urlcombobox_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_urlcombobox_input_method_query(void* self, int64_t param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_urlcombobox_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback QVariant* func(KUrlComboBox* self, enum Qt__InputMethodQuery param1)
///
void k_urlcombobox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QFocusEvent*
///
void k_urlcombobox_focus_in_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QFocusEvent*
///
void k_urlcombobox_qbase_focus_in_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QFocusEvent* e)
///
void k_urlcombobox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QFocusEvent*
///
void k_urlcombobox_focus_out_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QFocusEvent*
///
void k_urlcombobox_qbase_focus_out_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QFocusEvent* e)
///
void k_urlcombobox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QEvent*
///
void k_urlcombobox_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QEvent*
///
void k_urlcombobox_qbase_change_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QEvent* e)
///
void k_urlcombobox_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QResizeEvent*
///
void k_urlcombobox_resize_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QResizeEvent*
///
void k_urlcombobox_qbase_resize_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QResizeEvent* e)
///
void k_urlcombobox_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QPaintEvent*
///
void k_urlcombobox_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QPaintEvent*
///
void k_urlcombobox_qbase_paint_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QPaintEvent* e)
///
void k_urlcombobox_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QShowEvent*
///
void k_urlcombobox_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QShowEvent*
///
void k_urlcombobox_qbase_show_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QShowEvent* e)
///
void k_urlcombobox_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QHideEvent*
///
void k_urlcombobox_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QHideEvent*
///
void k_urlcombobox_qbase_hide_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QHideEvent* e)
///
void k_urlcombobox_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QMouseEvent*
///
void k_urlcombobox_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QMouseEvent*
///
void k_urlcombobox_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QMouseEvent* e)
///
void k_urlcombobox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QKeyEvent*
///
void k_urlcombobox_key_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QKeyEvent*
///
void k_urlcombobox_qbase_key_press_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QKeyEvent* e)
///
void k_urlcombobox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QKeyEvent*
///
void k_urlcombobox_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QKeyEvent*
///
void k_urlcombobox_qbase_key_release_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QKeyEvent* e)
///
void k_urlcombobox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QWheelEvent*
///
void k_urlcombobox_wheel_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QWheelEvent*
///
void k_urlcombobox_qbase_wheel_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QWheelEvent* e)
///
void k_urlcombobox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QContextMenuEvent*
///
void k_urlcombobox_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param e QContextMenuEvent*
///
void k_urlcombobox_qbase_context_menu_event(void* self, void* e);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QContextMenuEvent* e)
///
void k_urlcombobox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param param1 QInputMethodEvent*
///
void k_urlcombobox_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param param1 QInputMethodEvent*
///
void k_urlcombobox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QInputMethodEvent* param1)
///
void k_urlcombobox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param option QStyleOptionComboBox*
///
void k_urlcombobox_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param option QStyleOptionComboBox*
///
void k_urlcombobox_qbase_init_style_option(void* self, void* option);

/// Inherited from QComboBox
///
/// [Upstream resources](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QStyleOptionComboBox* option)
///
void k_urlcombobox_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback int32_t func()
///
void k_urlcombobox_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param visible bool
///
void k_urlcombobox_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param visible bool
///
void k_urlcombobox_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, bool visible)
///
void k_urlcombobox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param param1 int
///
int32_t k_urlcombobox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param param1 int
///
int32_t k_urlcombobox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback int32_t func(KUrlComboBox* self, int param1)
///
void k_urlcombobox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback bool func()
///
void k_urlcombobox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
QPaintEngine* k_urlcombobox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
QPaintEngine* k_urlcombobox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback QPaintEngine* func()
///
void k_urlcombobox_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QMouseEvent*
///
void k_urlcombobox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QMouseEvent*
///
void k_urlcombobox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QMouseEvent* event)
///
void k_urlcombobox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QEnterEvent*
///
void k_urlcombobox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QEnterEvent*
///
void k_urlcombobox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QEnterEvent* event)
///
void k_urlcombobox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QEvent*
///
void k_urlcombobox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QEvent*
///
void k_urlcombobox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QEvent* event)
///
void k_urlcombobox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QMoveEvent*
///
void k_urlcombobox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QMoveEvent*
///
void k_urlcombobox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QMoveEvent* event)
///
void k_urlcombobox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QCloseEvent*
///
void k_urlcombobox_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QCloseEvent*
///
void k_urlcombobox_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QCloseEvent* event)
///
void k_urlcombobox_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QTabletEvent*
///
void k_urlcombobox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QTabletEvent*
///
void k_urlcombobox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QTabletEvent* event)
///
void k_urlcombobox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QActionEvent*
///
void k_urlcombobox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QActionEvent*
///
void k_urlcombobox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QActionEvent* event)
///
void k_urlcombobox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QDragEnterEvent*
///
void k_urlcombobox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QDragEnterEvent*
///
void k_urlcombobox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QDragEnterEvent* event)
///
void k_urlcombobox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QDragMoveEvent*
///
void k_urlcombobox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QDragMoveEvent*
///
void k_urlcombobox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QDragMoveEvent* event)
///
void k_urlcombobox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QDragLeaveEvent*
///
void k_urlcombobox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QDragLeaveEvent*
///
void k_urlcombobox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QDragLeaveEvent* event)
///
void k_urlcombobox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QDropEvent*
///
void k_urlcombobox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QDropEvent*
///
void k_urlcombobox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QDropEvent* event)
///
void k_urlcombobox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_urlcombobox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_urlcombobox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback bool func(KUrlComboBox* self, const char* eventType, void* message, intptr_t* result)
///
void k_urlcombobox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_urlcombobox_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_urlcombobox_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback int32_t func(KUrlComboBox* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_urlcombobox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param painter QPainter*
///
void k_urlcombobox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param painter QPainter*
///
void k_urlcombobox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QPainter* painter)
///
void k_urlcombobox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param offset QPoint*
///
QPaintDevice* k_urlcombobox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param offset QPoint*
///
QPaintDevice* k_urlcombobox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback QPaintDevice* func(KUrlComboBox* self, QPoint* offset)
///
void k_urlcombobox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
QPainter* k_urlcombobox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
QPainter* k_urlcombobox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback QPainter* func()
///
void k_urlcombobox_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param next bool
///
bool k_urlcombobox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param next bool
///
bool k_urlcombobox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback bool func(KUrlComboBox* self, bool next)
///
void k_urlcombobox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_urlcombobox_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_urlcombobox_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback bool func(KUrlComboBox* self, QObject* watched, QEvent* event)
///
void k_urlcombobox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QTimerEvent*
///
void k_urlcombobox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QTimerEvent*
///
void k_urlcombobox_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QTimerEvent* event)
///
void k_urlcombobox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QChildEvent*
///
void k_urlcombobox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QChildEvent*
///
void k_urlcombobox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QChildEvent* event)
///
void k_urlcombobox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QEvent*
///
void k_urlcombobox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param event QEvent*
///
void k_urlcombobox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QEvent* event)
///
void k_urlcombobox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param signal QMetaMethod*
///
void k_urlcombobox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param signal QMetaMethod*
///
void k_urlcombobox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QMetaMethod* signal)
///
void k_urlcombobox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param signal QMetaMethod*
///
void k_urlcombobox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param signal QMetaMethod*
///
void k_urlcombobox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, QMetaMethod* signal)
///
void k_urlcombobox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param handle bool
///
void k_urlcombobox_set_handle_signals(void* self, bool handle);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param handle bool
///
void k_urlcombobox_qbase_set_handle_signals(void* self, bool handle);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, bool handle)
///
void k_urlcombobox_on_set_handle_signals(void* self, void (*callback)(void*, bool));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param mode enum KCompletion__CompletionMode
///
void k_urlcombobox_set_completion_mode(void* self, int32_t mode);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param mode enum KCompletion__CompletionMode
///
void k_urlcombobox_qbase_set_completion_mode(void* self, int32_t mode);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setCompletionMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, enum KCompletion__CompletionMode mode)
///
void k_urlcombobox_on_set_completion_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param id int
/// @param data void*
///
void k_urlcombobox_virtual_hook(void* self, int id, void* data);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param id int
/// @param data void*
///
void k_urlcombobox_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, int id, void* data)
///
void k_urlcombobox_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func()
///
void k_urlcombobox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func()
///
void k_urlcombobox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func()
///
void k_urlcombobox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback bool func()
///
void k_urlcombobox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
bool k_urlcombobox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback bool func()
///
void k_urlcombobox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
QObject* k_urlcombobox_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
QObject* k_urlcombobox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback QObject* func()
///
void k_urlcombobox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
int32_t k_urlcombobox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback int32_t func()
///
void k_urlcombobox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param signal const char*
///
int32_t k_urlcombobox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param signal const char*
///
int32_t k_urlcombobox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback int32_t func(KUrlComboBox* self, const char* signal)
///
void k_urlcombobox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param signal QMetaMethod*
///
bool k_urlcombobox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param signal QMetaMethod*
///
bool k_urlcombobox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback bool func(KUrlComboBox* self, QMetaMethod* signal)
///
void k_urlcombobox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_urlcombobox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_urlcombobox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback double func(KUrlComboBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_urlcombobox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ k_urlcombobox_key_binding_map(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ k_urlcombobox_qbase_key_binding_map(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ func()
///
void k_urlcombobox_on_key_binding_map(void* self, libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ (*callback)());

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param keyBindingMap libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence* */
///
void k_urlcombobox_set_key_binding_map(void* self, libqt_map /* of int32_t to QKeySequence* */ keyBindingMap);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param keyBindingMap libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence* */
///
void k_urlcombobox_qbase_set_key_binding_map(void* self, libqt_map /* of int32_t to QKeySequence* */ keyBindingMap);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence* */ /* of enum KCompletionBase__KeyBindingType to QKeySequence* */)
///
void k_urlcombobox_on_set_key_binding_map(void* self, void (*callback)(void*, libqt_map /* of int32_t to QKeySequence* */));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
/// @param delegate KCompletionBase*
///
void k_urlcombobox_set_delegate(void* self, void* delegate);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param delegate KCompletionBase*
///
void k_urlcombobox_qbase_set_delegate(void* self, void* delegate);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, KCompletionBase* delegate)
///
void k_urlcombobox_on_set_delegate(void* self, void (*callback)(void*, void*));

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlComboBox*
///
KCompletionBase* k_urlcombobox_delegate(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlComboBox*
///
KCompletionBase* k_urlcombobox_qbase_delegate(void* self);

/// Inherited from KCompletionBase
///
/// [Upstream resources](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlComboBox*
/// @param callback KCompletionBase* func()
///
void k_urlcombobox_on_delegate(void* self, KCompletionBase* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KUrlComboBox*
/// @param callback void func(KUrlComboBox* self, const char* objectName)
///
void k_urlcombobox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#dtor.KUrlComboBox)
///
/// Delete this object from C++ memory.
///
/// @param self KUrlComboBox*
///
void k_urlcombobox_delete(void* self);

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#public-types)

typedef enum {
    KURLCOMBOBOX_MODE_FILES = -1,
    KURLCOMBOBOX_MODE_DIRECTORIES = 1,
    KURLCOMBOBOX_MODE_BOTH = 0
} KUrlComboBox__Mode;

/// [Upstream resources](https://api.kde.org/kurlcombobox.html#public-types)

typedef enum {
    KURLCOMBOBOX_OVERLOADRESOLVING_REMOVETOP = 0,
    KURLCOMBOBOX_OVERLOADRESOLVING_REMOVEBOTTOM = 1
} KUrlComboBox__OverLoadResolving;

#endif
