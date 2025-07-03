#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqicon.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpagelayout.hpp"
#include "../libqpageranges.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../printsupport/libqprinter.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqwebenginecontextmenurequest.hpp"
#include "libqwebenginehistory.hpp"
#include "libqwebenginehttprequest.hpp"
#include "libqwebenginepage.hpp"
#include "libqwebengineprofile.hpp"
#include "libqwebenginesettings.hpp"
#include "../libqwidget.hpp"
#include "../libqcoreevent.hpp"
#include "libqwebengineview.hpp"
#include "libqwebengineview.h"

QWebEngineView* q_webengineview_new(void* parent) {
    return QWebEngineView_new((QWidget*)parent);
}

QWebEngineView* q_webengineview_new2() {
    return QWebEngineView_new2();
}

QWebEngineView* q_webengineview_new3(void* profile) {
    return QWebEngineView_new3((QWebEngineProfile*)profile);
}

QWebEngineView* q_webengineview_new4(void* page) {
    return QWebEngineView_new4((QWebEnginePage*)page);
}

QWebEngineView* q_webengineview_new5(void* profile, void* parent) {
    return QWebEngineView_new5((QWebEngineProfile*)profile, (QWidget*)parent);
}

QWebEngineView* q_webengineview_new6(void* page, void* parent) {
    return QWebEngineView_new6((QWebEnginePage*)page, (QWidget*)parent);
}

const QMetaObject* q_webengineview_meta_object(void* self) {
    return QWebEngineView_MetaObject((QWebEngineView*)self);
}

void* q_webengineview_metacast(void* self, const char* param1) {
    return QWebEngineView_Metacast((QWebEngineView*)self, param1);
}

int32_t q_webengineview_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineView_Metacall((QWebEngineView*)self, param1, param2, param3);
}

void q_webengineview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWebEngineView_OnMetacall((QWebEngineView*)self, (intptr_t)slot);
}

int32_t q_webengineview_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineView_QBaseMetacall((QWebEngineView*)self, param1, param2, param3);
}

