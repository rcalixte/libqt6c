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
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpalette.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "libqprinter.hpp"
#include "../libqrect.hpp"
#include "../libqregion.hpp"
#include "../libqscreen.hpp"
#include "../libqsize.hpp"
#include "../libqsizepolicy.hpp"
#include <string.h>
#include "../libqstyle.hpp"
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "../libqwindow.hpp"
#include "../libqcoreevent.hpp"
#include "libqprintpreviewwidget.hpp"
#include "libqprintpreviewwidget.h"

/// https://doc.qt.io/qt-6/qprintpreviewwidget.html

/// q_printpreviewwidget_new constructs a new QPrintPreviewWidget object.
///
/// ``` QWidget* parent ```
QPrintPreviewWidget* q_printpreviewwidget_new(void* parent) {
    return QPrintPreviewWidget_new((QWidget*)parent);
}

/// q_printpreviewwidget_new2 constructs a new QPrintPreviewWidget object.
///
/// ``` QPrinter* printer ```
QPrintPreviewWidget* q_printpreviewwidget_new2(void* printer) {
    return QPrintPreviewWidget_new2((QPrinter*)printer);
}

/// q_printpreviewwidget_new3 constructs a new QPrintPreviewWidget object.
///
///
QPrintPreviewWidget* q_printpreviewwidget_new3() {
    return QPrintPreviewWidget_new3();
}

/// q_printpreviewwidget_new4 constructs a new QPrintPreviewWidget object.
///
/// ``` QPrinter* printer, QWidget* parent ```
QPrintPreviewWidget* q_printpreviewwidget_new4(void* printer, void* parent) {
    return QPrintPreviewWidget_new4((QPrinter*)printer, (QWidget*)parent);
}

/// q_printpreviewwidget_new5 constructs a new QPrintPreviewWidget object.
///
/// ``` QPrinter* printer, QWidget* parent, int flags ```
QPrintPreviewWidget* q_printpreviewwidget_new5(void* printer, void* parent, int64_t flags) {
    return QPrintPreviewWidget_new5((QPrinter*)printer, (QWidget*)parent, flags);
}

