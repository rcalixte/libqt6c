#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqrubberband.hpp"
#include "libqrubberband.h"

/// https://doc.qt.io/qt-6/qrubberband.html

/// q_rubberband_new constructs a new QRubberBand object.
///
/// ``` enum QRubberBand__Shape param1 ```
QRubberBand* q_rubberband_new(int64_t param1) {
    return QRubberBand_new(param1);
}

/// q_rubberband_new2 constructs a new QRubberBand object.
///
/// ``` enum QRubberBand__Shape param1, QWidget* param2 ```
QRubberBand* q_rubberband_new2(int64_t param1, void* param2) {
    return QRubberBand_new2(param1, (QWidget*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QRubberBand* self ```
QMetaObject* q_rubberband_meta_object(void* self) {
    return QRubberBand_MetaObject((QRubberBand*)self);
}

/// ``` QRubberBand* self, const char* param1 ```
void* q_rubberband_metacast(void* self, const char* param1) {
    return QRubberBand_Metacast((QRubberBand*)self, param1);
}

/// ``` QRubberBand* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_rubberband_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QRubberBand_Metacall((QRubberBand*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QRubberBand* self, int32_t (*slot)(QRubberBand*, enum QMetaObject__Call, int, void*) ```
void q_rubberband_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QRubberBand_OnMetacall((QRubberBand*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRubberBand* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_rubberband_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QRubberBand_QBaseMetacall((QRubberBand*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_rubberband_tr(const char* s) {
    libqt_string _str = QRubberBand_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#shape)
///
/// ``` QRubberBand* self ```
int64_t q_rubberband_shape(void* self) {
    return QRubberBand_Shape((QRubberBand*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#setGeometry)
///
/// ``` QRubberBand* self, QRect* r ```
void q_rubberband_set_geometry(void* self, void* r) {
    QRubberBand_SetGeometry((QRubberBand*)self, (QRect*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#setGeometry)
///
/// ``` QRubberBand* self, int x, int y, int w, int h ```
void q_rubberband_set_geometry2(void* self, int x, int y, int w, int h) {
    QRubberBand_SetGeometry2((QRubberBand*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#move)
///
/// ``` QRubberBand* self, int x, int y ```
void q_rubberband_move(void* self, int x, int y) {
    QRubberBand_Move((QRubberBand*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#move)
///
/// ``` QRubberBand* self, QPoint* p ```
void q_rubberband_move_with_q_point(void* self, void* p) {
    QRubberBand_MoveWithQPoint((QRubberBand*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#resize)
///
/// ``` QRubberBand* self, int w, int h ```
void q_rubberband_resize(void* self, int w, int h) {
    QRubberBand_Resize((QRubberBand*)self, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#resize)
///
/// ``` QRubberBand* self, QSize* s ```
void q_rubberband_resize_with_q_size(void* self, void* s) {
    QRubberBand_ResizeWithQSize((QRubberBand*)self, (QSize*)s);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#event)
///
/// ``` QRubberBand* self, QEvent* e ```
bool q_rubberband_event(void* self, void* e) {
    return QRubberBand_Event((QRubberBand*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QRubberBand* self, bool (*slot)(QRubberBand*, QEvent*) ```
void q_rubberband_on_event(void* self, bool (*slot)(void*, void*)) {
    QRubberBand_OnEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRubberBand* self, QEvent* e ```
bool q_rubberband_qbase_event(void* self, void* e) {
    return QRubberBand_QBaseEvent((QRubberBand*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#paintEvent)
///
/// ``` QRubberBand* self, QPaintEvent* param1 ```
void q_rubberband_paint_event(void* self, void* param1) {
    QRubberBand_PaintEvent((QRubberBand*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QPaintEvent*) ```
void q_rubberband_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnPaintEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRubberBand* self, QPaintEvent* param1 ```
void q_rubberband_qbase_paint_event(void* self, void* param1) {
    QRubberBand_QBasePaintEvent((QRubberBand*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#changeEvent)
///
/// ``` QRubberBand* self, QEvent* param1 ```
void q_rubberband_change_event(void* self, void* param1) {
    QRubberBand_ChangeEvent((QRubberBand*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QEvent*) ```
void q_rubberband_on_change_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnChangeEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRubberBand* self, QEvent* param1 ```
void q_rubberband_qbase_change_event(void* self, void* param1) {
    QRubberBand_QBaseChangeEvent((QRubberBand*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#showEvent)
///
/// ``` QRubberBand* self, QShowEvent* param1 ```
void q_rubberband_show_event(void* self, void* param1) {
    QRubberBand_ShowEvent((QRubberBand*)self, (QShowEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QShowEvent*) ```
void q_rubberband_on_show_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnShowEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRubberBand* self, QShowEvent* param1 ```
void q_rubberband_qbase_show_event(void* self, void* param1) {
    QRubberBand_QBaseShowEvent((QRubberBand*)self, (QShowEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#resizeEvent)
///
/// ``` QRubberBand* self, QResizeEvent* param1 ```
void q_rubberband_resize_event(void* self, void* param1) {
    QRubberBand_ResizeEvent((QRubberBand*)self, (QResizeEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QResizeEvent*) ```
void q_rubberband_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnResizeEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRubberBand* self, QResizeEvent* param1 ```
void q_rubberband_qbase_resize_event(void* self, void* param1) {
    QRubberBand_QBaseResizeEvent((QRubberBand*)self, (QResizeEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#moveEvent)
///
/// ``` QRubberBand* self, QMoveEvent* param1 ```
void q_rubberband_move_event(void* self, void* param1) {
    QRubberBand_MoveEvent((QRubberBand*)self, (QMoveEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QMoveEvent*) ```
void q_rubberband_on_move_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnMoveEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRubberBand* self, QMoveEvent* param1 ```
void q_rubberband_qbase_move_event(void* self, void* param1) {
    QRubberBand_QBaseMoveEvent((QRubberBand*)self, (QMoveEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrubberband.html#initStyleOption)
///
/// ``` QRubberBand* self, QStyleOptionRubberBand* option ```
void q_rubberband_init_style_option(void* self, void* option) {
    QRubberBand_InitStyleOption((QRubberBand*)self, (QStyleOptionRubberBand*)option);
}

/// Allows for overriding the related default method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QStyleOptionRubberBand*) ```
void q_rubberband_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnInitStyleOption((QRubberBand*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QRubberBand* self, QStyleOptionRubberBand* option ```
void q_rubberband_qbase_init_style_option(void* self, void* option) {
    QRubberBand_QBaseInitStyleOption((QRubberBand*)self, (QStyleOptionRubberBand*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_rubberband_tr2(const char* s, const char* c) {
    libqt_string _str = QRubberBand_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_rubberband_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QRubberBand_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QRubberBand* self ```
uintptr_t q_rubberband_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QRubberBand* self ```
void q_rubberband_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QRubberBand* self ```
uintptr_t q_rubberband_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QRubberBand* self ```
uintptr_t q_rubberband_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QRubberBand* self ```
QStyle* q_rubberband_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QRubberBand* self, QStyle* style ```
void q_rubberband_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QRubberBand* self ```
int64_t q_rubberband_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QRubberBand* self, enum Qt__WindowModality windowModality ```
void q_rubberband_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QRubberBand* self, QWidget* param1 ```
bool q_rubberband_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QRubberBand* self, bool enabled ```
void q_rubberband_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QRubberBand* self, bool disabled ```
void q_rubberband_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QRubberBand* self, bool windowModified ```
void q_rubberband_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QRubberBand* self ```
QRect* q_rubberband_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QRubberBand* self ```
QRect* q_rubberband_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QRubberBand* self ```
QRect* q_rubberband_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QRubberBand* self ```
QPoint* q_rubberband_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QRubberBand* self ```
QSize* q_rubberband_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QRubberBand* self ```
QSize* q_rubberband_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QRubberBand* self ```
QRect* q_rubberband_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QRubberBand* self ```
QRect* q_rubberband_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QRubberBand* self ```
QRegion* q_rubberband_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QRubberBand* self ```
QSize* q_rubberband_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QRubberBand* self ```
QSize* q_rubberband_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QRubberBand* self, QSize* minimumSize ```
void q_rubberband_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QRubberBand* self, int minw, int minh ```
void q_rubberband_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QRubberBand* self, QSize* maximumSize ```
void q_rubberband_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QRubberBand* self, int maxw, int maxh ```
void q_rubberband_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QRubberBand* self, int minw ```
void q_rubberband_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QRubberBand* self, int minh ```
void q_rubberband_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QRubberBand* self, int maxw ```
void q_rubberband_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QRubberBand* self, int maxh ```
void q_rubberband_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QRubberBand* self ```
QSize* q_rubberband_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QRubberBand* self, QSize* sizeIncrement ```
void q_rubberband_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QRubberBand* self, int w, int h ```
void q_rubberband_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QRubberBand* self ```
QSize* q_rubberband_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QRubberBand* self, QSize* baseSize ```
void q_rubberband_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QRubberBand* self, int basew, int baseh ```
void q_rubberband_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QRubberBand* self, QSize* fixedSize ```
void q_rubberband_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QRubberBand* self, int w, int h ```
void q_rubberband_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QRubberBand* self, int w ```
void q_rubberband_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QRubberBand* self, int h ```
void q_rubberband_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QRubberBand* self, QPointF* param1 ```
QPointF* q_rubberband_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QRubberBand* self, QPoint* param1 ```
QPoint* q_rubberband_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QRubberBand* self, QPointF* param1 ```
QPointF* q_rubberband_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QRubberBand* self, QPoint* param1 ```
QPoint* q_rubberband_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QRubberBand* self, QPointF* param1 ```
QPointF* q_rubberband_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QRubberBand* self, QPoint* param1 ```
QPoint* q_rubberband_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QRubberBand* self, QPointF* param1 ```
QPointF* q_rubberband_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QRubberBand* self, QPoint* param1 ```
QPoint* q_rubberband_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QRubberBand* self, QWidget* param1, QPointF* param2 ```
QPointF* q_rubberband_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QRubberBand* self, QWidget* param1, QPoint* param2 ```
QPoint* q_rubberband_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QRubberBand* self, QWidget* param1, QPointF* param2 ```
QPointF* q_rubberband_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QRubberBand* self, QWidget* param1, QPoint* param2 ```
QPoint* q_rubberband_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QRubberBand* self ```
QWidget* q_rubberband_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QRubberBand* self ```
QWidget* q_rubberband_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QRubberBand* self ```
QWidget* q_rubberband_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QRubberBand* self ```
QPalette* q_rubberband_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QRubberBand* self, QPalette* palette ```
void q_rubberband_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QRubberBand* self, enum QPalette__ColorRole backgroundRole ```
void q_rubberband_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QRubberBand* self ```
int64_t q_rubberband_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QRubberBand* self, enum QPalette__ColorRole foregroundRole ```
void q_rubberband_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QRubberBand* self ```
int64_t q_rubberband_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QRubberBand* self ```
QFont* q_rubberband_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QRubberBand* self, QFont* font ```
void q_rubberband_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QRubberBand* self ```
QFontMetrics* q_rubberband_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QRubberBand* self ```
QFontInfo* q_rubberband_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QRubberBand* self ```
QCursor* q_rubberband_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QRubberBand* self, QCursor* cursor ```
void q_rubberband_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QRubberBand* self ```
void q_rubberband_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QRubberBand* self, bool enable ```
void q_rubberband_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QRubberBand* self ```
bool q_rubberband_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QRubberBand* self ```
bool q_rubberband_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QRubberBand* self, bool enable ```
void q_rubberband_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QRubberBand* self ```
bool q_rubberband_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QRubberBand* self, QBitmap* mask ```
void q_rubberband_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QRubberBand* self, QRegion* mask ```
void q_rubberband_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QRubberBand* self ```
QRegion* q_rubberband_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QRubberBand* self ```
void q_rubberband_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRubberBand* self, QPaintDevice* target ```
void q_rubberband_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRubberBand* self, QPainter* painter ```
void q_rubberband_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QRubberBand* self ```
QPixmap* q_rubberband_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QRubberBand* self ```
QGraphicsEffect* q_rubberband_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QRubberBand* self, QGraphicsEffect* effect ```
void q_rubberband_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QRubberBand* self, enum Qt__GestureType typeVal ```
void q_rubberband_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QRubberBand* self, enum Qt__GestureType typeVal ```
void q_rubberband_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QRubberBand* self, const char* windowTitle ```
void q_rubberband_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QRubberBand* self, const char* styleSheet ```
void q_rubberband_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QRubberBand* self ```
const char* q_rubberband_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QRubberBand* self ```
const char* q_rubberband_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QRubberBand* self, QIcon* icon ```
void q_rubberband_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QRubberBand* self ```
QIcon* q_rubberband_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QRubberBand* self, const char* windowIconText ```
void q_rubberband_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QRubberBand* self ```
const char* q_rubberband_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QRubberBand* self, const char* windowRole ```
void q_rubberband_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QRubberBand* self ```
const char* q_rubberband_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QRubberBand* self, const char* filePath ```
void q_rubberband_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QRubberBand* self ```
const char* q_rubberband_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QRubberBand* self, double level ```
void q_rubberband_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QRubberBand* self ```
double q_rubberband_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QRubberBand* self, const char* toolTip ```
void q_rubberband_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QRubberBand* self ```
const char* q_rubberband_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QRubberBand* self, int msec ```
void q_rubberband_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QRubberBand* self, const char* statusTip ```
void q_rubberband_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QRubberBand* self ```
const char* q_rubberband_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QRubberBand* self, const char* whatsThis ```
void q_rubberband_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QRubberBand* self ```
const char* q_rubberband_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QRubberBand* self ```
const char* q_rubberband_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QRubberBand* self, const char* name ```
void q_rubberband_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QRubberBand* self ```
const char* q_rubberband_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QRubberBand* self, const char* description ```
void q_rubberband_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QRubberBand* self, enum Qt__LayoutDirection direction ```
void q_rubberband_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QRubberBand* self ```
int64_t q_rubberband_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QRubberBand* self ```
void q_rubberband_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QRubberBand* self, QLocale* locale ```
void q_rubberband_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QRubberBand* self ```
QLocale* q_rubberband_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QRubberBand* self ```
void q_rubberband_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QRubberBand* self ```
void q_rubberband_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QRubberBand* self ```
void q_rubberband_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QRubberBand* self ```
void q_rubberband_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QRubberBand* self, enum Qt__FocusReason reason ```
void q_rubberband_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QRubberBand* self ```
int64_t q_rubberband_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QRubberBand* self, enum Qt__FocusPolicy policy ```
void q_rubberband_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QRubberBand* self ```
bool q_rubberband_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_rubberband_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QRubberBand* self, QWidget* focusProxy ```
void q_rubberband_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QRubberBand* self ```
QWidget* q_rubberband_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QRubberBand* self ```
int64_t q_rubberband_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QRubberBand* self, enum Qt__ContextMenuPolicy policy ```
void q_rubberband_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QRubberBand* self ```
void q_rubberband_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QRubberBand* self, QCursor* param1 ```
void q_rubberband_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QRubberBand* self ```
void q_rubberband_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QRubberBand* self ```
void q_rubberband_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QRubberBand* self ```
void q_rubberband_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QRubberBand* self, QKeySequence* key ```
int32_t q_rubberband_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QRubberBand* self, int id ```
void q_rubberband_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QRubberBand* self, int id ```
void q_rubberband_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QRubberBand* self, int id ```
void q_rubberband_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_rubberband_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_rubberband_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QRubberBand* self ```
bool q_rubberband_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QRubberBand* self, bool enable ```
void q_rubberband_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QRubberBand* self ```
QGraphicsProxyWidget* q_rubberband_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QRubberBand* self ```
void q_rubberband_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QRubberBand* self ```
void q_rubberband_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QRubberBand* self, int x, int y, int w, int h ```
void q_rubberband_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QRubberBand* self, QRect* param1 ```
void q_rubberband_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QRubberBand* self, QRegion* param1 ```
void q_rubberband_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QRubberBand* self, int x, int y, int w, int h ```
void q_rubberband_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QRubberBand* self, QRect* param1 ```
void q_rubberband_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QRubberBand* self, QRegion* param1 ```
void q_rubberband_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QRubberBand* self, bool hidden ```
void q_rubberband_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QRubberBand* self ```
void q_rubberband_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QRubberBand* self ```
void q_rubberband_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QRubberBand* self ```
void q_rubberband_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QRubberBand* self ```
void q_rubberband_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QRubberBand* self ```
void q_rubberband_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QRubberBand* self ```
void q_rubberband_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QRubberBand* self ```
bool q_rubberband_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QRubberBand* self ```
void q_rubberband_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QRubberBand* self ```
void q_rubberband_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QRubberBand* self, QWidget* param1 ```
void q_rubberband_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QRubberBand* self, QRect* geometry ```
void q_rubberband_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QRubberBand* self ```
char* q_rubberband_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QRubberBand* self, const char* geometry ```
bool q_rubberband_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QRubberBand* self ```
void q_rubberband_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QRubberBand* self, QWidget* param1 ```
bool q_rubberband_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QRubberBand* self ```
int64_t q_rubberband_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QRubberBand* self, int state ```
void q_rubberband_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QRubberBand* self, int state ```
void q_rubberband_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QRubberBand* self ```
QSizePolicy* q_rubberband_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QRubberBand* self, QSizePolicy* sizePolicy ```
void q_rubberband_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QRubberBand* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_rubberband_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QRubberBand* self ```
QRegion* q_rubberband_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QRubberBand* self, int left, int top, int right, int bottom ```
void q_rubberband_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QRubberBand* self, QMargins* margins ```
void q_rubberband_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QRubberBand* self ```
QMargins* q_rubberband_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QRubberBand* self ```
QRect* q_rubberband_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QRubberBand* self ```
QLayout* q_rubberband_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QRubberBand* self, QLayout* layout ```
void q_rubberband_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QRubberBand* self ```
void q_rubberband_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QRubberBand* self, QWidget* parent ```
void q_rubberband_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QRubberBand* self, QWidget* parent, int f ```
void q_rubberband_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QRubberBand* self, int dx, int dy ```
void q_rubberband_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QRubberBand* self, int dx, int dy, QRect* param3 ```
void q_rubberband_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QRubberBand* self ```
QWidget* q_rubberband_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QRubberBand* self ```
QWidget* q_rubberband_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QRubberBand* self ```
QWidget* q_rubberband_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QRubberBand* self ```
bool q_rubberband_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QRubberBand* self, bool on ```
void q_rubberband_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QRubberBand* self, QAction* action ```
void q_rubberband_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QRubberBand* self, QAction* actions[] ```
void q_rubberband_add_actions(void* self, void* actions[]) {
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
/// ``` QRubberBand* self, QAction* before, QAction* actions[] ```
void q_rubberband_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QRubberBand* self, QAction* before, QAction* action ```
void q_rubberband_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QRubberBand* self, QAction* action ```
void q_rubberband_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QRubberBand* self ```
libqt_list /* of QAction* */ q_rubberband_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QRubberBand* self, const char* text ```
QAction* q_rubberband_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QRubberBand* self, QIcon* icon, const char* text ```
QAction* q_rubberband_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QRubberBand* self, const char* text, QKeySequence* shortcut ```
QAction* q_rubberband_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QRubberBand* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_rubberband_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QRubberBand* self ```
QWidget* q_rubberband_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QRubberBand* self, int typeVal ```
void q_rubberband_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QRubberBand* self ```
int64_t q_rubberband_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QRubberBand* self, enum Qt__WindowType param1 ```
void q_rubberband_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QRubberBand* self, int typeVal ```
void q_rubberband_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QRubberBand* self ```
int64_t q_rubberband_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_rubberband_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QRubberBand* self, int x, int y ```
QWidget* q_rubberband_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QRubberBand* self, QPoint* p ```
QWidget* q_rubberband_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QRubberBand* self, enum Qt__WidgetAttribute param1 ```
void q_rubberband_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QRubberBand* self, enum Qt__WidgetAttribute param1 ```
bool q_rubberband_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QRubberBand* self ```
void q_rubberband_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QRubberBand* self, QWidget* child ```
bool q_rubberband_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QRubberBand* self ```
bool q_rubberband_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QRubberBand* self, bool enabled ```
void q_rubberband_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QRubberBand* self ```
QBackingStore* q_rubberband_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QRubberBand* self ```
QWindow* q_rubberband_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QRubberBand* self ```
QScreen* q_rubberband_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QRubberBand* self, QScreen* screen ```
void q_rubberband_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_rubberband_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QRubberBand* self, const char* title ```
void q_rubberband_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QRubberBand* self, void (*slot)(QWidget*, const char*) ```
void q_rubberband_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QRubberBand* self, QIcon* icon ```
void q_rubberband_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QRubberBand* self, void (*slot)(QWidget*, QIcon*) ```
void q_rubberband_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QRubberBand* self, const char* iconText ```
void q_rubberband_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QRubberBand* self, void (*slot)(QWidget*, const char*) ```
void q_rubberband_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QRubberBand* self, QPoint* pos ```
void q_rubberband_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QRubberBand* self, void (*slot)(QWidget*, QPoint*) ```
void q_rubberband_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QRubberBand* self ```
int64_t q_rubberband_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QRubberBand* self, int hints ```
void q_rubberband_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRubberBand* self, QPaintDevice* target, QPoint* targetOffset ```
void q_rubberband_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRubberBand* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_rubberband_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRubberBand* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_rubberband_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRubberBand* self, QPainter* painter, QPoint* targetOffset ```
void q_rubberband_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRubberBand* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_rubberband_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QRubberBand* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_rubberband_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QRubberBand* self, QRect* rectangle ```
QPixmap* q_rubberband_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QRubberBand* self, enum Qt__GestureType typeVal, int flags ```
void q_rubberband_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QRubberBand* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_rubberband_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QRubberBand* self, int id, bool enable ```
void q_rubberband_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QRubberBand* self, int id, bool enable ```
void q_rubberband_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QRubberBand* self, enum Qt__WindowType param1, bool on ```
void q_rubberband_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QRubberBand* self, enum Qt__WidgetAttribute param1, bool on ```
void q_rubberband_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_rubberband_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_rubberband_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QRubberBand* self ```
const char* q_rubberband_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QRubberBand* self, const char* name ```
void q_rubberband_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QRubberBand* self ```
bool q_rubberband_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QRubberBand* self ```
bool q_rubberband_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QRubberBand* self, bool b ```
bool q_rubberband_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QRubberBand* self ```
QThread* q_rubberband_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QRubberBand* self, QThread* thread ```
void q_rubberband_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QRubberBand* self, int interval ```
int32_t q_rubberband_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QRubberBand* self, int id ```
void q_rubberband_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QRubberBand* self ```
libqt_list /* of QObject* */ q_rubberband_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QRubberBand* self, QObject* filterObj ```
void q_rubberband_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QRubberBand* self, QObject* obj ```
void q_rubberband_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_rubberband_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QRubberBand* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_rubberband_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_rubberband_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_rubberband_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QRubberBand* self ```
void q_rubberband_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QRubberBand* self ```
void q_rubberband_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QRubberBand* self, const char* name, QVariant* value ```
bool q_rubberband_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QRubberBand* self, const char* name ```
QVariant* q_rubberband_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QRubberBand* self ```
const char** q_rubberband_dynamic_property_names(void* self) {
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
/// ``` QRubberBand* self ```
QBindingStorage* q_rubberband_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QRubberBand* self ```
QBindingStorage* q_rubberband_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRubberBand* self ```
void q_rubberband_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QRubberBand* self, void (*slot)(QObject*) ```
void q_rubberband_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QRubberBand* self ```
QObject* q_rubberband_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QRubberBand* self, const char* classname ```
bool q_rubberband_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QRubberBand* self ```
void q_rubberband_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QRubberBand* self, int interval, enum Qt__TimerType timerType ```
int32_t q_rubberband_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_rubberband_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QRubberBand* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_rubberband_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRubberBand* self, QObject* param1 ```
void q_rubberband_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QRubberBand* self, void (*slot)(QObject*, QObject*) ```
void q_rubberband_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QRubberBand* self ```
bool q_rubberband_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QRubberBand* self ```
double q_rubberband_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QRubberBand* self ```
double q_rubberband_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_rubberband_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_dev_type(void* self) {
    return QRubberBand_DevType((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_qbase_dev_type(void* self) {
    return QRubberBand_QBaseDevType((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, int32_t (*slot)() ```
void q_rubberband_on_dev_type(void* self, int32_t (*slot)()) {
    QRubberBand_OnDevType((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, bool visible ```
void q_rubberband_set_visible(void* self, bool visible) {
    QRubberBand_SetVisible((QRubberBand*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, bool visible ```
void q_rubberband_qbase_set_visible(void* self, bool visible) {
    QRubberBand_QBaseSetVisible((QRubberBand*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, bool) ```
void q_rubberband_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QRubberBand_OnSetVisible((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self ```
QSize* q_rubberband_size_hint(void* self) {
    return QRubberBand_SizeHint((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self ```
QSize* q_rubberband_qbase_size_hint(void* self) {
    return QRubberBand_QBaseSizeHint((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, QSize* (*slot)() ```
void q_rubberband_on_size_hint(void* self, QSize* (*slot)()) {
    QRubberBand_OnSizeHint((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self ```
QSize* q_rubberband_minimum_size_hint(void* self) {
    return QRubberBand_MinimumSizeHint((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self ```
QSize* q_rubberband_qbase_minimum_size_hint(void* self) {
    return QRubberBand_QBaseMinimumSizeHint((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, QSize* (*slot)() ```
void q_rubberband_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QRubberBand_OnMinimumSizeHint((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, int param1 ```
int32_t q_rubberband_height_for_width(void* self, int param1) {
    return QRubberBand_HeightForWidth((QRubberBand*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, int param1 ```
int32_t q_rubberband_qbase_height_for_width(void* self, int param1) {
    return QRubberBand_QBaseHeightForWidth((QRubberBand*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, int32_t (*slot)(QRubberBand*, int) ```
void q_rubberband_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QRubberBand_OnHeightForWidth((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self ```
bool q_rubberband_has_height_for_width(void* self) {
    return QRubberBand_HasHeightForWidth((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self ```
bool q_rubberband_qbase_has_height_for_width(void* self) {
    return QRubberBand_QBaseHasHeightForWidth((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, bool (*slot)() ```
void q_rubberband_on_has_height_for_width(void* self, bool (*slot)()) {
    QRubberBand_OnHasHeightForWidth((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self ```
QPaintEngine* q_rubberband_paint_engine(void* self) {
    return QRubberBand_PaintEngine((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self ```
QPaintEngine* q_rubberband_qbase_paint_engine(void* self) {
    return QRubberBand_QBasePaintEngine((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, QPaintEngine* (*slot)() ```
void q_rubberband_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QRubberBand_OnPaintEngine((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QMouseEvent* event ```
void q_rubberband_mouse_press_event(void* self, void* event) {
    QRubberBand_MousePressEvent((QRubberBand*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QMouseEvent* event ```
void q_rubberband_qbase_mouse_press_event(void* self, void* event) {
    QRubberBand_QBaseMousePressEvent((QRubberBand*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QMouseEvent*) ```
void q_rubberband_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnMousePressEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QMouseEvent* event ```
void q_rubberband_mouse_release_event(void* self, void* event) {
    QRubberBand_MouseReleaseEvent((QRubberBand*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QMouseEvent* event ```
void q_rubberband_qbase_mouse_release_event(void* self, void* event) {
    QRubberBand_QBaseMouseReleaseEvent((QRubberBand*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QMouseEvent*) ```
void q_rubberband_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnMouseReleaseEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QMouseEvent* event ```
void q_rubberband_mouse_double_click_event(void* self, void* event) {
    QRubberBand_MouseDoubleClickEvent((QRubberBand*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QMouseEvent* event ```
void q_rubberband_qbase_mouse_double_click_event(void* self, void* event) {
    QRubberBand_QBaseMouseDoubleClickEvent((QRubberBand*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QMouseEvent*) ```
void q_rubberband_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnMouseDoubleClickEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QMouseEvent* event ```
void q_rubberband_mouse_move_event(void* self, void* event) {
    QRubberBand_MouseMoveEvent((QRubberBand*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QMouseEvent* event ```
void q_rubberband_qbase_mouse_move_event(void* self, void* event) {
    QRubberBand_QBaseMouseMoveEvent((QRubberBand*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QMouseEvent*) ```
void q_rubberband_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnMouseMoveEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QWheelEvent* event ```
void q_rubberband_wheel_event(void* self, void* event) {
    QRubberBand_WheelEvent((QRubberBand*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QWheelEvent* event ```
void q_rubberband_qbase_wheel_event(void* self, void* event) {
    QRubberBand_QBaseWheelEvent((QRubberBand*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QWheelEvent*) ```
void q_rubberband_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnWheelEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QKeyEvent* event ```
void q_rubberband_key_press_event(void* self, void* event) {
    QRubberBand_KeyPressEvent((QRubberBand*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QKeyEvent* event ```
void q_rubberband_qbase_key_press_event(void* self, void* event) {
    QRubberBand_QBaseKeyPressEvent((QRubberBand*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QKeyEvent*) ```
void q_rubberband_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnKeyPressEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QKeyEvent* event ```
void q_rubberband_key_release_event(void* self, void* event) {
    QRubberBand_KeyReleaseEvent((QRubberBand*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QKeyEvent* event ```
void q_rubberband_qbase_key_release_event(void* self, void* event) {
    QRubberBand_QBaseKeyReleaseEvent((QRubberBand*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QKeyEvent*) ```
void q_rubberband_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnKeyReleaseEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QFocusEvent* event ```
void q_rubberband_focus_in_event(void* self, void* event) {
    QRubberBand_FocusInEvent((QRubberBand*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QFocusEvent* event ```
void q_rubberband_qbase_focus_in_event(void* self, void* event) {
    QRubberBand_QBaseFocusInEvent((QRubberBand*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QFocusEvent*) ```
void q_rubberband_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnFocusInEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QFocusEvent* event ```
void q_rubberband_focus_out_event(void* self, void* event) {
    QRubberBand_FocusOutEvent((QRubberBand*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QFocusEvent* event ```
void q_rubberband_qbase_focus_out_event(void* self, void* event) {
    QRubberBand_QBaseFocusOutEvent((QRubberBand*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QFocusEvent*) ```
void q_rubberband_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnFocusOutEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QEnterEvent* event ```
void q_rubberband_enter_event(void* self, void* event) {
    QRubberBand_EnterEvent((QRubberBand*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QEnterEvent* event ```
void q_rubberband_qbase_enter_event(void* self, void* event) {
    QRubberBand_QBaseEnterEvent((QRubberBand*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QEnterEvent*) ```
void q_rubberband_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnEnterEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QEvent* event ```
void q_rubberband_leave_event(void* self, void* event) {
    QRubberBand_LeaveEvent((QRubberBand*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QEvent* event ```
void q_rubberband_qbase_leave_event(void* self, void* event) {
    QRubberBand_QBaseLeaveEvent((QRubberBand*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QEvent*) ```
void q_rubberband_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnLeaveEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QCloseEvent* event ```
void q_rubberband_close_event(void* self, void* event) {
    QRubberBand_CloseEvent((QRubberBand*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QCloseEvent* event ```
void q_rubberband_qbase_close_event(void* self, void* event) {
    QRubberBand_QBaseCloseEvent((QRubberBand*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QCloseEvent*) ```
void q_rubberband_on_close_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnCloseEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QContextMenuEvent* event ```
void q_rubberband_context_menu_event(void* self, void* event) {
    QRubberBand_ContextMenuEvent((QRubberBand*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QContextMenuEvent* event ```
void q_rubberband_qbase_context_menu_event(void* self, void* event) {
    QRubberBand_QBaseContextMenuEvent((QRubberBand*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QContextMenuEvent*) ```
void q_rubberband_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnContextMenuEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QTabletEvent* event ```
void q_rubberband_tablet_event(void* self, void* event) {
    QRubberBand_TabletEvent((QRubberBand*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QTabletEvent* event ```
void q_rubberband_qbase_tablet_event(void* self, void* event) {
    QRubberBand_QBaseTabletEvent((QRubberBand*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QTabletEvent*) ```
void q_rubberband_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnTabletEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QActionEvent* event ```
void q_rubberband_action_event(void* self, void* event) {
    QRubberBand_ActionEvent((QRubberBand*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QActionEvent* event ```
void q_rubberband_qbase_action_event(void* self, void* event) {
    QRubberBand_QBaseActionEvent((QRubberBand*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QActionEvent*) ```
void q_rubberband_on_action_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnActionEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QDragEnterEvent* event ```
void q_rubberband_drag_enter_event(void* self, void* event) {
    QRubberBand_DragEnterEvent((QRubberBand*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QDragEnterEvent* event ```
void q_rubberband_qbase_drag_enter_event(void* self, void* event) {
    QRubberBand_QBaseDragEnterEvent((QRubberBand*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QDragEnterEvent*) ```
void q_rubberband_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnDragEnterEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QDragMoveEvent* event ```
void q_rubberband_drag_move_event(void* self, void* event) {
    QRubberBand_DragMoveEvent((QRubberBand*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QDragMoveEvent* event ```
void q_rubberband_qbase_drag_move_event(void* self, void* event) {
    QRubberBand_QBaseDragMoveEvent((QRubberBand*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QDragMoveEvent*) ```
void q_rubberband_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnDragMoveEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QDragLeaveEvent* event ```
void q_rubberband_drag_leave_event(void* self, void* event) {
    QRubberBand_DragLeaveEvent((QRubberBand*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QDragLeaveEvent* event ```
void q_rubberband_qbase_drag_leave_event(void* self, void* event) {
    QRubberBand_QBaseDragLeaveEvent((QRubberBand*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QDragLeaveEvent*) ```
void q_rubberband_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnDragLeaveEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QDropEvent* event ```
void q_rubberband_drop_event(void* self, void* event) {
    QRubberBand_DropEvent((QRubberBand*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QDropEvent* event ```
void q_rubberband_qbase_drop_event(void* self, void* event) {
    QRubberBand_QBaseDropEvent((QRubberBand*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QDropEvent*) ```
void q_rubberband_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnDropEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QHideEvent* event ```
void q_rubberband_hide_event(void* self, void* event) {
    QRubberBand_HideEvent((QRubberBand*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QHideEvent* event ```
void q_rubberband_qbase_hide_event(void* self, void* event) {
    QRubberBand_QBaseHideEvent((QRubberBand*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QHideEvent*) ```
void q_rubberband_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnHideEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, const char* eventType, void* message, intptr_t* result ```
bool q_rubberband_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QRubberBand_NativeEvent((QRubberBand*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, const char* eventType, void* message, intptr_t* result ```
bool q_rubberband_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QRubberBand_QBaseNativeEvent((QRubberBand*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, bool (*slot)(QRubberBand*, const char*, void*, intptr_t*) ```
void q_rubberband_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QRubberBand_OnNativeEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_rubberband_metric(void* self, int64_t param1) {
    return QRubberBand_Metric((QRubberBand*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_rubberband_qbase_metric(void* self, int64_t param1) {
    return QRubberBand_QBaseMetric((QRubberBand*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, int32_t (*slot)(QRubberBand*, enum QPaintDevice__PaintDeviceMetric) ```
void q_rubberband_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QRubberBand_OnMetric((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QPainter* painter ```
void q_rubberband_init_painter(void* self, void* painter) {
    QRubberBand_InitPainter((QRubberBand*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QPainter* painter ```
void q_rubberband_qbase_init_painter(void* self, void* painter) {
    QRubberBand_QBaseInitPainter((QRubberBand*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QPainter*) ```
void q_rubberband_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnInitPainter((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QPoint* offset ```
QPaintDevice* q_rubberband_redirected(void* self, void* offset) {
    return QRubberBand_Redirected((QRubberBand*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QPoint* offset ```
QPaintDevice* q_rubberband_qbase_redirected(void* self, void* offset) {
    return QRubberBand_QBaseRedirected((QRubberBand*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, QPaintDevice* (*slot)(QRubberBand*, QPoint*) ```
void q_rubberband_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QRubberBand_OnRedirected((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self ```
QPainter* q_rubberband_shared_painter(void* self) {
    return QRubberBand_SharedPainter((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self ```
QPainter* q_rubberband_qbase_shared_painter(void* self) {
    return QRubberBand_QBaseSharedPainter((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, QPainter* (*slot)() ```
void q_rubberband_on_shared_painter(void* self, QPainter* (*slot)()) {
    QRubberBand_OnSharedPainter((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QInputMethodEvent* param1 ```
void q_rubberband_input_method_event(void* self, void* param1) {
    QRubberBand_InputMethodEvent((QRubberBand*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QInputMethodEvent* param1 ```
void q_rubberband_qbase_input_method_event(void* self, void* param1) {
    QRubberBand_QBaseInputMethodEvent((QRubberBand*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QInputMethodEvent*) ```
void q_rubberband_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnInputMethodEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_rubberband_input_method_query(void* self, int64_t param1) {
    return QRubberBand_InputMethodQuery((QRubberBand*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_rubberband_qbase_input_method_query(void* self, int64_t param1) {
    return QRubberBand_QBaseInputMethodQuery((QRubberBand*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, QVariant* (*slot)(QRubberBand*, enum Qt__InputMethodQuery) ```
void q_rubberband_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QRubberBand_OnInputMethodQuery((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, bool next ```
bool q_rubberband_focus_next_prev_child(void* self, bool next) {
    return QRubberBand_FocusNextPrevChild((QRubberBand*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, bool next ```
bool q_rubberband_qbase_focus_next_prev_child(void* self, bool next) {
    return QRubberBand_QBaseFocusNextPrevChild((QRubberBand*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, bool (*slot)(QRubberBand*, bool) ```
void q_rubberband_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QRubberBand_OnFocusNextPrevChild((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QObject* watched, QEvent* event ```
bool q_rubberband_event_filter(void* self, void* watched, void* event) {
    return QRubberBand_EventFilter((QRubberBand*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QObject* watched, QEvent* event ```
bool q_rubberband_qbase_event_filter(void* self, void* watched, void* event) {
    return QRubberBand_QBaseEventFilter((QRubberBand*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, bool (*slot)(QRubberBand*, QObject*, QEvent*) ```
void q_rubberband_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QRubberBand_OnEventFilter((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QTimerEvent* event ```
void q_rubberband_timer_event(void* self, void* event) {
    QRubberBand_TimerEvent((QRubberBand*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QTimerEvent* event ```
void q_rubberband_qbase_timer_event(void* self, void* event) {
    QRubberBand_QBaseTimerEvent((QRubberBand*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QTimerEvent*) ```
void q_rubberband_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnTimerEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QChildEvent* event ```
void q_rubberband_child_event(void* self, void* event) {
    QRubberBand_ChildEvent((QRubberBand*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QChildEvent* event ```
void q_rubberband_qbase_child_event(void* self, void* event) {
    QRubberBand_QBaseChildEvent((QRubberBand*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QChildEvent*) ```
void q_rubberband_on_child_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnChildEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QEvent* event ```
void q_rubberband_custom_event(void* self, void* event) {
    QRubberBand_CustomEvent((QRubberBand*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QEvent* event ```
void q_rubberband_qbase_custom_event(void* self, void* event) {
    QRubberBand_QBaseCustomEvent((QRubberBand*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QEvent*) ```
void q_rubberband_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnCustomEvent((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QMetaMethod* signal ```
void q_rubberband_connect_notify(void* self, void* signal) {
    QRubberBand_ConnectNotify((QRubberBand*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QMetaMethod* signal ```
void q_rubberband_qbase_connect_notify(void* self, void* signal) {
    QRubberBand_QBaseConnectNotify((QRubberBand*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QMetaMethod*) ```
void q_rubberband_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnConnectNotify((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QMetaMethod* signal ```
void q_rubberband_disconnect_notify(void* self, void* signal) {
    QRubberBand_DisconnectNotify((QRubberBand*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QMetaMethod* signal ```
void q_rubberband_qbase_disconnect_notify(void* self, void* signal) {
    QRubberBand_QBaseDisconnectNotify((QRubberBand*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)(QRubberBand*, QMetaMethod*) ```
void q_rubberband_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QRubberBand_OnDisconnectNotify((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self ```
void q_rubberband_update_micro_focus(void* self) {
    QRubberBand_UpdateMicroFocus((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self ```
void q_rubberband_qbase_update_micro_focus(void* self) {
    QRubberBand_QBaseUpdateMicroFocus((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)() ```
void q_rubberband_on_update_micro_focus(void* self, void (*slot)()) {
    QRubberBand_OnUpdateMicroFocus((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self ```
void q_rubberband_create(void* self) {
    QRubberBand_Create((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self ```
void q_rubberband_qbase_create(void* self) {
    QRubberBand_QBaseCreate((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)() ```
void q_rubberband_on_create(void* self, void (*slot)()) {
    QRubberBand_OnCreate((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self ```
void q_rubberband_destroy(void* self) {
    QRubberBand_Destroy((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self ```
void q_rubberband_qbase_destroy(void* self) {
    QRubberBand_QBaseDestroy((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, void (*slot)() ```
void q_rubberband_on_destroy(void* self, void (*slot)()) {
    QRubberBand_OnDestroy((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self ```
bool q_rubberband_focus_next_child(void* self) {
    return QRubberBand_FocusNextChild((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self ```
bool q_rubberband_qbase_focus_next_child(void* self) {
    return QRubberBand_QBaseFocusNextChild((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, bool (*slot)() ```
void q_rubberband_on_focus_next_child(void* self, bool (*slot)()) {
    QRubberBand_OnFocusNextChild((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self ```
bool q_rubberband_focus_previous_child(void* self) {
    return QRubberBand_FocusPreviousChild((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self ```
bool q_rubberband_qbase_focus_previous_child(void* self) {
    return QRubberBand_QBaseFocusPreviousChild((QRubberBand*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, bool (*slot)() ```
void q_rubberband_on_focus_previous_child(void* self, bool (*slot)()) {
    QRubberBand_OnFocusPreviousChild((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self ```
QObject* q_rubberband_sender(void* self) {
    return QRubberBand_Sender((QRubberBand*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self ```
QObject* q_rubberband_qbase_sender(void* self) {
    return QRubberBand_QBaseSender((QRubberBand*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, QObject* (*slot)() ```
void q_rubberband_on_sender(void* self, QObject* (*slot)()) {
    QRubberBand_OnSender((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_sender_signal_index(void* self) {
    return QRubberBand_SenderSignalIndex((QRubberBand*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self ```
int32_t q_rubberband_qbase_sender_signal_index(void* self) {
    return QRubberBand_QBaseSenderSignalIndex((QRubberBand*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, int32_t (*slot)() ```
void q_rubberband_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QRubberBand_OnSenderSignalIndex((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, const char* signal ```
int32_t q_rubberband_receivers(void* self, const char* signal) {
    return QRubberBand_Receivers((QRubberBand*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, const char* signal ```
int32_t q_rubberband_qbase_receivers(void* self, const char* signal) {
    return QRubberBand_QBaseReceivers((QRubberBand*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, int32_t (*slot)(QRubberBand*, const char*) ```
void q_rubberband_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QRubberBand_OnReceivers((QRubberBand*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRubberBand* self, QMetaMethod* signal ```
bool q_rubberband_is_signal_connected(void* self, void* signal) {
    return QRubberBand_IsSignalConnected((QRubberBand*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRubberBand* self, QMetaMethod* signal ```
bool q_rubberband_qbase_is_signal_connected(void* self, void* signal) {
    return QRubberBand_QBaseIsSignalConnected((QRubberBand*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRubberBand* self, bool (*slot)(QRubberBand*, QMetaMethod*) ```
void q_rubberband_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QRubberBand_OnIsSignalConnected((QRubberBand*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QRubberBand* self ```
void q_rubberband_delete(void* self) {
    QRubberBand_Delete((QRubberBand*)(self));
}