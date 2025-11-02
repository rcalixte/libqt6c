#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBKURLNAVIGATOR_H
#define SRC_EXTRAS_KIOQT6C_LIBKURLNAVIGATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kurlnavigator.html

/// k_urlnavigator_new constructs a new KUrlNavigator object.
///
/// @param parent QWidget*
KUrlNavigator* k_urlnavigator_new(void* parent);

/// k_urlnavigator_new2 constructs a new KUrlNavigator object.
///
KUrlNavigator* k_urlnavigator_new2();

/// k_urlnavigator_new3 constructs a new KUrlNavigator object.
///
/// @param placesModel KFilePlacesModel*
/// @param url QUrl*
/// @param parent QWidget*
KUrlNavigator* k_urlnavigator_new3(void* placesModel, void* url, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KUrlNavigator*
const QMetaObject* k_urlnavigator_meta_object(void* self);

/// @param self KUrlNavigator*
/// @param param1 const char*
void* k_urlnavigator_metacast(void* self, const char* param1);

/// @param self KUrlNavigator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_urlnavigator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KUrlNavigator*
/// @param callback int32_t func(KUrlNavigator* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_urlnavigator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KUrlNavigator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_urlnavigator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_urlnavigator_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#locationUrl)
///
/// @param self KUrlNavigator*
QUrl* k_urlnavigator_location_url(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#saveLocationState)
///
/// @param self KUrlNavigator*
/// @param state const char*
void k_urlnavigator_save_location_state(void* self, const char* state);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#locationState)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
char* k_urlnavigator_location_state(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#goBack)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_go_back(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#goForward)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_go_forward(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#goUp)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_go_up(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#goHome)
///
/// @param self KUrlNavigator*
void k_urlnavigator_go_home(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#setHomeUrl)
///
/// @param self KUrlNavigator*
/// @param url QUrl*
void k_urlnavigator_set_home_url(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#homeUrl)
///
/// @param self KUrlNavigator*
QUrl* k_urlnavigator_home_url(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#setUrlEditable)
///
/// @param self KUrlNavigator*
/// @param editable bool
void k_urlnavigator_set_url_editable(void* self, bool editable);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#isUrlEditable)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_url_editable(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#setShowFullPath)
///
/// @param self KUrlNavigator*
/// @param show bool
void k_urlnavigator_set_show_full_path(void* self, bool show);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#showFullPath)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_show_full_path(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#setActive)
///
/// @param self KUrlNavigator*
/// @param active bool
void k_urlnavigator_set_active(void* self, bool active);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#isActive)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_active(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#setPlacesSelectorVisible)
///
/// @param self KUrlNavigator*
/// @param visible bool
void k_urlnavigator_set_places_selector_visible(void* self, bool visible);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#isPlacesSelectorVisible)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_places_selector_visible(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#uncommittedUrl)
///
/// @param self KUrlNavigator*
QUrl* k_urlnavigator_uncommitted_url(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#historySize)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_history_size(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#historyIndex)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_history_index(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#editor)
///
/// @param self KUrlNavigator*
KUrlComboBox* k_urlnavigator_editor(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#setSupportedSchemes)
///
/// @param self KUrlNavigator*
/// @param schemes const char**
void k_urlnavigator_set_supported_schemes(void* self, const char* schemes[static 1]);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#supportedSchemes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
const char** k_urlnavigator_supported_schemes(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#dropWidget)
///
/// @param self KUrlNavigator*
QWidget* k_urlnavigator_drop_widget(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#setShowHiddenFolders)
///
/// @param self KUrlNavigator*
/// @param showHiddenFolders bool
void k_urlnavigator_set_show_hidden_folders(void* self, bool showHiddenFolders);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#showHiddenFolders)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_show_hidden_folders(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#setSortHiddenFoldersLast)
///
/// @param self KUrlNavigator*
/// @param sortHiddenFoldersLast bool
void k_urlnavigator_set_sort_hidden_folders_last(void* self, bool sortHiddenFoldersLast);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#sortHiddenFoldersLast)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_sort_hidden_folders_last(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#setBadgeWidget)
///
/// @param self KUrlNavigator*
/// @param widget QWidget*
void k_urlnavigator_set_badge_widget(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#badgeWidget)
///
/// @param self KUrlNavigator*
QWidget* k_urlnavigator_badge_widget(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#setBackgroundEnabled)
///
/// @param self KUrlNavigator*
/// @param enabled bool
void k_urlnavigator_set_background_enabled(void* self, bool enabled);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#isBackgroundEnabled)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_background_enabled(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#setLocationUrl)
///
/// @param self KUrlNavigator*
/// @param url QUrl*
void k_urlnavigator_set_location_url(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#requestActivation)
///
/// @param self KUrlNavigator*
void k_urlnavigator_request_activation(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#setFocus)
///
/// @param self KUrlNavigator*
void k_urlnavigator_set_focus(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#activated)
///
/// @param self KUrlNavigator*
void k_urlnavigator_activated(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#activated)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self)
void k_urlnavigator_on_activated(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#urlChanged)
///
/// @param self KUrlNavigator*
/// @param url QUrl*
void k_urlnavigator_url_changed(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#urlChanged)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QUrl* url)
void k_urlnavigator_on_url_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#urlAboutToBeChanged)
///
/// @param self KUrlNavigator*
/// @param newUrl QUrl*
void k_urlnavigator_url_about_to_be_changed(void* self, void* newUrl);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#urlAboutToBeChanged)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QUrl* newUrl)
void k_urlnavigator_on_url_about_to_be_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#editableStateChanged)
///
/// @param self KUrlNavigator*
/// @param editable bool
void k_urlnavigator_editable_state_changed(void* self, bool editable);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#editableStateChanged)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, bool editable)
void k_urlnavigator_on_editable_state_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#historyChanged)
///
/// @param self KUrlNavigator*
void k_urlnavigator_history_changed(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#historyChanged)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self)
void k_urlnavigator_on_history_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#urlsDropped)
///
/// @param self KUrlNavigator*
/// @param destination QUrl*
/// @param event QDropEvent*
void k_urlnavigator_urls_dropped(void* self, void* destination, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#urlsDropped)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QUrl* destination, QDropEvent* event)
void k_urlnavigator_on_urls_dropped(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#returnPressed)
///
/// @param self KUrlNavigator*
void k_urlnavigator_return_pressed(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#returnPressed)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self)
void k_urlnavigator_on_return_pressed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#tabRequested)
///
/// @param self KUrlNavigator*
/// @param url QUrl*
void k_urlnavigator_tab_requested(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#tabRequested)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QUrl* url)
void k_urlnavigator_on_tab_requested(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#activeTabRequested)
///
/// @param self KUrlNavigator*
/// @param url QUrl*
void k_urlnavigator_active_tab_requested(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#activeTabRequested)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QUrl* url)
void k_urlnavigator_on_active_tab_requested(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#newWindowRequested)
///
/// @param self KUrlNavigator*
/// @param url QUrl*
void k_urlnavigator_new_window_requested(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#newWindowRequested)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QUrl* url)
void k_urlnavigator_on_new_window_requested(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#urlSelectionRequested)
///
/// @param self KUrlNavigator*
/// @param url QUrl*
void k_urlnavigator_url_selection_requested(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#urlSelectionRequested)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QUrl* url)
void k_urlnavigator_on_url_selection_requested(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#layoutChanged)
///
/// @param self KUrlNavigator*
void k_urlnavigator_layout_changed(void* self);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#layoutChanged)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self)
void k_urlnavigator_on_layout_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#keyPressEvent)
///
/// @param self KUrlNavigator*
/// @param event QKeyEvent*
void k_urlnavigator_key_press_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QKeyEvent* event)
void k_urlnavigator_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self KUrlNavigator*
/// @param event QKeyEvent*
void k_urlnavigator_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#keyReleaseEvent)
///
/// @param self KUrlNavigator*
/// @param event QKeyEvent*
void k_urlnavigator_key_release_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QKeyEvent* event)
void k_urlnavigator_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self KUrlNavigator*
/// @param event QKeyEvent*
void k_urlnavigator_qbase_key_release_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#mouseReleaseEvent)
///
/// @param self KUrlNavigator*
/// @param event QMouseEvent*
void k_urlnavigator_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QMouseEvent* event)
void k_urlnavigator_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self KUrlNavigator*
/// @param event QMouseEvent*
void k_urlnavigator_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#mousePressEvent)
///
/// @param self KUrlNavigator*
/// @param event QMouseEvent*
void k_urlnavigator_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QMouseEvent* event)
void k_urlnavigator_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self KUrlNavigator*
/// @param event QMouseEvent*
void k_urlnavigator_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#resizeEvent)
///
/// @param self KUrlNavigator*
/// @param event QResizeEvent*
void k_urlnavigator_resize_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QResizeEvent* event)
void k_urlnavigator_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self KUrlNavigator*
/// @param event QResizeEvent*
void k_urlnavigator_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#wheelEvent)
///
/// @param self KUrlNavigator*
/// @param event QWheelEvent*
void k_urlnavigator_wheel_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QWheelEvent* event)
void k_urlnavigator_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self KUrlNavigator*
/// @param event QWheelEvent*
void k_urlnavigator_qbase_wheel_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#showEvent)
///
/// @param self KUrlNavigator*
/// @param event QShowEvent*
void k_urlnavigator_show_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QShowEvent* event)
void k_urlnavigator_on_show_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#showEvent)
///
/// Base class method implementation
///
/// @param self KUrlNavigator*
/// @param event QShowEvent*
void k_urlnavigator_qbase_show_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#eventFilter)
///
/// @param self KUrlNavigator*
/// @param watched QObject*
/// @param event QEvent*
bool k_urlnavigator_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KUrlNavigator*
/// @param callback bool func(KUrlNavigator* self, QObject* watched, QEvent* event)
void k_urlnavigator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KUrlNavigator*
/// @param watched QObject*
/// @param event QEvent*
bool k_urlnavigator_qbase_event_filter(void* self, void* watched, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#paintEvent)
///
/// @param self KUrlNavigator*
/// @param event QPaintEvent*
void k_urlnavigator_paint_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QPaintEvent* event)
void k_urlnavigator_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#paintEvent)
///
/// Base class method implementation
///
/// @param self KUrlNavigator*
/// @param event QPaintEvent*
void k_urlnavigator_qbase_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_urlnavigator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_urlnavigator_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#locationUrl)
///
/// @param self KUrlNavigator*
/// @param historyIndex int
QUrl* k_urlnavigator_location_url1(void* self, int historyIndex);

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#locationState)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
/// @param historyIndex int
char* k_urlnavigator_location_state1(void* self, int historyIndex);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KUrlNavigator*
uintptr_t k_urlnavigator_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KUrlNavigator*
void k_urlnavigator_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KUrlNavigator*
uintptr_t k_urlnavigator_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KUrlNavigator*
uintptr_t k_urlnavigator_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KUrlNavigator*
QStyle* k_urlnavigator_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KUrlNavigator*
/// @param style QStyle*
void k_urlnavigator_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KUrlNavigator*
///
/// @return enum Qt__WindowModality
int32_t k_urlnavigator_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KUrlNavigator*
/// @param windowModality enum Qt__WindowModality
void k_urlnavigator_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KUrlNavigator*
/// @param param1 QWidget*
bool k_urlnavigator_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KUrlNavigator*
/// @param enabled bool
void k_urlnavigator_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KUrlNavigator*
/// @param disabled bool
void k_urlnavigator_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KUrlNavigator*
/// @param windowModified bool
void k_urlnavigator_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KUrlNavigator*
QRect* k_urlnavigator_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KUrlNavigator*
const QRect* k_urlnavigator_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KUrlNavigator*
QRect* k_urlnavigator_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KUrlNavigator*
QPoint* k_urlnavigator_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KUrlNavigator*
QSize* k_urlnavigator_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KUrlNavigator*
QSize* k_urlnavigator_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KUrlNavigator*
QRect* k_urlnavigator_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KUrlNavigator*
QRect* k_urlnavigator_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KUrlNavigator*
QRegion* k_urlnavigator_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KUrlNavigator*
QSize* k_urlnavigator_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KUrlNavigator*
QSize* k_urlnavigator_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KUrlNavigator*
/// @param minimumSize QSize*
void k_urlnavigator_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KUrlNavigator*
/// @param minw int
/// @param minh int
void k_urlnavigator_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KUrlNavigator*
/// @param maximumSize QSize*
void k_urlnavigator_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KUrlNavigator*
/// @param maxw int
/// @param maxh int
void k_urlnavigator_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KUrlNavigator*
/// @param minw int
void k_urlnavigator_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KUrlNavigator*
/// @param minh int
void k_urlnavigator_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KUrlNavigator*
/// @param maxw int
void k_urlnavigator_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KUrlNavigator*
/// @param maxh int
void k_urlnavigator_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KUrlNavigator*
QSize* k_urlnavigator_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KUrlNavigator*
/// @param sizeIncrement QSize*
void k_urlnavigator_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KUrlNavigator*
/// @param w int
/// @param h int
void k_urlnavigator_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KUrlNavigator*
QSize* k_urlnavigator_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KUrlNavigator*
/// @param baseSize QSize*
void k_urlnavigator_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KUrlNavigator*
/// @param basew int
/// @param baseh int
void k_urlnavigator_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KUrlNavigator*
/// @param fixedSize QSize*
void k_urlnavigator_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KUrlNavigator*
/// @param w int
/// @param h int
void k_urlnavigator_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KUrlNavigator*
/// @param w int
void k_urlnavigator_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KUrlNavigator*
/// @param h int
void k_urlnavigator_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KUrlNavigator*
/// @param param1 QPointF*
QPointF* k_urlnavigator_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KUrlNavigator*
/// @param param1 QPoint*
QPoint* k_urlnavigator_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KUrlNavigator*
/// @param param1 QPointF*
QPointF* k_urlnavigator_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KUrlNavigator*
/// @param param1 QPoint*
QPoint* k_urlnavigator_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KUrlNavigator*
/// @param param1 QPointF*
QPointF* k_urlnavigator_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KUrlNavigator*
/// @param param1 QPoint*
QPoint* k_urlnavigator_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KUrlNavigator*
/// @param param1 QPointF*
QPointF* k_urlnavigator_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KUrlNavigator*
/// @param param1 QPoint*
QPoint* k_urlnavigator_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KUrlNavigator*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_urlnavigator_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KUrlNavigator*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_urlnavigator_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KUrlNavigator*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_urlnavigator_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KUrlNavigator*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_urlnavigator_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KUrlNavigator*
QWidget* k_urlnavigator_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KUrlNavigator*
QWidget* k_urlnavigator_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KUrlNavigator*
QWidget* k_urlnavigator_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KUrlNavigator*
const QPalette* k_urlnavigator_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KUrlNavigator*
/// @param palette QPalette*
void k_urlnavigator_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KUrlNavigator*
/// @param backgroundRole enum QPalette__ColorRole
void k_urlnavigator_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KUrlNavigator*
///
/// @return enum QPalette__ColorRole
int32_t k_urlnavigator_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KUrlNavigator*
/// @param foregroundRole enum QPalette__ColorRole
void k_urlnavigator_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KUrlNavigator*
///
/// @return enum QPalette__ColorRole
int32_t k_urlnavigator_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KUrlNavigator*
const QFont* k_urlnavigator_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KUrlNavigator*
/// @param font QFont*
void k_urlnavigator_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KUrlNavigator*
QFontMetrics* k_urlnavigator_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KUrlNavigator*
QFontInfo* k_urlnavigator_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KUrlNavigator*
QCursor* k_urlnavigator_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KUrlNavigator*
/// @param cursor QCursor*
void k_urlnavigator_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KUrlNavigator*
void k_urlnavigator_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KUrlNavigator*
/// @param enable bool
void k_urlnavigator_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KUrlNavigator*
/// @param enable bool
void k_urlnavigator_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KUrlNavigator*
/// @param mask QBitmap*
void k_urlnavigator_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KUrlNavigator*
/// @param mask QRegion*
void k_urlnavigator_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KUrlNavigator*
QRegion* k_urlnavigator_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KUrlNavigator*
void k_urlnavigator_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlNavigator*
/// @param target QPaintDevice*
void k_urlnavigator_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlNavigator*
/// @param painter QPainter*
void k_urlnavigator_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KUrlNavigator*
QPixmap* k_urlnavigator_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KUrlNavigator*
QGraphicsEffect* k_urlnavigator_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KUrlNavigator*
/// @param effect QGraphicsEffect*
void k_urlnavigator_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KUrlNavigator*
/// @param type enum Qt__GestureType
void k_urlnavigator_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KUrlNavigator*
/// @param type enum Qt__GestureType
void k_urlnavigator_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KUrlNavigator*
/// @param windowTitle const char*
void k_urlnavigator_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KUrlNavigator*
/// @param styleSheet const char*
void k_urlnavigator_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
const char* k_urlnavigator_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
const char* k_urlnavigator_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KUrlNavigator*
/// @param icon QIcon*
void k_urlnavigator_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KUrlNavigator*
QIcon* k_urlnavigator_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KUrlNavigator*
/// @param windowIconText const char*
void k_urlnavigator_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
const char* k_urlnavigator_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KUrlNavigator*
/// @param windowRole const char*
void k_urlnavigator_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
const char* k_urlnavigator_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KUrlNavigator*
/// @param filePath const char*
void k_urlnavigator_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
const char* k_urlnavigator_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KUrlNavigator*
/// @param level double
void k_urlnavigator_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KUrlNavigator*
double k_urlnavigator_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KUrlNavigator*
/// @param toolTip const char*
void k_urlnavigator_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
const char* k_urlnavigator_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KUrlNavigator*
/// @param msec int
void k_urlnavigator_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KUrlNavigator*
/// @param statusTip const char*
void k_urlnavigator_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
const char* k_urlnavigator_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KUrlNavigator*
/// @param whatsThis const char*
void k_urlnavigator_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
const char* k_urlnavigator_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
const char* k_urlnavigator_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KUrlNavigator*
/// @param name const char*
void k_urlnavigator_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
const char* k_urlnavigator_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KUrlNavigator*
/// @param description const char*
void k_urlnavigator_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KUrlNavigator*
/// @param direction enum Qt__LayoutDirection
void k_urlnavigator_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KUrlNavigator*
///
/// @return enum Qt__LayoutDirection
int32_t k_urlnavigator_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KUrlNavigator*
void k_urlnavigator_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KUrlNavigator*
/// @param locale QLocale*
void k_urlnavigator_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KUrlNavigator*
QLocale* k_urlnavigator_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KUrlNavigator*
void k_urlnavigator_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KUrlNavigator*
void k_urlnavigator_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KUrlNavigator*
void k_urlnavigator_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KUrlNavigator*
/// @param reason enum Qt__FocusReason
void k_urlnavigator_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KUrlNavigator*
///
/// @return enum Qt__FocusPolicy
int32_t k_urlnavigator_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KUrlNavigator*
/// @param policy enum Qt__FocusPolicy
void k_urlnavigator_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_urlnavigator_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KUrlNavigator*
/// @param focusProxy QWidget*
void k_urlnavigator_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KUrlNavigator*
QWidget* k_urlnavigator_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KUrlNavigator*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_urlnavigator_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KUrlNavigator*
/// @param policy enum Qt__ContextMenuPolicy
void k_urlnavigator_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KUrlNavigator*
void k_urlnavigator_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KUrlNavigator*
/// @param param1 QCursor*
void k_urlnavigator_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KUrlNavigator*
void k_urlnavigator_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KUrlNavigator*
void k_urlnavigator_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KUrlNavigator*
void k_urlnavigator_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KUrlNavigator*
/// @param key QKeySequence*
int32_t k_urlnavigator_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KUrlNavigator*
/// @param id int
void k_urlnavigator_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KUrlNavigator*
/// @param id int
void k_urlnavigator_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KUrlNavigator*
/// @param id int
void k_urlnavigator_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_urlnavigator_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_urlnavigator_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KUrlNavigator*
/// @param enable bool
void k_urlnavigator_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KUrlNavigator*
QGraphicsProxyWidget* k_urlnavigator_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlNavigator*
void k_urlnavigator_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlNavigator*
void k_urlnavigator_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlNavigator*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_urlnavigator_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlNavigator*
/// @param param1 QRect*
void k_urlnavigator_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlNavigator*
/// @param param1 QRegion*
void k_urlnavigator_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlNavigator*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_urlnavigator_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlNavigator*
/// @param param1 QRect*
void k_urlnavigator_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlNavigator*
/// @param param1 QRegion*
void k_urlnavigator_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KUrlNavigator*
/// @param hidden bool
void k_urlnavigator_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KUrlNavigator*
void k_urlnavigator_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KUrlNavigator*
void k_urlnavigator_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KUrlNavigator*
void k_urlnavigator_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KUrlNavigator*
void k_urlnavigator_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KUrlNavigator*
void k_urlnavigator_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KUrlNavigator*
void k_urlnavigator_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KUrlNavigator*
void k_urlnavigator_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KUrlNavigator*
void k_urlnavigator_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KUrlNavigator*
/// @param param1 QWidget*
void k_urlnavigator_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KUrlNavigator*
/// @param x int
/// @param y int
void k_urlnavigator_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KUrlNavigator*
/// @param param1 QPoint*
void k_urlnavigator_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KUrlNavigator*
/// @param w int
/// @param h int
void k_urlnavigator_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KUrlNavigator*
/// @param param1 QSize*
void k_urlnavigator_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KUrlNavigator*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_urlnavigator_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KUrlNavigator*
/// @param geometry QRect*
void k_urlnavigator_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
char* k_urlnavigator_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KUrlNavigator*
/// @param geometry const char*
bool k_urlnavigator_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KUrlNavigator*
void k_urlnavigator_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KUrlNavigator*
/// @param param1 QWidget*
bool k_urlnavigator_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KUrlNavigator*
///
/// @return flag of enum Qt__WindowState
int32_t k_urlnavigator_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KUrlNavigator*
/// @param state flag of enum Qt__WindowState
void k_urlnavigator_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KUrlNavigator*
/// @param state flag of enum Qt__WindowState
void k_urlnavigator_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KUrlNavigator*
QSizePolicy* k_urlnavigator_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KUrlNavigator*
/// @param sizePolicy QSizePolicy*
void k_urlnavigator_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KUrlNavigator*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_urlnavigator_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KUrlNavigator*
QRegion* k_urlnavigator_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KUrlNavigator*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_urlnavigator_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KUrlNavigator*
/// @param margins QMargins*
void k_urlnavigator_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KUrlNavigator*
QMargins* k_urlnavigator_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KUrlNavigator*
QRect* k_urlnavigator_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KUrlNavigator*
QLayout* k_urlnavigator_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KUrlNavigator*
/// @param layout QLayout*
void k_urlnavigator_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KUrlNavigator*
void k_urlnavigator_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KUrlNavigator*
/// @param parent QWidget*
void k_urlnavigator_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KUrlNavigator*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_urlnavigator_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KUrlNavigator*
/// @param dx int
/// @param dy int
void k_urlnavigator_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KUrlNavigator*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_urlnavigator_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KUrlNavigator*
QWidget* k_urlnavigator_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KUrlNavigator*
QWidget* k_urlnavigator_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KUrlNavigator*
QWidget* k_urlnavigator_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KUrlNavigator*
/// @param on bool
void k_urlnavigator_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlNavigator*
/// @param action QAction*
void k_urlnavigator_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KUrlNavigator*
/// @param actions libqt_list /* of QAction* */
void k_urlnavigator_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KUrlNavigator*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_urlnavigator_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KUrlNavigator*
/// @param before QAction*
/// @param action QAction*
void k_urlnavigator_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KUrlNavigator*
/// @param action QAction*
void k_urlnavigator_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KUrlNavigator*
libqt_list /* of QAction* */ k_urlnavigator_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlNavigator*
/// @param text const char*
QAction* k_urlnavigator_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlNavigator*
/// @param icon QIcon*
/// @param text const char*
QAction* k_urlnavigator_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlNavigator*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_urlnavigator_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlNavigator*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_urlnavigator_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KUrlNavigator*
QWidget* k_urlnavigator_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KUrlNavigator*
/// @param type flag of enum Qt__WindowType
void k_urlnavigator_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KUrlNavigator*
///
/// @return flag of enum Qt__WindowType
int64_t k_urlnavigator_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KUrlNavigator*
/// @param param1 enum Qt__WindowType
void k_urlnavigator_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KUrlNavigator*
/// @param type flag of enum Qt__WindowType
void k_urlnavigator_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KUrlNavigator*
///
/// @return enum Qt__WindowType
int64_t k_urlnavigator_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_urlnavigator_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlNavigator*
/// @param x int
/// @param y int
QWidget* k_urlnavigator_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlNavigator*
/// @param p QPoint*
QWidget* k_urlnavigator_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlNavigator*
/// @param p QPointF*
QWidget* k_urlnavigator_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KUrlNavigator*
/// @param param1 enum Qt__WidgetAttribute
void k_urlnavigator_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KUrlNavigator*
/// @param param1 enum Qt__WidgetAttribute
bool k_urlnavigator_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KUrlNavigator*
void k_urlnavigator_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KUrlNavigator*
/// @param child QWidget*
bool k_urlnavigator_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KUrlNavigator*
/// @param enabled bool
void k_urlnavigator_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KUrlNavigator*
QBackingStore* k_urlnavigator_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KUrlNavigator*
QWindow* k_urlnavigator_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KUrlNavigator*
QScreen* k_urlnavigator_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KUrlNavigator*
/// @param screen QScreen*
void k_urlnavigator_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_urlnavigator_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KUrlNavigator*
/// @param title const char*
void k_urlnavigator_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, const char* title)
void k_urlnavigator_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KUrlNavigator*
/// @param icon QIcon*
void k_urlnavigator_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QIcon* icon)
void k_urlnavigator_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KUrlNavigator*
/// @param iconText const char*
void k_urlnavigator_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, const char* iconText)
void k_urlnavigator_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KUrlNavigator*
/// @param pos QPoint*
void k_urlnavigator_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QPoint* pos)
void k_urlnavigator_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KUrlNavigator*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_urlnavigator_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KUrlNavigator*
/// @param hints flag of enum Qt__InputMethodHint
void k_urlnavigator_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlNavigator*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_urlnavigator_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlNavigator*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_urlnavigator_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlNavigator*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_urlnavigator_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlNavigator*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_urlnavigator_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlNavigator*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_urlnavigator_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlNavigator*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_urlnavigator_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KUrlNavigator*
/// @param rectangle QRect*
QPixmap* k_urlnavigator_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KUrlNavigator*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_urlnavigator_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KUrlNavigator*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_urlnavigator_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KUrlNavigator*
/// @param id int
/// @param enable bool
void k_urlnavigator_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KUrlNavigator*
/// @param id int
/// @param enable bool
void k_urlnavigator_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KUrlNavigator*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_urlnavigator_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KUrlNavigator*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_urlnavigator_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_urlnavigator_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_urlnavigator_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
const char* k_urlnavigator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KUrlNavigator*
/// @param name char*
void k_urlnavigator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KUrlNavigator*
/// @param b bool
bool k_urlnavigator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KUrlNavigator*
QThread* k_urlnavigator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUrlNavigator*
/// @param thread QThread*
bool k_urlnavigator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlNavigator*
/// @param interval int
int32_t k_urlnavigator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlNavigator*
/// @param id int
void k_urlnavigator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlNavigator*
/// @param id enum Qt__TimerId
void k_urlnavigator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KUrlNavigator*
libqt_list /* of QObject* */ k_urlnavigator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KUrlNavigator*
/// @param filterObj QObject*
void k_urlnavigator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KUrlNavigator*
/// @param obj QObject*
void k_urlnavigator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_urlnavigator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUrlNavigator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_urlnavigator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_urlnavigator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_urlnavigator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KUrlNavigator*
void k_urlnavigator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KUrlNavigator*
void k_urlnavigator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KUrlNavigator*
/// @param name const char*
/// @param value QVariant*
bool k_urlnavigator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KUrlNavigator*
/// @param name const char*
QVariant* k_urlnavigator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlNavigator*
const char** k_urlnavigator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUrlNavigator*
QBindingStorage* k_urlnavigator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUrlNavigator*
const QBindingStorage* k_urlnavigator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlNavigator*
void k_urlnavigator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self)
void k_urlnavigator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KUrlNavigator*
QObject* k_urlnavigator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KUrlNavigator*
/// @param classname const char*
bool k_urlnavigator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KUrlNavigator*
void k_urlnavigator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUrlNavigator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_urlnavigator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlNavigator*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_urlnavigator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_urlnavigator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUrlNavigator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_urlnavigator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlNavigator*
/// @param param1 QObject*
void k_urlnavigator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QObject* param1)
void k_urlnavigator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KUrlNavigator*
bool k_urlnavigator_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KUrlNavigator*
double k_urlnavigator_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KUrlNavigator*
double k_urlnavigator_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_urlnavigator_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_urlnavigator_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback int32_t func()
void k_urlnavigator_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param visible bool
void k_urlnavigator_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param visible bool
void k_urlnavigator_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, bool visible)
void k_urlnavigator_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
QSize* k_urlnavigator_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
QSize* k_urlnavigator_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback QSize* func()
void k_urlnavigator_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
QSize* k_urlnavigator_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
QSize* k_urlnavigator_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback QSize* func()
void k_urlnavigator_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param param1 int
int32_t k_urlnavigator_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param param1 int
int32_t k_urlnavigator_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback int32_t func(KUrlNavigator* self, int param1)
void k_urlnavigator_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
bool k_urlnavigator_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
bool k_urlnavigator_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback bool func()
void k_urlnavigator_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
QPaintEngine* k_urlnavigator_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
QPaintEngine* k_urlnavigator_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback QPaintEngine* func()
void k_urlnavigator_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QEvent*
bool k_urlnavigator_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QEvent*
bool k_urlnavigator_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback bool func(KUrlNavigator* self, QEvent* event)
void k_urlnavigator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QMouseEvent*
void k_urlnavigator_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QMouseEvent*
void k_urlnavigator_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QMouseEvent* event)
void k_urlnavigator_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QMouseEvent*
void k_urlnavigator_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QMouseEvent*
void k_urlnavigator_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QMouseEvent* event)
void k_urlnavigator_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QFocusEvent*
void k_urlnavigator_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QFocusEvent*
void k_urlnavigator_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QFocusEvent* event)
void k_urlnavigator_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QFocusEvent*
void k_urlnavigator_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QFocusEvent*
void k_urlnavigator_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QFocusEvent* event)
void k_urlnavigator_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QEnterEvent*
void k_urlnavigator_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QEnterEvent*
void k_urlnavigator_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QEnterEvent* event)
void k_urlnavigator_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QEvent*
void k_urlnavigator_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QEvent*
void k_urlnavigator_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QEvent* event)
void k_urlnavigator_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QMoveEvent*
void k_urlnavigator_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QMoveEvent*
void k_urlnavigator_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QMoveEvent* event)
void k_urlnavigator_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QCloseEvent*
void k_urlnavigator_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QCloseEvent*
void k_urlnavigator_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QCloseEvent* event)
void k_urlnavigator_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QContextMenuEvent*
void k_urlnavigator_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QContextMenuEvent*
void k_urlnavigator_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QContextMenuEvent* event)
void k_urlnavigator_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QTabletEvent*
void k_urlnavigator_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QTabletEvent*
void k_urlnavigator_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QTabletEvent* event)
void k_urlnavigator_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QActionEvent*
void k_urlnavigator_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QActionEvent*
void k_urlnavigator_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QActionEvent* event)
void k_urlnavigator_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QDragEnterEvent*
void k_urlnavigator_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QDragEnterEvent*
void k_urlnavigator_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QDragEnterEvent* event)
void k_urlnavigator_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QDragMoveEvent*
void k_urlnavigator_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QDragMoveEvent*
void k_urlnavigator_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QDragMoveEvent* event)
void k_urlnavigator_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QDragLeaveEvent*
void k_urlnavigator_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QDragLeaveEvent*
void k_urlnavigator_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QDragLeaveEvent* event)
void k_urlnavigator_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QDropEvent*
void k_urlnavigator_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QDropEvent*
void k_urlnavigator_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QDropEvent* event)
void k_urlnavigator_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QHideEvent*
void k_urlnavigator_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QHideEvent*
void k_urlnavigator_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QHideEvent* event)
void k_urlnavigator_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_urlnavigator_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_urlnavigator_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback bool func(KUrlNavigator* self, const char* eventType, void* message, intptr_t* result)
void k_urlnavigator_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param param1 QEvent*
void k_urlnavigator_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param param1 QEvent*
void k_urlnavigator_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QEvent* param1)
void k_urlnavigator_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_urlnavigator_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_urlnavigator_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback int32_t func(KUrlNavigator* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_urlnavigator_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param painter QPainter*
void k_urlnavigator_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param painter QPainter*
void k_urlnavigator_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QPainter* painter)
void k_urlnavigator_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param offset QPoint*
QPaintDevice* k_urlnavigator_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param offset QPoint*
QPaintDevice* k_urlnavigator_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback QPaintDevice* func(KUrlNavigator* self, QPoint* offset)
void k_urlnavigator_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
QPainter* k_urlnavigator_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
QPainter* k_urlnavigator_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback QPainter* func()
void k_urlnavigator_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param param1 QInputMethodEvent*
void k_urlnavigator_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param param1 QInputMethodEvent*
void k_urlnavigator_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QInputMethodEvent* param1)
void k_urlnavigator_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_urlnavigator_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_urlnavigator_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback QVariant* func(KUrlNavigator* self, enum Qt__InputMethodQuery param1)
void k_urlnavigator_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param next bool
bool k_urlnavigator_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param next bool
bool k_urlnavigator_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback bool func(KUrlNavigator* self, bool next)
void k_urlnavigator_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QTimerEvent*
void k_urlnavigator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QTimerEvent*
void k_urlnavigator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QTimerEvent* event)
void k_urlnavigator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QChildEvent*
void k_urlnavigator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QChildEvent*
void k_urlnavigator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QChildEvent* event)
void k_urlnavigator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QEvent*
void k_urlnavigator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param event QEvent*
void k_urlnavigator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QEvent* event)
void k_urlnavigator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param signal QMetaMethod*
void k_urlnavigator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param signal QMetaMethod*
void k_urlnavigator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QMetaMethod* signal)
void k_urlnavigator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param signal QMetaMethod*
void k_urlnavigator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param signal QMetaMethod*
void k_urlnavigator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, QMetaMethod* signal)
void k_urlnavigator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
void k_urlnavigator_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
void k_urlnavigator_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func()
void k_urlnavigator_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
void k_urlnavigator_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
void k_urlnavigator_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func()
void k_urlnavigator_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
void k_urlnavigator_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
void k_urlnavigator_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback void func()
void k_urlnavigator_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
bool k_urlnavigator_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
bool k_urlnavigator_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback bool func()
void k_urlnavigator_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
bool k_urlnavigator_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
bool k_urlnavigator_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback bool func()
void k_urlnavigator_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
QObject* k_urlnavigator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
QObject* k_urlnavigator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback QObject* func()
void k_urlnavigator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
int32_t k_urlnavigator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback int32_t func()
void k_urlnavigator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param signal const char*
int32_t k_urlnavigator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param signal const char*
int32_t k_urlnavigator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback int32_t func(KUrlNavigator* self, const char* signal)
void k_urlnavigator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param signal QMetaMethod*
bool k_urlnavigator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param signal QMetaMethod*
bool k_urlnavigator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback bool func(KUrlNavigator* self, QMetaMethod* signal)
void k_urlnavigator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlNavigator*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_urlnavigator_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_urlnavigator_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlNavigator*
/// @param callback double func(KUrlNavigator* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_urlnavigator_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KUrlNavigator*
/// @param callback void func(KUrlNavigator* self, const char* objectName)
void k_urlnavigator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kurlnavigator.html#dtor.KUrlNavigator)
///
/// Delete this object from C++ memory.
///
/// @param self KUrlNavigator*
void k_urlnavigator_delete(void* self);

#endif
