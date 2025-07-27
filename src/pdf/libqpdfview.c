#include "../libqabstractscrollarea.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqframe.hpp"
#include "../libqmargins.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "libqpdfdocument.hpp"
#include "libqpdfpagenavigator.hpp"
#include "libqpdfsearchmodel.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libqpdfview.hpp"
#include "libqpdfview.h"

QPdfView* q_pdfview_new(void* parent) {
    return QPdfView_new((QWidget*)parent);
}

QPdfView* q_pdfview_new2() {
    return QPdfView_new2();
}

const QMetaObject* q_pdfview_meta_object(void* self) {
    return QPdfView_MetaObject((QPdfView*)self);
}

void* q_pdfview_metacast(void* self, const char* param1) {
    return QPdfView_Metacast((QPdfView*)self, param1);
}

int32_t q_pdfview_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPdfView_Metacall((QPdfView*)self, param1, param2, param3);
}

void q_pdfview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPdfView_OnMetacall((QPdfView*)self, (intptr_t)slot);
}

int32_t q_pdfview_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPdfView_QBaseMetacall((QPdfView*)self, param1, param2, param3);
}

const char* q_pdfview_tr(const char* s) {
    libqt_string _str = QPdfView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfview_set_document(void* self, void* document) {
    QPdfView_SetDocument((QPdfView*)self, (QPdfDocument*)document);
}

QPdfDocument* q_pdfview_document(void* self) {
    return QPdfView_Document((QPdfView*)self);
}

QPdfSearchModel* q_pdfview_search_model(void* self) {
    return QPdfView_SearchModel((QPdfView*)self);
}

void q_pdfview_set_search_model(void* self, void* searchModel) {
    QPdfView_SetSearchModel((QPdfView*)self, (QPdfSearchModel*)searchModel);
}

int32_t q_pdfview_current_search_result_index(void* self) {
    return QPdfView_CurrentSearchResultIndex((QPdfView*)self);
}

QPdfPageNavigator* q_pdfview_page_navigator(void* self) {
    return QPdfView_PageNavigator((QPdfView*)self);
}

int64_t q_pdfview_page_mode(void* self) {
    return QPdfView_PageMode((QPdfView*)self);
}

int64_t q_pdfview_zoom_mode(void* self) {
    return QPdfView_ZoomMode((QPdfView*)self);
}

double q_pdfview_zoom_factor(void* self) {
    return QPdfView_ZoomFactor((QPdfView*)self);
}

int32_t q_pdfview_page_spacing(void* self) {
    return QPdfView_PageSpacing((QPdfView*)self);
}

void q_pdfview_set_page_spacing(void* self, int spacing) {
    QPdfView_SetPageSpacing((QPdfView*)self, spacing);
}

QMargins* q_pdfview_document_margins(void* self) {
    return QPdfView_DocumentMargins((QPdfView*)self);
}

void q_pdfview_set_document_margins(void* self, void* margins) {
    QPdfView_SetDocumentMargins((QPdfView*)self, (QMargins*)margins);
}

void q_pdfview_set_page_mode(void* self, int64_t mode) {
    QPdfView_SetPageMode((QPdfView*)self, mode);
}

void q_pdfview_set_zoom_mode(void* self, int64_t mode) {
    QPdfView_SetZoomMode((QPdfView*)self, mode);
}

void q_pdfview_set_zoom_factor(void* self, double factor) {
    QPdfView_SetZoomFactor((QPdfView*)self, factor);
}

void q_pdfview_set_current_search_result_index(void* self, int currentResult) {
    QPdfView_SetCurrentSearchResultIndex((QPdfView*)self, currentResult);
}

void q_pdfview_document_changed(void* self, void* document) {
    QPdfView_DocumentChanged((QPdfView*)self, (QPdfDocument*)document);
}

void q_pdfview_on_document_changed(void* self, void (*slot)(void*, void*)) {
    QPdfView_Connect_DocumentChanged((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_page_mode_changed(void* self, int64_t pageMode) {
    QPdfView_PageModeChanged((QPdfView*)self, pageMode);
}

void q_pdfview_on_page_mode_changed(void* self, void (*slot)(void*, int64_t)) {
    QPdfView_Connect_PageModeChanged((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_zoom_mode_changed(void* self, int64_t zoomMode) {
    QPdfView_ZoomModeChanged((QPdfView*)self, zoomMode);
}

void q_pdfview_on_zoom_mode_changed(void* self, void (*slot)(void*, int64_t)) {
    QPdfView_Connect_ZoomModeChanged((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_zoom_factor_changed(void* self, double zoomFactor) {
    QPdfView_ZoomFactorChanged((QPdfView*)self, zoomFactor);
}

void q_pdfview_on_zoom_factor_changed(void* self, void (*slot)(void*, double)) {
    QPdfView_Connect_ZoomFactorChanged((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_page_spacing_changed(void* self, int pageSpacing) {
    QPdfView_PageSpacingChanged((QPdfView*)self, pageSpacing);
}

void q_pdfview_on_page_spacing_changed(void* self, void (*slot)(void*, int)) {
    QPdfView_Connect_PageSpacingChanged((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_document_margins_changed(void* self, void* documentMargins) {
    QPdfView_DocumentMarginsChanged((QPdfView*)self, (QMargins*)documentMargins);
}

void q_pdfview_on_document_margins_changed(void* self, void (*slot)(void*, void*)) {
    QPdfView_Connect_DocumentMarginsChanged((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_search_model_changed(void* self, void* searchModel) {
    QPdfView_SearchModelChanged((QPdfView*)self, (QPdfSearchModel*)searchModel);
}

void q_pdfview_on_search_model_changed(void* self, void (*slot)(void*, void*)) {
    QPdfView_Connect_SearchModelChanged((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_current_search_result_index_changed(void* self, int currentResult) {
    QPdfView_CurrentSearchResultIndexChanged((QPdfView*)self, currentResult);
}

void q_pdfview_on_current_search_result_index_changed(void* self, void (*slot)(void*, int)) {
    QPdfView_Connect_CurrentSearchResultIndexChanged((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_paint_event(void* self, void* event) {
    QPdfView_PaintEvent((QPdfView*)self, (QPaintEvent*)event);
}

void q_pdfview_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnPaintEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_qbase_paint_event(void* self, void* event) {
    QPdfView_QBasePaintEvent((QPdfView*)self, (QPaintEvent*)event);
}

void q_pdfview_resize_event(void* self, void* event) {
    QPdfView_ResizeEvent((QPdfView*)self, (QResizeEvent*)event);
}

void q_pdfview_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnResizeEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_qbase_resize_event(void* self, void* event) {
    QPdfView_QBaseResizeEvent((QPdfView*)self, (QResizeEvent*)event);
}

void q_pdfview_scroll_contents_by(void* self, int dx, int dy) {
    QPdfView_ScrollContentsBy((QPdfView*)self, dx, dy);
}

void q_pdfview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QPdfView_OnScrollContentsBy((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QPdfView_QBaseScrollContentsBy((QPdfView*)self, dx, dy);
}

void q_pdfview_mouse_press_event(void* self, void* event) {
    QPdfView_MousePressEvent((QPdfView*)self, (QMouseEvent*)event);
}

void q_pdfview_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnMousePressEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_qbase_mouse_press_event(void* self, void* event) {
    QPdfView_QBaseMousePressEvent((QPdfView*)self, (QMouseEvent*)event);
}

void q_pdfview_mouse_move_event(void* self, void* event) {
    QPdfView_MouseMoveEvent((QPdfView*)self, (QMouseEvent*)event);
}

void q_pdfview_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnMouseMoveEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_qbase_mouse_move_event(void* self, void* event) {
    QPdfView_QBaseMouseMoveEvent((QPdfView*)self, (QMouseEvent*)event);
}

void q_pdfview_mouse_release_event(void* self, void* event) {
    QPdfView_MouseReleaseEvent((QPdfView*)self, (QMouseEvent*)event);
}

void q_pdfview_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnMouseReleaseEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_qbase_mouse_release_event(void* self, void* event) {
    QPdfView_QBaseMouseReleaseEvent((QPdfView*)self, (QMouseEvent*)event);
}

const char* q_pdfview_tr2(const char* s, const char* c) {
    libqt_string _str = QPdfView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPdfView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_pdfview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_pdfview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_pdfview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_pdfview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int64_t q_pdfview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_pdfview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_pdfview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_pdfview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_pdfview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_pdfview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_pdfview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_pdfview_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_pdfview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_pdfview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_pdfview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int64_t q_pdfview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_pdfview_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_pdfview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_pdfview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_pdfview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int64_t q_pdfview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_pdfview_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int64_t q_pdfview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_pdfview_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_pdfview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_pdfview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_pdfview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_pdfview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_pdfview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_pdfview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_pdfview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_pdfview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_pdfview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_pdfview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_pdfview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_pdfview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_pdfview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_pdfview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_pdfview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_pdfview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_pdfview_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_pdfview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_pdfview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_pdfview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_pdfview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_pdfview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_pdfview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_pdfview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_pdfview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_pdfview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_pdfview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_pdfview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_pdfview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_pdfview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_pdfview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_pdfview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_pdfview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_pdfview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_pdfview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_pdfview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_pdfview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_pdfview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_pdfview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_pdfview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_pdfview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_pdfview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_pdfview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_pdfview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_pdfview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_pdfview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_pdfview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_pdfview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_pdfview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_pdfview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_pdfview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_pdfview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_pdfview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_pdfview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_pdfview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_pdfview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_pdfview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_pdfview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_pdfview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_pdfview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_pdfview_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_pdfview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_pdfview_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_pdfview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_pdfview_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_pdfview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_pdfview_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_pdfview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_pdfview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_pdfview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_pdfview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_pdfview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_pdfview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_pdfview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_pdfview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_pdfview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_pdfview_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_pdfview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_pdfview_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_pdfview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_pdfview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_pdfview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_pdfview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_pdfview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_pdfview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_pdfview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_pdfview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_pdfview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_pdfview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_pdfview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_pdfview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_pdfview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_pdfview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_pdfview_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_pdfview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_pdfview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_pdfview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_pdfview_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_pdfview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_pdfview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_pdfview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_pdfview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_pdfview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_pdfview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_pdfview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_pdfview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_pdfview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_pdfview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_pdfview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_pdfview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_pdfview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_pdfview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_pdfview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_pdfview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_pdfview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_pdfview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_pdfview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_pdfview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_pdfview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_pdfview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_pdfview_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_pdfview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_pdfview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_pdfview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_pdfview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_pdfview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_pdfview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_pdfview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_pdfview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_pdfview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_pdfview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_pdfview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_pdfview_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_pdfview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_pdfview_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_pdfview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_pdfview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_pdfview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_pdfview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_pdfview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_pdfview_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_pdfview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_pdfview_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_pdfview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_pdfview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_pdfview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_pdfview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_pdfview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_pdfview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_pdfview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_pdfview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_pdfview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_pdfview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_pdfview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_pdfview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_pdfview_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_pdfview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_pdfview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_pdfview_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_pdfview_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_pdfview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_pdfview_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_pdfview_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_pdfview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_pdfview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_pdfview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_pdfview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_pdfview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_pdfview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_pdfview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_pdfview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_pdfview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_pdfview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_pdfview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_pdfview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_pdfview_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_pdfview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_pdfview_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_pdfview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_pdfview_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_pdfview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_pdfview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_pdfview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_pdfview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_pdfview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_pdfview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_pdfview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_pdfview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_pdfview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_pdfview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_pdfview_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_pdfview_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_pdfview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_pdfview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_pdfview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_pdfview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_pdfview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_pdfview_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_pdfview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_pdfview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_pdfview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_pdfview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_pdfview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_pdfview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_pdfview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_pdfview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_pdfview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_pdfview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_pdfview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_pdfview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_pdfview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_pdfview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_pdfview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_pdfview_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_pdfview_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_pdfview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_pdfview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_pdfview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_pdfview_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_pdfview_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_pdfview_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_pdfview_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_pdfview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_pdfview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_pdfview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_pdfview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_pdfview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_pdfview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_pdfview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_pdfview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_pdfview_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_pdfview_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_pdfview_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_pdfview_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_pdfview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_pdfview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_pdfview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_pdfview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_pdfview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_pdfview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_pdfview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_pdfview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_pdfview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_pdfview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_pdfview_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_pdfview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_pdfview_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_pdfview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_pdfview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_pdfview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_pdfview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_pdfview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_pdfview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_pdfview_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_pdfview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_pdfview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_pdfview_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_pdfview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_pdfview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_pdfview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_pdfview_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_pdfview_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_pdfview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_pdfview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_pdfview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_pdfview_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_pdfview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_pdfview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_pdfview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfview_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pdfview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pdfview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pdfview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pdfview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pdfview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pdfview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pdfview_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pdfview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pdfview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pdfview_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pdfview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pdfview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pdfview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pdfview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pdfview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pdfview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pdfview_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pdfview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pdfview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pdfview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pdfview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pdfview_dynamic_property_names(void* self) {
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
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_pdfview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pdfview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pdfview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pdfview_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_pdfview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pdfview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pdfview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pdfview_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pdfview_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pdfview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_pdfview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_pdfview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pdfview_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_pdfview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_pdfview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_pdfview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_pdfview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_pdfview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_pdfview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_pdfview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_pdfview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_pdfview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_pdfview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_pdfview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_pdfview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_pdfview_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* q_pdfview_minimum_size_hint(void* self) {
    return QPdfView_MinimumSizeHint((QPdfView*)self);
}

QSize* q_pdfview_qbase_minimum_size_hint(void* self) {
    return QPdfView_QBaseMinimumSizeHint((QPdfView*)self);
}

void q_pdfview_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QPdfView_OnMinimumSizeHint((QPdfView*)self, (intptr_t)slot);
}

QSize* q_pdfview_size_hint(void* self) {
    return QPdfView_SizeHint((QPdfView*)self);
}

QSize* q_pdfview_qbase_size_hint(void* self) {
    return QPdfView_QBaseSizeHint((QPdfView*)self);
}

void q_pdfview_on_size_hint(void* self, QSize* (*slot)()) {
    QPdfView_OnSizeHint((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_setup_viewport(void* self, void* viewport) {
    QPdfView_SetupViewport((QPdfView*)self, (QWidget*)viewport);
}

void q_pdfview_qbase_setup_viewport(void* self, void* viewport) {
    QPdfView_QBaseSetupViewport((QPdfView*)self, (QWidget*)viewport);
}

void q_pdfview_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnSetupViewport((QPdfView*)self, (intptr_t)slot);
}

bool q_pdfview_event_filter(void* self, void* param1, void* param2) {
    return QPdfView_EventFilter((QPdfView*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_pdfview_qbase_event_filter(void* self, void* param1, void* param2) {
    return QPdfView_QBaseEventFilter((QPdfView*)self, (QObject*)param1, (QEvent*)param2);
}

void q_pdfview_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPdfView_OnEventFilter((QPdfView*)self, (intptr_t)slot);
}

bool q_pdfview_event(void* self, void* param1) {
    return QPdfView_Event((QPdfView*)self, (QEvent*)param1);
}

bool q_pdfview_qbase_event(void* self, void* param1) {
    return QPdfView_QBaseEvent((QPdfView*)self, (QEvent*)param1);
}

void q_pdfview_on_event(void* self, bool (*slot)(void*, void*)) {
    QPdfView_OnEvent((QPdfView*)self, (intptr_t)slot);
}

bool q_pdfview_viewport_event(void* self, void* param1) {
    return QPdfView_ViewportEvent((QPdfView*)self, (QEvent*)param1);
}

bool q_pdfview_qbase_viewport_event(void* self, void* param1) {
    return QPdfView_QBaseViewportEvent((QPdfView*)self, (QEvent*)param1);
}

void q_pdfview_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QPdfView_OnViewportEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_mouse_double_click_event(void* self, void* param1) {
    QPdfView_MouseDoubleClickEvent((QPdfView*)self, (QMouseEvent*)param1);
}

void q_pdfview_qbase_mouse_double_click_event(void* self, void* param1) {
    QPdfView_QBaseMouseDoubleClickEvent((QPdfView*)self, (QMouseEvent*)param1);
}

void q_pdfview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnMouseDoubleClickEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_wheel_event(void* self, void* param1) {
    QPdfView_WheelEvent((QPdfView*)self, (QWheelEvent*)param1);
}

void q_pdfview_qbase_wheel_event(void* self, void* param1) {
    QPdfView_QBaseWheelEvent((QPdfView*)self, (QWheelEvent*)param1);
}

void q_pdfview_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnWheelEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_context_menu_event(void* self, void* param1) {
    QPdfView_ContextMenuEvent((QPdfView*)self, (QContextMenuEvent*)param1);
}

void q_pdfview_qbase_context_menu_event(void* self, void* param1) {
    QPdfView_QBaseContextMenuEvent((QPdfView*)self, (QContextMenuEvent*)param1);
}

void q_pdfview_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnContextMenuEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_drag_enter_event(void* self, void* param1) {
    QPdfView_DragEnterEvent((QPdfView*)self, (QDragEnterEvent*)param1);
}

void q_pdfview_qbase_drag_enter_event(void* self, void* param1) {
    QPdfView_QBaseDragEnterEvent((QPdfView*)self, (QDragEnterEvent*)param1);
}

void q_pdfview_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnDragEnterEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_drag_move_event(void* self, void* param1) {
    QPdfView_DragMoveEvent((QPdfView*)self, (QDragMoveEvent*)param1);
}

void q_pdfview_qbase_drag_move_event(void* self, void* param1) {
    QPdfView_QBaseDragMoveEvent((QPdfView*)self, (QDragMoveEvent*)param1);
}

void q_pdfview_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnDragMoveEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_drag_leave_event(void* self, void* param1) {
    QPdfView_DragLeaveEvent((QPdfView*)self, (QDragLeaveEvent*)param1);
}

void q_pdfview_qbase_drag_leave_event(void* self, void* param1) {
    QPdfView_QBaseDragLeaveEvent((QPdfView*)self, (QDragLeaveEvent*)param1);
}

void q_pdfview_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnDragLeaveEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_drop_event(void* self, void* param1) {
    QPdfView_DropEvent((QPdfView*)self, (QDropEvent*)param1);
}

void q_pdfview_qbase_drop_event(void* self, void* param1) {
    QPdfView_QBaseDropEvent((QPdfView*)self, (QDropEvent*)param1);
}

void q_pdfview_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnDropEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_key_press_event(void* self, void* param1) {
    QPdfView_KeyPressEvent((QPdfView*)self, (QKeyEvent*)param1);
}

void q_pdfview_qbase_key_press_event(void* self, void* param1) {
    QPdfView_QBaseKeyPressEvent((QPdfView*)self, (QKeyEvent*)param1);
}

void q_pdfview_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnKeyPressEvent((QPdfView*)self, (intptr_t)slot);
}

QSize* q_pdfview_viewport_size_hint(void* self) {
    return QPdfView_ViewportSizeHint((QPdfView*)self);
}

QSize* q_pdfview_qbase_viewport_size_hint(void* self) {
    return QPdfView_QBaseViewportSizeHint((QPdfView*)self);
}

void q_pdfview_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QPdfView_OnViewportSizeHint((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_change_event(void* self, void* param1) {
    QPdfView_ChangeEvent((QPdfView*)self, (QEvent*)param1);
}

void q_pdfview_qbase_change_event(void* self, void* param1) {
    QPdfView_QBaseChangeEvent((QPdfView*)self, (QEvent*)param1);
}

void q_pdfview_on_change_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnChangeEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_init_style_option(void* self, void* option) {
    QPdfView_InitStyleOption((QPdfView*)self, (QStyleOptionFrame*)option);
}

void q_pdfview_qbase_init_style_option(void* self, void* option) {
    QPdfView_QBaseInitStyleOption((QPdfView*)self, (QStyleOptionFrame*)option);
}

void q_pdfview_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnInitStyleOption((QPdfView*)self, (intptr_t)slot);
}

int32_t q_pdfview_dev_type(void* self) {
    return QPdfView_DevType((QPdfView*)self);
}

int32_t q_pdfview_qbase_dev_type(void* self) {
    return QPdfView_QBaseDevType((QPdfView*)self);
}

void q_pdfview_on_dev_type(void* self, int32_t (*slot)()) {
    QPdfView_OnDevType((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_set_visible(void* self, bool visible) {
    QPdfView_SetVisible((QPdfView*)self, visible);
}

void q_pdfview_qbase_set_visible(void* self, bool visible) {
    QPdfView_QBaseSetVisible((QPdfView*)self, visible);
}

void q_pdfview_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QPdfView_OnSetVisible((QPdfView*)self, (intptr_t)slot);
}

int32_t q_pdfview_height_for_width(void* self, int param1) {
    return QPdfView_HeightForWidth((QPdfView*)self, param1);
}

int32_t q_pdfview_qbase_height_for_width(void* self, int param1) {
    return QPdfView_QBaseHeightForWidth((QPdfView*)self, param1);
}

void q_pdfview_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QPdfView_OnHeightForWidth((QPdfView*)self, (intptr_t)slot);
}

bool q_pdfview_has_height_for_width(void* self) {
    return QPdfView_HasHeightForWidth((QPdfView*)self);
}

bool q_pdfview_qbase_has_height_for_width(void* self) {
    return QPdfView_QBaseHasHeightForWidth((QPdfView*)self);
}

void q_pdfview_on_has_height_for_width(void* self, bool (*slot)()) {
    QPdfView_OnHasHeightForWidth((QPdfView*)self, (intptr_t)slot);
}

QPaintEngine* q_pdfview_paint_engine(void* self) {
    return QPdfView_PaintEngine((QPdfView*)self);
}

QPaintEngine* q_pdfview_qbase_paint_engine(void* self) {
    return QPdfView_QBasePaintEngine((QPdfView*)self);
}

void q_pdfview_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QPdfView_OnPaintEngine((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_key_release_event(void* self, void* event) {
    QPdfView_KeyReleaseEvent((QPdfView*)self, (QKeyEvent*)event);
}

void q_pdfview_qbase_key_release_event(void* self, void* event) {
    QPdfView_QBaseKeyReleaseEvent((QPdfView*)self, (QKeyEvent*)event);
}

void q_pdfview_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnKeyReleaseEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_focus_in_event(void* self, void* event) {
    QPdfView_FocusInEvent((QPdfView*)self, (QFocusEvent*)event);
}

void q_pdfview_qbase_focus_in_event(void* self, void* event) {
    QPdfView_QBaseFocusInEvent((QPdfView*)self, (QFocusEvent*)event);
}

void q_pdfview_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnFocusInEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_focus_out_event(void* self, void* event) {
    QPdfView_FocusOutEvent((QPdfView*)self, (QFocusEvent*)event);
}

void q_pdfview_qbase_focus_out_event(void* self, void* event) {
    QPdfView_QBaseFocusOutEvent((QPdfView*)self, (QFocusEvent*)event);
}

void q_pdfview_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnFocusOutEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_enter_event(void* self, void* event) {
    QPdfView_EnterEvent((QPdfView*)self, (QEnterEvent*)event);
}

void q_pdfview_qbase_enter_event(void* self, void* event) {
    QPdfView_QBaseEnterEvent((QPdfView*)self, (QEnterEvent*)event);
}

void q_pdfview_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnEnterEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_leave_event(void* self, void* event) {
    QPdfView_LeaveEvent((QPdfView*)self, (QEvent*)event);
}

void q_pdfview_qbase_leave_event(void* self, void* event) {
    QPdfView_QBaseLeaveEvent((QPdfView*)self, (QEvent*)event);
}

void q_pdfview_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnLeaveEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_move_event(void* self, void* event) {
    QPdfView_MoveEvent((QPdfView*)self, (QMoveEvent*)event);
}

void q_pdfview_qbase_move_event(void* self, void* event) {
    QPdfView_QBaseMoveEvent((QPdfView*)self, (QMoveEvent*)event);
}

void q_pdfview_on_move_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnMoveEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_close_event(void* self, void* event) {
    QPdfView_CloseEvent((QPdfView*)self, (QCloseEvent*)event);
}

void q_pdfview_qbase_close_event(void* self, void* event) {
    QPdfView_QBaseCloseEvent((QPdfView*)self, (QCloseEvent*)event);
}

void q_pdfview_on_close_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnCloseEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_tablet_event(void* self, void* event) {
    QPdfView_TabletEvent((QPdfView*)self, (QTabletEvent*)event);
}

void q_pdfview_qbase_tablet_event(void* self, void* event) {
    QPdfView_QBaseTabletEvent((QPdfView*)self, (QTabletEvent*)event);
}

void q_pdfview_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnTabletEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_action_event(void* self, void* event) {
    QPdfView_ActionEvent((QPdfView*)self, (QActionEvent*)event);
}

void q_pdfview_qbase_action_event(void* self, void* event) {
    QPdfView_QBaseActionEvent((QPdfView*)self, (QActionEvent*)event);
}

void q_pdfview_on_action_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnActionEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_show_event(void* self, void* event) {
    QPdfView_ShowEvent((QPdfView*)self, (QShowEvent*)event);
}

void q_pdfview_qbase_show_event(void* self, void* event) {
    QPdfView_QBaseShowEvent((QPdfView*)self, (QShowEvent*)event);
}

void q_pdfview_on_show_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnShowEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_hide_event(void* self, void* event) {
    QPdfView_HideEvent((QPdfView*)self, (QHideEvent*)event);
}

void q_pdfview_qbase_hide_event(void* self, void* event) {
    QPdfView_QBaseHideEvent((QPdfView*)self, (QHideEvent*)event);
}

void q_pdfview_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnHideEvent((QPdfView*)self, (intptr_t)slot);
}

bool q_pdfview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPdfView_NativeEvent((QPdfView*)self, qstring(eventType), message, result);
}

bool q_pdfview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPdfView_QBaseNativeEvent((QPdfView*)self, qstring(eventType), message, result);
}

void q_pdfview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QPdfView_OnNativeEvent((QPdfView*)self, (intptr_t)slot);
}

int32_t q_pdfview_metric(void* self, int64_t param1) {
    return QPdfView_Metric((QPdfView*)self, param1);
}

int32_t q_pdfview_qbase_metric(void* self, int64_t param1) {
    return QPdfView_QBaseMetric((QPdfView*)self, param1);
}

void q_pdfview_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QPdfView_OnMetric((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_init_painter(void* self, void* painter) {
    QPdfView_InitPainter((QPdfView*)self, (QPainter*)painter);
}

void q_pdfview_qbase_init_painter(void* self, void* painter) {
    QPdfView_QBaseInitPainter((QPdfView*)self, (QPainter*)painter);
}

void q_pdfview_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnInitPainter((QPdfView*)self, (intptr_t)slot);
}

QPaintDevice* q_pdfview_redirected(void* self, void* offset) {
    return QPdfView_Redirected((QPdfView*)self, (QPoint*)offset);
}

QPaintDevice* q_pdfview_qbase_redirected(void* self, void* offset) {
    return QPdfView_QBaseRedirected((QPdfView*)self, (QPoint*)offset);
}

void q_pdfview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QPdfView_OnRedirected((QPdfView*)self, (intptr_t)slot);
}

QPainter* q_pdfview_shared_painter(void* self) {
    return QPdfView_SharedPainter((QPdfView*)self);
}

QPainter* q_pdfview_qbase_shared_painter(void* self) {
    return QPdfView_QBaseSharedPainter((QPdfView*)self);
}

void q_pdfview_on_shared_painter(void* self, QPainter* (*slot)()) {
    QPdfView_OnSharedPainter((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_input_method_event(void* self, void* param1) {
    QPdfView_InputMethodEvent((QPdfView*)self, (QInputMethodEvent*)param1);
}

void q_pdfview_qbase_input_method_event(void* self, void* param1) {
    QPdfView_QBaseInputMethodEvent((QPdfView*)self, (QInputMethodEvent*)param1);
}

void q_pdfview_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnInputMethodEvent((QPdfView*)self, (intptr_t)slot);
}

QVariant* q_pdfview_input_method_query(void* self, int64_t param1) {
    return QPdfView_InputMethodQuery((QPdfView*)self, param1);
}

QVariant* q_pdfview_qbase_input_method_query(void* self, int64_t param1) {
    return QPdfView_QBaseInputMethodQuery((QPdfView*)self, param1);
}

void q_pdfview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QPdfView_OnInputMethodQuery((QPdfView*)self, (intptr_t)slot);
}

bool q_pdfview_focus_next_prev_child(void* self, bool next) {
    return QPdfView_FocusNextPrevChild((QPdfView*)self, next);
}

bool q_pdfview_qbase_focus_next_prev_child(void* self, bool next) {
    return QPdfView_QBaseFocusNextPrevChild((QPdfView*)self, next);
}

void q_pdfview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QPdfView_OnFocusNextPrevChild((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_timer_event(void* self, void* event) {
    QPdfView_TimerEvent((QPdfView*)self, (QTimerEvent*)event);
}

void q_pdfview_qbase_timer_event(void* self, void* event) {
    QPdfView_QBaseTimerEvent((QPdfView*)self, (QTimerEvent*)event);
}

void q_pdfview_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnTimerEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_child_event(void* self, void* event) {
    QPdfView_ChildEvent((QPdfView*)self, (QChildEvent*)event);
}

void q_pdfview_qbase_child_event(void* self, void* event) {
    QPdfView_QBaseChildEvent((QPdfView*)self, (QChildEvent*)event);
}

void q_pdfview_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnChildEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_custom_event(void* self, void* event) {
    QPdfView_CustomEvent((QPdfView*)self, (QEvent*)event);
}

void q_pdfview_qbase_custom_event(void* self, void* event) {
    QPdfView_QBaseCustomEvent((QPdfView*)self, (QEvent*)event);
}

void q_pdfview_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnCustomEvent((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_connect_notify(void* self, void* signal) {
    QPdfView_ConnectNotify((QPdfView*)self, (QMetaMethod*)signal);
}

void q_pdfview_qbase_connect_notify(void* self, void* signal) {
    QPdfView_QBaseConnectNotify((QPdfView*)self, (QMetaMethod*)signal);
}

void q_pdfview_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnConnectNotify((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_disconnect_notify(void* self, void* signal) {
    QPdfView_DisconnectNotify((QPdfView*)self, (QMetaMethod*)signal);
}

void q_pdfview_qbase_disconnect_notify(void* self, void* signal) {
    QPdfView_QBaseDisconnectNotify((QPdfView*)self, (QMetaMethod*)signal);
}

void q_pdfview_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnDisconnectNotify((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QPdfView_SetViewportMargins((QPdfView*)self, left, top, right, bottom);
}

void q_pdfview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QPdfView_QBaseSetViewportMargins((QPdfView*)self, left, top, right, bottom);
}

void q_pdfview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QPdfView_OnSetViewportMargins((QPdfView*)self, (intptr_t)slot);
}

QMargins* q_pdfview_viewport_margins(void* self) {
    return QPdfView_ViewportMargins((QPdfView*)self);
}

QMargins* q_pdfview_qbase_viewport_margins(void* self) {
    return QPdfView_QBaseViewportMargins((QPdfView*)self);
}

void q_pdfview_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QPdfView_OnViewportMargins((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_draw_frame(void* self, void* param1) {
    QPdfView_DrawFrame((QPdfView*)self, (QPainter*)param1);
}

void q_pdfview_qbase_draw_frame(void* self, void* param1) {
    QPdfView_QBaseDrawFrame((QPdfView*)self, (QPainter*)param1);
}

void q_pdfview_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QPdfView_OnDrawFrame((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_update_micro_focus(void* self) {
    QPdfView_UpdateMicroFocus((QPdfView*)self);
}

void q_pdfview_qbase_update_micro_focus(void* self) {
    QPdfView_QBaseUpdateMicroFocus((QPdfView*)self);
}

void q_pdfview_on_update_micro_focus(void* self, void (*slot)()) {
    QPdfView_OnUpdateMicroFocus((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_create(void* self) {
    QPdfView_Create((QPdfView*)self);
}

void q_pdfview_qbase_create(void* self) {
    QPdfView_QBaseCreate((QPdfView*)self);
}

void q_pdfview_on_create(void* self, void (*slot)()) {
    QPdfView_OnCreate((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_destroy(void* self) {
    QPdfView_Destroy((QPdfView*)self);
}

void q_pdfview_qbase_destroy(void* self) {
    QPdfView_QBaseDestroy((QPdfView*)self);
}

void q_pdfview_on_destroy(void* self, void (*slot)()) {
    QPdfView_OnDestroy((QPdfView*)self, (intptr_t)slot);
}

bool q_pdfview_focus_next_child(void* self) {
    return QPdfView_FocusNextChild((QPdfView*)self);
}

bool q_pdfview_qbase_focus_next_child(void* self) {
    return QPdfView_QBaseFocusNextChild((QPdfView*)self);
}

void q_pdfview_on_focus_next_child(void* self, bool (*slot)()) {
    QPdfView_OnFocusNextChild((QPdfView*)self, (intptr_t)slot);
}

bool q_pdfview_focus_previous_child(void* self) {
    return QPdfView_FocusPreviousChild((QPdfView*)self);
}

bool q_pdfview_qbase_focus_previous_child(void* self) {
    return QPdfView_QBaseFocusPreviousChild((QPdfView*)self);
}

void q_pdfview_on_focus_previous_child(void* self, bool (*slot)()) {
    QPdfView_OnFocusPreviousChild((QPdfView*)self, (intptr_t)slot);
}

QObject* q_pdfview_sender(void* self) {
    return QPdfView_Sender((QPdfView*)self);
}

QObject* q_pdfview_qbase_sender(void* self) {
    return QPdfView_QBaseSender((QPdfView*)self);
}

void q_pdfview_on_sender(void* self, QObject* (*slot)()) {
    QPdfView_OnSender((QPdfView*)self, (intptr_t)slot);
}

int32_t q_pdfview_sender_signal_index(void* self) {
    return QPdfView_SenderSignalIndex((QPdfView*)self);
}

int32_t q_pdfview_qbase_sender_signal_index(void* self) {
    return QPdfView_QBaseSenderSignalIndex((QPdfView*)self);
}

void q_pdfview_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPdfView_OnSenderSignalIndex((QPdfView*)self, (intptr_t)slot);
}

int32_t q_pdfview_receivers(void* self, const char* signal) {
    return QPdfView_Receivers((QPdfView*)self, signal);
}

int32_t q_pdfview_qbase_receivers(void* self, const char* signal) {
    return QPdfView_QBaseReceivers((QPdfView*)self, signal);
}

void q_pdfview_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPdfView_OnReceivers((QPdfView*)self, (intptr_t)slot);
}

bool q_pdfview_is_signal_connected(void* self, void* signal) {
    return QPdfView_IsSignalConnected((QPdfView*)self, (QMetaMethod*)signal);
}

bool q_pdfview_qbase_is_signal_connected(void* self, void* signal) {
    return QPdfView_QBaseIsSignalConnected((QPdfView*)self, (QMetaMethod*)signal);
}

void q_pdfview_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPdfView_OnIsSignalConnected((QPdfView*)self, (intptr_t)slot);
}

double q_pdfview_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QPdfView_GetDecodedMetricF((QPdfView*)self, metricA, metricB);
}

double q_pdfview_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QPdfView_QBaseGetDecodedMetricF((QPdfView*)self, metricA, metricB);
}

void q_pdfview_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QPdfView_OnGetDecodedMetricF((QPdfView*)self, (intptr_t)slot);
}

void q_pdfview_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_pdfview_delete(void* self) {
    QPdfView_Delete((QPdfView*)(self));
}