const char* q_webengineview_tr(const char* s) {
    libqt_string _str = QWebEngineView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWebEngineView* q_webengineview_for_page(void* page) {
    return QWebEngineView_ForPage((QWebEnginePage*)page);
}

QWebEnginePage* q_webengineview_page(void* self) {
    return QWebEngineView_Page((QWebEngineView*)self);
}

void q_webengineview_set_page(void* self, void* page) {
    QWebEngineView_SetPage((QWebEngineView*)self, (QWebEnginePage*)page);
}

void q_webengineview_load(void* self, void* url) {
    QWebEngineView_Load((QWebEngineView*)self, (QUrl*)url);
}

void q_webengineview_load_with_request(void* self, void* request) {
    QWebEngineView_LoadWithRequest((QWebEngineView*)self, (QWebEngineHttpRequest*)request);
}

void q_webengineview_set_html(void* self, const char* html) {
    QWebEngineView_SetHtml((QWebEngineView*)self, qstring(html));
}

void q_webengineview_set_content(void* self, const char* data) {
    QWebEngineView_SetContent((QWebEngineView*)self, qstring(data));
}

QWebEngineHistory* q_webengineview_history(void* self) {
    return QWebEngineView_History((QWebEngineView*)self);
}

const char* q_webengineview_title(void* self) {
    libqt_string _str = QWebEngineView_Title((QWebEngineView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineview_set_url(void* self, void* url) {
    QWebEngineView_SetUrl((QWebEngineView*)self, (QUrl*)url);
}

QUrl* q_webengineview_url(void* self) {
    return QWebEngineView_Url((QWebEngineView*)self);
}

QUrl* q_webengineview_icon_url(void* self) {
    return QWebEngineView_IconUrl((QWebEngineView*)self);
}

QIcon* q_webengineview_icon(void* self) {
    return QWebEngineView_Icon((QWebEngineView*)self);
}

bool q_webengineview_has_selection(void* self) {
    return QWebEngineView_HasSelection((QWebEngineView*)self);
}

const char* q_webengineview_selected_text(void* self) {
    libqt_string _str = QWebEngineView_SelectedText((QWebEngineView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAction* q_webengineview_page_action(void* self, int64_t action) {
    return QWebEngineView_PageAction((QWebEngineView*)self, action);
}

void q_webengineview_trigger_page_action(void* self, int64_t action) {
    QWebEngineView_TriggerPageAction((QWebEngineView*)self, action);
}

double q_webengineview_zoom_factor(void* self) {
    return QWebEngineView_ZoomFactor((QWebEngineView*)self);
}

void q_webengineview_set_zoom_factor(void* self, double factor) {
    QWebEngineView_SetZoomFactor((QWebEngineView*)self, factor);
}

QSize* q_webengineview_size_hint(void* self) {
    return QWebEngineView_SizeHint((QWebEngineView*)self);
}

void q_webengineview_on_size_hint(void* self, QSize* (*slot)()) {
    QWebEngineView_OnSizeHint((QWebEngineView*)self, (intptr_t)slot);
}

QSize* q_webengineview_qbase_size_hint(void* self) {
    return QWebEngineView_QBaseSizeHint((QWebEngineView*)self);
}

QWebEngineSettings* q_webengineview_settings(void* self) {
    return QWebEngineView_Settings((QWebEngineView*)self);
}

QMenu* q_webengineview_create_standard_context_menu(void* self) {
    return QWebEngineView_CreateStandardContextMenu((QWebEngineView*)self);
}

QWebEngineContextMenuRequest* q_webengineview_last_context_menu_request(void* self) {
    return QWebEngineView_LastContextMenuRequest((QWebEngineView*)self);
}

void q_webengineview_print_to_pdf(void* self, const char* filePath) {
    QWebEngineView_PrintToPdf((QWebEngineView*)self, qstring(filePath));
}

void q_webengineview_print(void* self, void* printer) {
    QWebEngineView_Print((QWebEngineView*)self, (QPrinter*)printer);
}

void q_webengineview_stop(void* self) {
    QWebEngineView_Stop((QWebEngineView*)self);
}

void q_webengineview_back(void* self) {
    QWebEngineView_Back((QWebEngineView*)self);
}

void q_webengineview_forward(void* self) {
    QWebEngineView_Forward((QWebEngineView*)self);
}

void q_webengineview_reload(void* self) {
    QWebEngineView_Reload((QWebEngineView*)self);
}

void q_webengineview_load_started(void* self) {
    QWebEngineView_LoadStarted((QWebEngineView*)self);
}

void q_webengineview_on_load_started(void* self, void (*slot)(void*)) {
    QWebEngineView_Connect_LoadStarted((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_load_progress(void* self, int progress) {
    QWebEngineView_LoadProgress((QWebEngineView*)self, progress);
}

void q_webengineview_on_load_progress(void* self, void (*slot)(void*, int)) {
    QWebEngineView_Connect_LoadProgress((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_load_finished(void* self, bool param1) {
    QWebEngineView_LoadFinished((QWebEngineView*)self, param1);
}

void q_webengineview_on_load_finished(void* self, void (*slot)(void*, bool)) {
    QWebEngineView_Connect_LoadFinished((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_title_changed(void* self, const char* title) {
    QWebEngineView_TitleChanged((QWebEngineView*)self, qstring(title));
}

void q_webengineview_on_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWebEngineView_Connect_TitleChanged((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_selection_changed(void* self) {
    QWebEngineView_SelectionChanged((QWebEngineView*)self);
}

void q_webengineview_on_selection_changed(void* self, void (*slot)(void*)) {
    QWebEngineView_Connect_SelectionChanged((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_url_changed(void* self, void* param1) {
    QWebEngineView_UrlChanged((QWebEngineView*)self, (QUrl*)param1);
}

void q_webengineview_on_url_changed(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_Connect_UrlChanged((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_icon_url_changed(void* self, void* param1) {
    QWebEngineView_IconUrlChanged((QWebEngineView*)self, (QUrl*)param1);
}

void q_webengineview_on_icon_url_changed(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_Connect_IconUrlChanged((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_icon_changed(void* self, void* param1) {
    QWebEngineView_IconChanged((QWebEngineView*)self, (QIcon*)param1);
}

void q_webengineview_on_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_Connect_IconChanged((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_render_process_terminated(void* self, int64_t terminationStatus, int exitCode) {
    QWebEngineView_RenderProcessTerminated((QWebEngineView*)self, terminationStatus, exitCode);
}

void q_webengineview_on_render_process_terminated(void* self, void (*slot)(void*, int64_t, int)) {
    QWebEngineView_Connect_RenderProcessTerminated((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_pdf_printing_finished(void* self, const char* filePath, bool success) {
    QWebEngineView_PdfPrintingFinished((QWebEngineView*)self, qstring(filePath), success);
}

void q_webengineview_on_pdf_printing_finished(void* self, void (*slot)(void*, const char*, bool)) {
    QWebEngineView_Connect_PdfPrintingFinished((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_print_requested(void* self) {
    QWebEngineView_PrintRequested((QWebEngineView*)self);
}

void q_webengineview_on_print_requested(void* self, void (*slot)(void*)) {
    QWebEngineView_Connect_PrintRequested((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_print_finished(void* self, bool success) {
    QWebEngineView_PrintFinished((QWebEngineView*)self, success);
}

void q_webengineview_on_print_finished(void* self, void (*slot)(void*, bool)) {
    QWebEngineView_Connect_PrintFinished((QWebEngineView*)self, (intptr_t)slot);
}

QWebEngineView* q_webengineview_create_window(void* self, int64_t typeVal) {
    return QWebEngineView_CreateWindow((QWebEngineView*)self, typeVal);
}

void q_webengineview_on_create_window(void* self, QWebEngineView* (*slot)(void*, int64_t)) {
    QWebEngineView_OnCreateWindow((QWebEngineView*)self, (intptr_t)slot);
}

QWebEngineView* q_webengineview_qbase_create_window(void* self, int64_t typeVal) {
    return QWebEngineView_QBaseCreateWindow((QWebEngineView*)self, typeVal);
}

void q_webengineview_context_menu_event(void* self, void* param1) {
    QWebEngineView_ContextMenuEvent((QWebEngineView*)self, (QContextMenuEvent*)param1);
}

void q_webengineview_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnContextMenuEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_qbase_context_menu_event(void* self, void* param1) {
    QWebEngineView_QBaseContextMenuEvent((QWebEngineView*)self, (QContextMenuEvent*)param1);
}

bool q_webengineview_event(void* self, void* param1) {
    return QWebEngineView_Event((QWebEngineView*)self, (QEvent*)param1);
}

void q_webengineview_on_event(void* self, bool (*slot)(void*, void*)) {
    QWebEngineView_OnEvent((QWebEngineView*)self, (intptr_t)slot);
}

bool q_webengineview_qbase_event(void* self, void* param1) {
    return QWebEngineView_QBaseEvent((QWebEngineView*)self, (QEvent*)param1);
}

void q_webengineview_show_event(void* self, void* param1) {
    QWebEngineView_ShowEvent((QWebEngineView*)self, (QShowEvent*)param1);
}

void q_webengineview_on_show_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnShowEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_qbase_show_event(void* self, void* param1) {
    QWebEngineView_QBaseShowEvent((QWebEngineView*)self, (QShowEvent*)param1);
}

void q_webengineview_hide_event(void* self, void* param1) {
    QWebEngineView_HideEvent((QWebEngineView*)self, (QHideEvent*)param1);
}

void q_webengineview_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnHideEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_qbase_hide_event(void* self, void* param1) {
    QWebEngineView_QBaseHideEvent((QWebEngineView*)self, (QHideEvent*)param1);
}

void q_webengineview_close_event(void* self, void* param1) {
    QWebEngineView_CloseEvent((QWebEngineView*)self, (QCloseEvent*)param1);
}

void q_webengineview_on_close_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnCloseEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_qbase_close_event(void* self, void* param1) {
    QWebEngineView_QBaseCloseEvent((QWebEngineView*)self, (QCloseEvent*)param1);
}

void q_webengineview_drag_enter_event(void* self, void* e) {
    QWebEngineView_DragEnterEvent((QWebEngineView*)self, (QDragEnterEvent*)e);
}

void q_webengineview_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnDragEnterEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_qbase_drag_enter_event(void* self, void* e) {
    QWebEngineView_QBaseDragEnterEvent((QWebEngineView*)self, (QDragEnterEvent*)e);
}

void q_webengineview_drag_leave_event(void* self, void* e) {
    QWebEngineView_DragLeaveEvent((QWebEngineView*)self, (QDragLeaveEvent*)e);
}

void q_webengineview_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnDragLeaveEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_qbase_drag_leave_event(void* self, void* e) {
    QWebEngineView_QBaseDragLeaveEvent((QWebEngineView*)self, (QDragLeaveEvent*)e);
}

void q_webengineview_drag_move_event(void* self, void* e) {
    QWebEngineView_DragMoveEvent((QWebEngineView*)self, (QDragMoveEvent*)e);
}

void q_webengineview_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnDragMoveEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_qbase_drag_move_event(void* self, void* e) {
    QWebEngineView_QBaseDragMoveEvent((QWebEngineView*)self, (QDragMoveEvent*)e);
}

void q_webengineview_drop_event(void* self, void* e) {
    QWebEngineView_DropEvent((QWebEngineView*)self, (QDropEvent*)e);
}

void q_webengineview_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnDropEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_qbase_drop_event(void* self, void* e) {
    QWebEngineView_QBaseDropEvent((QWebEngineView*)self, (QDropEvent*)e);
}

const char* q_webengineview_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineview_set_html2(void* self, const char* html, void* baseUrl) {
    QWebEngineView_SetHtml2((QWebEngineView*)self, qstring(html), (QUrl*)baseUrl);
}

void q_webengineview_set_content2(void* self, const char* data, const char* mimeType) {
    QWebEngineView_SetContent2((QWebEngineView*)self, qstring(data), qstring(mimeType));
}

void q_webengineview_set_content3(void* self, const char* data, const char* mimeType, void* baseUrl) {
    QWebEngineView_SetContent3((QWebEngineView*)self, qstring(data), qstring(mimeType), (QUrl*)baseUrl);
}

void q_webengineview_trigger_page_action2(void* self, int64_t action, bool checked) {
    QWebEngineView_TriggerPageAction2((QWebEngineView*)self, action, checked);
}

void q_webengineview_print_to_pdf2(void* self, const char* filePath, void* layout) {
    QWebEngineView_PrintToPdf2((QWebEngineView*)self, qstring(filePath), (QPageLayout*)layout);
}

void q_webengineview_print_to_pdf3(void* self, const char* filePath, void* layout, void* ranges) {
    QWebEngineView_PrintToPdf3((QWebEngineView*)self, qstring(filePath), (QPageLayout*)layout, (QPageRanges*)ranges);
}

uintptr_t q_webengineview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_webengineview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_webengineview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_webengineview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_webengineview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_webengineview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_webengineview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_webengineview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_webengineview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_webengineview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_webengineview_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_webengineview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_webengineview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_webengineview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_webengineview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_webengineview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_webengineview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_webengineview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_webengineview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_webengineview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_webengineview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_webengineview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_webengineview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_webengineview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_webengineview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_webengineview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_webengineview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_webengineview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_webengineview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_webengineview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_webengineview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_webengineview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_webengineview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_webengineview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_webengineview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_webengineview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_webengineview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_webengineview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_webengineview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_webengineview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_webengineview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_webengineview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_webengineview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_webengineview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_webengineview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_webengineview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_webengineview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_webengineview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_webengineview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_webengineview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_webengineview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_webengineview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_webengineview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_webengineview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_webengineview_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_webengineview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_webengineview_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_webengineview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_webengineview_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_webengineview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_webengineview_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_webengineview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_webengineview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_webengineview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_webengineview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_webengineview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_webengineview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_webengineview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_webengineview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_webengineview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_webengineview_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_webengineview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_webengineview_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_webengineview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_webengineview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_webengineview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_webengineview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_webengineview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_webengineview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_webengineview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_webengineview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_webengineview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_webengineview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_webengineview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_webengineview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_webengineview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_webengineview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_webengineview_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_webengineview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_webengineview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_webengineview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_webengineview_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_webengineview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_webengineview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_webengineview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_webengineview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_webengineview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_webengineview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_webengineview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_webengineview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_webengineview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_webengineview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_webengineview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_webengineview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_webengineview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_webengineview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_webengineview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_webengineview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_webengineview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_webengineview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_webengineview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_webengineview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_webengineview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_webengineview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_webengineview_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_webengineview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_webengineview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_webengineview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_webengineview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_webengineview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_webengineview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_webengineview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_webengineview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_webengineview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_webengineview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_webengineview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_webengineview_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_webengineview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_webengineview_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_webengineview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_webengineview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_webengineview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_webengineview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_webengineview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_webengineview_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_webengineview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_webengineview_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_webengineview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_webengineview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_webengineview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_webengineview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_webengineview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_webengineview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_webengineview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_webengineview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_webengineview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_webengineview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_webengineview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_webengineview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_webengineview_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_webengineview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_webengineview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_webengineview_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_webengineview_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_webengineview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_webengineview_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_webengineview_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_webengineview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_webengineview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_webengineview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_webengineview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_webengineview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_webengineview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_webengineview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_webengineview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_webengineview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_webengineview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_webengineview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_webengineview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_webengineview_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_webengineview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_webengineview_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_webengineview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_webengineview_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_webengineview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webengineview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_webengineview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_webengineview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_webengineview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_webengineview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_webengineview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_webengineview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_webengineview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_webengineview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_webengineview_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_webengineview_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_webengineview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_webengineview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_webengineview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_webengineview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_webengineview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_webengineview_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_webengineview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_webengineview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_webengineview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_webengineview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_webengineview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_webengineview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_webengineview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_webengineview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_webengineview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_webengineview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_webengineview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_webengineview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_webengineview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_webengineview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_webengineview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_webengineview_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_webengineview_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_webengineview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_webengineview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_webengineview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_webengineview_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_webengineview_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_webengineview_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_webengineview_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_webengineview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_webengineview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_webengineview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_webengineview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_webengineview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_webengineview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_webengineview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_webengineview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_webengineview_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_webengineview_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_webengineview_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_webengineview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_webengineview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_webengineview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_webengineview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_webengineview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_webengineview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_webengineview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_webengineview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_webengineview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_webengineview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_webengineview_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_webengineview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_webengineview_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_webengineview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_webengineview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_webengineview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_webengineview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_webengineview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_webengineview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_webengineview_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_webengineview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_webengineview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_webengineview_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_webengineview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_webengineview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_webengineview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_webengineview_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_webengineview_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_webengineview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_webengineview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_webengineview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_webengineview_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_webengineview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_webengineview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_webengineview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineview_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webengineview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webengineview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webengineview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webengineview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webengineview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webengineview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_webengineview_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webengineview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_webengineview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webengineview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webengineview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webengineview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webengineview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webengineview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webengineview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webengineview_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_webengineview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webengineview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webengineview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webengineview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webengineview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_webengineview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webengineview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webengineview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webengineview_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_webengineview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webengineview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webengineview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_webengineview_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_webengineview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_webengineview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_webengineview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webengineview_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_webengineview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_webengineview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_webengineview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_webengineview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_webengineview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_webengineview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_webengineview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_webengineview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_webengineview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_webengineview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_webengineview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_webengineview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_webengineview_dev_type(void* self) {
    return QWebEngineView_DevType((QWebEngineView*)self);
}

int32_t q_webengineview_qbase_dev_type(void* self) {
    return QWebEngineView_QBaseDevType((QWebEngineView*)self);
}

void q_webengineview_on_dev_type(void* self, int32_t (*slot)()) {
    QWebEngineView_OnDevType((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_set_visible(void* self, bool visible) {
    QWebEngineView_SetVisible((QWebEngineView*)self, visible);
}

void q_webengineview_qbase_set_visible(void* self, bool visible) {
    QWebEngineView_QBaseSetVisible((QWebEngineView*)self, visible);
}

void q_webengineview_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QWebEngineView_OnSetVisible((QWebEngineView*)self, (intptr_t)slot);
}

QSize* q_webengineview_minimum_size_hint(void* self) {
    return QWebEngineView_MinimumSizeHint((QWebEngineView*)self);
}

QSize* q_webengineview_qbase_minimum_size_hint(void* self) {
    return QWebEngineView_QBaseMinimumSizeHint((QWebEngineView*)self);
}

void q_webengineview_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QWebEngineView_OnMinimumSizeHint((QWebEngineView*)self, (intptr_t)slot);
}

int32_t q_webengineview_height_for_width(void* self, int param1) {
    return QWebEngineView_HeightForWidth((QWebEngineView*)self, param1);
}

int32_t q_webengineview_qbase_height_for_width(void* self, int param1) {
    return QWebEngineView_QBaseHeightForWidth((QWebEngineView*)self, param1);
}

void q_webengineview_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QWebEngineView_OnHeightForWidth((QWebEngineView*)self, (intptr_t)slot);
}

bool q_webengineview_has_height_for_width(void* self) {
    return QWebEngineView_HasHeightForWidth((QWebEngineView*)self);
}

bool q_webengineview_qbase_has_height_for_width(void* self) {
    return QWebEngineView_QBaseHasHeightForWidth((QWebEngineView*)self);
}

void q_webengineview_on_has_height_for_width(void* self, bool (*slot)()) {
    QWebEngineView_OnHasHeightForWidth((QWebEngineView*)self, (intptr_t)slot);
}

QPaintEngine* q_webengineview_paint_engine(void* self) {
    return QWebEngineView_PaintEngine((QWebEngineView*)self);
}

QPaintEngine* q_webengineview_qbase_paint_engine(void* self) {
    return QWebEngineView_QBasePaintEngine((QWebEngineView*)self);
}

void q_webengineview_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QWebEngineView_OnPaintEngine((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_mouse_press_event(void* self, void* event) {
    QWebEngineView_MousePressEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

void q_webengineview_qbase_mouse_press_event(void* self, void* event) {
    QWebEngineView_QBaseMousePressEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

void q_webengineview_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnMousePressEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_mouse_release_event(void* self, void* event) {
    QWebEngineView_MouseReleaseEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

void q_webengineview_qbase_mouse_release_event(void* self, void* event) {
    QWebEngineView_QBaseMouseReleaseEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

void q_webengineview_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnMouseReleaseEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_mouse_double_click_event(void* self, void* event) {
    QWebEngineView_MouseDoubleClickEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

void q_webengineview_qbase_mouse_double_click_event(void* self, void* event) {
    QWebEngineView_QBaseMouseDoubleClickEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

void q_webengineview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnMouseDoubleClickEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_mouse_move_event(void* self, void* event) {
    QWebEngineView_MouseMoveEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

void q_webengineview_qbase_mouse_move_event(void* self, void* event) {
    QWebEngineView_QBaseMouseMoveEvent((QWebEngineView*)self, (QMouseEvent*)event);
}

void q_webengineview_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnMouseMoveEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_wheel_event(void* self, void* event) {
    QWebEngineView_WheelEvent((QWebEngineView*)self, (QWheelEvent*)event);
}

void q_webengineview_qbase_wheel_event(void* self, void* event) {
    QWebEngineView_QBaseWheelEvent((QWebEngineView*)self, (QWheelEvent*)event);
}

void q_webengineview_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnWheelEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_key_press_event(void* self, void* event) {
    QWebEngineView_KeyPressEvent((QWebEngineView*)self, (QKeyEvent*)event);
}

void q_webengineview_qbase_key_press_event(void* self, void* event) {
    QWebEngineView_QBaseKeyPressEvent((QWebEngineView*)self, (QKeyEvent*)event);
}

void q_webengineview_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnKeyPressEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_key_release_event(void* self, void* event) {
    QWebEngineView_KeyReleaseEvent((QWebEngineView*)self, (QKeyEvent*)event);
}

void q_webengineview_qbase_key_release_event(void* self, void* event) {
    QWebEngineView_QBaseKeyReleaseEvent((QWebEngineView*)self, (QKeyEvent*)event);
}

void q_webengineview_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnKeyReleaseEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_focus_in_event(void* self, void* event) {
    QWebEngineView_FocusInEvent((QWebEngineView*)self, (QFocusEvent*)event);
}

void q_webengineview_qbase_focus_in_event(void* self, void* event) {
    QWebEngineView_QBaseFocusInEvent((QWebEngineView*)self, (QFocusEvent*)event);
}

void q_webengineview_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnFocusInEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_focus_out_event(void* self, void* event) {
    QWebEngineView_FocusOutEvent((QWebEngineView*)self, (QFocusEvent*)event);
}

void q_webengineview_qbase_focus_out_event(void* self, void* event) {
    QWebEngineView_QBaseFocusOutEvent((QWebEngineView*)self, (QFocusEvent*)event);
}

void q_webengineview_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnFocusOutEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_enter_event(void* self, void* event) {
    QWebEngineView_EnterEvent((QWebEngineView*)self, (QEnterEvent*)event);
}

void q_webengineview_qbase_enter_event(void* self, void* event) {
    QWebEngineView_QBaseEnterEvent((QWebEngineView*)self, (QEnterEvent*)event);
}

void q_webengineview_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnEnterEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_leave_event(void* self, void* event) {
    QWebEngineView_LeaveEvent((QWebEngineView*)self, (QEvent*)event);
}

void q_webengineview_qbase_leave_event(void* self, void* event) {
    QWebEngineView_QBaseLeaveEvent((QWebEngineView*)self, (QEvent*)event);
}

void q_webengineview_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnLeaveEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_paint_event(void* self, void* event) {
    QWebEngineView_PaintEvent((QWebEngineView*)self, (QPaintEvent*)event);
}

void q_webengineview_qbase_paint_event(void* self, void* event) {
    QWebEngineView_QBasePaintEvent((QWebEngineView*)self, (QPaintEvent*)event);
}

void q_webengineview_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnPaintEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_move_event(void* self, void* event) {
    QWebEngineView_MoveEvent((QWebEngineView*)self, (QMoveEvent*)event);
}

void q_webengineview_qbase_move_event(void* self, void* event) {
    QWebEngineView_QBaseMoveEvent((QWebEngineView*)self, (QMoveEvent*)event);
}

void q_webengineview_on_move_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnMoveEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_resize_event(void* self, void* event) {
    QWebEngineView_ResizeEvent((QWebEngineView*)self, (QResizeEvent*)event);
}

void q_webengineview_qbase_resize_event(void* self, void* event) {
    QWebEngineView_QBaseResizeEvent((QWebEngineView*)self, (QResizeEvent*)event);
}

void q_webengineview_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnResizeEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_tablet_event(void* self, void* event) {
    QWebEngineView_TabletEvent((QWebEngineView*)self, (QTabletEvent*)event);
}

void q_webengineview_qbase_tablet_event(void* self, void* event) {
    QWebEngineView_QBaseTabletEvent((QWebEngineView*)self, (QTabletEvent*)event);
}

void q_webengineview_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnTabletEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_action_event(void* self, void* event) {
    QWebEngineView_ActionEvent((QWebEngineView*)self, (QActionEvent*)event);
}

void q_webengineview_qbase_action_event(void* self, void* event) {
    QWebEngineView_QBaseActionEvent((QWebEngineView*)self, (QActionEvent*)event);
}

void q_webengineview_on_action_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnActionEvent((QWebEngineView*)self, (intptr_t)slot);
}

bool q_webengineview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWebEngineView_NativeEvent((QWebEngineView*)self, qstring(eventType), message, result);
}

bool q_webengineview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWebEngineView_QBaseNativeEvent((QWebEngineView*)self, qstring(eventType), message, result);
}

void q_webengineview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QWebEngineView_OnNativeEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_change_event(void* self, void* param1) {
    QWebEngineView_ChangeEvent((QWebEngineView*)self, (QEvent*)param1);
}

void q_webengineview_qbase_change_event(void* self, void* param1) {
    QWebEngineView_QBaseChangeEvent((QWebEngineView*)self, (QEvent*)param1);
}

void q_webengineview_on_change_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnChangeEvent((QWebEngineView*)self, (intptr_t)slot);
}

int32_t q_webengineview_metric(void* self, int64_t param1) {
    return QWebEngineView_Metric((QWebEngineView*)self, param1);
}

int32_t q_webengineview_qbase_metric(void* self, int64_t param1) {
    return QWebEngineView_QBaseMetric((QWebEngineView*)self, param1);
}

void q_webengineview_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QWebEngineView_OnMetric((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_init_painter(void* self, void* painter) {
    QWebEngineView_InitPainter((QWebEngineView*)self, (QPainter*)painter);
}

void q_webengineview_qbase_init_painter(void* self, void* painter) {
    QWebEngineView_QBaseInitPainter((QWebEngineView*)self, (QPainter*)painter);
}

void q_webengineview_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnInitPainter((QWebEngineView*)self, (intptr_t)slot);
}

QPaintDevice* q_webengineview_redirected(void* self, void* offset) {
    return QWebEngineView_Redirected((QWebEngineView*)self, (QPoint*)offset);
}

QPaintDevice* q_webengineview_qbase_redirected(void* self, void* offset) {
    return QWebEngineView_QBaseRedirected((QWebEngineView*)self, (QPoint*)offset);
}

void q_webengineview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QWebEngineView_OnRedirected((QWebEngineView*)self, (intptr_t)slot);
}

QPainter* q_webengineview_shared_painter(void* self) {
    return QWebEngineView_SharedPainter((QWebEngineView*)self);
}

QPainter* q_webengineview_qbase_shared_painter(void* self) {
    return QWebEngineView_QBaseSharedPainter((QWebEngineView*)self);
}

void q_webengineview_on_shared_painter(void* self, QPainter* (*slot)()) {
    QWebEngineView_OnSharedPainter((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_input_method_event(void* self, void* param1) {
    QWebEngineView_InputMethodEvent((QWebEngineView*)self, (QInputMethodEvent*)param1);
}

void q_webengineview_qbase_input_method_event(void* self, void* param1) {
    QWebEngineView_QBaseInputMethodEvent((QWebEngineView*)self, (QInputMethodEvent*)param1);
}

void q_webengineview_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnInputMethodEvent((QWebEngineView*)self, (intptr_t)slot);
}

QVariant* q_webengineview_input_method_query(void* self, int64_t param1) {
    return QWebEngineView_InputMethodQuery((QWebEngineView*)self, param1);
}

QVariant* q_webengineview_qbase_input_method_query(void* self, int64_t param1) {
    return QWebEngineView_QBaseInputMethodQuery((QWebEngineView*)self, param1);
}

void q_webengineview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QWebEngineView_OnInputMethodQuery((QWebEngineView*)self, (intptr_t)slot);
}

bool q_webengineview_focus_next_prev_child(void* self, bool next) {
    return QWebEngineView_FocusNextPrevChild((QWebEngineView*)self, next);
}

bool q_webengineview_qbase_focus_next_prev_child(void* self, bool next) {
    return QWebEngineView_QBaseFocusNextPrevChild((QWebEngineView*)self, next);
}

void q_webengineview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QWebEngineView_OnFocusNextPrevChild((QWebEngineView*)self, (intptr_t)slot);
}

bool q_webengineview_event_filter(void* self, void* watched, void* event) {
    return QWebEngineView_EventFilter((QWebEngineView*)self, (QObject*)watched, (QEvent*)event);
}

bool q_webengineview_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebEngineView_QBaseEventFilter((QWebEngineView*)self, (QObject*)watched, (QEvent*)event);
}

void q_webengineview_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWebEngineView_OnEventFilter((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_timer_event(void* self, void* event) {
    QWebEngineView_TimerEvent((QWebEngineView*)self, (QTimerEvent*)event);
}

void q_webengineview_qbase_timer_event(void* self, void* event) {
    QWebEngineView_QBaseTimerEvent((QWebEngineView*)self, (QTimerEvent*)event);
}

void q_webengineview_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnTimerEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_child_event(void* self, void* event) {
    QWebEngineView_ChildEvent((QWebEngineView*)self, (QChildEvent*)event);
}

void q_webengineview_qbase_child_event(void* self, void* event) {
    QWebEngineView_QBaseChildEvent((QWebEngineView*)self, (QChildEvent*)event);
}

void q_webengineview_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnChildEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_custom_event(void* self, void* event) {
    QWebEngineView_CustomEvent((QWebEngineView*)self, (QEvent*)event);
}

void q_webengineview_qbase_custom_event(void* self, void* event) {
    QWebEngineView_QBaseCustomEvent((QWebEngineView*)self, (QEvent*)event);
}

void q_webengineview_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnCustomEvent((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_connect_notify(void* self, void* signal) {
    QWebEngineView_ConnectNotify((QWebEngineView*)self, (QMetaMethod*)signal);
}

void q_webengineview_qbase_connect_notify(void* self, void* signal) {
    QWebEngineView_QBaseConnectNotify((QWebEngineView*)self, (QMetaMethod*)signal);
}

void q_webengineview_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnConnectNotify((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_disconnect_notify(void* self, void* signal) {
    QWebEngineView_DisconnectNotify((QWebEngineView*)self, (QMetaMethod*)signal);
}

void q_webengineview_qbase_disconnect_notify(void* self, void* signal) {
    QWebEngineView_QBaseDisconnectNotify((QWebEngineView*)self, (QMetaMethod*)signal);
}

void q_webengineview_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWebEngineView_OnDisconnectNotify((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_update_micro_focus(void* self) {
    QWebEngineView_UpdateMicroFocus((QWebEngineView*)self);
}

void q_webengineview_qbase_update_micro_focus(void* self) {
    QWebEngineView_QBaseUpdateMicroFocus((QWebEngineView*)self);
}

void q_webengineview_on_update_micro_focus(void* self, void (*slot)()) {
    QWebEngineView_OnUpdateMicroFocus((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_create(void* self) {
    QWebEngineView_Create((QWebEngineView*)self);
}

void q_webengineview_qbase_create(void* self) {
    QWebEngineView_QBaseCreate((QWebEngineView*)self);
}

void q_webengineview_on_create(void* self, void (*slot)()) {
    QWebEngineView_OnCreate((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_destroy(void* self) {
    QWebEngineView_Destroy((QWebEngineView*)self);
}

void q_webengineview_qbase_destroy(void* self) {
    QWebEngineView_QBaseDestroy((QWebEngineView*)self);
}

void q_webengineview_on_destroy(void* self, void (*slot)()) {
    QWebEngineView_OnDestroy((QWebEngineView*)self, (intptr_t)slot);
}

bool q_webengineview_focus_next_child(void* self) {
    return QWebEngineView_FocusNextChild((QWebEngineView*)self);
}

bool q_webengineview_qbase_focus_next_child(void* self) {
    return QWebEngineView_QBaseFocusNextChild((QWebEngineView*)self);
}

void q_webengineview_on_focus_next_child(void* self, bool (*slot)()) {
    QWebEngineView_OnFocusNextChild((QWebEngineView*)self, (intptr_t)slot);
}

bool q_webengineview_focus_previous_child(void* self) {
    return QWebEngineView_FocusPreviousChild((QWebEngineView*)self);
}

bool q_webengineview_qbase_focus_previous_child(void* self) {
    return QWebEngineView_QBaseFocusPreviousChild((QWebEngineView*)self);
}

void q_webengineview_on_focus_previous_child(void* self, bool (*slot)()) {
    QWebEngineView_OnFocusPreviousChild((QWebEngineView*)self, (intptr_t)slot);
}

QObject* q_webengineview_sender(void* self) {
    return QWebEngineView_Sender((QWebEngineView*)self);
}

QObject* q_webengineview_qbase_sender(void* self) {
    return QWebEngineView_QBaseSender((QWebEngineView*)self);
}

void q_webengineview_on_sender(void* self, QObject* (*slot)()) {
    QWebEngineView_OnSender((QWebEngineView*)self, (intptr_t)slot);
}

int32_t q_webengineview_sender_signal_index(void* self) {
    return QWebEngineView_SenderSignalIndex((QWebEngineView*)self);
}

int32_t q_webengineview_qbase_sender_signal_index(void* self) {
    return QWebEngineView_QBaseSenderSignalIndex((QWebEngineView*)self);
}

void q_webengineview_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWebEngineView_OnSenderSignalIndex((QWebEngineView*)self, (intptr_t)slot);
}

int32_t q_webengineview_receivers(void* self, const char* signal) {
    return QWebEngineView_Receivers((QWebEngineView*)self, signal);
}

int32_t q_webengineview_qbase_receivers(void* self, const char* signal) {
    return QWebEngineView_QBaseReceivers((QWebEngineView*)self, signal);
}

void q_webengineview_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWebEngineView_OnReceivers((QWebEngineView*)self, (intptr_t)slot);
}

bool q_webengineview_is_signal_connected(void* self, void* signal) {
    return QWebEngineView_IsSignalConnected((QWebEngineView*)self, (QMetaMethod*)signal);
}

bool q_webengineview_qbase_is_signal_connected(void* self, void* signal) {
    return QWebEngineView_QBaseIsSignalConnected((QWebEngineView*)self, (QMetaMethod*)signal);
}

void q_webengineview_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWebEngineView_OnIsSignalConnected((QWebEngineView*)self, (intptr_t)slot);
}

void q_webengineview_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_webengineview_delete(void* self) {
    QWebEngineView_Delete((QWebEngineView*)(self));
}
