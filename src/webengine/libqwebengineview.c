#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqanystringview.hpp"
#include "../libqbackingstore.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbitmap.hpp"
#include "../libqcursor.hpp"
#include "../libqfont.hpp"
#include "../libqfontinfo.hpp"
#include "../libqfontmetrics.hpp"
#include "../libqgraphicseffect.hpp"
#include "../libqgraphicsproxywidget.hpp"
#include "../libqicon.hpp"
#include "../libqkeysequence.hpp"
#include "../libqlayout.hpp"
#include "../libqlocale.hpp"
#include "../libqmargins.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpagelayout.hpp"
#include "../libqpageranges.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpalette.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "../printsupport/libqprinter.hpp"
#include "../libqrect.hpp"
#include "../libqregion.hpp"
#include "../libqscreen.hpp"
#include "../libqsize.hpp"
#include "../libqsizepolicy.hpp"
#include <string.h>
#include "../libqstyle.hpp"
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqwebenginecontextmenurequest.hpp"
#include "libqwebenginehistory.hpp"
#include "libqwebenginehttprequest.hpp"
#include "libqwebenginepage.hpp"
#include "libqwebengineprofile.hpp"
#include "libqwebenginesettings.hpp"
#include "../libqwidget.hpp"
#include "../libqwindow.hpp"
#include "../libqcoreevent.hpp"
#include "libqwebengineview.hpp"
#include "libqwebengineview.h"

/// https://doc.qt.io/qt-6/qwebengineview.html

/// q_webengineview_new constructs a new QWebEngineView object.
///
/// ``` QWidget* parent ```
QWebEngineView* q_webengineview_new(void* parent) {
    return QWebEngineView_new((QWidget*)parent);
}

/// q_webengineview_new2 constructs a new QWebEngineView object.
///
///
QWebEngineView* q_webengineview_new2() {
    return QWebEngineView_new2();
}

/// q_webengineview_new3 constructs a new QWebEngineView object.
///
/// ``` QWebEngineProfile* profile ```
QWebEngineView* q_webengineview_new3(void* profile) {
    return QWebEngineView_new3((QWebEngineProfile*)profile);
}

/// q_webengineview_new4 constructs a new QWebEngineView object.
///
/// ``` QWebEnginePage* page ```
QWebEngineView* q_webengineview_new4(void* page) {
    return QWebEngineView_new4((QWebEnginePage*)page);
}

/// q_webengineview_new5 constructs a new QWebEngineView object.
///
/// ``` QWebEngineProfile* profile, QWidget* parent ```
QWebEngineView* q_webengineview_new5(void* profile, void* parent) {
    return QWebEngineView_new5((QWebEngineProfile*)profile, (QWidget*)parent);
}

