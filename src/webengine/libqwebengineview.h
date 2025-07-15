#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEVIEW_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineview.html

/// q_webengineview_new constructs a new QWebEngineView object.
///
/// ``` QWidget* parent ```
QWebEngineView* q_webengineview_new(void* parent);

/// q_webengineview_new2 constructs a new QWebEngineView object.
///
///
QWebEngineView* q_webengineview_new2();

/// q_webengineview_new3 constructs a new QWebEngineView object.
///
/// ``` QWebEngineProfile* profile ```
QWebEngineView* q_webengineview_new3(void* profile);

/// q_webengineview_new4 constructs a new QWebEngineView object.
///
/// ``` QWebEnginePage* page ```
QWebEngineView* q_webengineview_new4(void* page);

/// q_webengineview_new5 constructs a new QWebEngineView object.
///
/// ``` QWebEngineProfile* profile, QWidget* parent ```
QWebEngineView* q_webengineview_new5(void* profile, void* parent);

/// q_webengineview_new6 constructs a new QWebEngineView object.
///
/// ``` QWebEnginePage* page, QWidget* parent ```
QWebEngineView* q_webengineview_new6(void* page, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineView* self ```
const QMetaObject* q_webengineview_meta_object(void* self);

/// ``` QWebEngineView* self, const char* param1 ```
void* q_webengineview_metacast(void* self, const char* param1);

/// ``` QWebEngineView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineview_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, int32_t (*slot)(QWebEngineView*, enum QMetaObject__Call, int, void*) ```
void q_webengineview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWebEngineView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webengineview_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#forPage)
///
/// ``` QWebEnginePage* page ```
QWebEngineView* q_webengineview_for_page(void* page);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#page)
///
/// ``` QWebEngineView* self ```
QWebEnginePage* q_webengineview_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setPage)
///
/// ``` QWebEngineView* self, QWebEnginePage* page ```
void q_webengineview_set_page(void* self, void* page);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#load)
///
/// ``` QWebEngineView* self, QUrl* url ```
void q_webengineview_load(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#load)
///
/// ``` QWebEngineView* self, QWebEngineHttpRequest* request ```
void q_webengineview_load2(void* self, void* request);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setHtml)
///
/// ``` QWebEngineView* self, const char* html ```
void q_webengineview_set_html(void* self, const char* html);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setContent)
///
/// ``` QWebEngineView* self, const char* data ```
void q_webengineview_set_content(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#history)
///
/// ``` QWebEngineView* self ```
QWebEngineHistory* q_webengineview_history(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#title)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setUrl)
///
/// ``` QWebEngineView* self, QUrl* url ```
void q_webengineview_set_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#url)
///
/// ``` QWebEngineView* self ```
QUrl* q_webengineview_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#iconUrl)
///
/// ``` QWebEngineView* self ```
QUrl* q_webengineview_icon_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#icon)
///
/// ``` QWebEngineView* self ```
QIcon* q_webengineview_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#hasSelection)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_has_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#selectedText)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_selected_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#pageAction)
///
/// ``` QWebEngineView* self, enum QWebEnginePage__WebAction action ```
QAction* q_webengineview_page_action(void* self, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#triggerPageAction)
///
/// ``` QWebEngineView* self, enum QWebEnginePage__WebAction action ```
void q_webengineview_trigger_page_action(void* self, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#zoomFactor)
///
/// ``` QWebEngineView* self ```
double q_webengineview_zoom_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setZoomFactor)
///
/// ``` QWebEngineView* self, double factor ```
void q_webengineview_set_zoom_factor(void* self, double factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#sizeHint)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, QSize* (*slot)() ```
void q_webengineview_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#settings)
///
/// ``` QWebEngineView* self ```
QWebEngineSettings* q_webengineview_settings(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#createStandardContextMenu)
///
/// ``` QWebEngineView* self ```
QMenu* q_webengineview_create_standard_context_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#lastContextMenuRequest)
///
/// ``` QWebEngineView* self ```
QWebEngineContextMenuRequest* q_webengineview_last_context_menu_request(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printToPdf)
///
/// ``` QWebEngineView* self, const char* filePath ```
void q_webengineview_print_to_pdf(void* self, const char* filePath);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#print)
///
/// ``` QWebEngineView* self, QPrinter* printer ```
void q_webengineview_print(void* self, void* printer);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#stop)
///
/// ``` QWebEngineView* self ```
void q_webengineview_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#back)
///
/// ``` QWebEngineView* self ```
void q_webengineview_back(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#forward)
///
/// ``` QWebEngineView* self ```
void q_webengineview_forward(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#reload)
///
/// ``` QWebEngineView* self ```
void q_webengineview_reload(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#loadStarted)
///
/// ``` QWebEngineView* self ```
void q_webengineview_load_started(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#loadStarted)
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*) ```
void q_webengineview_on_load_started(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#loadProgress)
///
/// ``` QWebEngineView* self, int progress ```
void q_webengineview_load_progress(void* self, int progress);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#loadProgress)
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, int) ```
void q_webengineview_on_load_progress(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#loadFinished)
///
/// ``` QWebEngineView* self, bool param1 ```
void q_webengineview_load_finished(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#loadFinished)
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, bool) ```
void q_webengineview_on_load_finished(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#titleChanged)
///
/// ``` QWebEngineView* self, const char* title ```
void q_webengineview_title_changed(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#titleChanged)
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, const char*) ```
void q_webengineview_on_title_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#selectionChanged)
///
/// ``` QWebEngineView* self ```
void q_webengineview_selection_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#selectionChanged)
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*) ```
void q_webengineview_on_selection_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#urlChanged)
///
/// ``` QWebEngineView* self, QUrl* param1 ```
void q_webengineview_url_changed(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#urlChanged)
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QUrl*) ```
void q_webengineview_on_url_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#iconUrlChanged)
///
/// ``` QWebEngineView* self, QUrl* param1 ```
void q_webengineview_icon_url_changed(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#iconUrlChanged)
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QUrl*) ```
void q_webengineview_on_icon_url_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#iconChanged)
///
/// ``` QWebEngineView* self, QIcon* param1 ```
void q_webengineview_icon_changed(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#iconChanged)
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QIcon*) ```
void q_webengineview_on_icon_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#renderProcessTerminated)
///
/// ``` QWebEngineView* self, enum QWebEnginePage__RenderProcessTerminationStatus terminationStatus, int exitCode ```
void q_webengineview_render_process_terminated(void* self, int64_t terminationStatus, int exitCode);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#renderProcessTerminated)
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, enum QWebEnginePage__RenderProcessTerminationStatus, int) ```
void q_webengineview_on_render_process_terminated(void* self, void (*slot)(void*, int64_t, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#pdfPrintingFinished)
///
/// ``` QWebEngineView* self, const char* filePath, bool success ```
void q_webengineview_pdf_printing_finished(void* self, const char* filePath, bool success);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#pdfPrintingFinished)
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, const char*, bool) ```
void q_webengineview_on_pdf_printing_finished(void* self, void (*slot)(void*, const char*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printRequested)
///
/// ``` QWebEngineView* self ```
void q_webengineview_print_requested(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printRequested)
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*) ```
void q_webengineview_on_print_requested(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printRequestedByFrame)
///
/// ``` QWebEngineView* self, QWebEngineFrame* frame ```
void q_webengineview_print_requested_by_frame(void* self, void* frame);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printRequestedByFrame)
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QWebEngineFrame*) ```
void q_webengineview_on_print_requested_by_frame(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printFinished)
///
/// ``` QWebEngineView* self, bool success ```
void q_webengineview_print_finished(void* self, bool success);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printFinished)
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, bool) ```
void q_webengineview_on_print_finished(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#createWindow)
///
/// ``` QWebEngineView* self, enum QWebEnginePage__WebWindowType typeVal ```
QWebEngineView* q_webengineview_create_window(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#createWindow)
///
/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, QWebEngineView* (*slot)(QWebEngineView*, enum QWebEnginePage__WebWindowType) ```
void q_webengineview_on_create_window(void* self, QWebEngineView* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#createWindow)
///
/// Base class method implementation
///
/// ``` QWebEngineView* self, enum QWebEnginePage__WebWindowType typeVal ```
QWebEngineView* q_webengineview_qbase_create_window(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#contextMenuEvent)
///
/// ``` QWebEngineView* self, QContextMenuEvent* param1 ```
void q_webengineview_context_menu_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QContextMenuEvent*) ```
void q_webengineview_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#contextMenuEvent)
///
/// Base class method implementation
///
/// ``` QWebEngineView* self, QContextMenuEvent* param1 ```
void q_webengineview_qbase_context_menu_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#event)
///
/// ``` QWebEngineView* self, QEvent* param1 ```
bool q_webengineview_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, bool (*slot)(QWebEngineView*, QEvent*) ```
void q_webengineview_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#event)
///
/// Base class method implementation
///
/// ``` QWebEngineView* self, QEvent* param1 ```
bool q_webengineview_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#showEvent)
///
/// ``` QWebEngineView* self, QShowEvent* param1 ```
void q_webengineview_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#showEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QShowEvent*) ```
void q_webengineview_on_show_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#showEvent)
///
/// Base class method implementation
///
/// ``` QWebEngineView* self, QShowEvent* param1 ```
void q_webengineview_qbase_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#hideEvent)
///
/// ``` QWebEngineView* self, QHideEvent* param1 ```
void q_webengineview_hide_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QHideEvent*) ```
void q_webengineview_on_hide_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#hideEvent)
///
/// Base class method implementation
///
/// ``` QWebEngineView* self, QHideEvent* param1 ```
void q_webengineview_qbase_hide_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#closeEvent)
///
/// ``` QWebEngineView* self, QCloseEvent* param1 ```
void q_webengineview_close_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QCloseEvent*) ```
void q_webengineview_on_close_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#closeEvent)
///
/// Base class method implementation
///
/// ``` QWebEngineView* self, QCloseEvent* param1 ```
void q_webengineview_qbase_close_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dragEnterEvent)
///
/// ``` QWebEngineView* self, QDragEnterEvent* e ```
void q_webengineview_drag_enter_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QDragEnterEvent*) ```
void q_webengineview_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dragEnterEvent)
///
/// Base class method implementation
///
/// ``` QWebEngineView* self, QDragEnterEvent* e ```
void q_webengineview_qbase_drag_enter_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dragLeaveEvent)
///
/// ``` QWebEngineView* self, QDragLeaveEvent* e ```
void q_webengineview_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QDragLeaveEvent*) ```
void q_webengineview_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// ``` QWebEngineView* self, QDragLeaveEvent* e ```
void q_webengineview_qbase_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dragMoveEvent)
///
/// ``` QWebEngineView* self, QDragMoveEvent* e ```
void q_webengineview_drag_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QDragMoveEvent*) ```
void q_webengineview_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dragMoveEvent)
///
/// Base class method implementation
///
/// ``` QWebEngineView* self, QDragMoveEvent* e ```
void q_webengineview_qbase_drag_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dropEvent)
///
/// ``` QWebEngineView* self, QDropEvent* e ```
void q_webengineview_drop_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QDropEvent*) ```
void q_webengineview_on_drop_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dropEvent)
///
/// Base class method implementation
///
/// ``` QWebEngineView* self, QDropEvent* e ```
void q_webengineview_qbase_drop_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webengineview_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webengineview_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setHtml)
///
/// ``` QWebEngineView* self, const char* html, QUrl* baseUrl ```
void q_webengineview_set_html2(void* self, const char* html, void* baseUrl);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setContent)
///
/// ``` QWebEngineView* self, const char* data, const char* mimeType ```
void q_webengineview_set_content2(void* self, const char* data, const char* mimeType);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setContent)
///
/// ``` QWebEngineView* self, const char* data, const char* mimeType, QUrl* baseUrl ```
void q_webengineview_set_content3(void* self, const char* data, const char* mimeType, void* baseUrl);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#triggerPageAction)
///
/// ``` QWebEngineView* self, enum QWebEnginePage__WebAction action, bool checked ```
void q_webengineview_trigger_page_action2(void* self, int64_t action, bool checked);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printToPdf)
///
/// ``` QWebEngineView* self, const char* filePath, QPageLayout* layout ```
void q_webengineview_print_to_pdf2(void* self, const char* filePath, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printToPdf)
///
/// ``` QWebEngineView* self, const char* filePath, QPageLayout* layout, QPageRanges* ranges ```
void q_webengineview_print_to_pdf3(void* self, const char* filePath, void* layout, void* ranges);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QWebEngineView* self ```
uintptr_t q_webengineview_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QWebEngineView* self ```
void q_webengineview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QWebEngineView* self ```
uintptr_t q_webengineview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QWebEngineView* self ```
uintptr_t q_webengineview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QWebEngineView* self ```
QStyle* q_webengineview_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QWebEngineView* self, QStyle* style ```
void q_webengineview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QWebEngineView* self, enum Qt__WindowModality windowModality ```
void q_webengineview_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QWebEngineView* self, QWidget* param1 ```
bool q_webengineview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QWebEngineView* self, bool enabled ```
void q_webengineview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QWebEngineView* self, bool disabled ```
void q_webengineview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QWebEngineView* self, bool windowModified ```
void q_webengineview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QWebEngineView* self ```
QRect* q_webengineview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QWebEngineView* self ```
const QRect* q_webengineview_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QWebEngineView* self ```
QRect* q_webengineview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QWebEngineView* self ```
QPoint* q_webengineview_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QWebEngineView* self ```
QRect* q_webengineview_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QWebEngineView* self ```
QRect* q_webengineview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QWebEngineView* self ```
QRegion* q_webengineview_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QWebEngineView* self, QSize* minimumSize ```
void q_webengineview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QWebEngineView* self, int minw, int minh ```
void q_webengineview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QWebEngineView* self, QSize* maximumSize ```
void q_webengineview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QWebEngineView* self, int maxw, int maxh ```
void q_webengineview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QWebEngineView* self, int minw ```
void q_webengineview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QWebEngineView* self, int minh ```
void q_webengineview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QWebEngineView* self, int maxw ```
void q_webengineview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QWebEngineView* self, int maxh ```
void q_webengineview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QWebEngineView* self, QSize* sizeIncrement ```
void q_webengineview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QWebEngineView* self, int w, int h ```
void q_webengineview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QWebEngineView* self, QSize* baseSize ```
void q_webengineview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QWebEngineView* self, int basew, int baseh ```
void q_webengineview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QWebEngineView* self, QSize* fixedSize ```
void q_webengineview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QWebEngineView* self, int w, int h ```
void q_webengineview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QWebEngineView* self, int w ```
void q_webengineview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QWebEngineView* self, int h ```
void q_webengineview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QWebEngineView* self, QPointF* param1 ```
QPointF* q_webengineview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QWebEngineView* self, QPoint* param1 ```
QPoint* q_webengineview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QWebEngineView* self, QPointF* param1 ```
QPointF* q_webengineview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QWebEngineView* self, QPoint* param1 ```
QPoint* q_webengineview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QWebEngineView* self, QPointF* param1 ```
QPointF* q_webengineview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QWebEngineView* self, QPoint* param1 ```
QPoint* q_webengineview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QWebEngineView* self, QPointF* param1 ```
QPointF* q_webengineview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QWebEngineView* self, QPoint* param1 ```
QPoint* q_webengineview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QWebEngineView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_webengineview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QWebEngineView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_webengineview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QWebEngineView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_webengineview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QWebEngineView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_webengineview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QWebEngineView* self ```
const QPalette* q_webengineview_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QWebEngineView* self, QPalette* palette ```
void q_webengineview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QWebEngineView* self, enum QPalette__ColorRole backgroundRole ```
void q_webengineview_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QWebEngineView* self, enum QPalette__ColorRole foregroundRole ```
void q_webengineview_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QWebEngineView* self ```
const QFont* q_webengineview_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QWebEngineView* self, QFont* font ```
void q_webengineview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QWebEngineView* self ```
QFontMetrics* q_webengineview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QWebEngineView* self ```
QFontInfo* q_webengineview_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QWebEngineView* self ```
QCursor* q_webengineview_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QWebEngineView* self, QCursor* cursor ```
void q_webengineview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QWebEngineView* self ```
void q_webengineview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QWebEngineView* self, bool enable ```
void q_webengineview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QWebEngineView* self, bool enable ```
void q_webengineview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QWebEngineView* self, QBitmap* mask ```
void q_webengineview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QWebEngineView* self, QRegion* mask ```
void q_webengineview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QWebEngineView* self ```
QRegion* q_webengineview_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QWebEngineView* self ```
void q_webengineview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPaintDevice* target ```
void q_webengineview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPainter* painter ```
void q_webengineview_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QWebEngineView* self ```
QPixmap* q_webengineview_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QWebEngineView* self ```
QGraphicsEffect* q_webengineview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QWebEngineView* self, QGraphicsEffect* effect ```
void q_webengineview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QWebEngineView* self, enum Qt__GestureType typeVal ```
void q_webengineview_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QWebEngineView* self, enum Qt__GestureType typeVal ```
void q_webengineview_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QWebEngineView* self, const char* windowTitle ```
void q_webengineview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QWebEngineView* self, const char* styleSheet ```
void q_webengineview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QWebEngineView* self, QIcon* icon ```
void q_webengineview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QWebEngineView* self ```
QIcon* q_webengineview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QWebEngineView* self, const char* windowIconText ```
void q_webengineview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QWebEngineView* self, const char* windowRole ```
void q_webengineview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QWebEngineView* self, const char* filePath ```
void q_webengineview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QWebEngineView* self, double level ```
void q_webengineview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QWebEngineView* self ```
double q_webengineview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QWebEngineView* self, const char* toolTip ```
void q_webengineview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QWebEngineView* self, int msec ```
void q_webengineview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QWebEngineView* self, const char* statusTip ```
void q_webengineview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QWebEngineView* self, const char* whatsThis ```
void q_webengineview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QWebEngineView* self, const char* name ```
void q_webengineview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QWebEngineView* self, const char* description ```
void q_webengineview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QWebEngineView* self, enum Qt__LayoutDirection direction ```
void q_webengineview_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QWebEngineView* self ```
void q_webengineview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QWebEngineView* self, QLocale* locale ```
void q_webengineview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QWebEngineView* self ```
QLocale* q_webengineview_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QWebEngineView* self ```
void q_webengineview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QWebEngineView* self ```
void q_webengineview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QWebEngineView* self ```
void q_webengineview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QWebEngineView* self ```
void q_webengineview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QWebEngineView* self, enum Qt__FocusReason reason ```
void q_webengineview_set_focus2(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QWebEngineView* self, enum Qt__FocusPolicy policy ```
void q_webengineview_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_webengineview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QWebEngineView* self, QWidget* focusProxy ```
void q_webengineview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QWebEngineView* self, enum Qt__ContextMenuPolicy policy ```
void q_webengineview_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QWebEngineView* self ```
void q_webengineview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QWebEngineView* self, QCursor* param1 ```
void q_webengineview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QWebEngineView* self ```
void q_webengineview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QWebEngineView* self ```
void q_webengineview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QWebEngineView* self ```
void q_webengineview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QWebEngineView* self, QKeySequence* key ```
int32_t q_webengineview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QWebEngineView* self, int id ```
void q_webengineview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QWebEngineView* self, int id ```
void q_webengineview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QWebEngineView* self, int id ```
void q_webengineview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_webengineview_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_webengineview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QWebEngineView* self, bool enable ```
void q_webengineview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QWebEngineView* self ```
QGraphicsProxyWidget* q_webengineview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWebEngineView* self ```
void q_webengineview_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWebEngineView* self ```
void q_webengineview_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWebEngineView* self, int x, int y, int w, int h ```
void q_webengineview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWebEngineView* self, QRect* param1 ```
void q_webengineview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWebEngineView* self, QRegion* param1 ```
void q_webengineview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWebEngineView* self, int x, int y, int w, int h ```
void q_webengineview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWebEngineView* self, QRect* param1 ```
void q_webengineview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWebEngineView* self, QRegion* param1 ```
void q_webengineview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QWebEngineView* self, bool hidden ```
void q_webengineview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QWebEngineView* self ```
void q_webengineview_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QWebEngineView* self ```
void q_webengineview_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QWebEngineView* self ```
void q_webengineview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QWebEngineView* self ```
void q_webengineview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QWebEngineView* self ```
void q_webengineview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QWebEngineView* self ```
void q_webengineview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QWebEngineView* self ```
void q_webengineview_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QWebEngineView* self ```
void q_webengineview_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QWebEngineView* self, QWidget* param1 ```
void q_webengineview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QWebEngineView* self, int x, int y ```
void q_webengineview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QWebEngineView* self, QPoint* param1 ```
void q_webengineview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QWebEngineView* self, int w, int h ```
void q_webengineview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QWebEngineView* self, QSize* param1 ```
void q_webengineview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QWebEngineView* self, int x, int y, int w, int h ```
void q_webengineview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QWebEngineView* self, QRect* geometry ```
void q_webengineview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QWebEngineView* self ```
char* q_webengineview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QWebEngineView* self, const char* geometry ```
bool q_webengineview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QWebEngineView* self ```
void q_webengineview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QWebEngineView* self, QWidget* param1 ```
bool q_webengineview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QWebEngineView* self, int state ```
void q_webengineview_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QWebEngineView* self, int state ```
void q_webengineview_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QWebEngineView* self ```
QSizePolicy* q_webengineview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QWebEngineView* self, QSizePolicy* sizePolicy ```
void q_webengineview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QWebEngineView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_webengineview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QWebEngineView* self ```
QRegion* q_webengineview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QWebEngineView* self, int left, int top, int right, int bottom ```
void q_webengineview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QWebEngineView* self, QMargins* margins ```
void q_webengineview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QWebEngineView* self ```
QMargins* q_webengineview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QWebEngineView* self ```
QRect* q_webengineview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QWebEngineView* self ```
QLayout* q_webengineview_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QWebEngineView* self, QLayout* layout ```
void q_webengineview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QWebEngineView* self ```
void q_webengineview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QWebEngineView* self, QWidget* parent ```
void q_webengineview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QWebEngineView* self, QWidget* parent, int f ```
void q_webengineview_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QWebEngineView* self, int dx, int dy ```
void q_webengineview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QWebEngineView* self, int dx, int dy, QRect* param3 ```
void q_webengineview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QWebEngineView* self, bool on ```
void q_webengineview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWebEngineView* self, QAction* action ```
void q_webengineview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QWebEngineView* self, libqt_list /* of QAction* */ actions ```
void q_webengineview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QWebEngineView* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_webengineview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QWebEngineView* self, QAction* before, QAction* action ```
void q_webengineview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QWebEngineView* self, QAction* action ```
void q_webengineview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QWebEngineView* self ```
libqt_list /* of QAction* */ q_webengineview_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWebEngineView* self, const char* text ```
QAction* q_webengineview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWebEngineView* self, QIcon* icon, const char* text ```
QAction* q_webengineview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWebEngineView* self, const char* text, QKeySequence* shortcut ```
QAction* q_webengineview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWebEngineView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_webengineview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QWebEngineView* self, int typeVal ```
void q_webengineview_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QWebEngineView* self, enum Qt__WindowType param1 ```
void q_webengineview_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QWebEngineView* self, int typeVal ```
void q_webengineview_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_webengineview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QWebEngineView* self, int x, int y ```
QWidget* q_webengineview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QWebEngineView* self, QPoint* p ```
QWidget* q_webengineview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QWebEngineView* self, QPointF* p ```
QWidget* q_webengineview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QWebEngineView* self, enum Qt__WidgetAttribute param1 ```
void q_webengineview_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QWebEngineView* self, enum Qt__WidgetAttribute param1 ```
bool q_webengineview_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QWebEngineView* self ```
void q_webengineview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QWebEngineView* self, QWidget* child ```
bool q_webengineview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QWebEngineView* self, bool enabled ```
void q_webengineview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QWebEngineView* self ```
QBackingStore* q_webengineview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QWebEngineView* self ```
QWindow* q_webengineview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QWebEngineView* self ```
QScreen* q_webengineview_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QWebEngineView* self, QScreen* screen ```
void q_webengineview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_webengineview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QWebEngineView* self, const char* title ```
void q_webengineview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QWebEngineView* self, void (*slot)(QWidget*, const char*) ```
void q_webengineview_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QWebEngineView* self, QIcon* icon ```
void q_webengineview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QWebEngineView* self, void (*slot)(QWidget*, QIcon*) ```
void q_webengineview_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QWebEngineView* self, const char* iconText ```
void q_webengineview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QWebEngineView* self, void (*slot)(QWidget*, const char*) ```
void q_webengineview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QWebEngineView* self, QPoint* pos ```
void q_webengineview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QWebEngineView* self, void (*slot)(QWidget*, QPoint*) ```
void q_webengineview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QWebEngineView* self, int hints ```
void q_webengineview_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_webengineview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_webengineview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_webengineview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPainter* painter, QPoint* targetOffset ```
void q_webengineview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_webengineview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_webengineview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QWebEngineView* self, QRect* rectangle ```
QPixmap* q_webengineview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QWebEngineView* self, enum Qt__GestureType typeVal, int flags ```
void q_webengineview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QWebEngineView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_webengineview_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QWebEngineView* self, int id, bool enable ```
void q_webengineview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QWebEngineView* self, int id, bool enable ```
void q_webengineview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QWebEngineView* self, enum Qt__WindowType param1, bool on ```
void q_webengineview_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QWebEngineView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_webengineview_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_webengineview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_webengineview_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineView* self, char* name ```
void q_webengineview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineView* self, bool b ```
bool q_webengineview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineView* self ```
QThread* q_webengineview_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineView* self, QThread* thread ```
bool q_webengineview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineView* self, int interval ```
int32_t q_webengineview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineView* self, int id ```
void q_webengineview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineView* self, enum Qt__TimerId id ```
void q_webengineview_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineView* self ```
libqt_list /* of QObject* */ q_webengineview_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineView* self, QObject* filterObj ```
void q_webengineview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineView* self, QObject* obj ```
void q_webengineview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webengineview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webengineview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webengineview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webengineview_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineView* self ```
void q_webengineview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineView* self ```
void q_webengineview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineView* self, const char* name, QVariant* value ```
bool q_webengineview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineView* self, const char* name ```
QVariant* q_webengineview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineView* self ```
const char** q_webengineview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineView* self ```
QBindingStorage* q_webengineview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineView* self ```
const QBindingStorage* q_webengineview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineView* self ```
void q_webengineview_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineView* self, void (*slot)(QObject*) ```
void q_webengineview_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineView* self ```
QObject* q_webengineview_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineView* self, const char* classname ```
bool q_webengineview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineView* self ```
void q_webengineview_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineView* self, QThread* thread, Disambiguated_t* param2 ```
bool q_webengineview_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webengineview_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineView* self, QObject* param1 ```
void q_webengineview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineView* self, void (*slot)(QObject*, QObject*) ```
void q_webengineview_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QWebEngineView* self ```
double q_webengineview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QWebEngineView* self ```
double q_webengineview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_webengineview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_webengineview_encode_metric_f(int64_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, int32_t (*slot)() ```
void q_webengineview_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, bool visible ```
void q_webengineview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, bool visible ```
void q_webengineview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, bool) ```
void q_webengineview_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, QSize* (*slot)() ```
void q_webengineview_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, int param1 ```
int32_t q_webengineview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, int param1 ```
int32_t q_webengineview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, int32_t (*slot)(QWebEngineView*, int) ```
void q_webengineview_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
bool q_webengineview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
bool q_webengineview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)() ```
void q_webengineview_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
QPaintEngine* q_webengineview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
QPaintEngine* q_webengineview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, QPaintEngine* (*slot)() ```
void q_webengineview_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMouseEvent*) ```
void q_webengineview_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMouseEvent*) ```
void q_webengineview_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMouseEvent*) ```
void q_webengineview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMouseEvent*) ```
void q_webengineview_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QWheelEvent* event ```
void q_webengineview_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QWheelEvent* event ```
void q_webengineview_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QWheelEvent*) ```
void q_webengineview_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QKeyEvent* event ```
void q_webengineview_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QKeyEvent* event ```
void q_webengineview_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QKeyEvent*) ```
void q_webengineview_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QKeyEvent* event ```
void q_webengineview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QKeyEvent* event ```
void q_webengineview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QKeyEvent*) ```
void q_webengineview_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QFocusEvent* event ```
void q_webengineview_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QFocusEvent* event ```
void q_webengineview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QFocusEvent*) ```
void q_webengineview_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QFocusEvent* event ```
void q_webengineview_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QFocusEvent* event ```
void q_webengineview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QFocusEvent*) ```
void q_webengineview_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QEnterEvent* event ```
void q_webengineview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QEnterEvent* event ```
void q_webengineview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QEnterEvent*) ```
void q_webengineview_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QEvent* event ```
void q_webengineview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QEvent* event ```
void q_webengineview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QEvent*) ```
void q_webengineview_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QPaintEvent* event ```
void q_webengineview_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QPaintEvent* event ```
void q_webengineview_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QPaintEvent*) ```
void q_webengineview_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMoveEvent* event ```
void q_webengineview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMoveEvent* event ```
void q_webengineview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMoveEvent*) ```
void q_webengineview_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QResizeEvent* event ```
void q_webengineview_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QResizeEvent* event ```
void q_webengineview_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QResizeEvent*) ```
void q_webengineview_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QTabletEvent* event ```
void q_webengineview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QTabletEvent* event ```
void q_webengineview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QTabletEvent*) ```
void q_webengineview_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QActionEvent* event ```
void q_webengineview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QActionEvent* event ```
void q_webengineview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QActionEvent*) ```
void q_webengineview_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, const char* eventType, void* message, intptr_t* result ```
bool q_webengineview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, const char* eventType, void* message, intptr_t* result ```
bool q_webengineview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)(QWebEngineView*, const char*, void*, intptr_t*) ```
void q_webengineview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QEvent* param1 ```
void q_webengineview_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QEvent* param1 ```
void q_webengineview_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QEvent*) ```
void q_webengineview_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_webengineview_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_webengineview_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, int32_t (*slot)(QWebEngineView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_webengineview_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QPainter* painter ```
void q_webengineview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QPainter* painter ```
void q_webengineview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QPainter*) ```
void q_webengineview_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QPoint* offset ```
QPaintDevice* q_webengineview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QPoint* offset ```
QPaintDevice* q_webengineview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, QPaintDevice* (*slot)(QWebEngineView*, QPoint*) ```
void q_webengineview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
QPainter* q_webengineview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
QPainter* q_webengineview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, QPainter* (*slot)() ```
void q_webengineview_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QInputMethodEvent* param1 ```
void q_webengineview_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QInputMethodEvent* param1 ```
void q_webengineview_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QInputMethodEvent*) ```
void q_webengineview_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_webengineview_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_webengineview_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, QVariant* (*slot)(QWebEngineView*, enum Qt__InputMethodQuery) ```
void q_webengineview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, bool next ```
bool q_webengineview_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, bool next ```
bool q_webengineview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)(QWebEngineView*, bool) ```
void q_webengineview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QObject* watched, QEvent* event ```
bool q_webengineview_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QObject* watched, QEvent* event ```
bool q_webengineview_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)(QWebEngineView*, QObject*, QEvent*) ```
void q_webengineview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QTimerEvent* event ```
void q_webengineview_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QTimerEvent* event ```
void q_webengineview_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QTimerEvent*) ```
void q_webengineview_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QChildEvent* event ```
void q_webengineview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QChildEvent* event ```
void q_webengineview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QChildEvent*) ```
void q_webengineview_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QEvent* event ```
void q_webengineview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QEvent* event ```
void q_webengineview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QEvent*) ```
void q_webengineview_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMetaMethod* signal ```
void q_webengineview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMetaMethod* signal ```
void q_webengineview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMetaMethod*) ```
void q_webengineview_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMetaMethod* signal ```
void q_webengineview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMetaMethod* signal ```
void q_webengineview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMetaMethod*) ```
void q_webengineview_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
void q_webengineview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
void q_webengineview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)() ```
void q_webengineview_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
void q_webengineview_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
void q_webengineview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)() ```
void q_webengineview_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
void q_webengineview_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
void q_webengineview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)() ```
void q_webengineview_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
bool q_webengineview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
bool q_webengineview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)() ```
void q_webengineview_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
bool q_webengineview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
bool q_webengineview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)() ```
void q_webengineview_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
QObject* q_webengineview_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
QObject* q_webengineview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, QObject* (*slot)() ```
void q_webengineview_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, int32_t (*slot)() ```
void q_webengineview_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, const char* signal ```
int32_t q_webengineview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, const char* signal ```
int32_t q_webengineview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, int32_t (*slot)(QWebEngineView*, const char*) ```
void q_webengineview_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMetaMethod* signal ```
bool q_webengineview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMetaMethod* signal ```
bool q_webengineview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)(QWebEngineView*, QMetaMethod*) ```
void q_webengineview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_webengineview_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_webengineview_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, double (*slot)(QWebEngineView*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_webengineview_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebEngineView* self, void (*slot)(QObject*, const char*) ```
void q_webengineview_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dtor.QWebEngineView)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineView* self ```
void q_webengineview_delete(void* self);

#endif
