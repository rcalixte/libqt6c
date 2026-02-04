#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINEVIEW_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINEVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html)

/// q_webengineview_new constructs a new QWebEngineView object.
///
/// @param parent QWidget*
///
QWebEngineView* q_webengineview_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html)

/// q_webengineview_new2 constructs a new QWebEngineView object.
///
QWebEngineView* q_webengineview_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html)

/// q_webengineview_new3 constructs a new QWebEngineView object.
///
/// @param profile QWebEngineProfile*
///
QWebEngineView* q_webengineview_new3(void* profile);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html)

/// q_webengineview_new4 constructs a new QWebEngineView object.
///
/// @param page QWebEnginePage*
///
QWebEngineView* q_webengineview_new4(void* page);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html)

/// q_webengineview_new5 constructs a new QWebEngineView object.
///
/// @param profile QWebEngineProfile*
/// @param parent QWidget*
///
QWebEngineView* q_webengineview_new5(void* profile, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html)

/// q_webengineview_new6 constructs a new QWebEngineView object.
///
/// @param page QWebEnginePage*
/// @param parent QWidget*
///
QWebEngineView* q_webengineview_new6(void* page, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEngineView*
///
const QMetaObject* q_webengineview_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback const QMetaObject* func()
///
void q_webengineview_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QWebEngineView*
///
const QMetaObject* q_webengineview_qbase_meta_object(void* self);

/// @param self QWebEngineView*
/// @param param1 const char*
///
void* q_webengineview_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback void* func(QWebEngineView* self, const char* param1)
///
void q_webengineview_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QWebEngineView*
/// @param param1 const char*
///
void* q_webengineview_qbase_metacast(void* self, const char* param1);

/// @param self QWebEngineView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webengineview_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback int32_t func(QWebEngineView* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_webengineview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWebEngineView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webengineview_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_webengineview_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#forPage)
///
/// @param page QWebEnginePage*
///
QWebEngineView* q_webengineview_for_page(void* page);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#page)
///
/// @param self QWebEngineView*
///
QWebEnginePage* q_webengineview_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#setPage)
///
/// @param self QWebEngineView*
/// @param page QWebEnginePage*
///
void q_webengineview_set_page(void* self, void* page);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#load)
///
/// @param self QWebEngineView*
/// @param url QUrl*
///
void q_webengineview_load(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#load)
///
/// @param self QWebEngineView*
/// @param request QWebEngineHttpRequest*
///
void q_webengineview_load2(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#setHtml)
///
/// @param self QWebEngineView*
/// @param html const char*
///
void q_webengineview_set_html(void* self, const char* html);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#setContent)
///
/// @param self QWebEngineView*
/// @param data const char*
///
void q_webengineview_set_content(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#history)
///
/// @param self QWebEngineView*
///
QWebEngineHistory* q_webengineview_history(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineView*
///
const char* q_webengineview_title(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#setUrl)
///
/// @param self QWebEngineView*
/// @param url QUrl*
///
void q_webengineview_set_url(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#url)
///
/// @param self QWebEngineView*
///
QUrl* q_webengineview_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#iconUrl)
///
/// @param self QWebEngineView*
///
QUrl* q_webengineview_icon_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#icon)
///
/// @param self QWebEngineView*
///
QIcon* q_webengineview_icon(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#hasSelection)
///
/// @param self QWebEngineView*
///
bool q_webengineview_has_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#selectedText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineView*
///
const char* q_webengineview_selected_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#pageAction)
///
/// @param self QWebEngineView*
/// @param action enum QWebEnginePage__WebAction
///
QAction* q_webengineview_page_action(void* self, int32_t action);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#triggerPageAction)
///
/// @param self QWebEngineView*
/// @param action enum QWebEnginePage__WebAction
///
void q_webengineview_trigger_page_action(void* self, int32_t action);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#zoomFactor)
///
/// @param self QWebEngineView*
///
double q_webengineview_zoom_factor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#setZoomFactor)
///
/// @param self QWebEngineView*
/// @param factor double
///
void q_webengineview_set_zoom_factor(void* self, double factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#findText)
///
/// @param self QWebEngineView*
/// @param subString const char*
///
void q_webengineview_find_text(void* self, const char* subString);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#sizeHint)
///
/// @param self QWebEngineView*
///
QSize* q_webengineview_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback QSize* func()
///
void q_webengineview_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QWebEngineView*
///
QSize* q_webengineview_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#settings)
///
/// @param self QWebEngineView*
///
QWebEngineSettings* q_webengineview_settings(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#createStandardContextMenu)
///
/// @param self QWebEngineView*
///
QMenu* q_webengineview_create_standard_context_menu(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#lastContextMenuRequest)
///
/// @param self QWebEngineView*
///
QWebEngineContextMenuRequest* q_webengineview_last_context_menu_request(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#printToPdf)
///
/// @param self QWebEngineView*
/// @param filePath const char*
///
void q_webengineview_print_to_pdf(void* self, const char* filePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#print)
///
/// @param self QWebEngineView*
/// @param printer QPrinter*
///
void q_webengineview_print(void* self, void* printer);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#stop)
///
/// @param self QWebEngineView*
///
void q_webengineview_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#back)
///
/// @param self QWebEngineView*
///
void q_webengineview_back(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#forward)
///
/// @param self QWebEngineView*
///
void q_webengineview_forward(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#reload)
///
/// @param self QWebEngineView*
///
void q_webengineview_reload(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#loadStarted)
///
/// @param self QWebEngineView*
///
void q_webengineview_load_started(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#loadStarted)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self)
///
void q_webengineview_on_load_started(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#loadProgress)
///
/// @param self QWebEngineView*
/// @param progress int
///
void q_webengineview_load_progress(void* self, int progress);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#loadProgress)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, int progress)
///
void q_webengineview_on_load_progress(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#loadFinished)
///
/// @param self QWebEngineView*
/// @param param1 bool
///
void q_webengineview_load_finished(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#loadFinished)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, bool param1)
///
void q_webengineview_on_load_finished(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#titleChanged)
///
/// @param self QWebEngineView*
/// @param title const char*
///
void q_webengineview_title_changed(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#titleChanged)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, const char* title)
///
void q_webengineview_on_title_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#selectionChanged)
///
/// @param self QWebEngineView*
///
void q_webengineview_selection_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#selectionChanged)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self)
///
void q_webengineview_on_selection_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#urlChanged)
///
/// @param self QWebEngineView*
/// @param param1 QUrl*
///
void q_webengineview_url_changed(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#urlChanged)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QUrl* param1)
///
void q_webengineview_on_url_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#iconUrlChanged)
///
/// @param self QWebEngineView*
/// @param param1 QUrl*
///
void q_webengineview_icon_url_changed(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#iconUrlChanged)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QUrl* param1)
///
void q_webengineview_on_icon_url_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#iconChanged)
///
/// @param self QWebEngineView*
/// @param param1 QIcon*
///
void q_webengineview_icon_changed(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#iconChanged)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QIcon* param1)
///
void q_webengineview_on_icon_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#renderProcessTerminated)
///
/// @param self QWebEngineView*
/// @param terminationStatus enum QWebEnginePage__RenderProcessTerminationStatus
/// @param exitCode int
///
void q_webengineview_render_process_terminated(void* self, int32_t terminationStatus, int exitCode);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#renderProcessTerminated)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, enum QWebEnginePage__RenderProcessTerminationStatus terminationStatus, int exitCode)
///
void q_webengineview_on_render_process_terminated(void* self, void (*callback)(void*, int32_t, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#pdfPrintingFinished)
///
/// @param self QWebEngineView*
/// @param filePath const char*
/// @param success bool
///
void q_webengineview_pdf_printing_finished(void* self, const char* filePath, bool success);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#pdfPrintingFinished)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, const char* filePath, bool success)
///
void q_webengineview_on_pdf_printing_finished(void* self, void (*callback)(void*, const char*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#printRequested)
///
/// @param self QWebEngineView*
///
void q_webengineview_print_requested(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#printRequested)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self)
///
void q_webengineview_on_print_requested(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#printRequestedByFrame)
///
/// @param self QWebEngineView*
/// @param frame QWebEngineFrame*
///
void q_webengineview_print_requested_by_frame(void* self, void* frame);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#printRequestedByFrame)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QWebEngineFrame* frame)
///
void q_webengineview_on_print_requested_by_frame(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#printFinished)
///
/// @param self QWebEngineView*
/// @param success bool
///
void q_webengineview_print_finished(void* self, bool success);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#printFinished)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, bool success)
///
void q_webengineview_on_print_finished(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#createWindow)
///
/// @param self QWebEngineView*
/// @param type enum QWebEnginePage__WebWindowType
///
QWebEngineView* q_webengineview_create_window(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#createWindow)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback QWebEngineView* func(QWebEngineView* self, enum QWebEnginePage__WebWindowType type)
///
void q_webengineview_on_create_window(void* self, QWebEngineView* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#createWindow)
///
/// Base class method implementation
///
/// @param self QWebEngineView*
/// @param type enum QWebEnginePage__WebWindowType
///
QWebEngineView* q_webengineview_qbase_create_window(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#contextMenuEvent)
///
/// @param self QWebEngineView*
/// @param param1 QContextMenuEvent*
///
void q_webengineview_context_menu_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QContextMenuEvent* param1)
///
void q_webengineview_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QWebEngineView*
/// @param param1 QContextMenuEvent*
///
void q_webengineview_qbase_context_menu_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#event)
///
/// @param self QWebEngineView*
/// @param param1 QEvent*
///
bool q_webengineview_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback bool func(QWebEngineView* self, QEvent* param1)
///
void q_webengineview_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#event)
///
/// Base class method implementation
///
/// @param self QWebEngineView*
/// @param param1 QEvent*
///
bool q_webengineview_qbase_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#showEvent)
///
/// @param self QWebEngineView*
/// @param param1 QShowEvent*
///
void q_webengineview_show_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QShowEvent* param1)
///
void q_webengineview_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#showEvent)
///
/// Base class method implementation
///
/// @param self QWebEngineView*
/// @param param1 QShowEvent*
///
void q_webengineview_qbase_show_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#hideEvent)
///
/// @param self QWebEngineView*
/// @param param1 QHideEvent*
///
void q_webengineview_hide_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QHideEvent* param1)
///
void q_webengineview_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#hideEvent)
///
/// Base class method implementation
///
/// @param self QWebEngineView*
/// @param param1 QHideEvent*
///
void q_webengineview_qbase_hide_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#closeEvent)
///
/// @param self QWebEngineView*
/// @param param1 QCloseEvent*
///
void q_webengineview_close_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QCloseEvent* param1)
///
void q_webengineview_on_close_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#closeEvent)
///
/// Base class method implementation
///
/// @param self QWebEngineView*
/// @param param1 QCloseEvent*
///
void q_webengineview_qbase_close_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#dragEnterEvent)
///
/// @param self QWebEngineView*
/// @param e QDragEnterEvent*
///
void q_webengineview_drag_enter_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QDragEnterEvent* e)
///
void q_webengineview_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self QWebEngineView*
/// @param e QDragEnterEvent*
///
void q_webengineview_qbase_drag_enter_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#dragLeaveEvent)
///
/// @param self QWebEngineView*
/// @param e QDragLeaveEvent*
///
void q_webengineview_drag_leave_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QDragLeaveEvent* e)
///
void q_webengineview_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QWebEngineView*
/// @param e QDragLeaveEvent*
///
void q_webengineview_qbase_drag_leave_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#dragMoveEvent)
///
/// @param self QWebEngineView*
/// @param e QDragMoveEvent*
///
void q_webengineview_drag_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QDragMoveEvent* e)
///
void q_webengineview_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QWebEngineView*
/// @param e QDragMoveEvent*
///
void q_webengineview_qbase_drag_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#dropEvent)
///
/// @param self QWebEngineView*
/// @param e QDropEvent*
///
void q_webengineview_drop_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QDropEvent* e)
///
void q_webengineview_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QWebEngineView*
/// @param e QDropEvent*
///
void q_webengineview_qbase_drop_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_webengineview_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_webengineview_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#setHtml)
///
/// @param self QWebEngineView*
/// @param html const char*
/// @param baseUrl QUrl*
///
void q_webengineview_set_html2(void* self, const char* html, void* baseUrl);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#setContent)
///
/// @param self QWebEngineView*
/// @param data const char*
/// @param mimeType const char*
///
void q_webengineview_set_content2(void* self, const char* data, const char* mimeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#setContent)
///
/// @param self QWebEngineView*
/// @param data const char*
/// @param mimeType const char*
/// @param baseUrl QUrl*
///
void q_webengineview_set_content3(void* self, const char* data, const char* mimeType, void* baseUrl);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#triggerPageAction)
///
/// @param self QWebEngineView*
/// @param action enum QWebEnginePage__WebAction
/// @param checked bool
///
void q_webengineview_trigger_page_action2(void* self, int32_t action, bool checked);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#findText)
///
/// @param self QWebEngineView*
/// @param subString const char*
/// @param options flag of enum QWebEnginePage__FindFlag
///
void q_webengineview_find_text2(void* self, const char* subString, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#printToPdf)
///
/// @param self QWebEngineView*
/// @param filePath const char*
/// @param layout QPageLayout*
///
void q_webengineview_print_to_pdf22(void* self, const char* filePath, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#printToPdf)
///
/// @param self QWebEngineView*
/// @param filePath const char*
/// @param layout QPageLayout*
/// @param ranges QPageRanges*
///
void q_webengineview_print_to_pdf3(void* self, const char* filePath, void* layout, void* ranges);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QWebEngineView*
///
uintptr_t q_webengineview_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QWebEngineView*
///
void q_webengineview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QWebEngineView*
///
uintptr_t q_webengineview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QWebEngineView*
///
uintptr_t q_webengineview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QWebEngineView*
///
QStyle* q_webengineview_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QWebEngineView*
/// @param style QStyle*
///
void q_webengineview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QWebEngineView*
///
/// @return enum Qt__WindowModality
///
int32_t q_webengineview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QWebEngineView*
/// @param windowModality enum Qt__WindowModality
///
void q_webengineview_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QWebEngineView*
/// @param param1 QWidget*
///
bool q_webengineview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QWebEngineView*
/// @param enabled bool
///
void q_webengineview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QWebEngineView*
/// @param disabled bool
///
void q_webengineview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QWebEngineView*
/// @param windowModified bool
///
void q_webengineview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QWebEngineView*
///
QRect* q_webengineview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QWebEngineView*
///
const QRect* q_webengineview_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QWebEngineView*
///
QRect* q_webengineview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QWebEngineView*
///
QPoint* q_webengineview_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QWebEngineView*
///
QSize* q_webengineview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QWebEngineView*
///
QSize* q_webengineview_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QWebEngineView*
///
QRect* q_webengineview_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QWebEngineView*
///
QRect* q_webengineview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QWebEngineView*
///
QRegion* q_webengineview_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QWebEngineView*
///
QSize* q_webengineview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QWebEngineView*
///
QSize* q_webengineview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QWebEngineView*
/// @param minimumSize QSize*
///
void q_webengineview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QWebEngineView*
/// @param minw int
/// @param minh int
///
void q_webengineview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QWebEngineView*
/// @param maximumSize QSize*
///
void q_webengineview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QWebEngineView*
/// @param maxw int
/// @param maxh int
///
void q_webengineview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QWebEngineView*
/// @param minw int
///
void q_webengineview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QWebEngineView*
/// @param minh int
///
void q_webengineview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QWebEngineView*
/// @param maxw int
///
void q_webengineview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QWebEngineView*
/// @param maxh int
///
void q_webengineview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QWebEngineView*
///
QSize* q_webengineview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QWebEngineView*
/// @param sizeIncrement QSize*
///
void q_webengineview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QWebEngineView*
/// @param w int
/// @param h int
///
void q_webengineview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QWebEngineView*
///
QSize* q_webengineview_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QWebEngineView*
/// @param baseSize QSize*
///
void q_webengineview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QWebEngineView*
/// @param basew int
/// @param baseh int
///
void q_webengineview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QWebEngineView*
/// @param fixedSize QSize*
///
void q_webengineview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QWebEngineView*
/// @param w int
/// @param h int
///
void q_webengineview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QWebEngineView*
/// @param w int
///
void q_webengineview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QWebEngineView*
/// @param h int
///
void q_webengineview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QWebEngineView*
/// @param param1 QPointF*
///
QPointF* q_webengineview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QWebEngineView*
/// @param param1 QPoint*
///
QPoint* q_webengineview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QWebEngineView*
/// @param param1 QPointF*
///
QPointF* q_webengineview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QWebEngineView*
/// @param param1 QPoint*
///
QPoint* q_webengineview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QWebEngineView*
/// @param param1 QPointF*
///
QPointF* q_webengineview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QWebEngineView*
/// @param param1 QPoint*
///
QPoint* q_webengineview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QWebEngineView*
/// @param param1 QPointF*
///
QPointF* q_webengineview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QWebEngineView*
/// @param param1 QPoint*
///
QPoint* q_webengineview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QWebEngineView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_webengineview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QWebEngineView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_webengineview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QWebEngineView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_webengineview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QWebEngineView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_webengineview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QWebEngineView*
///
QWidget* q_webengineview_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QWebEngineView*
///
QWidget* q_webengineview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QWebEngineView*
///
QWidget* q_webengineview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QWebEngineView*
///
const QPalette* q_webengineview_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QWebEngineView*
/// @param palette QPalette*
///
void q_webengineview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QWebEngineView*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_webengineview_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QWebEngineView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_webengineview_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QWebEngineView*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_webengineview_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QWebEngineView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_webengineview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QWebEngineView*
///
const QFont* q_webengineview_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QWebEngineView*
/// @param font QFont*
///
void q_webengineview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QWebEngineView*
///
QFontMetrics* q_webengineview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QWebEngineView*
///
QFontInfo* q_webengineview_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QWebEngineView*
///
QCursor* q_webengineview_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QWebEngineView*
/// @param cursor QCursor*
///
void q_webengineview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QWebEngineView*
///
void q_webengineview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QWebEngineView*
/// @param enable bool
///
void q_webengineview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QWebEngineView*
///
bool q_webengineview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QWebEngineView*
///
bool q_webengineview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QWebEngineView*
/// @param enable bool
///
void q_webengineview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QWebEngineView*
///
bool q_webengineview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QWebEngineView*
/// @param mask QBitmap*
///
void q_webengineview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QWebEngineView*
/// @param mask QRegion*
///
void q_webengineview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QWebEngineView*
///
QRegion* q_webengineview_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QWebEngineView*
///
void q_webengineview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWebEngineView*
/// @param target QPaintDevice*
///
void q_webengineview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWebEngineView*
/// @param painter QPainter*
///
void q_webengineview_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QWebEngineView*
///
QPixmap* q_webengineview_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QWebEngineView*
///
QGraphicsEffect* q_webengineview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QWebEngineView*
/// @param effect QGraphicsEffect*
///
void q_webengineview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QWebEngineView*
/// @param type enum Qt__GestureType
///
void q_webengineview_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QWebEngineView*
/// @param type enum Qt__GestureType
///
void q_webengineview_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QWebEngineView*
/// @param windowTitle const char*
///
void q_webengineview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QWebEngineView*
/// @param styleSheet const char*
///
void q_webengineview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineView*
///
const char* q_webengineview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineView*
///
const char* q_webengineview_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QWebEngineView*
/// @param icon QIcon*
///
void q_webengineview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QWebEngineView*
///
QIcon* q_webengineview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QWebEngineView*
/// @param windowIconText const char*
///
void q_webengineview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineView*
///
const char* q_webengineview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QWebEngineView*
/// @param windowRole const char*
///
void q_webengineview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineView*
///
const char* q_webengineview_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QWebEngineView*
/// @param filePath const char*
///
void q_webengineview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineView*
///
const char* q_webengineview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QWebEngineView*
/// @param level double
///
void q_webengineview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QWebEngineView*
///
double q_webengineview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QWebEngineView*
/// @param toolTip const char*
///
void q_webengineview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineView*
///
const char* q_webengineview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QWebEngineView*
/// @param msec int
///
void q_webengineview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QWebEngineView*
/// @param statusTip const char*
///
void q_webengineview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineView*
///
const char* q_webengineview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QWebEngineView*
/// @param whatsThis const char*
///
void q_webengineview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineView*
///
const char* q_webengineview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineView*
///
const char* q_webengineview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QWebEngineView*
/// @param name const char*
///
void q_webengineview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineView*
///
const char* q_webengineview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QWebEngineView*
/// @param description const char*
///
void q_webengineview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QWebEngineView*
/// @param direction enum Qt__LayoutDirection
///
void q_webengineview_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QWebEngineView*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_webengineview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QWebEngineView*
///
void q_webengineview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QWebEngineView*
/// @param locale QLocale*
///
void q_webengineview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QWebEngineView*
///
QLocale* q_webengineview_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QWebEngineView*
///
void q_webengineview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QWebEngineView*
///
void q_webengineview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QWebEngineView*
///
void q_webengineview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QWebEngineView*
///
void q_webengineview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QWebEngineView*
/// @param reason enum Qt__FocusReason
///
void q_webengineview_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QWebEngineView*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_webengineview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QWebEngineView*
/// @param policy enum Qt__FocusPolicy
///
void q_webengineview_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QWebEngineView*
///
bool q_webengineview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_webengineview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QWebEngineView*
/// @param focusProxy QWidget*
///
void q_webengineview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QWebEngineView*
///
QWidget* q_webengineview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QWebEngineView*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_webengineview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QWebEngineView*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_webengineview_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QWebEngineView*
///
void q_webengineview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QWebEngineView*
/// @param param1 QCursor*
///
void q_webengineview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QWebEngineView*
///
void q_webengineview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QWebEngineView*
///
void q_webengineview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QWebEngineView*
///
void q_webengineview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QWebEngineView*
/// @param key QKeySequence*
///
int32_t q_webengineview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QWebEngineView*
/// @param id int
///
void q_webengineview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QWebEngineView*
/// @param id int
///
void q_webengineview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QWebEngineView*
/// @param id int
///
void q_webengineview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_webengineview_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_webengineview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QWebEngineView*
///
bool q_webengineview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QWebEngineView*
/// @param enable bool
///
void q_webengineview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QWebEngineView*
///
QGraphicsProxyWidget* q_webengineview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWebEngineView*
///
void q_webengineview_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWebEngineView*
///
void q_webengineview_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWebEngineView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_webengineview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWebEngineView*
/// @param param1 QRect*
///
void q_webengineview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWebEngineView*
/// @param param1 QRegion*
///
void q_webengineview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWebEngineView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_webengineview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWebEngineView*
/// @param param1 QRect*
///
void q_webengineview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWebEngineView*
/// @param param1 QRegion*
///
void q_webengineview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QWebEngineView*
/// @param hidden bool
///
void q_webengineview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QWebEngineView*
///
void q_webengineview_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QWebEngineView*
///
void q_webengineview_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QWebEngineView*
///
void q_webengineview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QWebEngineView*
///
void q_webengineview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QWebEngineView*
///
void q_webengineview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QWebEngineView*
///
void q_webengineview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QWebEngineView*
///
bool q_webengineview_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QWebEngineView*
///
void q_webengineview_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QWebEngineView*
///
void q_webengineview_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QWebEngineView*
/// @param param1 QWidget*
///
void q_webengineview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QWebEngineView*
/// @param x int
/// @param y int
///
void q_webengineview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QWebEngineView*
/// @param param1 QPoint*
///
void q_webengineview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QWebEngineView*
/// @param w int
/// @param h int
///
void q_webengineview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QWebEngineView*
/// @param param1 QSize*
///
void q_webengineview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QWebEngineView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_webengineview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QWebEngineView*
/// @param geometry QRect*
///
void q_webengineview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWebEngineView*
///
char* q_webengineview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QWebEngineView*
/// @param geometry const char*
///
bool q_webengineview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QWebEngineView*
///
void q_webengineview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QWebEngineView*
/// @param param1 QWidget*
///
bool q_webengineview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QWebEngineView*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_webengineview_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QWebEngineView*
/// @param state flag of enum Qt__WindowState
///
void q_webengineview_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QWebEngineView*
/// @param state flag of enum Qt__WindowState
///
void q_webengineview_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QWebEngineView*
///
QSizePolicy* q_webengineview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QWebEngineView*
/// @param sizePolicy QSizePolicy*
///
void q_webengineview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QWebEngineView*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_webengineview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QWebEngineView*
///
QRegion* q_webengineview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QWebEngineView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_webengineview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QWebEngineView*
/// @param margins QMargins*
///
void q_webengineview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QWebEngineView*
///
QMargins* q_webengineview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QWebEngineView*
///
QRect* q_webengineview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QWebEngineView*
///
QLayout* q_webengineview_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QWebEngineView*
/// @param layout QLayout*
///
void q_webengineview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QWebEngineView*
///
void q_webengineview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QWebEngineView*
/// @param parent QWidget*
///
void q_webengineview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QWebEngineView*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_webengineview_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QWebEngineView*
/// @param dx int
/// @param dy int
///
void q_webengineview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QWebEngineView*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_webengineview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QWebEngineView*
///
QWidget* q_webengineview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QWebEngineView*
///
QWidget* q_webengineview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QWebEngineView*
///
QWidget* q_webengineview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QWebEngineView*
///
bool q_webengineview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QWebEngineView*
/// @param on bool
///
void q_webengineview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWebEngineView*
/// @param action QAction*
///
void q_webengineview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QWebEngineView*
/// @param actions libqt_list of QAction*
///
void q_webengineview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QWebEngineView*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_webengineview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QWebEngineView*
/// @param before QAction*
/// @param action QAction*
///
void q_webengineview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QWebEngineView*
/// @param action QAction*
///
void q_webengineview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QWebEngineView*
///
/// @return libqt_list of QAction*
///
libqt_list q_webengineview_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWebEngineView*
/// @param text const char*
///
QAction* q_webengineview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWebEngineView*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_webengineview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWebEngineView*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_webengineview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWebEngineView*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_webengineview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QWebEngineView*
///
QWidget* q_webengineview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QWebEngineView*
/// @param type flag of enum Qt__WindowType
///
void q_webengineview_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QWebEngineView*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_webengineview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QWebEngineView*
/// @param param1 enum Qt__WindowType
///
void q_webengineview_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QWebEngineView*
/// @param type flag of enum Qt__WindowType
///
void q_webengineview_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QWebEngineView*
///
/// @return enum Qt__WindowType
///
int32_t q_webengineview_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_webengineview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QWebEngineView*
/// @param x int
/// @param y int
///
QWidget* q_webengineview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QWebEngineView*
/// @param p QPoint*
///
QWidget* q_webengineview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QWebEngineView*
/// @param p QPointF*
///
QWidget* q_webengineview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QWebEngineView*
/// @param param1 enum Qt__WidgetAttribute
///
void q_webengineview_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QWebEngineView*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_webengineview_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QWebEngineView*
///
void q_webengineview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QWebEngineView*
/// @param child QWidget*
///
bool q_webengineview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QWebEngineView*
///
bool q_webengineview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QWebEngineView*
/// @param enabled bool
///
void q_webengineview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QWebEngineView*
///
QBackingStore* q_webengineview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QWebEngineView*
///
QWindow* q_webengineview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QWebEngineView*
///
QScreen* q_webengineview_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QWebEngineView*
/// @param screen QScreen*
///
void q_webengineview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_webengineview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QWebEngineView*
/// @param title const char*
///
void q_webengineview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, const char* title)
///
void q_webengineview_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QWebEngineView*
/// @param icon QIcon*
///
void q_webengineview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QIcon* icon)
///
void q_webengineview_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QWebEngineView*
/// @param iconText const char*
///
void q_webengineview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, const char* iconText)
///
void q_webengineview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QWebEngineView*
/// @param pos QPoint*
///
void q_webengineview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QPoint* pos)
///
void q_webengineview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QWebEngineView*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_webengineview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QWebEngineView*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_webengineview_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWebEngineView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_webengineview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWebEngineView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_webengineview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWebEngineView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_webengineview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWebEngineView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_webengineview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWebEngineView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_webengineview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWebEngineView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_webengineview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QWebEngineView*
/// @param rectangle QRect*
///
QPixmap* q_webengineview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QWebEngineView*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_webengineview_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QWebEngineView*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_webengineview_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QWebEngineView*
/// @param id int
/// @param enable bool
///
void q_webengineview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QWebEngineView*
/// @param id int
/// @param enable bool
///
void q_webengineview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QWebEngineView*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_webengineview_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QWebEngineView*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_webengineview_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_webengineview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_webengineview_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebEngineView*
///
const char* q_webengineview_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineView*
/// @param name char*
///
void q_webengineview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEngineView*
///
bool q_webengineview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEngineView*
///
bool q_webengineview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineView*
/// @param b bool
///
bool q_webengineview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebEngineView*
///
QThread* q_webengineview_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineView*
/// @param thread QThread*
///
bool q_webengineview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineView*
/// @param interval int
///
int32_t q_webengineview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineView*
/// @param time int64_t of nanoseconds
///
int32_t q_webengineview_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineView*
/// @param id int
///
void q_webengineview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineView*
/// @param id enum Qt__TimerId
///
void q_webengineview_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebEngineView*
///
/// @return libqt_list of QObject*
///
libqt_list q_webengineview_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineView*
/// @param filterObj QObject*
///
void q_webengineview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineView*
/// @param obj QObject*
///
void q_webengineview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_webengineview_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webengineview_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webengineview_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webengineview_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webengineview_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QWebEngineView*
///
bool q_webengineview_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QWebEngineView*
/// @param receiver QObject*
///
bool q_webengineview_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webengineview_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEngineView*
///
void q_webengineview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEngineView*
///
void q_webengineview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineView*
/// @param name const char*
/// @param value QVariant*
///
bool q_webengineview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEngineView*
/// @param name const char*
///
QVariant* q_webengineview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWebEngineView*
///
const char** q_webengineview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineView*
///
QBindingStorage* q_webengineview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineView*
///
const QBindingStorage* q_webengineview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineView*
///
void q_webengineview_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self)
///
void q_webengineview_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebEngineView*
///
QObject* q_webengineview_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEngineView*
/// @param classname const char*
///
bool q_webengineview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineView*
///
void q_webengineview_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineView*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_webengineview_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineView*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_webengineview_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_webengineview_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_webengineview_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webengineview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QWebEngineView*
/// @param signal const char*
///
bool q_webengineview_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QWebEngineView*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_webengineview_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QWebEngineView*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webengineview_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QWebEngineView*
/// @param receiver QObject*
/// @param member const char*
///
bool q_webengineview_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineView*
/// @param param1 QObject*
///
void q_webengineview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QObject* param1)
///
void q_webengineview_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QWebEngineView*
///
bool q_webengineview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QWebEngineView*
///
double q_webengineview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QWebEngineView*
///
double q_webengineview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_webengineview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_webengineview_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback int32_t func()
///
void q_webengineview_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param visible bool
///
void q_webengineview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param visible bool
///
void q_webengineview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, bool visible)
///
void q_webengineview_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
///
QSize* q_webengineview_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
///
QSize* q_webengineview_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback QSize* func()
///
void q_webengineview_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param param1 int
///
int32_t q_webengineview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param param1 int
///
int32_t q_webengineview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback int32_t func(QWebEngineView* self, int param1)
///
void q_webengineview_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
///
bool q_webengineview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
///
bool q_webengineview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback bool func()
///
void q_webengineview_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
///
QPaintEngine* q_webengineview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
///
QPaintEngine* q_webengineview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback QPaintEngine* func()
///
void q_webengineview_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QMouseEvent*
///
void q_webengineview_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QMouseEvent*
///
void q_webengineview_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QMouseEvent* event)
///
void q_webengineview_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QMouseEvent*
///
void q_webengineview_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QMouseEvent*
///
void q_webengineview_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QMouseEvent* event)
///
void q_webengineview_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QMouseEvent*
///
void q_webengineview_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QMouseEvent*
///
void q_webengineview_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QMouseEvent* event)
///
void q_webengineview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QMouseEvent*
///
void q_webengineview_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QMouseEvent*
///
void q_webengineview_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QMouseEvent* event)
///
void q_webengineview_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QWheelEvent*
///
void q_webengineview_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QWheelEvent*
///
void q_webengineview_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QWheelEvent* event)
///
void q_webengineview_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QKeyEvent*
///
void q_webengineview_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QKeyEvent*
///
void q_webengineview_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QKeyEvent* event)
///
void q_webengineview_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QKeyEvent*
///
void q_webengineview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QKeyEvent*
///
void q_webengineview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QKeyEvent* event)
///
void q_webengineview_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QFocusEvent*
///
void q_webengineview_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QFocusEvent*
///
void q_webengineview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QFocusEvent* event)
///
void q_webengineview_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QFocusEvent*
///
void q_webengineview_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QFocusEvent*
///
void q_webengineview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QFocusEvent* event)
///
void q_webengineview_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QEnterEvent*
///
void q_webengineview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QEnterEvent*
///
void q_webengineview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QEnterEvent* event)
///
void q_webengineview_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QEvent*
///
void q_webengineview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QEvent*
///
void q_webengineview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QEvent* event)
///
void q_webengineview_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QPaintEvent*
///
void q_webengineview_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QPaintEvent*
///
void q_webengineview_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QPaintEvent* event)
///
void q_webengineview_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QMoveEvent*
///
void q_webengineview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QMoveEvent*
///
void q_webengineview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QMoveEvent* event)
///
void q_webengineview_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QResizeEvent*
///
void q_webengineview_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QResizeEvent*
///
void q_webengineview_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QResizeEvent* event)
///
void q_webengineview_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QTabletEvent*
///
void q_webengineview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QTabletEvent*
///
void q_webengineview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QTabletEvent* event)
///
void q_webengineview_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QActionEvent*
///
void q_webengineview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QActionEvent*
///
void q_webengineview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QActionEvent* event)
///
void q_webengineview_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_webengineview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_webengineview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback bool func(QWebEngineView* self, const char* eventType, void* message, intptr_t* result)
///
void q_webengineview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param param1 QEvent*
///
void q_webengineview_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param param1 QEvent*
///
void q_webengineview_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QEvent* param1)
///
void q_webengineview_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_webengineview_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_webengineview_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback int32_t func(QWebEngineView* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_webengineview_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param painter QPainter*
///
void q_webengineview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param painter QPainter*
///
void q_webengineview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QPainter* painter)
///
void q_webengineview_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param offset QPoint*
///
QPaintDevice* q_webengineview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param offset QPoint*
///
QPaintDevice* q_webengineview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback QPaintDevice* func(QWebEngineView* self, QPoint* offset)
///
void q_webengineview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
///
QPainter* q_webengineview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
///
QPainter* q_webengineview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback QPainter* func()
///
void q_webengineview_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param param1 QInputMethodEvent*
///
void q_webengineview_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param param1 QInputMethodEvent*
///
void q_webengineview_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QInputMethodEvent* param1)
///
void q_webengineview_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_webengineview_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_webengineview_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback QVariant* func(QWebEngineView* self, enum Qt__InputMethodQuery param1)
///
void q_webengineview_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param next bool
///
bool q_webengineview_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param next bool
///
bool q_webengineview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback bool func(QWebEngineView* self, bool next)
///
void q_webengineview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webengineview_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webengineview_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback bool func(QWebEngineView* self, QObject* watched, QEvent* event)
///
void q_webengineview_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QTimerEvent*
///
void q_webengineview_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QTimerEvent*
///
void q_webengineview_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QTimerEvent* event)
///
void q_webengineview_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QChildEvent*
///
void q_webengineview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QChildEvent*
///
void q_webengineview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QChildEvent* event)
///
void q_webengineview_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QEvent*
///
void q_webengineview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param event QEvent*
///
void q_webengineview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QEvent* event)
///
void q_webengineview_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param signal QMetaMethod*
///
void q_webengineview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param signal QMetaMethod*
///
void q_webengineview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QMetaMethod* signal)
///
void q_webengineview_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param signal QMetaMethod*
///
void q_webengineview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param signal QMetaMethod*
///
void q_webengineview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, QMetaMethod* signal)
///
void q_webengineview_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
///
void q_webengineview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
///
void q_webengineview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func()
///
void q_webengineview_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
///
void q_webengineview_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
///
void q_webengineview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func()
///
void q_webengineview_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
///
void q_webengineview_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
///
void q_webengineview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback void func()
///
void q_webengineview_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
///
bool q_webengineview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
///
bool q_webengineview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback bool func()
///
void q_webengineview_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
///
bool q_webengineview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
///
bool q_webengineview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback bool func()
///
void q_webengineview_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
///
QObject* q_webengineview_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
///
QObject* q_webengineview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback QObject* func()
///
void q_webengineview_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
///
int32_t q_webengineview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback int32_t func()
///
void q_webengineview_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param signal const char*
///
int32_t q_webengineview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param signal const char*
///
int32_t q_webengineview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback int32_t func(QWebEngineView* self, const char* signal)
///
void q_webengineview_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param signal QMetaMethod*
///
bool q_webengineview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param signal QMetaMethod*
///
bool q_webengineview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback bool func(QWebEngineView* self, QMetaMethod* signal)
///
void q_webengineview_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebEngineView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_webengineview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_webengineview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebEngineView*
/// @param callback double func(QWebEngineView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_webengineview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineView*
/// @param callback void func(QWebEngineView* self, const char* objectName)
///
void q_webengineview_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineview.html#dtor.QWebEngineView)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineView*
///
void q_webengineview_delete(void* self);

#endif