/// q_printpreviewwidget_new6 constructs a new QPrintPreviewWidget object.
///
/// ``` QWidget* parent, int flags ```
QPrintPreviewWidget* q_printpreviewwidget_new6(void* parent, int64_t flags) {
    return QPrintPreviewWidget_new6((QWidget*)parent, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPrintPreviewWidget* self ```
QMetaObject* q_printpreviewwidget_meta_object(void* self) {
    return QPrintPreviewWidget_MetaObject((QPrintPreviewWidget*)self);
}

/// ``` QPrintPreviewWidget* self, const char* param1 ```
void* q_printpreviewwidget_metacast(void* self, const char* param1) {
    return QPrintPreviewWidget_Metacast((QPrintPreviewWidget*)self, param1);
}

/// ``` QPrintPreviewWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_printpreviewwidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPrintPreviewWidget_Metacall((QPrintPreviewWidget*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPrintPreviewWidget* self, int32_t (*slot)(QPrintPreviewWidget*, enum QMetaObject__Call, int, void*) ```
void q_printpreviewwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPrintPreviewWidget_OnMetacall((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrintPreviewWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_printpreviewwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPrintPreviewWidget_QBaseMetacall((QPrintPreviewWidget*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_printpreviewwidget_tr(const char* s) {
    libqt_string _str = QPrintPreviewWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomFactor)
///
/// ``` QPrintPreviewWidget* self ```
double q_printpreviewwidget_zoom_factor(void* self) {
    return QPrintPreviewWidget_ZoomFactor((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#orientation)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_orientation(void* self) {
    return QPrintPreviewWidget_Orientation((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#viewMode)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_view_mode(void* self) {
    return QPrintPreviewWidget_ViewMode((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomMode)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_zoom_mode(void* self) {
    return QPrintPreviewWidget_ZoomMode((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#currentPage)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_current_page(void* self) {
    return QPrintPreviewWidget_CurrentPage((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#pageCount)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_page_count(void* self) {
    return QPrintPreviewWidget_PageCount((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setVisible)
///
/// ``` QPrintPreviewWidget* self, bool visible ```
void q_printpreviewwidget_set_visible(void* self, bool visible) {
    QPrintPreviewWidget_SetVisible((QPrintPreviewWidget*)self, visible);
}

/// Allows for overriding the related default method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, bool) ```
void q_printpreviewwidget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QPrintPreviewWidget_OnSetVisible((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrintPreviewWidget* self, bool visible ```
void q_printpreviewwidget_qbase_set_visible(void* self, bool visible) {
    QPrintPreviewWidget_QBaseSetVisible((QPrintPreviewWidget*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#print)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_print(void* self) {
    QPrintPreviewWidget_Print((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomIn)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_zoom_in(void* self) {
    QPrintPreviewWidget_ZoomIn((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomOut)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_zoom_out(void* self) {
    QPrintPreviewWidget_ZoomOut((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setZoomFactor)
///
/// ``` QPrintPreviewWidget* self, double zoomFactor ```
void q_printpreviewwidget_set_zoom_factor(void* self, double zoomFactor) {
    QPrintPreviewWidget_SetZoomFactor((QPrintPreviewWidget*)self, zoomFactor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setOrientation)
///
/// ``` QPrintPreviewWidget* self, enum QPageLayout__Orientation orientation ```
void q_printpreviewwidget_set_orientation(void* self, int64_t orientation) {
    QPrintPreviewWidget_SetOrientation((QPrintPreviewWidget*)self, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setViewMode)
///
/// ``` QPrintPreviewWidget* self, enum QPrintPreviewWidget__ViewMode viewMode ```
void q_printpreviewwidget_set_view_mode(void* self, int64_t viewMode) {
    QPrintPreviewWidget_SetViewMode((QPrintPreviewWidget*)self, viewMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setZoomMode)
///
/// ``` QPrintPreviewWidget* self, enum QPrintPreviewWidget__ZoomMode zoomMode ```
void q_printpreviewwidget_set_zoom_mode(void* self, int64_t zoomMode) {
    QPrintPreviewWidget_SetZoomMode((QPrintPreviewWidget*)self, zoomMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setCurrentPage)
///
/// ``` QPrintPreviewWidget* self, int pageNumber ```
void q_printpreviewwidget_set_current_page(void* self, int pageNumber) {
    QPrintPreviewWidget_SetCurrentPage((QPrintPreviewWidget*)self, pageNumber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#fitToWidth)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_fit_to_width(void* self) {
    QPrintPreviewWidget_FitToWidth((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#fitInView)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_fit_in_view(void* self) {
    QPrintPreviewWidget_FitInView((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setLandscapeOrientation)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_set_landscape_orientation(void* self) {
    QPrintPreviewWidget_SetLandscapeOrientation((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setPortraitOrientation)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_set_portrait_orientation(void* self) {
    QPrintPreviewWidget_SetPortraitOrientation((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setSinglePageViewMode)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_set_single_page_view_mode(void* self) {
    QPrintPreviewWidget_SetSinglePageViewMode((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setFacingPagesViewMode)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_set_facing_pages_view_mode(void* self) {
    QPrintPreviewWidget_SetFacingPagesViewMode((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#setAllPagesViewMode)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_set_all_pages_view_mode(void* self) {
    QPrintPreviewWidget_SetAllPagesViewMode((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#updatePreview)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_update_preview(void* self) {
    QPrintPreviewWidget_UpdatePreview((QPrintPreviewWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#paintRequested)
///
/// ``` QPrintPreviewWidget* self, QPrinter* printer ```
void q_printpreviewwidget_paint_requested(void* self, void* printer) {
    QPrintPreviewWidget_PaintRequested((QPrintPreviewWidget*)self, (QPrinter*)printer);
}

/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QPrinter*) ```
void q_printpreviewwidget_on_paint_requested(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_Connect_PaintRequested((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#previewChanged)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_preview_changed(void* self) {
    QPrintPreviewWidget_PreviewChanged((QPrintPreviewWidget*)self);
}

/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*) ```
void q_printpreviewwidget_on_preview_changed(void* self, void (*slot)(void*)) {
    QPrintPreviewWidget_Connect_PreviewChanged((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_printpreviewwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QPrintPreviewWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_printpreviewwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPrintPreviewWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomIn)
///
/// ``` QPrintPreviewWidget* self, double zoom ```
void q_printpreviewwidget_zoom_in1(void* self, double zoom) {
    QPrintPreviewWidget_ZoomIn1((QPrintPreviewWidget*)self, zoom);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewwidget.html#zoomOut)
///
/// ``` QPrintPreviewWidget* self, double zoom ```
void q_printpreviewwidget_zoom_out1(void* self, double zoom) {
    QPrintPreviewWidget_ZoomOut1((QPrintPreviewWidget*)self, zoom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QPrintPreviewWidget* self ```
uintptr_t q_printpreviewwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QPrintPreviewWidget* self ```
uintptr_t q_printpreviewwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QPrintPreviewWidget* self ```
uintptr_t q_printpreviewwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QPrintPreviewWidget* self ```
QStyle* q_printpreviewwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QPrintPreviewWidget* self, QStyle* style ```
void q_printpreviewwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QPrintPreviewWidget* self, enum Qt__WindowModality windowModality ```
void q_printpreviewwidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1 ```
bool q_printpreviewwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QPrintPreviewWidget* self, bool enabled ```
void q_printpreviewwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QPrintPreviewWidget* self, bool disabled ```
void q_printpreviewwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QPrintPreviewWidget* self, bool windowModified ```
void q_printpreviewwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QPrintPreviewWidget* self ```
QRect* q_printpreviewwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QPrintPreviewWidget* self ```
QRect* q_printpreviewwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QPrintPreviewWidget* self ```
QRect* q_printpreviewwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QPrintPreviewWidget* self ```
QPoint* q_printpreviewwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QPrintPreviewWidget* self ```
QRect* q_printpreviewwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QPrintPreviewWidget* self ```
QRect* q_printpreviewwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QPrintPreviewWidget* self ```
QRegion* q_printpreviewwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPrintPreviewWidget* self, QSize* minimumSize ```
void q_printpreviewwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPrintPreviewWidget* self, int minw, int minh ```
void q_printpreviewwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPrintPreviewWidget* self, QSize* maximumSize ```
void q_printpreviewwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPrintPreviewWidget* self, int maxw, int maxh ```
void q_printpreviewwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QPrintPreviewWidget* self, int minw ```
void q_printpreviewwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QPrintPreviewWidget* self, int minh ```
void q_printpreviewwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QPrintPreviewWidget* self, int maxw ```
void q_printpreviewwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QPrintPreviewWidget* self, int maxh ```
void q_printpreviewwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPrintPreviewWidget* self, QSize* sizeIncrement ```
void q_printpreviewwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPrintPreviewWidget* self, int w, int h ```
void q_printpreviewwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPrintPreviewWidget* self, QSize* baseSize ```
void q_printpreviewwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPrintPreviewWidget* self, int basew, int baseh ```
void q_printpreviewwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPrintPreviewWidget* self, QSize* fixedSize ```
void q_printpreviewwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPrintPreviewWidget* self, int w, int h ```
void q_printpreviewwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QPrintPreviewWidget* self, int w ```
void q_printpreviewwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QPrintPreviewWidget* self, int h ```
void q_printpreviewwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPrintPreviewWidget* self, QPointF* param1 ```
QPointF* q_printpreviewwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPrintPreviewWidget* self, QPoint* param1 ```
QPoint* q_printpreviewwidget_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPrintPreviewWidget* self, QPointF* param1 ```
QPointF* q_printpreviewwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPrintPreviewWidget* self, QPoint* param1 ```
QPoint* q_printpreviewwidget_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPrintPreviewWidget* self, QPointF* param1 ```
QPointF* q_printpreviewwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPrintPreviewWidget* self, QPoint* param1 ```
QPoint* q_printpreviewwidget_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPrintPreviewWidget* self, QPointF* param1 ```
QPointF* q_printpreviewwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPrintPreviewWidget* self, QPoint* param1 ```
QPoint* q_printpreviewwidget_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_printpreviewwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_printpreviewwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_printpreviewwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_printpreviewwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QPrintPreviewWidget* self ```
QPalette* q_printpreviewwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QPrintPreviewWidget* self, QPalette* palette ```
void q_printpreviewwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QPrintPreviewWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_printpreviewwidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QPrintPreviewWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_printpreviewwidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QPrintPreviewWidget* self ```
QFont* q_printpreviewwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QPrintPreviewWidget* self, QFont* font ```
void q_printpreviewwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QPrintPreviewWidget* self ```
QFontMetrics* q_printpreviewwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QPrintPreviewWidget* self ```
QFontInfo* q_printpreviewwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QPrintPreviewWidget* self ```
QCursor* q_printpreviewwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QPrintPreviewWidget* self, QCursor* cursor ```
void q_printpreviewwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QPrintPreviewWidget* self, bool enable ```
void q_printpreviewwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QPrintPreviewWidget* self, bool enable ```
void q_printpreviewwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPrintPreviewWidget* self, QBitmap* mask ```
void q_printpreviewwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPrintPreviewWidget* self, QRegion* mask ```
void q_printpreviewwidget_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QPrintPreviewWidget* self ```
QRegion* q_printpreviewwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPaintDevice* target ```
void q_printpreviewwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPainter* painter ```
void q_printpreviewwidget_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPrintPreviewWidget* self ```
QPixmap* q_printpreviewwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QPrintPreviewWidget* self ```
QGraphicsEffect* q_printpreviewwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QPrintPreviewWidget* self, QGraphicsEffect* effect ```
void q_printpreviewwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPrintPreviewWidget* self, enum Qt__GestureType typeVal ```
void q_printpreviewwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QPrintPreviewWidget* self, enum Qt__GestureType typeVal ```
void q_printpreviewwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QPrintPreviewWidget* self, const char* windowTitle ```
void q_printpreviewwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QPrintPreviewWidget* self, const char* styleSheet ```
void q_printpreviewwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QPrintPreviewWidget* self, QIcon* icon ```
void q_printpreviewwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QPrintPreviewWidget* self ```
QIcon* q_printpreviewwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QPrintPreviewWidget* self, const char* windowIconText ```
void q_printpreviewwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QPrintPreviewWidget* self, const char* windowRole ```
void q_printpreviewwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QPrintPreviewWidget* self, const char* filePath ```
void q_printpreviewwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QPrintPreviewWidget* self, double level ```
void q_printpreviewwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QPrintPreviewWidget* self ```
double q_printpreviewwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QPrintPreviewWidget* self, const char* toolTip ```
void q_printpreviewwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QPrintPreviewWidget* self, int msec ```
void q_printpreviewwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QPrintPreviewWidget* self, const char* statusTip ```
void q_printpreviewwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QPrintPreviewWidget* self, const char* whatsThis ```
void q_printpreviewwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QPrintPreviewWidget* self, const char* name ```
void q_printpreviewwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QPrintPreviewWidget* self, const char* description ```
void q_printpreviewwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QPrintPreviewWidget* self, enum Qt__LayoutDirection direction ```
void q_printpreviewwidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QPrintPreviewWidget* self, QLocale* locale ```
void q_printpreviewwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QPrintPreviewWidget* self ```
QLocale* q_printpreviewwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPrintPreviewWidget* self, enum Qt__FocusReason reason ```
void q_printpreviewwidget_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QPrintPreviewWidget* self, enum Qt__FocusPolicy policy ```
void q_printpreviewwidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_printpreviewwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QPrintPreviewWidget* self, QWidget* focusProxy ```
void q_printpreviewwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QPrintPreviewWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_printpreviewwidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPrintPreviewWidget* self, QCursor* param1 ```
void q_printpreviewwidget_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPrintPreviewWidget* self, QKeySequence* key ```
int32_t q_printpreviewwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QPrintPreviewWidget* self, int id ```
void q_printpreviewwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPrintPreviewWidget* self, int id ```
void q_printpreviewwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPrintPreviewWidget* self, int id ```
void q_printpreviewwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_printpreviewwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_printpreviewwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QPrintPreviewWidget* self, bool enable ```
void q_printpreviewwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QPrintPreviewWidget* self ```
QGraphicsProxyWidget* q_printpreviewwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintPreviewWidget* self, int x, int y, int w, int h ```
void q_printpreviewwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintPreviewWidget* self, QRect* param1 ```
void q_printpreviewwidget_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintPreviewWidget* self, QRegion* param1 ```
void q_printpreviewwidget_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintPreviewWidget* self, int x, int y, int w, int h ```
void q_printpreviewwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintPreviewWidget* self, QRect* param1 ```
void q_printpreviewwidget_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintPreviewWidget* self, QRegion* param1 ```
void q_printpreviewwidget_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QPrintPreviewWidget* self, bool hidden ```
void q_printpreviewwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1 ```
void q_printpreviewwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPrintPreviewWidget* self, int x, int y ```
void q_printpreviewwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPrintPreviewWidget* self, QPoint* param1 ```
void q_printpreviewwidget_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPrintPreviewWidget* self, int w, int h ```
void q_printpreviewwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPrintPreviewWidget* self, QSize* param1 ```
void q_printpreviewwidget_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPrintPreviewWidget* self, int x, int y, int w, int h ```
void q_printpreviewwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPrintPreviewWidget* self, QRect* geometry ```
void q_printpreviewwidget_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QPrintPreviewWidget* self ```
char* q_printpreviewwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QPrintPreviewWidget* self, const char* geometry ```
bool q_printpreviewwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QPrintPreviewWidget* self, QWidget* param1 ```
bool q_printpreviewwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QPrintPreviewWidget* self, int state ```
void q_printpreviewwidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QPrintPreviewWidget* self, int state ```
void q_printpreviewwidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QPrintPreviewWidget* self ```
QSizePolicy* q_printpreviewwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPrintPreviewWidget* self, QSizePolicy* sizePolicy ```
void q_printpreviewwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPrintPreviewWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_printpreviewwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QPrintPreviewWidget* self ```
QRegion* q_printpreviewwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPrintPreviewWidget* self, int left, int top, int right, int bottom ```
void q_printpreviewwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPrintPreviewWidget* self, QMargins* margins ```
void q_printpreviewwidget_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QPrintPreviewWidget* self ```
QMargins* q_printpreviewwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QPrintPreviewWidget* self ```
QRect* q_printpreviewwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QPrintPreviewWidget* self ```
QLayout* q_printpreviewwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QPrintPreviewWidget* self, QLayout* layout ```
void q_printpreviewwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPrintPreviewWidget* self, QWidget* parent ```
void q_printpreviewwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPrintPreviewWidget* self, QWidget* parent, int f ```
void q_printpreviewwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPrintPreviewWidget* self, int dx, int dy ```
void q_printpreviewwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPrintPreviewWidget* self, int dx, int dy, QRect* param3 ```
void q_printpreviewwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QPrintPreviewWidget* self, bool on ```
void q_printpreviewwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewWidget* self, QAction* action ```
void q_printpreviewwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QPrintPreviewWidget* self, QAction* actions[] ```
void q_printpreviewwidget_add_actions(void* self, void* actions[]) {
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
/// ``` QPrintPreviewWidget* self, QAction* before, QAction* actions[] ```
void q_printpreviewwidget_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QPrintPreviewWidget* self, QAction* before, QAction* action ```
void q_printpreviewwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QPrintPreviewWidget* self, QAction* action ```
void q_printpreviewwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QPrintPreviewWidget* self ```
libqt_list /* of QAction* */ q_printpreviewwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewWidget* self, const char* text ```
QAction* q_printpreviewwidget_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewWidget* self, QIcon* icon, const char* text ```
QAction* q_printpreviewwidget_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_printpreviewwidget_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_printpreviewwidget_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QPrintPreviewWidget* self ```
QWidget* q_printpreviewwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QPrintPreviewWidget* self, int typeVal ```
void q_printpreviewwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPrintPreviewWidget* self, enum Qt__WindowType param1 ```
void q_printpreviewwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QPrintPreviewWidget* self, int typeVal ```
void q_printpreviewwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_printpreviewwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPrintPreviewWidget* self, int x, int y ```
QWidget* q_printpreviewwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPrintPreviewWidget* self, QPoint* p ```
QWidget* q_printpreviewwidget_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPrintPreviewWidget* self, enum Qt__WidgetAttribute param1 ```
void q_printpreviewwidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QPrintPreviewWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_printpreviewwidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QPrintPreviewWidget* self, QWidget* child ```
bool q_printpreviewwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QPrintPreviewWidget* self, bool enabled ```
void q_printpreviewwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QPrintPreviewWidget* self ```
QBackingStore* q_printpreviewwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QPrintPreviewWidget* self ```
QWindow* q_printpreviewwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QPrintPreviewWidget* self ```
QScreen* q_printpreviewwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QPrintPreviewWidget* self, QScreen* screen ```
void q_printpreviewwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_printpreviewwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QPrintPreviewWidget* self, const char* title ```
void q_printpreviewwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QWidget*, const char*) ```
void q_printpreviewwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QPrintPreviewWidget* self, QIcon* icon ```
void q_printpreviewwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_printpreviewwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QPrintPreviewWidget* self, const char* iconText ```
void q_printpreviewwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QWidget*, const char*) ```
void q_printpreviewwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QPrintPreviewWidget* self, QPoint* pos ```
void q_printpreviewwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_printpreviewwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QPrintPreviewWidget* self ```
int64_t q_printpreviewwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QPrintPreviewWidget* self, int hints ```
void q_printpreviewwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_printpreviewwidget_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_printpreviewwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_printpreviewwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_printpreviewwidget_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_printpreviewwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_printpreviewwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPrintPreviewWidget* self, QRect* rectangle ```
QPixmap* q_printpreviewwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPrintPreviewWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_printpreviewwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPrintPreviewWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_printpreviewwidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPrintPreviewWidget* self, int id, bool enable ```
void q_printpreviewwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPrintPreviewWidget* self, int id, bool enable ```
void q_printpreviewwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPrintPreviewWidget* self, enum Qt__WindowType param1, bool on ```
void q_printpreviewwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPrintPreviewWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_printpreviewwidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_printpreviewwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_printpreviewwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPrintPreviewWidget* self ```
const char* q_printpreviewwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPrintPreviewWidget* self, const char* name ```
void q_printpreviewwidget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPrintPreviewWidget* self, bool b ```
bool q_printpreviewwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPrintPreviewWidget* self ```
QThread* q_printpreviewwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPrintPreviewWidget* self, QThread* thread ```
void q_printpreviewwidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPrintPreviewWidget* self, int interval ```
int32_t q_printpreviewwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPrintPreviewWidget* self, int id ```
void q_printpreviewwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPrintPreviewWidget* self ```
libqt_list /* of QObject* */ q_printpreviewwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPrintPreviewWidget* self, QObject* filterObj ```
void q_printpreviewwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPrintPreviewWidget* self, QObject* obj ```
void q_printpreviewwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_printpreviewwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPrintPreviewWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_printpreviewwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_printpreviewwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_printpreviewwidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPrintPreviewWidget* self, const char* name, QVariant* value ```
bool q_printpreviewwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPrintPreviewWidget* self, const char* name ```
QVariant* q_printpreviewwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPrintPreviewWidget* self ```
const char** q_printpreviewwidget_dynamic_property_names(void* self) {
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
/// ``` QPrintPreviewWidget* self ```
QBindingStorage* q_printpreviewwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPrintPreviewWidget* self ```
QBindingStorage* q_printpreviewwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QObject*) ```
void q_printpreviewwidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPrintPreviewWidget* self ```
QObject* q_printpreviewwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPrintPreviewWidget* self, const char* classname ```
bool q_printpreviewwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPrintPreviewWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_printpreviewwidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_printpreviewwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPrintPreviewWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_printpreviewwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPrintPreviewWidget* self, QObject* param1 ```
void q_printpreviewwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QObject*, QObject*) ```
void q_printpreviewwidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPrintPreviewWidget* self ```
double q_printpreviewwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPrintPreviewWidget* self ```
double q_printpreviewwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_printpreviewwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_dev_type(void* self) {
    return QPrintPreviewWidget_DevType((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_qbase_dev_type(void* self) {
    return QPrintPreviewWidget_QBaseDevType((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int32_t (*slot)() ```
void q_printpreviewwidget_on_dev_type(void* self, int32_t (*slot)()) {
    QPrintPreviewWidget_OnDevType((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_size_hint(void* self) {
    return QPrintPreviewWidget_SizeHint((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_qbase_size_hint(void* self) {
    return QPrintPreviewWidget_QBaseSizeHint((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QSize* (*slot)() ```
void q_printpreviewwidget_on_size_hint(void* self, QSize* (*slot)()) {
    QPrintPreviewWidget_OnSizeHint((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_minimum_size_hint(void* self) {
    return QPrintPreviewWidget_MinimumSizeHint((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QSize* q_printpreviewwidget_qbase_minimum_size_hint(void* self) {
    return QPrintPreviewWidget_QBaseMinimumSizeHint((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QSize* (*slot)() ```
void q_printpreviewwidget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QPrintPreviewWidget_OnMinimumSizeHint((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int param1 ```
int32_t q_printpreviewwidget_height_for_width(void* self, int param1) {
    return QPrintPreviewWidget_HeightForWidth((QPrintPreviewWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int param1 ```
int32_t q_printpreviewwidget_qbase_height_for_width(void* self, int param1) {
    return QPrintPreviewWidget_QBaseHeightForWidth((QPrintPreviewWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int32_t (*slot)(QPrintPreviewWidget*, int) ```
void q_printpreviewwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QPrintPreviewWidget_OnHeightForWidth((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_has_height_for_width(void* self) {
    return QPrintPreviewWidget_HasHeightForWidth((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_qbase_has_height_for_width(void* self) {
    return QPrintPreviewWidget_QBaseHasHeightForWidth((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)() ```
void q_printpreviewwidget_on_has_height_for_width(void* self, bool (*slot)()) {
    QPrintPreviewWidget_OnHasHeightForWidth((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QPaintEngine* q_printpreviewwidget_paint_engine(void* self) {
    return QPrintPreviewWidget_PaintEngine((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QPaintEngine* q_printpreviewwidget_qbase_paint_engine(void* self) {
    return QPrintPreviewWidget_QBasePaintEngine((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPaintEngine* (*slot)() ```
void q_printpreviewwidget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QPrintPreviewWidget_OnPaintEngine((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* event ```
bool q_printpreviewwidget_event(void* self, void* event) {
    return QPrintPreviewWidget_Event((QPrintPreviewWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* event ```
bool q_printpreviewwidget_qbase_event(void* self, void* event) {
    return QPrintPreviewWidget_QBaseEvent((QPrintPreviewWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)(QPrintPreviewWidget*, QEvent*) ```
void q_printpreviewwidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_mouse_press_event(void* self, void* event) {
    QPrintPreviewWidget_MousePressEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_qbase_mouse_press_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseMousePressEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMouseEvent*) ```
void q_printpreviewwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnMousePressEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_mouse_release_event(void* self, void* event) {
    QPrintPreviewWidget_MouseReleaseEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_qbase_mouse_release_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseMouseReleaseEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMouseEvent*) ```
void q_printpreviewwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnMouseReleaseEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_mouse_double_click_event(void* self, void* event) {
    QPrintPreviewWidget_MouseDoubleClickEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseMouseDoubleClickEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMouseEvent*) ```
void q_printpreviewwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnMouseDoubleClickEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_mouse_move_event(void* self, void* event) {
    QPrintPreviewWidget_MouseMoveEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMouseEvent* event ```
void q_printpreviewwidget_qbase_mouse_move_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseMouseMoveEvent((QPrintPreviewWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMouseEvent*) ```
void q_printpreviewwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnMouseMoveEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QWheelEvent* event ```
void q_printpreviewwidget_wheel_event(void* self, void* event) {
    QPrintPreviewWidget_WheelEvent((QPrintPreviewWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QWheelEvent* event ```
void q_printpreviewwidget_qbase_wheel_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseWheelEvent((QPrintPreviewWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QWheelEvent*) ```
void q_printpreviewwidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnWheelEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QKeyEvent* event ```
void q_printpreviewwidget_key_press_event(void* self, void* event) {
    QPrintPreviewWidget_KeyPressEvent((QPrintPreviewWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QKeyEvent* event ```
void q_printpreviewwidget_qbase_key_press_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseKeyPressEvent((QPrintPreviewWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QKeyEvent*) ```
void q_printpreviewwidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnKeyPressEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QKeyEvent* event ```
void q_printpreviewwidget_key_release_event(void* self, void* event) {
    QPrintPreviewWidget_KeyReleaseEvent((QPrintPreviewWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QKeyEvent* event ```
void q_printpreviewwidget_qbase_key_release_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseKeyReleaseEvent((QPrintPreviewWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QKeyEvent*) ```
void q_printpreviewwidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnKeyReleaseEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QFocusEvent* event ```
void q_printpreviewwidget_focus_in_event(void* self, void* event) {
    QPrintPreviewWidget_FocusInEvent((QPrintPreviewWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QFocusEvent* event ```
void q_printpreviewwidget_qbase_focus_in_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseFocusInEvent((QPrintPreviewWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QFocusEvent*) ```
void q_printpreviewwidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnFocusInEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QFocusEvent* event ```
void q_printpreviewwidget_focus_out_event(void* self, void* event) {
    QPrintPreviewWidget_FocusOutEvent((QPrintPreviewWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QFocusEvent* event ```
void q_printpreviewwidget_qbase_focus_out_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseFocusOutEvent((QPrintPreviewWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QFocusEvent*) ```
void q_printpreviewwidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnFocusOutEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEnterEvent* event ```
void q_printpreviewwidget_enter_event(void* self, void* event) {
    QPrintPreviewWidget_EnterEvent((QPrintPreviewWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEnterEvent* event ```
void q_printpreviewwidget_qbase_enter_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseEnterEvent((QPrintPreviewWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QEnterEvent*) ```
void q_printpreviewwidget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnEnterEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* event ```
void q_printpreviewwidget_leave_event(void* self, void* event) {
    QPrintPreviewWidget_LeaveEvent((QPrintPreviewWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* event ```
void q_printpreviewwidget_qbase_leave_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseLeaveEvent((QPrintPreviewWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QEvent*) ```
void q_printpreviewwidget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnLeaveEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPaintEvent* event ```
void q_printpreviewwidget_paint_event(void* self, void* event) {
    QPrintPreviewWidget_PaintEvent((QPrintPreviewWidget*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPaintEvent* event ```
void q_printpreviewwidget_qbase_paint_event(void* self, void* event) {
    QPrintPreviewWidget_QBasePaintEvent((QPrintPreviewWidget*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QPaintEvent*) ```
void q_printpreviewwidget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnPaintEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMoveEvent* event ```
void q_printpreviewwidget_move_event(void* self, void* event) {
    QPrintPreviewWidget_MoveEvent((QPrintPreviewWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMoveEvent* event ```
void q_printpreviewwidget_qbase_move_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseMoveEvent((QPrintPreviewWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMoveEvent*) ```
void q_printpreviewwidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnMoveEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QResizeEvent* event ```
void q_printpreviewwidget_resize_event(void* self, void* event) {
    QPrintPreviewWidget_ResizeEvent((QPrintPreviewWidget*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QResizeEvent* event ```
void q_printpreviewwidget_qbase_resize_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseResizeEvent((QPrintPreviewWidget*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QResizeEvent*) ```
void q_printpreviewwidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnResizeEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QCloseEvent* event ```
void q_printpreviewwidget_close_event(void* self, void* event) {
    QPrintPreviewWidget_CloseEvent((QPrintPreviewWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QCloseEvent* event ```
void q_printpreviewwidget_qbase_close_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseCloseEvent((QPrintPreviewWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QCloseEvent*) ```
void q_printpreviewwidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnCloseEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QContextMenuEvent* event ```
void q_printpreviewwidget_context_menu_event(void* self, void* event) {
    QPrintPreviewWidget_ContextMenuEvent((QPrintPreviewWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QContextMenuEvent* event ```
void q_printpreviewwidget_qbase_context_menu_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseContextMenuEvent((QPrintPreviewWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QContextMenuEvent*) ```
void q_printpreviewwidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnContextMenuEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QTabletEvent* event ```
void q_printpreviewwidget_tablet_event(void* self, void* event) {
    QPrintPreviewWidget_TabletEvent((QPrintPreviewWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QTabletEvent* event ```
void q_printpreviewwidget_qbase_tablet_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseTabletEvent((QPrintPreviewWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QTabletEvent*) ```
void q_printpreviewwidget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnTabletEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QActionEvent* event ```
void q_printpreviewwidget_action_event(void* self, void* event) {
    QPrintPreviewWidget_ActionEvent((QPrintPreviewWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QActionEvent* event ```
void q_printpreviewwidget_qbase_action_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseActionEvent((QPrintPreviewWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QActionEvent*) ```
void q_printpreviewwidget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnActionEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDragEnterEvent* event ```
void q_printpreviewwidget_drag_enter_event(void* self, void* event) {
    QPrintPreviewWidget_DragEnterEvent((QPrintPreviewWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDragEnterEvent* event ```
void q_printpreviewwidget_qbase_drag_enter_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseDragEnterEvent((QPrintPreviewWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QDragEnterEvent*) ```
void q_printpreviewwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnDragEnterEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDragMoveEvent* event ```
void q_printpreviewwidget_drag_move_event(void* self, void* event) {
    QPrintPreviewWidget_DragMoveEvent((QPrintPreviewWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDragMoveEvent* event ```
void q_printpreviewwidget_qbase_drag_move_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseDragMoveEvent((QPrintPreviewWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QDragMoveEvent*) ```
void q_printpreviewwidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnDragMoveEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDragLeaveEvent* event ```
void q_printpreviewwidget_drag_leave_event(void* self, void* event) {
    QPrintPreviewWidget_DragLeaveEvent((QPrintPreviewWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDragLeaveEvent* event ```
void q_printpreviewwidget_qbase_drag_leave_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseDragLeaveEvent((QPrintPreviewWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QDragLeaveEvent*) ```
void q_printpreviewwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnDragLeaveEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDropEvent* event ```
void q_printpreviewwidget_drop_event(void* self, void* event) {
    QPrintPreviewWidget_DropEvent((QPrintPreviewWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QDropEvent* event ```
void q_printpreviewwidget_qbase_drop_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseDropEvent((QPrintPreviewWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QDropEvent*) ```
void q_printpreviewwidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnDropEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QShowEvent* event ```
void q_printpreviewwidget_show_event(void* self, void* event) {
    QPrintPreviewWidget_ShowEvent((QPrintPreviewWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QShowEvent* event ```
void q_printpreviewwidget_qbase_show_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseShowEvent((QPrintPreviewWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QShowEvent*) ```
void q_printpreviewwidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnShowEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QHideEvent* event ```
void q_printpreviewwidget_hide_event(void* self, void* event) {
    QPrintPreviewWidget_HideEvent((QPrintPreviewWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QHideEvent* event ```
void q_printpreviewwidget_qbase_hide_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseHideEvent((QPrintPreviewWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QHideEvent*) ```
void q_printpreviewwidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnHideEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_printpreviewwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPrintPreviewWidget_NativeEvent((QPrintPreviewWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_printpreviewwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPrintPreviewWidget_QBaseNativeEvent((QPrintPreviewWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)(QPrintPreviewWidget*, const char*, void*, intptr_t*) ```
void q_printpreviewwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QPrintPreviewWidget_OnNativeEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* param1 ```
void q_printpreviewwidget_change_event(void* self, void* param1) {
    QPrintPreviewWidget_ChangeEvent((QPrintPreviewWidget*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* param1 ```
void q_printpreviewwidget_qbase_change_event(void* self, void* param1) {
    QPrintPreviewWidget_QBaseChangeEvent((QPrintPreviewWidget*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QEvent*) ```
void q_printpreviewwidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnChangeEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printpreviewwidget_metric(void* self, int64_t param1) {
    return QPrintPreviewWidget_Metric((QPrintPreviewWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printpreviewwidget_qbase_metric(void* self, int64_t param1) {
    return QPrintPreviewWidget_QBaseMetric((QPrintPreviewWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int32_t (*slot)(QPrintPreviewWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_printpreviewwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QPrintPreviewWidget_OnMetric((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPainter* painter ```
void q_printpreviewwidget_init_painter(void* self, void* painter) {
    QPrintPreviewWidget_InitPainter((QPrintPreviewWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPainter* painter ```
void q_printpreviewwidget_qbase_init_painter(void* self, void* painter) {
    QPrintPreviewWidget_QBaseInitPainter((QPrintPreviewWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QPainter*) ```
void q_printpreviewwidget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnInitPainter((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPoint* offset ```
QPaintDevice* q_printpreviewwidget_redirected(void* self, void* offset) {
    return QPrintPreviewWidget_Redirected((QPrintPreviewWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPoint* offset ```
QPaintDevice* q_printpreviewwidget_qbase_redirected(void* self, void* offset) {
    return QPrintPreviewWidget_QBaseRedirected((QPrintPreviewWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPaintDevice* (*slot)(QPrintPreviewWidget*, QPoint*) ```
void q_printpreviewwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnRedirected((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QPainter* q_printpreviewwidget_shared_painter(void* self) {
    return QPrintPreviewWidget_SharedPainter((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QPainter* q_printpreviewwidget_qbase_shared_painter(void* self) {
    return QPrintPreviewWidget_QBaseSharedPainter((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QPainter* (*slot)() ```
void q_printpreviewwidget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QPrintPreviewWidget_OnSharedPainter((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QInputMethodEvent* param1 ```
void q_printpreviewwidget_input_method_event(void* self, void* param1) {
    QPrintPreviewWidget_InputMethodEvent((QPrintPreviewWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QInputMethodEvent* param1 ```
void q_printpreviewwidget_qbase_input_method_event(void* self, void* param1) {
    QPrintPreviewWidget_QBaseInputMethodEvent((QPrintPreviewWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QInputMethodEvent*) ```
void q_printpreviewwidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnInputMethodEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_printpreviewwidget_input_method_query(void* self, int64_t param1) {
    return QPrintPreviewWidget_InputMethodQuery((QPrintPreviewWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_printpreviewwidget_qbase_input_method_query(void* self, int64_t param1) {
    return QPrintPreviewWidget_QBaseInputMethodQuery((QPrintPreviewWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QVariant* (*slot)(QPrintPreviewWidget*, enum Qt__InputMethodQuery) ```
void q_printpreviewwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QPrintPreviewWidget_OnInputMethodQuery((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool next ```
bool q_printpreviewwidget_focus_next_prev_child(void* self, bool next) {
    return QPrintPreviewWidget_FocusNextPrevChild((QPrintPreviewWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool next ```
bool q_printpreviewwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QPrintPreviewWidget_QBaseFocusNextPrevChild((QPrintPreviewWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)(QPrintPreviewWidget*, bool) ```
void q_printpreviewwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QPrintPreviewWidget_OnFocusNextPrevChild((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QObject* watched, QEvent* event ```
bool q_printpreviewwidget_event_filter(void* self, void* watched, void* event) {
    return QPrintPreviewWidget_EventFilter((QPrintPreviewWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QObject* watched, QEvent* event ```
bool q_printpreviewwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QPrintPreviewWidget_QBaseEventFilter((QPrintPreviewWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)(QPrintPreviewWidget*, QObject*, QEvent*) ```
void q_printpreviewwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPrintPreviewWidget_OnEventFilter((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QTimerEvent* event ```
void q_printpreviewwidget_timer_event(void* self, void* event) {
    QPrintPreviewWidget_TimerEvent((QPrintPreviewWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QTimerEvent* event ```
void q_printpreviewwidget_qbase_timer_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseTimerEvent((QPrintPreviewWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QTimerEvent*) ```
void q_printpreviewwidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnTimerEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QChildEvent* event ```
void q_printpreviewwidget_child_event(void* self, void* event) {
    QPrintPreviewWidget_ChildEvent((QPrintPreviewWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QChildEvent* event ```
void q_printpreviewwidget_qbase_child_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseChildEvent((QPrintPreviewWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QChildEvent*) ```
void q_printpreviewwidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnChildEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* event ```
void q_printpreviewwidget_custom_event(void* self, void* event) {
    QPrintPreviewWidget_CustomEvent((QPrintPreviewWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QEvent* event ```
void q_printpreviewwidget_qbase_custom_event(void* self, void* event) {
    QPrintPreviewWidget_QBaseCustomEvent((QPrintPreviewWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QEvent*) ```
void q_printpreviewwidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnCustomEvent((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMetaMethod* signal ```
void q_printpreviewwidget_connect_notify(void* self, void* signal) {
    QPrintPreviewWidget_ConnectNotify((QPrintPreviewWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMetaMethod* signal ```
void q_printpreviewwidget_qbase_connect_notify(void* self, void* signal) {
    QPrintPreviewWidget_QBaseConnectNotify((QPrintPreviewWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMetaMethod*) ```
void q_printpreviewwidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnConnectNotify((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMetaMethod* signal ```
void q_printpreviewwidget_disconnect_notify(void* self, void* signal) {
    QPrintPreviewWidget_DisconnectNotify((QPrintPreviewWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMetaMethod* signal ```
void q_printpreviewwidget_qbase_disconnect_notify(void* self, void* signal) {
    QPrintPreviewWidget_QBaseDisconnectNotify((QPrintPreviewWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)(QPrintPreviewWidget*, QMetaMethod*) ```
void q_printpreviewwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnDisconnectNotify((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_update_micro_focus(void* self) {
    QPrintPreviewWidget_UpdateMicroFocus((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_qbase_update_micro_focus(void* self) {
    QPrintPreviewWidget_QBaseUpdateMicroFocus((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)() ```
void q_printpreviewwidget_on_update_micro_focus(void* self, void (*slot)()) {
    QPrintPreviewWidget_OnUpdateMicroFocus((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_create(void* self) {
    QPrintPreviewWidget_Create((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_qbase_create(void* self) {
    QPrintPreviewWidget_QBaseCreate((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)() ```
void q_printpreviewwidget_on_create(void* self, void (*slot)()) {
    QPrintPreviewWidget_OnCreate((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_destroy(void* self) {
    QPrintPreviewWidget_Destroy((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_qbase_destroy(void* self) {
    QPrintPreviewWidget_QBaseDestroy((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, void (*slot)() ```
void q_printpreviewwidget_on_destroy(void* self, void (*slot)()) {
    QPrintPreviewWidget_OnDestroy((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_focus_next_child(void* self) {
    return QPrintPreviewWidget_FocusNextChild((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_qbase_focus_next_child(void* self) {
    return QPrintPreviewWidget_QBaseFocusNextChild((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)() ```
void q_printpreviewwidget_on_focus_next_child(void* self, bool (*slot)()) {
    QPrintPreviewWidget_OnFocusNextChild((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_focus_previous_child(void* self) {
    return QPrintPreviewWidget_FocusPreviousChild((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
bool q_printpreviewwidget_qbase_focus_previous_child(void* self) {
    return QPrintPreviewWidget_QBaseFocusPreviousChild((QPrintPreviewWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)() ```
void q_printpreviewwidget_on_focus_previous_child(void* self, bool (*slot)()) {
    QPrintPreviewWidget_OnFocusPreviousChild((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QObject* q_printpreviewwidget_sender(void* self) {
    return QPrintPreviewWidget_Sender((QPrintPreviewWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
QObject* q_printpreviewwidget_qbase_sender(void* self) {
    return QPrintPreviewWidget_QBaseSender((QPrintPreviewWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QObject* (*slot)() ```
void q_printpreviewwidget_on_sender(void* self, QObject* (*slot)()) {
    QPrintPreviewWidget_OnSender((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_sender_signal_index(void* self) {
    return QPrintPreviewWidget_SenderSignalIndex((QPrintPreviewWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self ```
int32_t q_printpreviewwidget_qbase_sender_signal_index(void* self) {
    return QPrintPreviewWidget_QBaseSenderSignalIndex((QPrintPreviewWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int32_t (*slot)() ```
void q_printpreviewwidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPrintPreviewWidget_OnSenderSignalIndex((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, const char* signal ```
int32_t q_printpreviewwidget_receivers(void* self, const char* signal) {
    return QPrintPreviewWidget_Receivers((QPrintPreviewWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, const char* signal ```
int32_t q_printpreviewwidget_qbase_receivers(void* self, const char* signal) {
    return QPrintPreviewWidget_QBaseReceivers((QPrintPreviewWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, int32_t (*slot)(QPrintPreviewWidget*, const char*) ```
void q_printpreviewwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPrintPreviewWidget_OnReceivers((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMetaMethod* signal ```
bool q_printpreviewwidget_is_signal_connected(void* self, void* signal) {
    return QPrintPreviewWidget_IsSignalConnected((QPrintPreviewWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, QMetaMethod* signal ```
bool q_printpreviewwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QPrintPreviewWidget_QBaseIsSignalConnected((QPrintPreviewWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewWidget* self, bool (*slot)(QPrintPreviewWidget*, QMetaMethod*) ```
void q_printpreviewwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPrintPreviewWidget_OnIsSignalConnected((QPrintPreviewWidget*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPrintPreviewWidget* self ```
void q_printpreviewwidget_delete(void* self) {
    QPrintPreviewWidget_Delete((QPrintPreviewWidget*)(self));
}