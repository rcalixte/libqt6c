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
#include "../libqrect.hpp"
#include "../libqregion.hpp"
#include "../libqscreen.hpp"
#include "../libqsize.hpp"
#include "../libqsizepolicy.hpp"
#include <string.h>
#include "../libqstyle.hpp"
#include "libqsvgrenderer.hpp"
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "../libqwindow.hpp"
#include "../libqcoreevent.hpp"
#include "libqsvgwidget.hpp"
#include "libqsvgwidget.h"

/// https://doc.qt.io/qt-6/qsvgwidget.html

/// q_svgwidget_new constructs a new QSvgWidget object.
///
/// ``` QWidget* parent ```
QSvgWidget* q_svgwidget_new(void* parent) {
    return QSvgWidget_new((QWidget*)parent);
}

/// q_svgwidget_new2 constructs a new QSvgWidget object.
///
///
QSvgWidget* q_svgwidget_new2() {
    return QSvgWidget_new2();
}

/// q_svgwidget_new3 constructs a new QSvgWidget object.
///
/// ``` const char* file ```
QSvgWidget* q_svgwidget_new3(const char* file) {
    return QSvgWidget_new3(qstring(file));
}

/// q_svgwidget_new4 constructs a new QSvgWidget object.
///
/// ``` const char* file, QWidget* parent ```
QSvgWidget* q_svgwidget_new4(const char* file, void* parent) {
    return QSvgWidget_new4(qstring(file), (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSvgWidget* self ```
QMetaObject* q_svgwidget_meta_object(void* self) {
    return QSvgWidget_MetaObject((QSvgWidget*)self);
}

/// ``` QSvgWidget* self, const char* param1 ```
void* q_svgwidget_metacast(void* self, const char* param1) {
    return QSvgWidget_Metacast((QSvgWidget*)self, param1);
}

/// ``` QSvgWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_svgwidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSvgWidget_Metacall((QSvgWidget*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSvgWidget* self, int32_t (*slot)(QSvgWidget*, enum QMetaObject__Call, int, void*) ```
void q_svgwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSvgWidget_OnMetacall((QSvgWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSvgWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_svgwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSvgWidget_QBaseMetacall((QSvgWidget*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_svgwidget_tr(const char* s) {
    libqt_string _str = QSvgWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgwidget.html#renderer)
///
/// ``` QSvgWidget* self ```
QSvgRenderer* q_svgwidget_renderer(void* self) {
    return QSvgWidget_Renderer((QSvgWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgwidget.html#sizeHint)
///
/// ``` QSvgWidget* self ```
QSize* q_svgwidget_size_hint(void* self) {
    return QSvgWidget_SizeHint((QSvgWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSvgWidget* self, QSize* (*slot)() ```
void q_svgwidget_on_size_hint(void* self, QSize* (*slot)()) {
    QSvgWidget_OnSizeHint((QSvgWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSvgWidget* self ```
QSize* q_svgwidget_qbase_size_hint(void* self) {
    return QSvgWidget_QBaseSizeHint((QSvgWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgwidget.html#load)
///
/// ``` QSvgWidget* self, const char* file ```
void q_svgwidget_load(void* self, const char* file) {
    QSvgWidget_Load((QSvgWidget*)self, qstring(file));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgwidget.html#load)
///
/// ``` QSvgWidget* self, const char* contents ```
void q_svgwidget_load_with_contents(void* self, const char* contents) {
    QSvgWidget_LoadWithContents((QSvgWidget*)self, qstring(contents));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgwidget.html#paintEvent)
///
/// ``` QSvgWidget* self, QPaintEvent* event ```
void q_svgwidget_paint_event(void* self, void* event) {
    QSvgWidget_PaintEvent((QSvgWidget*)self, (QPaintEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QPaintEvent*) ```
void q_svgwidget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnPaintEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSvgWidget* self, QPaintEvent* event ```
void q_svgwidget_qbase_paint_event(void* self, void* event) {
    QSvgWidget_QBasePaintEvent((QSvgWidget*)self, (QPaintEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_svgwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QSvgWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_svgwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSvgWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QSvgWidget* self ```
uintptr_t q_svgwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QSvgWidget* self ```
uintptr_t q_svgwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QSvgWidget* self ```
uintptr_t q_svgwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QSvgWidget* self ```
QStyle* q_svgwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QSvgWidget* self, QStyle* style ```
void q_svgwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QSvgWidget* self ```
int64_t q_svgwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QSvgWidget* self, enum Qt__WindowModality windowModality ```
void q_svgwidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QSvgWidget* self, QWidget* param1 ```
bool q_svgwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QSvgWidget* self, bool enabled ```
void q_svgwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QSvgWidget* self, bool disabled ```
void q_svgwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QSvgWidget* self, bool windowModified ```
void q_svgwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QSvgWidget* self ```
QRect* q_svgwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QSvgWidget* self ```
QRect* q_svgwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QSvgWidget* self ```
QRect* q_svgwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QSvgWidget* self ```
QPoint* q_svgwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QSvgWidget* self ```
QSize* q_svgwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QSvgWidget* self ```
QSize* q_svgwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QSvgWidget* self ```
QRect* q_svgwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QSvgWidget* self ```
QRect* q_svgwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QSvgWidget* self ```
QRegion* q_svgwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QSvgWidget* self ```
QSize* q_svgwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QSvgWidget* self ```
QSize* q_svgwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QSvgWidget* self, QSize* minimumSize ```
void q_svgwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QSvgWidget* self, int minw, int minh ```
void q_svgwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QSvgWidget* self, QSize* maximumSize ```
void q_svgwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QSvgWidget* self, int maxw, int maxh ```
void q_svgwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QSvgWidget* self, int minw ```
void q_svgwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QSvgWidget* self, int minh ```
void q_svgwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QSvgWidget* self, int maxw ```
void q_svgwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QSvgWidget* self, int maxh ```
void q_svgwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QSvgWidget* self ```
QSize* q_svgwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QSvgWidget* self, QSize* sizeIncrement ```
void q_svgwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QSvgWidget* self, int w, int h ```
void q_svgwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QSvgWidget* self ```
QSize* q_svgwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QSvgWidget* self, QSize* baseSize ```
void q_svgwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QSvgWidget* self, int basew, int baseh ```
void q_svgwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QSvgWidget* self, QSize* fixedSize ```
void q_svgwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QSvgWidget* self, int w, int h ```
void q_svgwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QSvgWidget* self, int w ```
void q_svgwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QSvgWidget* self, int h ```
void q_svgwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QSvgWidget* self, QPointF* param1 ```
QPointF* q_svgwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QSvgWidget* self, QPoint* param1 ```
QPoint* q_svgwidget_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QSvgWidget* self, QPointF* param1 ```
QPointF* q_svgwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QSvgWidget* self, QPoint* param1 ```
QPoint* q_svgwidget_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QSvgWidget* self, QPointF* param1 ```
QPointF* q_svgwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QSvgWidget* self, QPoint* param1 ```
QPoint* q_svgwidget_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QSvgWidget* self, QPointF* param1 ```
QPointF* q_svgwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QSvgWidget* self, QPoint* param1 ```
QPoint* q_svgwidget_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QSvgWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_svgwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QSvgWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_svgwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QSvgWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_svgwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QSvgWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_svgwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QSvgWidget* self ```
QWidget* q_svgwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QSvgWidget* self ```
QWidget* q_svgwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QSvgWidget* self ```
QWidget* q_svgwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QSvgWidget* self ```
QPalette* q_svgwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QSvgWidget* self, QPalette* palette ```
void q_svgwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QSvgWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_svgwidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QSvgWidget* self ```
int64_t q_svgwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QSvgWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_svgwidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QSvgWidget* self ```
int64_t q_svgwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QSvgWidget* self ```
QFont* q_svgwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QSvgWidget* self, QFont* font ```
void q_svgwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QSvgWidget* self ```
QFontMetrics* q_svgwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QSvgWidget* self ```
QFontInfo* q_svgwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QSvgWidget* self ```
QCursor* q_svgwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QSvgWidget* self, QCursor* cursor ```
void q_svgwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QSvgWidget* self, bool enable ```
void q_svgwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QSvgWidget* self, bool enable ```
void q_svgwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QSvgWidget* self, QBitmap* mask ```
void q_svgwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QSvgWidget* self, QRegion* mask ```
void q_svgwidget_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QSvgWidget* self ```
QRegion* q_svgwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSvgWidget* self, QPaintDevice* target ```
void q_svgwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSvgWidget* self, QPainter* painter ```
void q_svgwidget_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QSvgWidget* self ```
QPixmap* q_svgwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QSvgWidget* self ```
QGraphicsEffect* q_svgwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QSvgWidget* self, QGraphicsEffect* effect ```
void q_svgwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QSvgWidget* self, enum Qt__GestureType typeVal ```
void q_svgwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QSvgWidget* self, enum Qt__GestureType typeVal ```
void q_svgwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QSvgWidget* self, const char* windowTitle ```
void q_svgwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QSvgWidget* self, const char* styleSheet ```
void q_svgwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QSvgWidget* self ```
const char* q_svgwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QSvgWidget* self ```
const char* q_svgwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QSvgWidget* self, QIcon* icon ```
void q_svgwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QSvgWidget* self ```
QIcon* q_svgwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QSvgWidget* self, const char* windowIconText ```
void q_svgwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QSvgWidget* self ```
const char* q_svgwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QSvgWidget* self, const char* windowRole ```
void q_svgwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QSvgWidget* self ```
const char* q_svgwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QSvgWidget* self, const char* filePath ```
void q_svgwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QSvgWidget* self ```
const char* q_svgwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QSvgWidget* self, double level ```
void q_svgwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QSvgWidget* self ```
double q_svgwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QSvgWidget* self, const char* toolTip ```
void q_svgwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QSvgWidget* self ```
const char* q_svgwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QSvgWidget* self, int msec ```
void q_svgwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QSvgWidget* self, const char* statusTip ```
void q_svgwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QSvgWidget* self ```
const char* q_svgwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QSvgWidget* self, const char* whatsThis ```
void q_svgwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QSvgWidget* self ```
const char* q_svgwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QSvgWidget* self ```
const char* q_svgwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QSvgWidget* self, const char* name ```
void q_svgwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QSvgWidget* self ```
const char* q_svgwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QSvgWidget* self, const char* description ```
void q_svgwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QSvgWidget* self, enum Qt__LayoutDirection direction ```
void q_svgwidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QSvgWidget* self ```
int64_t q_svgwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QSvgWidget* self, QLocale* locale ```
void q_svgwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QSvgWidget* self ```
QLocale* q_svgwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QSvgWidget* self, enum Qt__FocusReason reason ```
void q_svgwidget_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QSvgWidget* self ```
int64_t q_svgwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QSvgWidget* self, enum Qt__FocusPolicy policy ```
void q_svgwidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_svgwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QSvgWidget* self, QWidget* focusProxy ```
void q_svgwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QSvgWidget* self ```
QWidget* q_svgwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QSvgWidget* self ```
int64_t q_svgwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QSvgWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_svgwidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QSvgWidget* self, QCursor* param1 ```
void q_svgwidget_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QSvgWidget* self, QKeySequence* key ```
int32_t q_svgwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QSvgWidget* self, int id ```
void q_svgwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QSvgWidget* self, int id ```
void q_svgwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QSvgWidget* self, int id ```
void q_svgwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_svgwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_svgwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QSvgWidget* self, bool enable ```
void q_svgwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QSvgWidget* self ```
QGraphicsProxyWidget* q_svgwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSvgWidget* self, int x, int y, int w, int h ```
void q_svgwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSvgWidget* self, QRect* param1 ```
void q_svgwidget_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSvgWidget* self, QRegion* param1 ```
void q_svgwidget_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSvgWidget* self, int x, int y, int w, int h ```
void q_svgwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSvgWidget* self, QRect* param1 ```
void q_svgwidget_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSvgWidget* self, QRegion* param1 ```
void q_svgwidget_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QSvgWidget* self, bool hidden ```
void q_svgwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QSvgWidget* self, QWidget* param1 ```
void q_svgwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QSvgWidget* self, int x, int y ```
void q_svgwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QSvgWidget* self, QPoint* param1 ```
void q_svgwidget_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QSvgWidget* self, int w, int h ```
void q_svgwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QSvgWidget* self, QSize* param1 ```
void q_svgwidget_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QSvgWidget* self, int x, int y, int w, int h ```
void q_svgwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QSvgWidget* self, QRect* geometry ```
void q_svgwidget_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QSvgWidget* self ```
char* q_svgwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QSvgWidget* self, const char* geometry ```
bool q_svgwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QSvgWidget* self, QWidget* param1 ```
bool q_svgwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QSvgWidget* self ```
int64_t q_svgwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QSvgWidget* self, int state ```
void q_svgwidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QSvgWidget* self, int state ```
void q_svgwidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QSvgWidget* self ```
QSizePolicy* q_svgwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QSvgWidget* self, QSizePolicy* sizePolicy ```
void q_svgwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QSvgWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_svgwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QSvgWidget* self ```
QRegion* q_svgwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QSvgWidget* self, int left, int top, int right, int bottom ```
void q_svgwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QSvgWidget* self, QMargins* margins ```
void q_svgwidget_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QSvgWidget* self ```
QMargins* q_svgwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QSvgWidget* self ```
QRect* q_svgwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QSvgWidget* self ```
QLayout* q_svgwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QSvgWidget* self, QLayout* layout ```
void q_svgwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QSvgWidget* self, QWidget* parent ```
void q_svgwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QSvgWidget* self, QWidget* parent, int f ```
void q_svgwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QSvgWidget* self, int dx, int dy ```
void q_svgwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QSvgWidget* self, int dx, int dy, QRect* param3 ```
void q_svgwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QSvgWidget* self ```
QWidget* q_svgwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QSvgWidget* self ```
QWidget* q_svgwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QSvgWidget* self ```
QWidget* q_svgwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QSvgWidget* self, bool on ```
void q_svgwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSvgWidget* self, QAction* action ```
void q_svgwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QSvgWidget* self, QAction* actions[] ```
void q_svgwidget_add_actions(void* self, void* actions[]) {
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
/// ``` QSvgWidget* self, QAction* before, QAction* actions[] ```
void q_svgwidget_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QSvgWidget* self, QAction* before, QAction* action ```
void q_svgwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QSvgWidget* self, QAction* action ```
void q_svgwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QSvgWidget* self ```
libqt_list /* of QAction* */ q_svgwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSvgWidget* self, const char* text ```
QAction* q_svgwidget_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSvgWidget* self, QIcon* icon, const char* text ```
QAction* q_svgwidget_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSvgWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_svgwidget_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSvgWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_svgwidget_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QSvgWidget* self ```
QWidget* q_svgwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QSvgWidget* self, int typeVal ```
void q_svgwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QSvgWidget* self ```
int64_t q_svgwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QSvgWidget* self, enum Qt__WindowType param1 ```
void q_svgwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QSvgWidget* self, int typeVal ```
void q_svgwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QSvgWidget* self ```
int64_t q_svgwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_svgwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QSvgWidget* self, int x, int y ```
QWidget* q_svgwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QSvgWidget* self, QPoint* p ```
QWidget* q_svgwidget_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QSvgWidget* self, enum Qt__WidgetAttribute param1 ```
void q_svgwidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QSvgWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_svgwidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QSvgWidget* self, QWidget* child ```
bool q_svgwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QSvgWidget* self, bool enabled ```
void q_svgwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QSvgWidget* self ```
QBackingStore* q_svgwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QSvgWidget* self ```
QWindow* q_svgwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QSvgWidget* self ```
QScreen* q_svgwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QSvgWidget* self, QScreen* screen ```
void q_svgwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_svgwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QSvgWidget* self, const char* title ```
void q_svgwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QSvgWidget* self, void (*slot)(QWidget*, const char*) ```
void q_svgwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QSvgWidget* self, QIcon* icon ```
void q_svgwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QSvgWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_svgwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QSvgWidget* self, const char* iconText ```
void q_svgwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QSvgWidget* self, void (*slot)(QWidget*, const char*) ```
void q_svgwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QSvgWidget* self, QPoint* pos ```
void q_svgwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QSvgWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_svgwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QSvgWidget* self ```
int64_t q_svgwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QSvgWidget* self, int hints ```
void q_svgwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSvgWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_svgwidget_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSvgWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_svgwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSvgWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_svgwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSvgWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_svgwidget_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSvgWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_svgwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSvgWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_svgwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QSvgWidget* self, QRect* rectangle ```
QPixmap* q_svgwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QSvgWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_svgwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QSvgWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_svgwidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QSvgWidget* self, int id, bool enable ```
void q_svgwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QSvgWidget* self, int id, bool enable ```
void q_svgwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QSvgWidget* self, enum Qt__WindowType param1, bool on ```
void q_svgwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QSvgWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_svgwidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_svgwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_svgwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSvgWidget* self ```
const char* q_svgwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSvgWidget* self, const char* name ```
void q_svgwidget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSvgWidget* self, bool b ```
bool q_svgwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSvgWidget* self ```
QThread* q_svgwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSvgWidget* self, QThread* thread ```
void q_svgwidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSvgWidget* self, int interval ```
int32_t q_svgwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSvgWidget* self, int id ```
void q_svgwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSvgWidget* self ```
libqt_list /* of QObject* */ q_svgwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSvgWidget* self, QObject* filterObj ```
void q_svgwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSvgWidget* self, QObject* obj ```
void q_svgwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_svgwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSvgWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_svgwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_svgwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_svgwidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSvgWidget* self, const char* name, QVariant* value ```
bool q_svgwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSvgWidget* self, const char* name ```
QVariant* q_svgwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSvgWidget* self ```
const char** q_svgwidget_dynamic_property_names(void* self) {
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
/// ``` QSvgWidget* self ```
QBindingStorage* q_svgwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSvgWidget* self ```
QBindingStorage* q_svgwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSvgWidget* self, void (*slot)(QObject*) ```
void q_svgwidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSvgWidget* self ```
QObject* q_svgwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSvgWidget* self, const char* classname ```
bool q_svgwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSvgWidget* self ```
void q_svgwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSvgWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_svgwidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_svgwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSvgWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_svgwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSvgWidget* self, QObject* param1 ```
void q_svgwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSvgWidget* self, void (*slot)(QObject*, QObject*) ```
void q_svgwidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QSvgWidget* self ```
double q_svgwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QSvgWidget* self ```
double q_svgwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_svgwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_dev_type(void* self) {
    return QSvgWidget_DevType((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_qbase_dev_type(void* self) {
    return QSvgWidget_QBaseDevType((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, int32_t (*slot)() ```
void q_svgwidget_on_dev_type(void* self, int32_t (*slot)()) {
    QSvgWidget_OnDevType((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, bool visible ```
void q_svgwidget_set_visible(void* self, bool visible) {
    QSvgWidget_SetVisible((QSvgWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, bool visible ```
void q_svgwidget_qbase_set_visible(void* self, bool visible) {
    QSvgWidget_QBaseSetVisible((QSvgWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, bool) ```
void q_svgwidget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QSvgWidget_OnSetVisible((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self ```
QSize* q_svgwidget_minimum_size_hint(void* self) {
    return QSvgWidget_MinimumSizeHint((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self ```
QSize* q_svgwidget_qbase_minimum_size_hint(void* self) {
    return QSvgWidget_QBaseMinimumSizeHint((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, QSize* (*slot)() ```
void q_svgwidget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QSvgWidget_OnMinimumSizeHint((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, int param1 ```
int32_t q_svgwidget_height_for_width(void* self, int param1) {
    return QSvgWidget_HeightForWidth((QSvgWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, int param1 ```
int32_t q_svgwidget_qbase_height_for_width(void* self, int param1) {
    return QSvgWidget_QBaseHeightForWidth((QSvgWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, int32_t (*slot)(QSvgWidget*, int) ```
void q_svgwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QSvgWidget_OnHeightForWidth((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_has_height_for_width(void* self) {
    return QSvgWidget_HasHeightForWidth((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_qbase_has_height_for_width(void* self) {
    return QSvgWidget_QBaseHasHeightForWidth((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, bool (*slot)() ```
void q_svgwidget_on_has_height_for_width(void* self, bool (*slot)()) {
    QSvgWidget_OnHasHeightForWidth((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self ```
QPaintEngine* q_svgwidget_paint_engine(void* self) {
    return QSvgWidget_PaintEngine((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self ```
QPaintEngine* q_svgwidget_qbase_paint_engine(void* self) {
    return QSvgWidget_QBasePaintEngine((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, QPaintEngine* (*slot)() ```
void q_svgwidget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QSvgWidget_OnPaintEngine((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QEvent* event ```
bool q_svgwidget_event(void* self, void* event) {
    return QSvgWidget_Event((QSvgWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QEvent* event ```
bool q_svgwidget_qbase_event(void* self, void* event) {
    return QSvgWidget_QBaseEvent((QSvgWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, bool (*slot)(QSvgWidget*, QEvent*) ```
void q_svgwidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QSvgWidget_OnEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QMouseEvent* event ```
void q_svgwidget_mouse_press_event(void* self, void* event) {
    QSvgWidget_MousePressEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QMouseEvent* event ```
void q_svgwidget_qbase_mouse_press_event(void* self, void* event) {
    QSvgWidget_QBaseMousePressEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QMouseEvent*) ```
void q_svgwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnMousePressEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QMouseEvent* event ```
void q_svgwidget_mouse_release_event(void* self, void* event) {
    QSvgWidget_MouseReleaseEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QMouseEvent* event ```
void q_svgwidget_qbase_mouse_release_event(void* self, void* event) {
    QSvgWidget_QBaseMouseReleaseEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QMouseEvent*) ```
void q_svgwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnMouseReleaseEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QMouseEvent* event ```
void q_svgwidget_mouse_double_click_event(void* self, void* event) {
    QSvgWidget_MouseDoubleClickEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QMouseEvent* event ```
void q_svgwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QSvgWidget_QBaseMouseDoubleClickEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QMouseEvent*) ```
void q_svgwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnMouseDoubleClickEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QMouseEvent* event ```
void q_svgwidget_mouse_move_event(void* self, void* event) {
    QSvgWidget_MouseMoveEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QMouseEvent* event ```
void q_svgwidget_qbase_mouse_move_event(void* self, void* event) {
    QSvgWidget_QBaseMouseMoveEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QMouseEvent*) ```
void q_svgwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnMouseMoveEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QWheelEvent* event ```
void q_svgwidget_wheel_event(void* self, void* event) {
    QSvgWidget_WheelEvent((QSvgWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QWheelEvent* event ```
void q_svgwidget_qbase_wheel_event(void* self, void* event) {
    QSvgWidget_QBaseWheelEvent((QSvgWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QWheelEvent*) ```
void q_svgwidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnWheelEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QKeyEvent* event ```
void q_svgwidget_key_press_event(void* self, void* event) {
    QSvgWidget_KeyPressEvent((QSvgWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QKeyEvent* event ```
void q_svgwidget_qbase_key_press_event(void* self, void* event) {
    QSvgWidget_QBaseKeyPressEvent((QSvgWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QKeyEvent*) ```
void q_svgwidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnKeyPressEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QKeyEvent* event ```
void q_svgwidget_key_release_event(void* self, void* event) {
    QSvgWidget_KeyReleaseEvent((QSvgWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QKeyEvent* event ```
void q_svgwidget_qbase_key_release_event(void* self, void* event) {
    QSvgWidget_QBaseKeyReleaseEvent((QSvgWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QKeyEvent*) ```
void q_svgwidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnKeyReleaseEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QFocusEvent* event ```
void q_svgwidget_focus_in_event(void* self, void* event) {
    QSvgWidget_FocusInEvent((QSvgWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QFocusEvent* event ```
void q_svgwidget_qbase_focus_in_event(void* self, void* event) {
    QSvgWidget_QBaseFocusInEvent((QSvgWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QFocusEvent*) ```
void q_svgwidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnFocusInEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QFocusEvent* event ```
void q_svgwidget_focus_out_event(void* self, void* event) {
    QSvgWidget_FocusOutEvent((QSvgWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QFocusEvent* event ```
void q_svgwidget_qbase_focus_out_event(void* self, void* event) {
    QSvgWidget_QBaseFocusOutEvent((QSvgWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QFocusEvent*) ```
void q_svgwidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnFocusOutEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QEnterEvent* event ```
void q_svgwidget_enter_event(void* self, void* event) {
    QSvgWidget_EnterEvent((QSvgWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QEnterEvent* event ```
void q_svgwidget_qbase_enter_event(void* self, void* event) {
    QSvgWidget_QBaseEnterEvent((QSvgWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QEnterEvent*) ```
void q_svgwidget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnEnterEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QEvent* event ```
void q_svgwidget_leave_event(void* self, void* event) {
    QSvgWidget_LeaveEvent((QSvgWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QEvent* event ```
void q_svgwidget_qbase_leave_event(void* self, void* event) {
    QSvgWidget_QBaseLeaveEvent((QSvgWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QEvent*) ```
void q_svgwidget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnLeaveEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QMoveEvent* event ```
void q_svgwidget_move_event(void* self, void* event) {
    QSvgWidget_MoveEvent((QSvgWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QMoveEvent* event ```
void q_svgwidget_qbase_move_event(void* self, void* event) {
    QSvgWidget_QBaseMoveEvent((QSvgWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QMoveEvent*) ```
void q_svgwidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnMoveEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QResizeEvent* event ```
void q_svgwidget_resize_event(void* self, void* event) {
    QSvgWidget_ResizeEvent((QSvgWidget*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QResizeEvent* event ```
void q_svgwidget_qbase_resize_event(void* self, void* event) {
    QSvgWidget_QBaseResizeEvent((QSvgWidget*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QResizeEvent*) ```
void q_svgwidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnResizeEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QCloseEvent* event ```
void q_svgwidget_close_event(void* self, void* event) {
    QSvgWidget_CloseEvent((QSvgWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QCloseEvent* event ```
void q_svgwidget_qbase_close_event(void* self, void* event) {
    QSvgWidget_QBaseCloseEvent((QSvgWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QCloseEvent*) ```
void q_svgwidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnCloseEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QContextMenuEvent* event ```
void q_svgwidget_context_menu_event(void* self, void* event) {
    QSvgWidget_ContextMenuEvent((QSvgWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QContextMenuEvent* event ```
void q_svgwidget_qbase_context_menu_event(void* self, void* event) {
    QSvgWidget_QBaseContextMenuEvent((QSvgWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QContextMenuEvent*) ```
void q_svgwidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnContextMenuEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QTabletEvent* event ```
void q_svgwidget_tablet_event(void* self, void* event) {
    QSvgWidget_TabletEvent((QSvgWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QTabletEvent* event ```
void q_svgwidget_qbase_tablet_event(void* self, void* event) {
    QSvgWidget_QBaseTabletEvent((QSvgWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QTabletEvent*) ```
void q_svgwidget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnTabletEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QActionEvent* event ```
void q_svgwidget_action_event(void* self, void* event) {
    QSvgWidget_ActionEvent((QSvgWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QActionEvent* event ```
void q_svgwidget_qbase_action_event(void* self, void* event) {
    QSvgWidget_QBaseActionEvent((QSvgWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QActionEvent*) ```
void q_svgwidget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnActionEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QDragEnterEvent* event ```
void q_svgwidget_drag_enter_event(void* self, void* event) {
    QSvgWidget_DragEnterEvent((QSvgWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QDragEnterEvent* event ```
void q_svgwidget_qbase_drag_enter_event(void* self, void* event) {
    QSvgWidget_QBaseDragEnterEvent((QSvgWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QDragEnterEvent*) ```
void q_svgwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnDragEnterEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QDragMoveEvent* event ```
void q_svgwidget_drag_move_event(void* self, void* event) {
    QSvgWidget_DragMoveEvent((QSvgWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QDragMoveEvent* event ```
void q_svgwidget_qbase_drag_move_event(void* self, void* event) {
    QSvgWidget_QBaseDragMoveEvent((QSvgWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QDragMoveEvent*) ```
void q_svgwidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnDragMoveEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QDragLeaveEvent* event ```
void q_svgwidget_drag_leave_event(void* self, void* event) {
    QSvgWidget_DragLeaveEvent((QSvgWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QDragLeaveEvent* event ```
void q_svgwidget_qbase_drag_leave_event(void* self, void* event) {
    QSvgWidget_QBaseDragLeaveEvent((QSvgWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QDragLeaveEvent*) ```
void q_svgwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnDragLeaveEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QDropEvent* event ```
void q_svgwidget_drop_event(void* self, void* event) {
    QSvgWidget_DropEvent((QSvgWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QDropEvent* event ```
void q_svgwidget_qbase_drop_event(void* self, void* event) {
    QSvgWidget_QBaseDropEvent((QSvgWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QDropEvent*) ```
void q_svgwidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnDropEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QShowEvent* event ```
void q_svgwidget_show_event(void* self, void* event) {
    QSvgWidget_ShowEvent((QSvgWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QShowEvent* event ```
void q_svgwidget_qbase_show_event(void* self, void* event) {
    QSvgWidget_QBaseShowEvent((QSvgWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QShowEvent*) ```
void q_svgwidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnShowEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QHideEvent* event ```
void q_svgwidget_hide_event(void* self, void* event) {
    QSvgWidget_HideEvent((QSvgWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QHideEvent* event ```
void q_svgwidget_qbase_hide_event(void* self, void* event) {
    QSvgWidget_QBaseHideEvent((QSvgWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QHideEvent*) ```
void q_svgwidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnHideEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_svgwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSvgWidget_NativeEvent((QSvgWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_svgwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSvgWidget_QBaseNativeEvent((QSvgWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, bool (*slot)(QSvgWidget*, const char*, void*, intptr_t*) ```
void q_svgwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QSvgWidget_OnNativeEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QEvent* param1 ```
void q_svgwidget_change_event(void* self, void* param1) {
    QSvgWidget_ChangeEvent((QSvgWidget*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QEvent* param1 ```
void q_svgwidget_qbase_change_event(void* self, void* param1) {
    QSvgWidget_QBaseChangeEvent((QSvgWidget*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QEvent*) ```
void q_svgwidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnChangeEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_svgwidget_metric(void* self, int64_t param1) {
    return QSvgWidget_Metric((QSvgWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_svgwidget_qbase_metric(void* self, int64_t param1) {
    return QSvgWidget_QBaseMetric((QSvgWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, int32_t (*slot)(QSvgWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_svgwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QSvgWidget_OnMetric((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QPainter* painter ```
void q_svgwidget_init_painter(void* self, void* painter) {
    QSvgWidget_InitPainter((QSvgWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QPainter* painter ```
void q_svgwidget_qbase_init_painter(void* self, void* painter) {
    QSvgWidget_QBaseInitPainter((QSvgWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QPainter*) ```
void q_svgwidget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnInitPainter((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QPoint* offset ```
QPaintDevice* q_svgwidget_redirected(void* self, void* offset) {
    return QSvgWidget_Redirected((QSvgWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QPoint* offset ```
QPaintDevice* q_svgwidget_qbase_redirected(void* self, void* offset) {
    return QSvgWidget_QBaseRedirected((QSvgWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, QPaintDevice* (*slot)(QSvgWidget*, QPoint*) ```
void q_svgwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QSvgWidget_OnRedirected((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self ```
QPainter* q_svgwidget_shared_painter(void* self) {
    return QSvgWidget_SharedPainter((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self ```
QPainter* q_svgwidget_qbase_shared_painter(void* self) {
    return QSvgWidget_QBaseSharedPainter((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, QPainter* (*slot)() ```
void q_svgwidget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QSvgWidget_OnSharedPainter((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QInputMethodEvent* param1 ```
void q_svgwidget_input_method_event(void* self, void* param1) {
    QSvgWidget_InputMethodEvent((QSvgWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QInputMethodEvent* param1 ```
void q_svgwidget_qbase_input_method_event(void* self, void* param1) {
    QSvgWidget_QBaseInputMethodEvent((QSvgWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QInputMethodEvent*) ```
void q_svgwidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnInputMethodEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_svgwidget_input_method_query(void* self, int64_t param1) {
    return QSvgWidget_InputMethodQuery((QSvgWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_svgwidget_qbase_input_method_query(void* self, int64_t param1) {
    return QSvgWidget_QBaseInputMethodQuery((QSvgWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, QVariant* (*slot)(QSvgWidget*, enum Qt__InputMethodQuery) ```
void q_svgwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QSvgWidget_OnInputMethodQuery((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, bool next ```
bool q_svgwidget_focus_next_prev_child(void* self, bool next) {
    return QSvgWidget_FocusNextPrevChild((QSvgWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, bool next ```
bool q_svgwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QSvgWidget_QBaseFocusNextPrevChild((QSvgWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, bool (*slot)(QSvgWidget*, bool) ```
void q_svgwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QSvgWidget_OnFocusNextPrevChild((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QObject* watched, QEvent* event ```
bool q_svgwidget_event_filter(void* self, void* watched, void* event) {
    return QSvgWidget_EventFilter((QSvgWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QObject* watched, QEvent* event ```
bool q_svgwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QSvgWidget_QBaseEventFilter((QSvgWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, bool (*slot)(QSvgWidget*, QObject*, QEvent*) ```
void q_svgwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSvgWidget_OnEventFilter((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QTimerEvent* event ```
void q_svgwidget_timer_event(void* self, void* event) {
    QSvgWidget_TimerEvent((QSvgWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QTimerEvent* event ```
void q_svgwidget_qbase_timer_event(void* self, void* event) {
    QSvgWidget_QBaseTimerEvent((QSvgWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QTimerEvent*) ```
void q_svgwidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnTimerEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QChildEvent* event ```
void q_svgwidget_child_event(void* self, void* event) {
    QSvgWidget_ChildEvent((QSvgWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QChildEvent* event ```
void q_svgwidget_qbase_child_event(void* self, void* event) {
    QSvgWidget_QBaseChildEvent((QSvgWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QChildEvent*) ```
void q_svgwidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnChildEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QEvent* event ```
void q_svgwidget_custom_event(void* self, void* event) {
    QSvgWidget_CustomEvent((QSvgWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QEvent* event ```
void q_svgwidget_qbase_custom_event(void* self, void* event) {
    QSvgWidget_QBaseCustomEvent((QSvgWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QEvent*) ```
void q_svgwidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnCustomEvent((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QMetaMethod* signal ```
void q_svgwidget_connect_notify(void* self, void* signal) {
    QSvgWidget_ConnectNotify((QSvgWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QMetaMethod* signal ```
void q_svgwidget_qbase_connect_notify(void* self, void* signal) {
    QSvgWidget_QBaseConnectNotify((QSvgWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QMetaMethod*) ```
void q_svgwidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnConnectNotify((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QMetaMethod* signal ```
void q_svgwidget_disconnect_notify(void* self, void* signal) {
    QSvgWidget_DisconnectNotify((QSvgWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QMetaMethod* signal ```
void q_svgwidget_qbase_disconnect_notify(void* self, void* signal) {
    QSvgWidget_QBaseDisconnectNotify((QSvgWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)(QSvgWidget*, QMetaMethod*) ```
void q_svgwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSvgWidget_OnDisconnectNotify((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self ```
void q_svgwidget_update_micro_focus(void* self) {
    QSvgWidget_UpdateMicroFocus((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self ```
void q_svgwidget_qbase_update_micro_focus(void* self) {
    QSvgWidget_QBaseUpdateMicroFocus((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)() ```
void q_svgwidget_on_update_micro_focus(void* self, void (*slot)()) {
    QSvgWidget_OnUpdateMicroFocus((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self ```
void q_svgwidget_create(void* self) {
    QSvgWidget_Create((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self ```
void q_svgwidget_qbase_create(void* self) {
    QSvgWidget_QBaseCreate((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)() ```
void q_svgwidget_on_create(void* self, void (*slot)()) {
    QSvgWidget_OnCreate((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self ```
void q_svgwidget_destroy(void* self) {
    QSvgWidget_Destroy((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self ```
void q_svgwidget_qbase_destroy(void* self) {
    QSvgWidget_QBaseDestroy((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, void (*slot)() ```
void q_svgwidget_on_destroy(void* self, void (*slot)()) {
    QSvgWidget_OnDestroy((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_focus_next_child(void* self) {
    return QSvgWidget_FocusNextChild((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_qbase_focus_next_child(void* self) {
    return QSvgWidget_QBaseFocusNextChild((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, bool (*slot)() ```
void q_svgwidget_on_focus_next_child(void* self, bool (*slot)()) {
    QSvgWidget_OnFocusNextChild((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_focus_previous_child(void* self) {
    return QSvgWidget_FocusPreviousChild((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self ```
bool q_svgwidget_qbase_focus_previous_child(void* self) {
    return QSvgWidget_QBaseFocusPreviousChild((QSvgWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, bool (*slot)() ```
void q_svgwidget_on_focus_previous_child(void* self, bool (*slot)()) {
    QSvgWidget_OnFocusPreviousChild((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self ```
QObject* q_svgwidget_sender(void* self) {
    return QSvgWidget_Sender((QSvgWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self ```
QObject* q_svgwidget_qbase_sender(void* self) {
    return QSvgWidget_QBaseSender((QSvgWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, QObject* (*slot)() ```
void q_svgwidget_on_sender(void* self, QObject* (*slot)()) {
    QSvgWidget_OnSender((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_sender_signal_index(void* self) {
    return QSvgWidget_SenderSignalIndex((QSvgWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self ```
int32_t q_svgwidget_qbase_sender_signal_index(void* self) {
    return QSvgWidget_QBaseSenderSignalIndex((QSvgWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, int32_t (*slot)() ```
void q_svgwidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSvgWidget_OnSenderSignalIndex((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, const char* signal ```
int32_t q_svgwidget_receivers(void* self, const char* signal) {
    return QSvgWidget_Receivers((QSvgWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, const char* signal ```
int32_t q_svgwidget_qbase_receivers(void* self, const char* signal) {
    return QSvgWidget_QBaseReceivers((QSvgWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, int32_t (*slot)(QSvgWidget*, const char*) ```
void q_svgwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSvgWidget_OnReceivers((QSvgWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgWidget* self, QMetaMethod* signal ```
bool q_svgwidget_is_signal_connected(void* self, void* signal) {
    return QSvgWidget_IsSignalConnected((QSvgWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgWidget* self, QMetaMethod* signal ```
bool q_svgwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QSvgWidget_QBaseIsSignalConnected((QSvgWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgWidget* self, bool (*slot)(QSvgWidget*, QMetaMethod*) ```
void q_svgwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSvgWidget_OnIsSignalConnected((QSvgWidget*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSvgWidget* self ```
void q_svgwidget_delete(void* self) {
    QSvgWidget_Delete((QSvgWidget*)(self));
}