/// q_webengineview_new6 constructs a new QWebEngineView object.
///
/// ``` QWebEnginePage* page, QWidget* parent ```
QWebEngineView* q_webengineview_new6(void* page, void* parent) {
    return QWebEngineView_new6((QWebEnginePage*)page, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineView* self ```
QMetaObject* q_webengineview_meta_object(void* self) {
    return QWebEngineView_MetaObject((QWebEngineView*)self);
}

/// ``` QWebEngineView* self, const char* param1 ```
void* q_webengineview_metacast(void* self, const char* param1) {
    return QWebEngineView_Metacast((QWebEngineView*)self, param1);
}

/// ``` QWebEngineView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineview_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineView_Metacall((QWebEngineView*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, int32_t (*slot)(QWebEngineView*, enum QMetaObject__Call, int, void*) ```
void q_webengineview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWebEngineView_OnMetacall((QWebEngineView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineview_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineView_QBaseMetacall((QWebEngineView*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webengineview_tr(const char* s) {
    libqt_string _str = QWebEngineView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#forPage)
///
/// ``` QWebEnginePage* page ```
QWebEngineView* q_webengineview_for_page(void* page) {
    return QWebEngineView_ForPage((QWebEnginePage*)page);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#page)
///
/// ``` QWebEngineView* self ```
QWebEnginePage* q_webengineview_page(void* self) {
    return QWebEngineView_Page((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setPage)
///
/// ``` QWebEngineView* self, QWebEnginePage* page ```
void q_webengineview_set_page(void* self, void* page) {
    QWebEngineView_SetPage((QWebEngineView*)self, (QWebEnginePage*)page);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#load)
///
/// ``` QWebEngineView* self, QUrl* url ```
void q_webengineview_load(void* self, void* url) {
    QWebEngineView_Load((QWebEngineView*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#load)
///
/// ``` QWebEngineView* self, QWebEngineHttpRequest* request ```
void q_webengineview_load_with_request(void* self, void* request) {
    QWebEngineView_LoadWithRequest((QWebEngineView*)self, (QWebEngineHttpRequest*)request);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setHtml)
///
/// ``` QWebEngineView* self, const char* html ```
void q_webengineview_set_html(void* self, const char* html) {
    QWebEngineView_SetHtml((QWebEngineView*)self, qstring(html));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setContent)
///
/// ``` QWebEngineView* self, const char* data ```
void q_webengineview_set_content(void* self, const char* data) {
    QWebEngineView_SetContent((QWebEngineView*)self, qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#history)
///
/// ``` QWebEngineView* self ```
QWebEngineHistory* q_webengineview_history(void* self) {
    return QWebEngineView_History((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#title)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_title(void* self) {
    libqt_string _str = QWebEngineView_Title((QWebEngineView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setUrl)
///
/// ``` QWebEngineView* self, QUrl* url ```
void q_webengineview_set_url(void* self, void* url) {
    QWebEngineView_SetUrl((QWebEngineView*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#url)
///
/// ``` QWebEngineView* self ```
QUrl* q_webengineview_url(void* self) {
    return QWebEngineView_Url((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#iconUrl)
///
/// ``` QWebEngineView* self ```
QUrl* q_webengineview_icon_url(void* self) {
    return QWebEngineView_IconUrl((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#icon)
///
/// ``` QWebEngineView* self ```
QIcon* q_webengineview_icon(void* self) {
    return QWebEngineView_Icon((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#hasSelection)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_has_selection(void* self) {
    return QWebEngineView_HasSelection((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#selectedText)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_selected_text(void* self) {
    libqt_string _str = QWebEngineView_SelectedText((QWebEngineView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#pageAction)
///
/// ``` QWebEngineView* self, enum QWebEnginePage__WebAction action ```
QAction* q_webengineview_page_action(void* self, int64_t action) {
    return QWebEngineView_PageAction((QWebEngineView*)self, action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#triggerPageAction)
///
/// ``` QWebEngineView* self, enum QWebEnginePage__WebAction action ```
void q_webengineview_trigger_page_action(void* self, int64_t action) {
    QWebEngineView_TriggerPageAction((QWebEngineView*)self, action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#zoomFactor)
///
/// ``` QWebEngineView* self ```
double q_webengineview_zoom_factor(void* self) {
    return QWebEngineView_ZoomFactor((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setZoomFactor)
///
/// ``` QWebEngineView* self, double factor ```
void q_webengineview_set_zoom_factor(void* self, double factor) {
    QWebEngineView_SetZoomFactor((QWebEngineView*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#sizeHint)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_size_hint(void* self) {
    return QWebEngineView_SizeHint((QWebEngineView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, QSize* (*slot)() ```
void q_webengineview_on_size_hint(void* self, QSize* (*slot)()) {
    QWebEngineView_OnSizeHint((QWebEngineView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_qbase_size_hint(void* self) {
    return QWebEngineView_QBaseSizeHint((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#settings)
///
/// ``` QWebEngineView* self ```
QWebEngineSettings* q_webengineview_settings(void* self) {
    return QWebEngineView_Settings((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#createStandardContextMenu)
///
/// ``` QWebEngineView* self ```
QMenu* q_webengineview_create_standard_context_menu(void* self) {
    return QWebEngineView_CreateStandardContextMenu((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#lastContextMenuRequest)
///
/// ``` QWebEngineView* self ```
QWebEngineContextMenuRequest* q_webengineview_last_context_menu_request(void* self) {
    return QWebEngineView_LastContextMenuRequest((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printToPdf)
///
/// ``` QWebEngineView* self, const char* filePath ```
void q_webengineview_print_to_pdf(void* self, const char* filePath) {
    QWebEngineView_PrintToPdf((QWebEngineView*)self, qstring(filePath));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#print)
///
/// ``` QWebEngineView* self, QPrinter* printer ```
void q_webengineview_print(void* self, void* printer) {
    QWebEngineView_Print((QWebEngineView*)self, (QPrinter*)printer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#stop)
///
/// ``` QWebEngineView* self ```
void q_webengineview_stop(void* self) {
    QWebEngineView_Stop((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#back)
///
/// ``` QWebEngineView* self ```
void q_webengineview_back(void* self) {
    QWebEngineView_Back((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#forward)
///
/// ``` QWebEngineView* self ```
void q_webengineview_forward(void* self) {
    QWebEngineView_Forward((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#reload)
///
/// ``` QWebEngineView* self ```
void q_webengineview_reload(void* self) {
    QWebEngineView_Reload((QWebEngineView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#loadStarted)
///
/// ``` QWebEngineView* self ```
void q_webengineview_load_started(void* self) {
    QWebEngineView_LoadStarted((QWebEngineView*)self);
}

/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*) ```
void q_webengineview_on_load_started(void* self, void (*slot)(void*)) {
    QWebEngineView_Connect_LoadStarted((QWebEngineView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#loadProgress)
///
/// ``` QWebEngineView* self, int progress ```
void q_webengineview_load_progress(void* self, int progress) {
    QWebEngineView_LoadProgress((QWebEngineView*)self, progress);
}

/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, int) ```
void q_webengineview_on_load_progress(void* self, void (*slot)(void*, int)) {
    QWebEngineView_Connect_LoadProgress((QWebEngineView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#loadFinished)
///
/// ``` QWebEngineView* self, bool param1 ```
void q_webengineview_load_finished(void* self, bool param1) {
    QWebEngineView_LoadFinished((QWebEngineView*)self, param1);
}

/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, bool) ```
void q_webengineview_on_load_finished(void* self, void (*slot)(void*, bool)) {
    QWebEngineView_Connect_LoadFinished((QWebEngineView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#titleChanged)
///
/// ``` QWebEngineView* self, const char* title ```
void q_webengineview_title_changed(void* self, const char* title) {
    QWebEngineView_TitleChanged((QWebEngineView*)self, qstring(title));
}

/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, const char*) ```
void q_webengineview_on_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWebEngineView_Connect_TitleChanged((QWebEngineView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#selectionChanged)
///
/// ``` QWebEngineView* self ```
void q_webengineview_selection_changed(void* self) {
    QWebEngineView_SelectionChanged((QWebEngineView*)self);
}

/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*) ```
void q_webengineview_on_selection_changed(void* self, void (*slot)(void*)) {
    QWebEngineView_Connect_SelectionChanged((QWebEngineView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#urlChanged)
///
/// ``` QWebEngineView* self, QUrl* param1 ```
void q_webengineview_url_changed(void* self, void* param1) {
    QWebEngineView_UrlChanged((QWebEngineView*)self, (QUrl*)param1);
}

/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QUrl*) ```
void q_webengineview_on_url_changed(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_Connect_UrlChanged((QWebEngineView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#iconUrlChanged)
///
/// ``` QWebEngineView* self, QUrl* param1 ```
void q_webengineview_icon_url_changed(void* self, void* param1) {
    QWebEngineView_IconUrlChanged((QWebEngineView*)self, (QUrl*)param1);
}

/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QUrl*) ```
void q_webengineview_on_icon_url_changed(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_Connect_IconUrlChanged((QWebEngineView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#iconChanged)
///
/// ``` QWebEngineView* self, QIcon* param1 ```
void q_webengineview_icon_changed(void* self, void* param1) {
    QWebEngineView_IconChanged((QWebEngineView*)self, (QIcon*)param1);
}

/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QIcon*) ```
void q_webengineview_on_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_Connect_IconChanged((QWebEngineView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#renderProcessTerminated)
///
/// ``` QWebEngineView* self, enum QWebEnginePage__RenderProcessTerminationStatus terminationStatus, int exitCode ```
void q_webengineview_render_process_terminated(void* self, int64_t terminationStatus, int exitCode) {
    QWebEngineView_RenderProcessTerminated((QWebEngineView*)self, terminationStatus, exitCode);
}

/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, enum QWebEnginePage__RenderProcessTerminationStatus, int) ```
void q_webengineview_on_render_process_terminated(void* self, void (*slot)(void*, int64_t, int)) {
    QWebEngineView_Connect_RenderProcessTerminated((QWebEngineView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#pdfPrintingFinished)
///
/// ``` QWebEngineView* self, const char* filePath, bool success ```
void q_webengineview_pdf_printing_finished(void* self, const char* filePath, bool success) {
    QWebEngineView_PdfPrintingFinished((QWebEngineView*)self, qstring(filePath), success);
}

/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, const char*, bool) ```
void q_webengineview_on_pdf_printing_finished(void* self, void (*slot)(void*, const char*, bool)) {
    QWebEngineView_Connect_PdfPrintingFinished((QWebEngineView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printRequested)
///
/// ``` QWebEngineView* self ```
void q_webengineview_print_requested(void* self) {
    QWebEngineView_PrintRequested((QWebEngineView*)self);
}

/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*) ```
void q_webengineview_on_print_requested(void* self, void (*slot)(void*)) {
    QWebEngineView_Connect_PrintRequested((QWebEngineView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printFinished)
///
/// ``` QWebEngineView* self, bool success ```
void q_webengineview_print_finished(void* self, bool success) {
    QWebEngineView_PrintFinished((QWebEngineView*)self, success);
}

/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, bool) ```
void q_webengineview_on_print_finished(void* self, void (*slot)(void*, bool)) {
    QWebEngineView_Connect_PrintFinished((QWebEngineView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#createWindow)
///
/// ``` QWebEngineView* self, enum QWebEnginePage__WebWindowType typeVal ```
QWebEngineView* q_webengineview_create_window(void* self, int64_t typeVal) {
    return QWebEngineView_CreateWindow((QWebEngineView*)self, typeVal);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, QWebEngineView* (*slot)(QWebEngineView*, enum QWebEnginePage__WebWindowType) ```
void q_webengineview_on_create_window(void* self, QWebEngineView* (*slot)(void*, int64_t)) {
    QWebEngineView_OnCreateWindow((QWebEngineView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineView* self, enum QWebEnginePage__WebWindowType typeVal ```
QWebEngineView* q_webengineview_qbase_create_window(void* self, int64_t typeVal) {
    return QWebEngineView_QBaseCreateWindow((QWebEngineView*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#contextMenuEvent)
///
/// ``` QWebEngineView* self, QContextMenuEvent* param1 ```
void q_webengineview_context_menu_event(void* self, void* param1) {
    QWebEngineView_ContextMenuEvent((QWebEngineView*)self, (QContextMenuEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QContextMenuEvent*) ```
void q_webengineview_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnContextMenuEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineView* self, QContextMenuEvent* param1 ```
void q_webengineview_qbase_context_menu_event(void* self, void* param1) {
    QWebEngineView_QBaseContextMenuEvent((QWebEngineView*)self, (QContextMenuEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#event)
///
/// ``` QWebEngineView* self, QEvent* param1 ```
bool q_webengineview_event(void* self, void* param1) {
    return QWebEngineView_Event((QWebEngineView*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, bool (*slot)(QWebEngineView*, QEvent*) ```
void q_webengineview_on_event(void* self, bool (*slot)(void*, void*)) {
    QWebEngineView_OnEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineView* self, QEvent* param1 ```
bool q_webengineview_qbase_event(void* self, void* param1) {
    return QWebEngineView_QBaseEvent((QWebEngineView*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#showEvent)
///
/// ``` QWebEngineView* self, QShowEvent* param1 ```
void q_webengineview_show_event(void* self, void* param1) {
    QWebEngineView_ShowEvent((QWebEngineView*)self, (QShowEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QShowEvent*) ```
void q_webengineview_on_show_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnShowEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineView* self, QShowEvent* param1 ```
void q_webengineview_qbase_show_event(void* self, void* param1) {
    QWebEngineView_QBaseShowEvent((QWebEngineView*)self, (QShowEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#hideEvent)
///
/// ``` QWebEngineView* self, QHideEvent* param1 ```
void q_webengineview_hide_event(void* self, void* param1) {
    QWebEngineView_HideEvent((QWebEngineView*)self, (QHideEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QHideEvent*) ```
void q_webengineview_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnHideEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineView* self, QHideEvent* param1 ```
void q_webengineview_qbase_hide_event(void* self, void* param1) {
    QWebEngineView_QBaseHideEvent((QWebEngineView*)self, (QHideEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#closeEvent)
///
/// ``` QWebEngineView* self, QCloseEvent* param1 ```
void q_webengineview_close_event(void* self, void* param1) {
    QWebEngineView_CloseEvent((QWebEngineView*)self, (QCloseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QCloseEvent*) ```
void q_webengineview_on_close_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnCloseEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineView* self, QCloseEvent* param1 ```
void q_webengineview_qbase_close_event(void* self, void* param1) {
    QWebEngineView_QBaseCloseEvent((QWebEngineView*)self, (QCloseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dragEnterEvent)
///
/// ``` QWebEngineView* self, QDragEnterEvent* e ```
void q_webengineview_drag_enter_event(void* self, void* e) {
    QWebEngineView_DragEnterEvent((QWebEngineView*)self, (QDragEnterEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QDragEnterEvent*) ```
void q_webengineview_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnDragEnterEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineView* self, QDragEnterEvent* e ```
void q_webengineview_qbase_drag_enter_event(void* self, void* e) {
    QWebEngineView_QBaseDragEnterEvent((QWebEngineView*)self, (QDragEnterEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dragLeaveEvent)
///
/// ``` QWebEngineView* self, QDragLeaveEvent* e ```
void q_webengineview_drag_leave_event(void* self, void* e) {
    QWebEngineView_DragLeaveEvent((QWebEngineView*)self, (QDragLeaveEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QDragLeaveEvent*) ```
void q_webengineview_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnDragLeaveEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineView* self, QDragLeaveEvent* e ```
void q_webengineview_qbase_drag_leave_event(void* self, void* e) {
    QWebEngineView_QBaseDragLeaveEvent((QWebEngineView*)self, (QDragLeaveEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dragMoveEvent)
///
/// ``` QWebEngineView* self, QDragMoveEvent* e ```
void q_webengineview_drag_move_event(void* self, void* e) {
    QWebEngineView_DragMoveEvent((QWebEngineView*)self, (QDragMoveEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QDragMoveEvent*) ```
void q_webengineview_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnDragMoveEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineView* self, QDragMoveEvent* e ```
void q_webengineview_qbase_drag_move_event(void* self, void* e) {
    QWebEngineView_QBaseDragMoveEvent((QWebEngineView*)self, (QDragMoveEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#dropEvent)
///
/// ``` QWebEngineView* self, QDropEvent* e ```
void q_webengineview_drop_event(void* self, void* e) {
    QWebEngineView_DropEvent((QWebEngineView*)self, (QDropEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QDropEvent*) ```
void q_webengineview_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnDropEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineView* self, QDropEvent* e ```
void q_webengineview_qbase_drop_event(void* self, void* e) {
    QWebEngineView_QBaseDropEvent((QWebEngineView*)self, (QDropEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webengineview_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webengineview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setHtml)
///
/// ``` QWebEngineView* self, const char* html, QUrl* baseUrl ```
void q_webengineview_set_html2(void* self, const char* html, void* baseUrl) {
    QWebEngineView_SetHtml2((QWebEngineView*)self, qstring(html), (QUrl*)baseUrl);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setContent)
///
/// ``` QWebEngineView* self, const char* data, const char* mimeType ```
void q_webengineview_set_content2(void* self, const char* data, const char* mimeType) {
    QWebEngineView_SetContent2((QWebEngineView*)self, qstring(data), qstring(mimeType));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#setContent)
///
/// ``` QWebEngineView* self, const char* data, const char* mimeType, QUrl* baseUrl ```
void q_webengineview_set_content3(void* self, const char* data, const char* mimeType, void* baseUrl) {
    QWebEngineView_SetContent3((QWebEngineView*)self, qstring(data), qstring(mimeType), (QUrl*)baseUrl);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#triggerPageAction)
///
/// ``` QWebEngineView* self, enum QWebEnginePage__WebAction action, bool checked ```
void q_webengineview_trigger_page_action2(void* self, int64_t action, bool checked) {
    QWebEngineView_TriggerPageAction2((QWebEngineView*)self, action, checked);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printToPdf)
///
/// ``` QWebEngineView* self, const char* filePath, QPageLayout* layout ```
void q_webengineview_print_to_pdf2(void* self, const char* filePath, void* layout) {
    QWebEngineView_PrintToPdf2((QWebEngineView*)self, qstring(filePath), (QPageLayout*)layout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineview.html#printToPdf)
///
/// ``` QWebEngineView* self, const char* filePath, QPageLayout* layout, QPageRanges* ranges ```
void q_webengineview_print_to_pdf3(void* self, const char* filePath, void* layout, void* ranges) {
    QWebEngineView_PrintToPdf3((QWebEngineView*)self, qstring(filePath), (QPageLayout*)layout, (QPageRanges*)ranges);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QWebEngineView* self ```
uintptr_t q_webengineview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QWebEngineView* self ```
void q_webengineview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QWebEngineView* self ```
uintptr_t q_webengineview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QWebEngineView* self ```
uintptr_t q_webengineview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QWebEngineView* self ```
QStyle* q_webengineview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QWebEngineView* self, QStyle* style ```
void q_webengineview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QWebEngineView* self, enum Qt__WindowModality windowModality ```
void q_webengineview_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QWebEngineView* self, QWidget* param1 ```
bool q_webengineview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QWebEngineView* self, bool enabled ```
void q_webengineview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QWebEngineView* self, bool disabled ```
void q_webengineview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QWebEngineView* self, bool windowModified ```
void q_webengineview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QWebEngineView* self ```
QRect* q_webengineview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QWebEngineView* self ```
QRect* q_webengineview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QWebEngineView* self ```
QRect* q_webengineview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QWebEngineView* self ```
QPoint* q_webengineview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QWebEngineView* self ```
QRect* q_webengineview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QWebEngineView* self ```
QRect* q_webengineview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QWebEngineView* self ```
QRegion* q_webengineview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QWebEngineView* self, QSize* minimumSize ```
void q_webengineview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QWebEngineView* self, int minw, int minh ```
void q_webengineview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QWebEngineView* self, QSize* maximumSize ```
void q_webengineview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QWebEngineView* self, int maxw, int maxh ```
void q_webengineview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QWebEngineView* self, int minw ```
void q_webengineview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QWebEngineView* self, int minh ```
void q_webengineview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QWebEngineView* self, int maxw ```
void q_webengineview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QWebEngineView* self, int maxh ```
void q_webengineview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QWebEngineView* self, QSize* sizeIncrement ```
void q_webengineview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QWebEngineView* self, int w, int h ```
void q_webengineview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QWebEngineView* self, QSize* baseSize ```
void q_webengineview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QWebEngineView* self, int basew, int baseh ```
void q_webengineview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QWebEngineView* self, QSize* fixedSize ```
void q_webengineview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QWebEngineView* self, int w, int h ```
void q_webengineview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QWebEngineView* self, int w ```
void q_webengineview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QWebEngineView* self, int h ```
void q_webengineview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QWebEngineView* self, QPointF* param1 ```
QPointF* q_webengineview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QWebEngineView* self, QPoint* param1 ```
QPoint* q_webengineview_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QWebEngineView* self, QPointF* param1 ```
QPointF* q_webengineview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QWebEngineView* self, QPoint* param1 ```
QPoint* q_webengineview_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QWebEngineView* self, QPointF* param1 ```
QPointF* q_webengineview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QWebEngineView* self, QPoint* param1 ```
QPoint* q_webengineview_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QWebEngineView* self, QPointF* param1 ```
QPointF* q_webengineview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QWebEngineView* self, QPoint* param1 ```
QPoint* q_webengineview_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QWebEngineView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_webengineview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QWebEngineView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_webengineview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QWebEngineView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_webengineview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QWebEngineView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_webengineview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QWebEngineView* self ```
QPalette* q_webengineview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QWebEngineView* self, QPalette* palette ```
void q_webengineview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QWebEngineView* self, enum QPalette__ColorRole backgroundRole ```
void q_webengineview_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QWebEngineView* self, enum QPalette__ColorRole foregroundRole ```
void q_webengineview_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QWebEngineView* self ```
QFont* q_webengineview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QWebEngineView* self, QFont* font ```
void q_webengineview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QWebEngineView* self ```
QFontMetrics* q_webengineview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QWebEngineView* self ```
QFontInfo* q_webengineview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QWebEngineView* self ```
QCursor* q_webengineview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QWebEngineView* self, QCursor* cursor ```
void q_webengineview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QWebEngineView* self ```
void q_webengineview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QWebEngineView* self, bool enable ```
void q_webengineview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QWebEngineView* self, bool enable ```
void q_webengineview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QWebEngineView* self, QBitmap* mask ```
void q_webengineview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QWebEngineView* self, QRegion* mask ```
void q_webengineview_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QWebEngineView* self ```
QRegion* q_webengineview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QWebEngineView* self ```
void q_webengineview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPaintDevice* target ```
void q_webengineview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPainter* painter ```
void q_webengineview_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QWebEngineView* self ```
QPixmap* q_webengineview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QWebEngineView* self ```
QGraphicsEffect* q_webengineview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QWebEngineView* self, QGraphicsEffect* effect ```
void q_webengineview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QWebEngineView* self, enum Qt__GestureType typeVal ```
void q_webengineview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QWebEngineView* self, enum Qt__GestureType typeVal ```
void q_webengineview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QWebEngineView* self, const char* windowTitle ```
void q_webengineview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QWebEngineView* self, const char* styleSheet ```
void q_webengineview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QWebEngineView* self, QIcon* icon ```
void q_webengineview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QWebEngineView* self ```
QIcon* q_webengineview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QWebEngineView* self, const char* windowIconText ```
void q_webengineview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QWebEngineView* self, const char* windowRole ```
void q_webengineview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QWebEngineView* self, const char* filePath ```
void q_webengineview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QWebEngineView* self, double level ```
void q_webengineview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QWebEngineView* self ```
double q_webengineview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QWebEngineView* self, const char* toolTip ```
void q_webengineview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QWebEngineView* self, int msec ```
void q_webengineview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QWebEngineView* self, const char* statusTip ```
void q_webengineview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QWebEngineView* self, const char* whatsThis ```
void q_webengineview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QWebEngineView* self, const char* name ```
void q_webengineview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QWebEngineView* self, const char* description ```
void q_webengineview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QWebEngineView* self, enum Qt__LayoutDirection direction ```
void q_webengineview_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QWebEngineView* self ```
void q_webengineview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QWebEngineView* self, QLocale* locale ```
void q_webengineview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QWebEngineView* self ```
QLocale* q_webengineview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QWebEngineView* self ```
void q_webengineview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QWebEngineView* self ```
void q_webengineview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QWebEngineView* self ```
void q_webengineview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QWebEngineView* self ```
void q_webengineview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QWebEngineView* self, enum Qt__FocusReason reason ```
void q_webengineview_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QWebEngineView* self, enum Qt__FocusPolicy policy ```
void q_webengineview_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_webengineview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QWebEngineView* self, QWidget* focusProxy ```
void q_webengineview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QWebEngineView* self, enum Qt__ContextMenuPolicy policy ```
void q_webengineview_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QWebEngineView* self ```
void q_webengineview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QWebEngineView* self, QCursor* param1 ```
void q_webengineview_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QWebEngineView* self ```
void q_webengineview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QWebEngineView* self ```
void q_webengineview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QWebEngineView* self ```
void q_webengineview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QWebEngineView* self, QKeySequence* key ```
int32_t q_webengineview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QWebEngineView* self, int id ```
void q_webengineview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QWebEngineView* self, int id ```
void q_webengineview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QWebEngineView* self, int id ```
void q_webengineview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_webengineview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_webengineview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QWebEngineView* self, bool enable ```
void q_webengineview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QWebEngineView* self ```
QGraphicsProxyWidget* q_webengineview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWebEngineView* self ```
void q_webengineview_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWebEngineView* self ```
void q_webengineview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWebEngineView* self, int x, int y, int w, int h ```
void q_webengineview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWebEngineView* self, QRect* param1 ```
void q_webengineview_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWebEngineView* self, QRegion* param1 ```
void q_webengineview_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWebEngineView* self, int x, int y, int w, int h ```
void q_webengineview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWebEngineView* self, QRect* param1 ```
void q_webengineview_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWebEngineView* self, QRegion* param1 ```
void q_webengineview_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QWebEngineView* self, bool hidden ```
void q_webengineview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QWebEngineView* self ```
void q_webengineview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QWebEngineView* self ```
void q_webengineview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QWebEngineView* self ```
void q_webengineview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QWebEngineView* self ```
void q_webengineview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QWebEngineView* self ```
void q_webengineview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QWebEngineView* self ```
void q_webengineview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QWebEngineView* self ```
void q_webengineview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QWebEngineView* self ```
void q_webengineview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QWebEngineView* self, QWidget* param1 ```
void q_webengineview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QWebEngineView* self, int x, int y ```
void q_webengineview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QWebEngineView* self, QPoint* param1 ```
void q_webengineview_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QWebEngineView* self, int w, int h ```
void q_webengineview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QWebEngineView* self, QSize* param1 ```
void q_webengineview_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QWebEngineView* self, int x, int y, int w, int h ```
void q_webengineview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QWebEngineView* self, QRect* geometry ```
void q_webengineview_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QWebEngineView* self ```
char* q_webengineview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QWebEngineView* self, const char* geometry ```
bool q_webengineview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QWebEngineView* self ```
void q_webengineview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QWebEngineView* self, QWidget* param1 ```
bool q_webengineview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QWebEngineView* self, int state ```
void q_webengineview_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QWebEngineView* self, int state ```
void q_webengineview_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QWebEngineView* self ```
QSizePolicy* q_webengineview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QWebEngineView* self, QSizePolicy* sizePolicy ```
void q_webengineview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QWebEngineView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_webengineview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QWebEngineView* self ```
QRegion* q_webengineview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QWebEngineView* self, int left, int top, int right, int bottom ```
void q_webengineview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QWebEngineView* self, QMargins* margins ```
void q_webengineview_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QWebEngineView* self ```
QMargins* q_webengineview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QWebEngineView* self ```
QRect* q_webengineview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QWebEngineView* self ```
QLayout* q_webengineview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QWebEngineView* self, QLayout* layout ```
void q_webengineview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QWebEngineView* self ```
void q_webengineview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QWebEngineView* self, QWidget* parent ```
void q_webengineview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QWebEngineView* self, QWidget* parent, int f ```
void q_webengineview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QWebEngineView* self, int dx, int dy ```
void q_webengineview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QWebEngineView* self, int dx, int dy, QRect* param3 ```
void q_webengineview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QWebEngineView* self, bool on ```
void q_webengineview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWebEngineView* self, QAction* action ```
void q_webengineview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QWebEngineView* self, QAction* actions[] ```
void q_webengineview_add_actions(void* self, void* actions[]) {
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
/// ``` QWebEngineView* self, QAction* before, QAction* actions[] ```
void q_webengineview_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QWebEngineView* self, QAction* before, QAction* action ```
void q_webengineview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QWebEngineView* self, QAction* action ```
void q_webengineview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QWebEngineView* self ```
libqt_list /* of QAction* */ q_webengineview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWebEngineView* self, const char* text ```
QAction* q_webengineview_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWebEngineView* self, QIcon* icon, const char* text ```
QAction* q_webengineview_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWebEngineView* self, const char* text, QKeySequence* shortcut ```
QAction* q_webengineview_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWebEngineView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_webengineview_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QWebEngineView* self ```
QWidget* q_webengineview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QWebEngineView* self, int typeVal ```
void q_webengineview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QWebEngineView* self, enum Qt__WindowType param1 ```
void q_webengineview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QWebEngineView* self, int typeVal ```
void q_webengineview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_webengineview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QWebEngineView* self, int x, int y ```
QWidget* q_webengineview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QWebEngineView* self, QPoint* p ```
QWidget* q_webengineview_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QWebEngineView* self, enum Qt__WidgetAttribute param1 ```
void q_webengineview_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QWebEngineView* self, enum Qt__WidgetAttribute param1 ```
bool q_webengineview_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QWebEngineView* self ```
void q_webengineview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QWebEngineView* self, QWidget* child ```
bool q_webengineview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QWebEngineView* self, bool enabled ```
void q_webengineview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QWebEngineView* self ```
QBackingStore* q_webengineview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QWebEngineView* self ```
QWindow* q_webengineview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QWebEngineView* self ```
QScreen* q_webengineview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QWebEngineView* self, QScreen* screen ```
void q_webengineview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_webengineview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QWebEngineView* self, const char* title ```
void q_webengineview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QWebEngineView* self, void (*slot)(QWidget*, const char*) ```
void q_webengineview_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QWebEngineView* self, QIcon* icon ```
void q_webengineview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QWebEngineView* self, void (*slot)(QWidget*, QIcon*) ```
void q_webengineview_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QWebEngineView* self, const char* iconText ```
void q_webengineview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QWebEngineView* self, void (*slot)(QWidget*, const char*) ```
void q_webengineview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QWebEngineView* self, QPoint* pos ```
void q_webengineview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QWebEngineView* self, void (*slot)(QWidget*, QPoint*) ```
void q_webengineview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QWebEngineView* self ```
int64_t q_webengineview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QWebEngineView* self, int hints ```
void q_webengineview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_webengineview_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_webengineview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_webengineview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPainter* painter, QPoint* targetOffset ```
void q_webengineview_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_webengineview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWebEngineView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_webengineview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QWebEngineView* self, QRect* rectangle ```
QPixmap* q_webengineview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QWebEngineView* self, enum Qt__GestureType typeVal, int flags ```
void q_webengineview_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QWebEngineView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_webengineview_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QWebEngineView* self, int id, bool enable ```
void q_webengineview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QWebEngineView* self, int id, bool enable ```
void q_webengineview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QWebEngineView* self, enum Qt__WindowType param1, bool on ```
void q_webengineview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QWebEngineView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_webengineview_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_webengineview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_webengineview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineView* self ```
const char* q_webengineview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineView* self, const char* name ```
void q_webengineview_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineView* self, bool b ```
bool q_webengineview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineView* self ```
QThread* q_webengineview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineView* self, QThread* thread ```
void q_webengineview_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineView* self, int interval ```
int32_t q_webengineview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineView* self, int id ```
void q_webengineview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineView* self ```
libqt_list /* of QObject* */ q_webengineview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineView* self, QObject* filterObj ```
void q_webengineview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineView* self, QObject* obj ```
void q_webengineview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webengineview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webengineview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webengineview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webengineview_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineView* self ```
void q_webengineview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineView* self ```
void q_webengineview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineView* self, const char* name, QVariant* value ```
bool q_webengineview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineView* self, const char* name ```
QVariant* q_webengineview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineView* self ```
const char** q_webengineview_dynamic_property_names(void* self) {
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
/// ``` QWebEngineView* self ```
QBindingStorage* q_webengineview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineView* self ```
QBindingStorage* q_webengineview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineView* self ```
void q_webengineview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWebEngineView* self, void (*slot)(QObject*) ```
void q_webengineview_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineView* self ```
QObject* q_webengineview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineView* self, const char* classname ```
bool q_webengineview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineView* self ```
void q_webengineview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webengineview_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineView* self, QObject* param1 ```
void q_webengineview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWebEngineView* self, void (*slot)(QObject*, QObject*) ```
void q_webengineview_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QWebEngineView* self ```
bool q_webengineview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QWebEngineView* self ```
double q_webengineview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QWebEngineView* self ```
double q_webengineview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_webengineview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_dev_type(void* self) {
    return QWebEngineView_DevType((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_qbase_dev_type(void* self) {
    return QWebEngineView_QBaseDevType((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, int32_t (*slot)() ```
void q_webengineview_on_dev_type(void* self, int32_t (*slot)()) {
    QWebEngineView_OnDevType((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, bool visible ```
void q_webengineview_set_visible(void* self, bool visible) {
    QWebEngineView_SetVisible((QWebEngineView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, bool visible ```
void q_webengineview_qbase_set_visible(void* self, bool visible) {
    QWebEngineView_QBaseSetVisible((QWebEngineView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, bool) ```
void q_webengineview_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QWebEngineView_OnSetVisible((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_minimum_size_hint(void* self) {
    return QWebEngineView_MinimumSizeHint((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
QSize* q_webengineview_qbase_minimum_size_hint(void* self) {
    return QWebEngineView_QBaseMinimumSizeHint((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, QSize* (*slot)() ```
void q_webengineview_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QWebEngineView_OnMinimumSizeHint((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, int param1 ```
int32_t q_webengineview_height_for_width(void* self, int param1) {
    return QWebEngineView_HeightForWidth((QWebEngineView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, int param1 ```
int32_t q_webengineview_qbase_height_for_width(void* self, int param1) {
    return QWebEngineView_QBaseHeightForWidth((QWebEngineView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, int32_t (*slot)(QWebEngineView*, int) ```
void q_webengineview_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QWebEngineView_OnHeightForWidth((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
bool q_webengineview_has_height_for_width(void* self) {
    return QWebEngineView_HasHeightForWidth((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
bool q_webengineview_qbase_has_height_for_width(void* self) {
    return QWebEngineView_QBaseHasHeightForWidth((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)() ```
void q_webengineview_on_has_height_for_width(void* self, bool (*slot)()) {
    QWebEngineView_OnHasHeightForWidth((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
QPaintEngine* q_webengineview_paint_engine(void* self) {
    return QWebEngineView_PaintEngine((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
QPaintEngine* q_webengineview_qbase_paint_engine(void* self) {
    return QWebEngineView_QBasePaintEngine((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, QPaintEngine* (*slot)() ```
void q_webengineview_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QWebEngineView_OnPaintEngine((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_mouse_press_event(void* self, void* event) {
    QWebEngineView_MousePressEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_qbase_mouse_press_event(void* self, void* event) {
    QWebEngineView_QBaseMousePressEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMouseEvent*) ```
void q_webengineview_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnMousePressEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_mouse_release_event(void* self, void* event) {
    QWebEngineView_MouseReleaseEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_qbase_mouse_release_event(void* self, void* event) {
    QWebEngineView_QBaseMouseReleaseEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMouseEvent*) ```
void q_webengineview_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnMouseReleaseEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_mouse_double_click_event(void* self, void* event) {
    QWebEngineView_MouseDoubleClickEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_qbase_mouse_double_click_event(void* self, void* event) {
    QWebEngineView_QBaseMouseDoubleClickEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMouseEvent*) ```
void q_webengineview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnMouseDoubleClickEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_mouse_move_event(void* self, void* event) {
    QWebEngineView_MouseMoveEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMouseEvent* event ```
void q_webengineview_qbase_mouse_move_event(void* self, void* event) {
    QWebEngineView_QBaseMouseMoveEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMouseEvent*) ```
void q_webengineview_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnMouseMoveEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QWheelEvent* event ```
void q_webengineview_wheel_event(void* self, void* event) {
    QWebEngineView_WheelEvent((QWebEngineView*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QWheelEvent* event ```
void q_webengineview_qbase_wheel_event(void* self, void* event) {
    QWebEngineView_QBaseWheelEvent((QWebEngineView*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QWheelEvent*) ```
void q_webengineview_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnWheelEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QKeyEvent* event ```
void q_webengineview_key_press_event(void* self, void* event) {
    QWebEngineView_KeyPressEvent((QWebEngineView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QKeyEvent* event ```
void q_webengineview_qbase_key_press_event(void* self, void* event) {
    QWebEngineView_QBaseKeyPressEvent((QWebEngineView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QKeyEvent*) ```
void q_webengineview_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnKeyPressEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QKeyEvent* event ```
void q_webengineview_key_release_event(void* self, void* event) {
    QWebEngineView_KeyReleaseEvent((QWebEngineView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QKeyEvent* event ```
void q_webengineview_qbase_key_release_event(void* self, void* event) {
    QWebEngineView_QBaseKeyReleaseEvent((QWebEngineView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QKeyEvent*) ```
void q_webengineview_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnKeyReleaseEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QFocusEvent* event ```
void q_webengineview_focus_in_event(void* self, void* event) {
    QWebEngineView_FocusInEvent((QWebEngineView*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QFocusEvent* event ```
void q_webengineview_qbase_focus_in_event(void* self, void* event) {
    QWebEngineView_QBaseFocusInEvent((QWebEngineView*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QFocusEvent*) ```
void q_webengineview_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnFocusInEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QFocusEvent* event ```
void q_webengineview_focus_out_event(void* self, void* event) {
    QWebEngineView_FocusOutEvent((QWebEngineView*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QFocusEvent* event ```
void q_webengineview_qbase_focus_out_event(void* self, void* event) {
    QWebEngineView_QBaseFocusOutEvent((QWebEngineView*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QFocusEvent*) ```
void q_webengineview_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnFocusOutEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QEnterEvent* event ```
void q_webengineview_enter_event(void* self, void* event) {
    QWebEngineView_EnterEvent((QWebEngineView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QEnterEvent* event ```
void q_webengineview_qbase_enter_event(void* self, void* event) {
    QWebEngineView_QBaseEnterEvent((QWebEngineView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QEnterEvent*) ```
void q_webengineview_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnEnterEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QEvent* event ```
void q_webengineview_leave_event(void* self, void* event) {
    QWebEngineView_LeaveEvent((QWebEngineView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QEvent* event ```
void q_webengineview_qbase_leave_event(void* self, void* event) {
    QWebEngineView_QBaseLeaveEvent((QWebEngineView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QEvent*) ```
void q_webengineview_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnLeaveEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QPaintEvent* event ```
void q_webengineview_paint_event(void* self, void* event) {
    QWebEngineView_PaintEvent((QWebEngineView*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QPaintEvent* event ```
void q_webengineview_qbase_paint_event(void* self, void* event) {
    QWebEngineView_QBasePaintEvent((QWebEngineView*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QPaintEvent*) ```
void q_webengineview_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnPaintEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMoveEvent* event ```
void q_webengineview_move_event(void* self, void* event) {
    QWebEngineView_MoveEvent((QWebEngineView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMoveEvent* event ```
void q_webengineview_qbase_move_event(void* self, void* event) {
    QWebEngineView_QBaseMoveEvent((QWebEngineView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMoveEvent*) ```
void q_webengineview_on_move_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnMoveEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QResizeEvent* event ```
void q_webengineview_resize_event(void* self, void* event) {
    QWebEngineView_ResizeEvent((QWebEngineView*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QResizeEvent* event ```
void q_webengineview_qbase_resize_event(void* self, void* event) {
    QWebEngineView_QBaseResizeEvent((QWebEngineView*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QResizeEvent*) ```
void q_webengineview_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnResizeEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QTabletEvent* event ```
void q_webengineview_tablet_event(void* self, void* event) {
    QWebEngineView_TabletEvent((QWebEngineView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QTabletEvent* event ```
void q_webengineview_qbase_tablet_event(void* self, void* event) {
    QWebEngineView_QBaseTabletEvent((QWebEngineView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QTabletEvent*) ```
void q_webengineview_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnTabletEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QActionEvent* event ```
void q_webengineview_action_event(void* self, void* event) {
    QWebEngineView_ActionEvent((QWebEngineView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QActionEvent* event ```
void q_webengineview_qbase_action_event(void* self, void* event) {
    QWebEngineView_QBaseActionEvent((QWebEngineView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QActionEvent*) ```
void q_webengineview_on_action_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnActionEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, const char* eventType, void* message, intptr_t* result ```
bool q_webengineview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWebEngineView_NativeEvent((QWebEngineView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, const char* eventType, void* message, intptr_t* result ```
bool q_webengineview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWebEngineView_QBaseNativeEvent((QWebEngineView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)(QWebEngineView*, const char*, void*, intptr_t*) ```
void q_webengineview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QWebEngineView_OnNativeEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QEvent* param1 ```
void q_webengineview_change_event(void* self, void* param1) {
    QWebEngineView_ChangeEvent((QWebEngineView*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QEvent* param1 ```
void q_webengineview_qbase_change_event(void* self, void* param1) {
    QWebEngineView_QBaseChangeEvent((QWebEngineView*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QEvent*) ```
void q_webengineview_on_change_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnChangeEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_webengineview_metric(void* self, int64_t param1) {
    return QWebEngineView_Metric((QWebEngineView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_webengineview_qbase_metric(void* self, int64_t param1) {
    return QWebEngineView_QBaseMetric((QWebEngineView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, int32_t (*slot)(QWebEngineView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_webengineview_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QWebEngineView_OnMetric((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QPainter* painter ```
void q_webengineview_init_painter(void* self, void* painter) {
    QWebEngineView_InitPainter((QWebEngineView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QPainter* painter ```
void q_webengineview_qbase_init_painter(void* self, void* painter) {
    QWebEngineView_QBaseInitPainter((QWebEngineView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QPainter*) ```
void q_webengineview_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnInitPainter((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QPoint* offset ```
QPaintDevice* q_webengineview_redirected(void* self, void* offset) {
    return QWebEngineView_Redirected((QWebEngineView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QPoint* offset ```
QPaintDevice* q_webengineview_qbase_redirected(void* self, void* offset) {
    return QWebEngineView_QBaseRedirected((QWebEngineView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, QPaintDevice* (*slot)(QWebEngineView*, QPoint*) ```
void q_webengineview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QWebEngineView_OnRedirected((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
QPainter* q_webengineview_shared_painter(void* self) {
    return QWebEngineView_SharedPainter((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
QPainter* q_webengineview_qbase_shared_painter(void* self) {
    return QWebEngineView_QBaseSharedPainter((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, QPainter* (*slot)() ```
void q_webengineview_on_shared_painter(void* self, QPainter* (*slot)()) {
    QWebEngineView_OnSharedPainter((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QInputMethodEvent* param1 ```
void q_webengineview_input_method_event(void* self, void* param1) {
    QWebEngineView_InputMethodEvent((QWebEngineView*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QInputMethodEvent* param1 ```
void q_webengineview_qbase_input_method_event(void* self, void* param1) {
    QWebEngineView_QBaseInputMethodEvent((QWebEngineView*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QInputMethodEvent*) ```
void q_webengineview_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnInputMethodEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_webengineview_input_method_query(void* self, int64_t param1) {
    return QWebEngineView_InputMethodQuery((QWebEngineView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_webengineview_qbase_input_method_query(void* self, int64_t param1) {
    return QWebEngineView_QBaseInputMethodQuery((QWebEngineView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, QVariant* (*slot)(QWebEngineView*, enum Qt__InputMethodQuery) ```
void q_webengineview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QWebEngineView_OnInputMethodQuery((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, bool next ```
bool q_webengineview_focus_next_prev_child(void* self, bool next) {
    return QWebEngineView_FocusNextPrevChild((QWebEngineView*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, bool next ```
bool q_webengineview_qbase_focus_next_prev_child(void* self, bool next) {
    return QWebEngineView_QBaseFocusNextPrevChild((QWebEngineView*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)(QWebEngineView*, bool) ```
void q_webengineview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QWebEngineView_OnFocusNextPrevChild((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QObject* watched, QEvent* event ```
bool q_webengineview_event_filter(void* self, void* watched, void* event) {
    return QWebEngineView_EventFilter((QWebEngineView*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QObject* watched, QEvent* event ```
bool q_webengineview_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebEngineView_QBaseEventFilter((QWebEngineView*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)(QWebEngineView*, QObject*, QEvent*) ```
void q_webengineview_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWebEngineView_OnEventFilter((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QTimerEvent* event ```
void q_webengineview_timer_event(void* self, void* event) {
    QWebEngineView_TimerEvent((QWebEngineView*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QTimerEvent* event ```
void q_webengineview_qbase_timer_event(void* self, void* event) {
    QWebEngineView_QBaseTimerEvent((QWebEngineView*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QTimerEvent*) ```
void q_webengineview_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnTimerEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QChildEvent* event ```
void q_webengineview_child_event(void* self, void* event) {
    QWebEngineView_ChildEvent((QWebEngineView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QChildEvent* event ```
void q_webengineview_qbase_child_event(void* self, void* event) {
    QWebEngineView_QBaseChildEvent((QWebEngineView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QChildEvent*) ```
void q_webengineview_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnChildEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QEvent* event ```
void q_webengineview_custom_event(void* self, void* event) {
    QWebEngineView_CustomEvent((QWebEngineView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QEvent* event ```
void q_webengineview_qbase_custom_event(void* self, void* event) {
    QWebEngineView_QBaseCustomEvent((QWebEngineView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QEvent*) ```
void q_webengineview_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnCustomEvent((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMetaMethod* signal ```
void q_webengineview_connect_notify(void* self, void* signal) {
    QWebEngineView_ConnectNotify((QWebEngineView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMetaMethod* signal ```
void q_webengineview_qbase_connect_notify(void* self, void* signal) {
    QWebEngineView_QBaseConnectNotify((QWebEngineView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMetaMethod*) ```
void q_webengineview_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnConnectNotify((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMetaMethod* signal ```
void q_webengineview_disconnect_notify(void* self, void* signal) {
    QWebEngineView_DisconnectNotify((QWebEngineView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMetaMethod* signal ```
void q_webengineview_qbase_disconnect_notify(void* self, void* signal) {
    QWebEngineView_QBaseDisconnectNotify((QWebEngineView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)(QWebEngineView*, QMetaMethod*) ```
void q_webengineview_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnDisconnectNotify((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
void q_webengineview_update_micro_focus(void* self) {
    QWebEngineView_UpdateMicroFocus((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
void q_webengineview_qbase_update_micro_focus(void* self) {
    QWebEngineView_QBaseUpdateMicroFocus((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)() ```
void q_webengineview_on_update_micro_focus(void* self, void (*slot)()) {
    QWebEngineView_OnUpdateMicroFocus((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
void q_webengineview_create(void* self) {
    QWebEngineView_Create((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
void q_webengineview_qbase_create(void* self) {
    QWebEngineView_QBaseCreate((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)() ```
void q_webengineview_on_create(void* self, void (*slot)()) {
    QWebEngineView_OnCreate((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
void q_webengineview_destroy(void* self) {
    QWebEngineView_Destroy((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
void q_webengineview_qbase_destroy(void* self) {
    QWebEngineView_QBaseDestroy((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, void (*slot)() ```
void q_webengineview_on_destroy(void* self, void (*slot)()) {
    QWebEngineView_OnDestroy((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
bool q_webengineview_focus_next_child(void* self) {
    return QWebEngineView_FocusNextChild((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
bool q_webengineview_qbase_focus_next_child(void* self) {
    return QWebEngineView_QBaseFocusNextChild((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)() ```
void q_webengineview_on_focus_next_child(void* self, bool (*slot)()) {
    QWebEngineView_OnFocusNextChild((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
bool q_webengineview_focus_previous_child(void* self) {
    return QWebEngineView_FocusPreviousChild((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
bool q_webengineview_qbase_focus_previous_child(void* self) {
    return QWebEngineView_QBaseFocusPreviousChild((QWebEngineView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)() ```
void q_webengineview_on_focus_previous_child(void* self, bool (*slot)()) {
    QWebEngineView_OnFocusPreviousChild((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
QObject* q_webengineview_sender(void* self) {
    return QWebEngineView_Sender((QWebEngineView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
QObject* q_webengineview_qbase_sender(void* self) {
    return QWebEngineView_QBaseSender((QWebEngineView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, QObject* (*slot)() ```
void q_webengineview_on_sender(void* self, QObject* (*slot)()) {
    QWebEngineView_OnSender((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_sender_signal_index(void* self) {
    return QWebEngineView_SenderSignalIndex((QWebEngineView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self ```
int32_t q_webengineview_qbase_sender_signal_index(void* self) {
    return QWebEngineView_QBaseSenderSignalIndex((QWebEngineView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, int32_t (*slot)() ```
void q_webengineview_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWebEngineView_OnSenderSignalIndex((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, const char* signal ```
int32_t q_webengineview_receivers(void* self, const char* signal) {
    return QWebEngineView_Receivers((QWebEngineView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, const char* signal ```
int32_t q_webengineview_qbase_receivers(void* self, const char* signal) {
    return QWebEngineView_QBaseReceivers((QWebEngineView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, int32_t (*slot)(QWebEngineView*, const char*) ```
void q_webengineview_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWebEngineView_OnReceivers((QWebEngineView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineView* self, QMetaMethod* signal ```
bool q_webengineview_is_signal_connected(void* self, void* signal) {
    return QWebEngineView_IsSignalConnected((QWebEngineView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineView* self, QMetaMethod* signal ```
bool q_webengineview_qbase_is_signal_connected(void* self, void* signal) {
    return QWebEngineView_QBaseIsSignalConnected((QWebEngineView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineView* self, bool (*slot)(QWebEngineView*, QMetaMethod*) ```
void q_webengineview_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWebEngineView_OnIsSignalConnected((QWebEngineView*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineView* self ```
void q_webengineview_delete(void* self) {
    QWebEngineView_Delete((QWebEngineView*)(self));
}