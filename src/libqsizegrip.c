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
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqsizegrip.hpp"
#include "libqsizegrip.h"

/// https://doc.qt.io/qt-6/qsizegrip.html

/// q_sizegrip_new constructs a new QSizeGrip object.
///
/// ``` QWidget* parent ```
QSizeGrip* q_sizegrip_new(void* parent) {
    return QSizeGrip_new((QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSizeGrip* self ```
QMetaObject* q_sizegrip_meta_object(void* self) {
    return QSizeGrip_MetaObject((QSizeGrip*)self);
}

/// ``` QSizeGrip* self, const char* param1 ```
void* q_sizegrip_metacast(void* self, const char* param1) {
    return QSizeGrip_Metacast((QSizeGrip*)self, param1);
}

/// ``` QSizeGrip* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sizegrip_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSizeGrip_Metacall((QSizeGrip*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSizeGrip* self, int32_t (*slot)(QSizeGrip*, enum QMetaObject__Call, int, void*) ```
void q_sizegrip_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSizeGrip_OnMetacall((QSizeGrip*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSizeGrip* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sizegrip_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSizeGrip_QBaseMetacall((QSizeGrip*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sizegrip_tr(const char* s) {
    libqt_string _str = QSizeGrip_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizegrip.html#sizeHint)
///
/// ``` QSizeGrip* self ```
QSize* q_sizegrip_size_hint(void* self) {
    return QSizeGrip_SizeHint((QSizeGrip*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSizeGrip* self, QSize* (*slot)() ```
void q_sizegrip_on_size_hint(void* self, QSize* (*slot)()) {
    QSizeGrip_OnSizeHint((QSizeGrip*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSizeGrip* self ```
QSize* q_sizegrip_qbase_size_hint(void* self) {
    return QSizeGrip_QBaseSizeHint((QSizeGrip*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizegrip.html#setVisible)
///
/// ``` QSizeGrip* self, bool visible ```
void q_sizegrip_set_visible(void* self, bool visible) {
    QSizeGrip_SetVisible((QSizeGrip*)self, visible);
}

/// Allows for overriding the related default method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, bool) ```
void q_sizegrip_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QSizeGrip_OnSetVisible((QSizeGrip*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSizeGrip* self, bool visible ```
void q_sizegrip_qbase_set_visible(void* self, bool visible) {
    QSizeGrip_QBaseSetVisible((QSizeGrip*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizegrip.html#paintEvent)
///
/// ``` QSizeGrip* self, QPaintEvent* param1 ```
void q_sizegrip_paint_event(void* self, void* param1) {
    QSizeGrip_PaintEvent((QSizeGrip*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QPaintEvent*) ```
void q_sizegrip_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnPaintEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSizeGrip* self, QPaintEvent* param1 ```
void q_sizegrip_qbase_paint_event(void* self, void* param1) {
    QSizeGrip_QBasePaintEvent((QSizeGrip*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizegrip.html#mousePressEvent)
///
/// ``` QSizeGrip* self, QMouseEvent* param1 ```
void q_sizegrip_mouse_press_event(void* self, void* param1) {
    QSizeGrip_MousePressEvent((QSizeGrip*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QMouseEvent*) ```
void q_sizegrip_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnMousePressEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSizeGrip* self, QMouseEvent* param1 ```
void q_sizegrip_qbase_mouse_press_event(void* self, void* param1) {
    QSizeGrip_QBaseMousePressEvent((QSizeGrip*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizegrip.html#mouseMoveEvent)
///
/// ``` QSizeGrip* self, QMouseEvent* param1 ```
void q_sizegrip_mouse_move_event(void* self, void* param1) {
    QSizeGrip_MouseMoveEvent((QSizeGrip*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QMouseEvent*) ```
void q_sizegrip_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnMouseMoveEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSizeGrip* self, QMouseEvent* param1 ```
void q_sizegrip_qbase_mouse_move_event(void* self, void* param1) {
    QSizeGrip_QBaseMouseMoveEvent((QSizeGrip*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizegrip.html#mouseReleaseEvent)
///
/// ``` QSizeGrip* self, QMouseEvent* mouseEvent ```
void q_sizegrip_mouse_release_event(void* self, void* mouseEvent) {
    QSizeGrip_MouseReleaseEvent((QSizeGrip*)self, (QMouseEvent*)mouseEvent);
}

/// Allows for overriding the related default method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QMouseEvent*) ```
void q_sizegrip_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnMouseReleaseEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSizeGrip* self, QMouseEvent* mouseEvent ```
void q_sizegrip_qbase_mouse_release_event(void* self, void* mouseEvent) {
    QSizeGrip_QBaseMouseReleaseEvent((QSizeGrip*)self, (QMouseEvent*)mouseEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizegrip.html#moveEvent)
///
/// ``` QSizeGrip* self, QMoveEvent* moveEvent ```
void q_sizegrip_move_event(void* self, void* moveEvent) {
    QSizeGrip_MoveEvent((QSizeGrip*)self, (QMoveEvent*)moveEvent);
}

/// Allows for overriding the related default method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QMoveEvent*) ```
void q_sizegrip_on_move_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnMoveEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSizeGrip* self, QMoveEvent* moveEvent ```
void q_sizegrip_qbase_move_event(void* self, void* moveEvent) {
    QSizeGrip_QBaseMoveEvent((QSizeGrip*)self, (QMoveEvent*)moveEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizegrip.html#showEvent)
///
/// ``` QSizeGrip* self, QShowEvent* showEvent ```
void q_sizegrip_show_event(void* self, void* showEvent) {
    QSizeGrip_ShowEvent((QSizeGrip*)self, (QShowEvent*)showEvent);
}

/// Allows for overriding the related default method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QShowEvent*) ```
void q_sizegrip_on_show_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnShowEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSizeGrip* self, QShowEvent* showEvent ```
void q_sizegrip_qbase_show_event(void* self, void* showEvent) {
    QSizeGrip_QBaseShowEvent((QSizeGrip*)self, (QShowEvent*)showEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizegrip.html#hideEvent)
///
/// ``` QSizeGrip* self, QHideEvent* hideEvent ```
void q_sizegrip_hide_event(void* self, void* hideEvent) {
    QSizeGrip_HideEvent((QSizeGrip*)self, (QHideEvent*)hideEvent);
}

/// Allows for overriding the related default method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QHideEvent*) ```
void q_sizegrip_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnHideEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSizeGrip* self, QHideEvent* hideEvent ```
void q_sizegrip_qbase_hide_event(void* self, void* hideEvent) {
    QSizeGrip_QBaseHideEvent((QSizeGrip*)self, (QHideEvent*)hideEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizegrip.html#eventFilter)
///
/// ``` QSizeGrip* self, QObject* param1, QEvent* param2 ```
bool q_sizegrip_event_filter(void* self, void* param1, void* param2) {
    return QSizeGrip_EventFilter((QSizeGrip*)self, (QObject*)param1, (QEvent*)param2);
}

/// Allows for overriding the related default method
///
/// ``` QSizeGrip* self, bool (*slot)(QSizeGrip*, QObject*, QEvent*) ```
void q_sizegrip_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSizeGrip_OnEventFilter((QSizeGrip*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSizeGrip* self, QObject* param1, QEvent* param2 ```
bool q_sizegrip_qbase_event_filter(void* self, void* param1, void* param2) {
    return QSizeGrip_QBaseEventFilter((QSizeGrip*)self, (QObject*)param1, (QEvent*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsizegrip.html#event)
///
/// ``` QSizeGrip* self, QEvent* param1 ```
bool q_sizegrip_event(void* self, void* param1) {
    return QSizeGrip_Event((QSizeGrip*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QSizeGrip* self, bool (*slot)(QSizeGrip*, QEvent*) ```
void q_sizegrip_on_event(void* self, bool (*slot)(void*, void*)) {
    QSizeGrip_OnEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSizeGrip* self, QEvent* param1 ```
bool q_sizegrip_qbase_event(void* self, void* param1) {
    return QSizeGrip_QBaseEvent((QSizeGrip*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sizegrip_tr2(const char* s, const char* c) {
    libqt_string _str = QSizeGrip_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sizegrip_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSizeGrip_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QSizeGrip* self ```
uintptr_t q_sizegrip_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QSizeGrip* self ```
uintptr_t q_sizegrip_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QSizeGrip* self ```
uintptr_t q_sizegrip_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QSizeGrip* self ```
QStyle* q_sizegrip_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QSizeGrip* self, QStyle* style ```
void q_sizegrip_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QSizeGrip* self ```
int64_t q_sizegrip_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QSizeGrip* self, enum Qt__WindowModality windowModality ```
void q_sizegrip_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QSizeGrip* self, QWidget* param1 ```
bool q_sizegrip_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QSizeGrip* self, bool enabled ```
void q_sizegrip_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QSizeGrip* self, bool disabled ```
void q_sizegrip_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QSizeGrip* self, bool windowModified ```
void q_sizegrip_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QSizeGrip* self ```
QRect* q_sizegrip_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QSizeGrip* self ```
QRect* q_sizegrip_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QSizeGrip* self ```
QRect* q_sizegrip_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QSizeGrip* self ```
QPoint* q_sizegrip_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QSizeGrip* self ```
QSize* q_sizegrip_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QSizeGrip* self ```
QSize* q_sizegrip_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QSizeGrip* self ```
QRect* q_sizegrip_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QSizeGrip* self ```
QRect* q_sizegrip_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QSizeGrip* self ```
QRegion* q_sizegrip_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QSizeGrip* self ```
QSize* q_sizegrip_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QSizeGrip* self ```
QSize* q_sizegrip_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QSizeGrip* self, QSize* minimumSize ```
void q_sizegrip_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QSizeGrip* self, int minw, int minh ```
void q_sizegrip_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QSizeGrip* self, QSize* maximumSize ```
void q_sizegrip_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QSizeGrip* self, int maxw, int maxh ```
void q_sizegrip_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QSizeGrip* self, int minw ```
void q_sizegrip_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QSizeGrip* self, int minh ```
void q_sizegrip_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QSizeGrip* self, int maxw ```
void q_sizegrip_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QSizeGrip* self, int maxh ```
void q_sizegrip_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QSizeGrip* self ```
QSize* q_sizegrip_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QSizeGrip* self, QSize* sizeIncrement ```
void q_sizegrip_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QSizeGrip* self, int w, int h ```
void q_sizegrip_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QSizeGrip* self ```
QSize* q_sizegrip_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QSizeGrip* self, QSize* baseSize ```
void q_sizegrip_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QSizeGrip* self, int basew, int baseh ```
void q_sizegrip_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QSizeGrip* self, QSize* fixedSize ```
void q_sizegrip_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QSizeGrip* self, int w, int h ```
void q_sizegrip_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QSizeGrip* self, int w ```
void q_sizegrip_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QSizeGrip* self, int h ```
void q_sizegrip_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QSizeGrip* self, QPointF* param1 ```
QPointF* q_sizegrip_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QSizeGrip* self, QPoint* param1 ```
QPoint* q_sizegrip_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QSizeGrip* self, QPointF* param1 ```
QPointF* q_sizegrip_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QSizeGrip* self, QPoint* param1 ```
QPoint* q_sizegrip_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QSizeGrip* self, QPointF* param1 ```
QPointF* q_sizegrip_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QSizeGrip* self, QPoint* param1 ```
QPoint* q_sizegrip_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QSizeGrip* self, QPointF* param1 ```
QPointF* q_sizegrip_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QSizeGrip* self, QPoint* param1 ```
QPoint* q_sizegrip_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QSizeGrip* self, QWidget* param1, QPointF* param2 ```
QPointF* q_sizegrip_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QSizeGrip* self, QWidget* param1, QPoint* param2 ```
QPoint* q_sizegrip_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QSizeGrip* self, QWidget* param1, QPointF* param2 ```
QPointF* q_sizegrip_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QSizeGrip* self, QWidget* param1, QPoint* param2 ```
QPoint* q_sizegrip_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QSizeGrip* self ```
QWidget* q_sizegrip_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QSizeGrip* self ```
QWidget* q_sizegrip_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QSizeGrip* self ```
QWidget* q_sizegrip_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QSizeGrip* self ```
QPalette* q_sizegrip_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QSizeGrip* self, QPalette* palette ```
void q_sizegrip_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QSizeGrip* self, enum QPalette__ColorRole backgroundRole ```
void q_sizegrip_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QSizeGrip* self ```
int64_t q_sizegrip_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QSizeGrip* self, enum QPalette__ColorRole foregroundRole ```
void q_sizegrip_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QSizeGrip* self ```
int64_t q_sizegrip_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QSizeGrip* self ```
QFont* q_sizegrip_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QSizeGrip* self, QFont* font ```
void q_sizegrip_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QSizeGrip* self ```
QFontMetrics* q_sizegrip_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QSizeGrip* self ```
QFontInfo* q_sizegrip_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QSizeGrip* self ```
QCursor* q_sizegrip_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QSizeGrip* self, QCursor* cursor ```
void q_sizegrip_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QSizeGrip* self, bool enable ```
void q_sizegrip_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QSizeGrip* self, bool enable ```
void q_sizegrip_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QSizeGrip* self, QBitmap* mask ```
void q_sizegrip_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QSizeGrip* self, QRegion* mask ```
void q_sizegrip_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QSizeGrip* self ```
QRegion* q_sizegrip_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSizeGrip* self, QPaintDevice* target ```
void q_sizegrip_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSizeGrip* self, QPainter* painter ```
void q_sizegrip_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QSizeGrip* self ```
QPixmap* q_sizegrip_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QSizeGrip* self ```
QGraphicsEffect* q_sizegrip_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QSizeGrip* self, QGraphicsEffect* effect ```
void q_sizegrip_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QSizeGrip* self, enum Qt__GestureType typeVal ```
void q_sizegrip_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QSizeGrip* self, enum Qt__GestureType typeVal ```
void q_sizegrip_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QSizeGrip* self, const char* windowTitle ```
void q_sizegrip_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QSizeGrip* self, const char* styleSheet ```
void q_sizegrip_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QSizeGrip* self ```
const char* q_sizegrip_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QSizeGrip* self ```
const char* q_sizegrip_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QSizeGrip* self, QIcon* icon ```
void q_sizegrip_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QSizeGrip* self ```
QIcon* q_sizegrip_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QSizeGrip* self, const char* windowIconText ```
void q_sizegrip_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QSizeGrip* self ```
const char* q_sizegrip_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QSizeGrip* self, const char* windowRole ```
void q_sizegrip_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QSizeGrip* self ```
const char* q_sizegrip_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QSizeGrip* self, const char* filePath ```
void q_sizegrip_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QSizeGrip* self ```
const char* q_sizegrip_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QSizeGrip* self, double level ```
void q_sizegrip_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QSizeGrip* self ```
double q_sizegrip_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QSizeGrip* self, const char* toolTip ```
void q_sizegrip_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QSizeGrip* self ```
const char* q_sizegrip_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QSizeGrip* self, int msec ```
void q_sizegrip_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QSizeGrip* self, const char* statusTip ```
void q_sizegrip_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QSizeGrip* self ```
const char* q_sizegrip_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QSizeGrip* self, const char* whatsThis ```
void q_sizegrip_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QSizeGrip* self ```
const char* q_sizegrip_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QSizeGrip* self ```
const char* q_sizegrip_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QSizeGrip* self, const char* name ```
void q_sizegrip_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QSizeGrip* self ```
const char* q_sizegrip_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QSizeGrip* self, const char* description ```
void q_sizegrip_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QSizeGrip* self, enum Qt__LayoutDirection direction ```
void q_sizegrip_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QSizeGrip* self ```
int64_t q_sizegrip_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QSizeGrip* self, QLocale* locale ```
void q_sizegrip_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QSizeGrip* self ```
QLocale* q_sizegrip_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QSizeGrip* self, enum Qt__FocusReason reason ```
void q_sizegrip_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QSizeGrip* self ```
int64_t q_sizegrip_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QSizeGrip* self, enum Qt__FocusPolicy policy ```
void q_sizegrip_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_sizegrip_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QSizeGrip* self, QWidget* focusProxy ```
void q_sizegrip_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QSizeGrip* self ```
QWidget* q_sizegrip_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QSizeGrip* self ```
int64_t q_sizegrip_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QSizeGrip* self, enum Qt__ContextMenuPolicy policy ```
void q_sizegrip_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QSizeGrip* self, QCursor* param1 ```
void q_sizegrip_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QSizeGrip* self, QKeySequence* key ```
int32_t q_sizegrip_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QSizeGrip* self, int id ```
void q_sizegrip_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QSizeGrip* self, int id ```
void q_sizegrip_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QSizeGrip* self, int id ```
void q_sizegrip_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_sizegrip_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_sizegrip_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QSizeGrip* self, bool enable ```
void q_sizegrip_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QSizeGrip* self ```
QGraphicsProxyWidget* q_sizegrip_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSizeGrip* self, int x, int y, int w, int h ```
void q_sizegrip_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSizeGrip* self, QRect* param1 ```
void q_sizegrip_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSizeGrip* self, QRegion* param1 ```
void q_sizegrip_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSizeGrip* self, int x, int y, int w, int h ```
void q_sizegrip_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSizeGrip* self, QRect* param1 ```
void q_sizegrip_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSizeGrip* self, QRegion* param1 ```
void q_sizegrip_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QSizeGrip* self, bool hidden ```
void q_sizegrip_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QSizeGrip* self, QWidget* param1 ```
void q_sizegrip_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QSizeGrip* self, int x, int y ```
void q_sizegrip_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QSizeGrip* self, QPoint* param1 ```
void q_sizegrip_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QSizeGrip* self, int w, int h ```
void q_sizegrip_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QSizeGrip* self, QSize* param1 ```
void q_sizegrip_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QSizeGrip* self, int x, int y, int w, int h ```
void q_sizegrip_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QSizeGrip* self, QRect* geometry ```
void q_sizegrip_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QSizeGrip* self ```
char* q_sizegrip_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QSizeGrip* self, const char* geometry ```
bool q_sizegrip_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QSizeGrip* self, QWidget* param1 ```
bool q_sizegrip_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QSizeGrip* self ```
int64_t q_sizegrip_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QSizeGrip* self, int state ```
void q_sizegrip_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QSizeGrip* self, int state ```
void q_sizegrip_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QSizeGrip* self ```
QSizePolicy* q_sizegrip_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QSizeGrip* self, QSizePolicy* sizePolicy ```
void q_sizegrip_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QSizeGrip* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_sizegrip_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QSizeGrip* self ```
QRegion* q_sizegrip_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QSizeGrip* self, int left, int top, int right, int bottom ```
void q_sizegrip_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QSizeGrip* self, QMargins* margins ```
void q_sizegrip_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QSizeGrip* self ```
QMargins* q_sizegrip_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QSizeGrip* self ```
QRect* q_sizegrip_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QSizeGrip* self ```
QLayout* q_sizegrip_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QSizeGrip* self, QLayout* layout ```
void q_sizegrip_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QSizeGrip* self, QWidget* parent ```
void q_sizegrip_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QSizeGrip* self, QWidget* parent, int f ```
void q_sizegrip_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QSizeGrip* self, int dx, int dy ```
void q_sizegrip_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QSizeGrip* self, int dx, int dy, QRect* param3 ```
void q_sizegrip_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QSizeGrip* self ```
QWidget* q_sizegrip_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QSizeGrip* self ```
QWidget* q_sizegrip_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QSizeGrip* self ```
QWidget* q_sizegrip_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QSizeGrip* self, bool on ```
void q_sizegrip_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSizeGrip* self, QAction* action ```
void q_sizegrip_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QSizeGrip* self, QAction* actions[] ```
void q_sizegrip_add_actions(void* self, void* actions[]) {
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
/// ``` QSizeGrip* self, QAction* before, QAction* actions[] ```
void q_sizegrip_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QSizeGrip* self, QAction* before, QAction* action ```
void q_sizegrip_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QSizeGrip* self, QAction* action ```
void q_sizegrip_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QSizeGrip* self ```
libqt_list /* of QAction* */ q_sizegrip_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSizeGrip* self, const char* text ```
QAction* q_sizegrip_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSizeGrip* self, QIcon* icon, const char* text ```
QAction* q_sizegrip_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSizeGrip* self, const char* text, QKeySequence* shortcut ```
QAction* q_sizegrip_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSizeGrip* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_sizegrip_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QSizeGrip* self ```
QWidget* q_sizegrip_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QSizeGrip* self, int typeVal ```
void q_sizegrip_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QSizeGrip* self ```
int64_t q_sizegrip_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QSizeGrip* self, enum Qt__WindowType param1 ```
void q_sizegrip_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QSizeGrip* self, int typeVal ```
void q_sizegrip_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QSizeGrip* self ```
int64_t q_sizegrip_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_sizegrip_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QSizeGrip* self, int x, int y ```
QWidget* q_sizegrip_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QSizeGrip* self, QPoint* p ```
QWidget* q_sizegrip_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QSizeGrip* self, enum Qt__WidgetAttribute param1 ```
void q_sizegrip_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QSizeGrip* self, enum Qt__WidgetAttribute param1 ```
bool q_sizegrip_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QSizeGrip* self, QWidget* child ```
bool q_sizegrip_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QSizeGrip* self, bool enabled ```
void q_sizegrip_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QSizeGrip* self ```
QBackingStore* q_sizegrip_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QSizeGrip* self ```
QWindow* q_sizegrip_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QSizeGrip* self ```
QScreen* q_sizegrip_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QSizeGrip* self, QScreen* screen ```
void q_sizegrip_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_sizegrip_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QSizeGrip* self, const char* title ```
void q_sizegrip_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QSizeGrip* self, void (*slot)(QWidget*, const char*) ```
void q_sizegrip_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QSizeGrip* self, QIcon* icon ```
void q_sizegrip_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QSizeGrip* self, void (*slot)(QWidget*, QIcon*) ```
void q_sizegrip_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QSizeGrip* self, const char* iconText ```
void q_sizegrip_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QSizeGrip* self, void (*slot)(QWidget*, const char*) ```
void q_sizegrip_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QSizeGrip* self, QPoint* pos ```
void q_sizegrip_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QSizeGrip* self, void (*slot)(QWidget*, QPoint*) ```
void q_sizegrip_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QSizeGrip* self ```
int64_t q_sizegrip_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QSizeGrip* self, int hints ```
void q_sizegrip_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSizeGrip* self, QPaintDevice* target, QPoint* targetOffset ```
void q_sizegrip_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSizeGrip* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_sizegrip_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSizeGrip* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_sizegrip_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSizeGrip* self, QPainter* painter, QPoint* targetOffset ```
void q_sizegrip_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSizeGrip* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_sizegrip_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSizeGrip* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_sizegrip_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QSizeGrip* self, QRect* rectangle ```
QPixmap* q_sizegrip_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QSizeGrip* self, enum Qt__GestureType typeVal, int flags ```
void q_sizegrip_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QSizeGrip* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_sizegrip_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QSizeGrip* self, int id, bool enable ```
void q_sizegrip_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QSizeGrip* self, int id, bool enable ```
void q_sizegrip_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QSizeGrip* self, enum Qt__WindowType param1, bool on ```
void q_sizegrip_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QSizeGrip* self, enum Qt__WidgetAttribute param1, bool on ```
void q_sizegrip_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_sizegrip_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_sizegrip_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSizeGrip* self ```
const char* q_sizegrip_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSizeGrip* self, const char* name ```
void q_sizegrip_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSizeGrip* self, bool b ```
bool q_sizegrip_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSizeGrip* self ```
QThread* q_sizegrip_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSizeGrip* self, QThread* thread ```
void q_sizegrip_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSizeGrip* self, int interval ```
int32_t q_sizegrip_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSizeGrip* self, int id ```
void q_sizegrip_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSizeGrip* self ```
libqt_list /* of QObject* */ q_sizegrip_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSizeGrip* self, QObject* filterObj ```
void q_sizegrip_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSizeGrip* self, QObject* obj ```
void q_sizegrip_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sizegrip_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSizeGrip* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sizegrip_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sizegrip_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sizegrip_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSizeGrip* self, const char* name, QVariant* value ```
bool q_sizegrip_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSizeGrip* self, const char* name ```
QVariant* q_sizegrip_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSizeGrip* self ```
const char** q_sizegrip_dynamic_property_names(void* self) {
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
/// ``` QSizeGrip* self ```
QBindingStorage* q_sizegrip_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSizeGrip* self ```
QBindingStorage* q_sizegrip_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSizeGrip* self, void (*slot)(QObject*) ```
void q_sizegrip_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSizeGrip* self ```
QObject* q_sizegrip_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSizeGrip* self, const char* classname ```
bool q_sizegrip_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSizeGrip* self ```
void q_sizegrip_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSizeGrip* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sizegrip_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sizegrip_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSizeGrip* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sizegrip_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSizeGrip* self, QObject* param1 ```
void q_sizegrip_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSizeGrip* self, void (*slot)(QObject*, QObject*) ```
void q_sizegrip_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QSizeGrip* self ```
double q_sizegrip_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QSizeGrip* self ```
double q_sizegrip_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_sizegrip_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_dev_type(void* self) {
    return QSizeGrip_DevType((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_qbase_dev_type(void* self) {
    return QSizeGrip_QBaseDevType((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, int32_t (*slot)() ```
void q_sizegrip_on_dev_type(void* self, int32_t (*slot)()) {
    QSizeGrip_OnDevType((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self ```
QSize* q_sizegrip_minimum_size_hint(void* self) {
    return QSizeGrip_MinimumSizeHint((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self ```
QSize* q_sizegrip_qbase_minimum_size_hint(void* self) {
    return QSizeGrip_QBaseMinimumSizeHint((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, QSize* (*slot)() ```
void q_sizegrip_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QSizeGrip_OnMinimumSizeHint((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, int param1 ```
int32_t q_sizegrip_height_for_width(void* self, int param1) {
    return QSizeGrip_HeightForWidth((QSizeGrip*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, int param1 ```
int32_t q_sizegrip_qbase_height_for_width(void* self, int param1) {
    return QSizeGrip_QBaseHeightForWidth((QSizeGrip*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, int32_t (*slot)(QSizeGrip*, int) ```
void q_sizegrip_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QSizeGrip_OnHeightForWidth((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_has_height_for_width(void* self) {
    return QSizeGrip_HasHeightForWidth((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_qbase_has_height_for_width(void* self) {
    return QSizeGrip_QBaseHasHeightForWidth((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, bool (*slot)() ```
void q_sizegrip_on_has_height_for_width(void* self, bool (*slot)()) {
    QSizeGrip_OnHasHeightForWidth((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self ```
QPaintEngine* q_sizegrip_paint_engine(void* self) {
    return QSizeGrip_PaintEngine((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self ```
QPaintEngine* q_sizegrip_qbase_paint_engine(void* self) {
    return QSizeGrip_QBasePaintEngine((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, QPaintEngine* (*slot)() ```
void q_sizegrip_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QSizeGrip_OnPaintEngine((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QMouseEvent* event ```
void q_sizegrip_mouse_double_click_event(void* self, void* event) {
    QSizeGrip_MouseDoubleClickEvent((QSizeGrip*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QMouseEvent* event ```
void q_sizegrip_qbase_mouse_double_click_event(void* self, void* event) {
    QSizeGrip_QBaseMouseDoubleClickEvent((QSizeGrip*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QMouseEvent*) ```
void q_sizegrip_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnMouseDoubleClickEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QWheelEvent* event ```
void q_sizegrip_wheel_event(void* self, void* event) {
    QSizeGrip_WheelEvent((QSizeGrip*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QWheelEvent* event ```
void q_sizegrip_qbase_wheel_event(void* self, void* event) {
    QSizeGrip_QBaseWheelEvent((QSizeGrip*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QWheelEvent*) ```
void q_sizegrip_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnWheelEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QKeyEvent* event ```
void q_sizegrip_key_press_event(void* self, void* event) {
    QSizeGrip_KeyPressEvent((QSizeGrip*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QKeyEvent* event ```
void q_sizegrip_qbase_key_press_event(void* self, void* event) {
    QSizeGrip_QBaseKeyPressEvent((QSizeGrip*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QKeyEvent*) ```
void q_sizegrip_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnKeyPressEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QKeyEvent* event ```
void q_sizegrip_key_release_event(void* self, void* event) {
    QSizeGrip_KeyReleaseEvent((QSizeGrip*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QKeyEvent* event ```
void q_sizegrip_qbase_key_release_event(void* self, void* event) {
    QSizeGrip_QBaseKeyReleaseEvent((QSizeGrip*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QKeyEvent*) ```
void q_sizegrip_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnKeyReleaseEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QFocusEvent* event ```
void q_sizegrip_focus_in_event(void* self, void* event) {
    QSizeGrip_FocusInEvent((QSizeGrip*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QFocusEvent* event ```
void q_sizegrip_qbase_focus_in_event(void* self, void* event) {
    QSizeGrip_QBaseFocusInEvent((QSizeGrip*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QFocusEvent*) ```
void q_sizegrip_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnFocusInEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QFocusEvent* event ```
void q_sizegrip_focus_out_event(void* self, void* event) {
    QSizeGrip_FocusOutEvent((QSizeGrip*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QFocusEvent* event ```
void q_sizegrip_qbase_focus_out_event(void* self, void* event) {
    QSizeGrip_QBaseFocusOutEvent((QSizeGrip*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QFocusEvent*) ```
void q_sizegrip_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnFocusOutEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QEnterEvent* event ```
void q_sizegrip_enter_event(void* self, void* event) {
    QSizeGrip_EnterEvent((QSizeGrip*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QEnterEvent* event ```
void q_sizegrip_qbase_enter_event(void* self, void* event) {
    QSizeGrip_QBaseEnterEvent((QSizeGrip*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QEnterEvent*) ```
void q_sizegrip_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnEnterEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QEvent* event ```
void q_sizegrip_leave_event(void* self, void* event) {
    QSizeGrip_LeaveEvent((QSizeGrip*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QEvent* event ```
void q_sizegrip_qbase_leave_event(void* self, void* event) {
    QSizeGrip_QBaseLeaveEvent((QSizeGrip*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QEvent*) ```
void q_sizegrip_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnLeaveEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QResizeEvent* event ```
void q_sizegrip_resize_event(void* self, void* event) {
    QSizeGrip_ResizeEvent((QSizeGrip*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QResizeEvent* event ```
void q_sizegrip_qbase_resize_event(void* self, void* event) {
    QSizeGrip_QBaseResizeEvent((QSizeGrip*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QResizeEvent*) ```
void q_sizegrip_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnResizeEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QCloseEvent* event ```
void q_sizegrip_close_event(void* self, void* event) {
    QSizeGrip_CloseEvent((QSizeGrip*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QCloseEvent* event ```
void q_sizegrip_qbase_close_event(void* self, void* event) {
    QSizeGrip_QBaseCloseEvent((QSizeGrip*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QCloseEvent*) ```
void q_sizegrip_on_close_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnCloseEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QContextMenuEvent* event ```
void q_sizegrip_context_menu_event(void* self, void* event) {
    QSizeGrip_ContextMenuEvent((QSizeGrip*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QContextMenuEvent* event ```
void q_sizegrip_qbase_context_menu_event(void* self, void* event) {
    QSizeGrip_QBaseContextMenuEvent((QSizeGrip*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QContextMenuEvent*) ```
void q_sizegrip_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnContextMenuEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QTabletEvent* event ```
void q_sizegrip_tablet_event(void* self, void* event) {
    QSizeGrip_TabletEvent((QSizeGrip*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QTabletEvent* event ```
void q_sizegrip_qbase_tablet_event(void* self, void* event) {
    QSizeGrip_QBaseTabletEvent((QSizeGrip*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QTabletEvent*) ```
void q_sizegrip_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnTabletEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QActionEvent* event ```
void q_sizegrip_action_event(void* self, void* event) {
    QSizeGrip_ActionEvent((QSizeGrip*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QActionEvent* event ```
void q_sizegrip_qbase_action_event(void* self, void* event) {
    QSizeGrip_QBaseActionEvent((QSizeGrip*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QActionEvent*) ```
void q_sizegrip_on_action_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnActionEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QDragEnterEvent* event ```
void q_sizegrip_drag_enter_event(void* self, void* event) {
    QSizeGrip_DragEnterEvent((QSizeGrip*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QDragEnterEvent* event ```
void q_sizegrip_qbase_drag_enter_event(void* self, void* event) {
    QSizeGrip_QBaseDragEnterEvent((QSizeGrip*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QDragEnterEvent*) ```
void q_sizegrip_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnDragEnterEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QDragMoveEvent* event ```
void q_sizegrip_drag_move_event(void* self, void* event) {
    QSizeGrip_DragMoveEvent((QSizeGrip*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QDragMoveEvent* event ```
void q_sizegrip_qbase_drag_move_event(void* self, void* event) {
    QSizeGrip_QBaseDragMoveEvent((QSizeGrip*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QDragMoveEvent*) ```
void q_sizegrip_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnDragMoveEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QDragLeaveEvent* event ```
void q_sizegrip_drag_leave_event(void* self, void* event) {
    QSizeGrip_DragLeaveEvent((QSizeGrip*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QDragLeaveEvent* event ```
void q_sizegrip_qbase_drag_leave_event(void* self, void* event) {
    QSizeGrip_QBaseDragLeaveEvent((QSizeGrip*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QDragLeaveEvent*) ```
void q_sizegrip_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnDragLeaveEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QDropEvent* event ```
void q_sizegrip_drop_event(void* self, void* event) {
    QSizeGrip_DropEvent((QSizeGrip*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QDropEvent* event ```
void q_sizegrip_qbase_drop_event(void* self, void* event) {
    QSizeGrip_QBaseDropEvent((QSizeGrip*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QDropEvent*) ```
void q_sizegrip_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnDropEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, const char* eventType, void* message, intptr_t* result ```
bool q_sizegrip_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSizeGrip_NativeEvent((QSizeGrip*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, const char* eventType, void* message, intptr_t* result ```
bool q_sizegrip_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSizeGrip_QBaseNativeEvent((QSizeGrip*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, bool (*slot)(QSizeGrip*, const char*, void*, intptr_t*) ```
void q_sizegrip_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QSizeGrip_OnNativeEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QEvent* param1 ```
void q_sizegrip_change_event(void* self, void* param1) {
    QSizeGrip_ChangeEvent((QSizeGrip*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QEvent* param1 ```
void q_sizegrip_qbase_change_event(void* self, void* param1) {
    QSizeGrip_QBaseChangeEvent((QSizeGrip*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QEvent*) ```
void q_sizegrip_on_change_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnChangeEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_sizegrip_metric(void* self, int64_t param1) {
    return QSizeGrip_Metric((QSizeGrip*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_sizegrip_qbase_metric(void* self, int64_t param1) {
    return QSizeGrip_QBaseMetric((QSizeGrip*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, int32_t (*slot)(QSizeGrip*, enum QPaintDevice__PaintDeviceMetric) ```
void q_sizegrip_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QSizeGrip_OnMetric((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QPainter* painter ```
void q_sizegrip_init_painter(void* self, void* painter) {
    QSizeGrip_InitPainter((QSizeGrip*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QPainter* painter ```
void q_sizegrip_qbase_init_painter(void* self, void* painter) {
    QSizeGrip_QBaseInitPainter((QSizeGrip*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QPainter*) ```
void q_sizegrip_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnInitPainter((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QPoint* offset ```
QPaintDevice* q_sizegrip_redirected(void* self, void* offset) {
    return QSizeGrip_Redirected((QSizeGrip*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QPoint* offset ```
QPaintDevice* q_sizegrip_qbase_redirected(void* self, void* offset) {
    return QSizeGrip_QBaseRedirected((QSizeGrip*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, QPaintDevice* (*slot)(QSizeGrip*, QPoint*) ```
void q_sizegrip_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QSizeGrip_OnRedirected((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self ```
QPainter* q_sizegrip_shared_painter(void* self) {
    return QSizeGrip_SharedPainter((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self ```
QPainter* q_sizegrip_qbase_shared_painter(void* self) {
    return QSizeGrip_QBaseSharedPainter((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, QPainter* (*slot)() ```
void q_sizegrip_on_shared_painter(void* self, QPainter* (*slot)()) {
    QSizeGrip_OnSharedPainter((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QInputMethodEvent* param1 ```
void q_sizegrip_input_method_event(void* self, void* param1) {
    QSizeGrip_InputMethodEvent((QSizeGrip*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QInputMethodEvent* param1 ```
void q_sizegrip_qbase_input_method_event(void* self, void* param1) {
    QSizeGrip_QBaseInputMethodEvent((QSizeGrip*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QInputMethodEvent*) ```
void q_sizegrip_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnInputMethodEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_sizegrip_input_method_query(void* self, int64_t param1) {
    return QSizeGrip_InputMethodQuery((QSizeGrip*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_sizegrip_qbase_input_method_query(void* self, int64_t param1) {
    return QSizeGrip_QBaseInputMethodQuery((QSizeGrip*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, QVariant* (*slot)(QSizeGrip*, enum Qt__InputMethodQuery) ```
void q_sizegrip_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QSizeGrip_OnInputMethodQuery((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, bool next ```
bool q_sizegrip_focus_next_prev_child(void* self, bool next) {
    return QSizeGrip_FocusNextPrevChild((QSizeGrip*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, bool next ```
bool q_sizegrip_qbase_focus_next_prev_child(void* self, bool next) {
    return QSizeGrip_QBaseFocusNextPrevChild((QSizeGrip*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, bool (*slot)(QSizeGrip*, bool) ```
void q_sizegrip_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QSizeGrip_OnFocusNextPrevChild((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QTimerEvent* event ```
void q_sizegrip_timer_event(void* self, void* event) {
    QSizeGrip_TimerEvent((QSizeGrip*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QTimerEvent* event ```
void q_sizegrip_qbase_timer_event(void* self, void* event) {
    QSizeGrip_QBaseTimerEvent((QSizeGrip*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QTimerEvent*) ```
void q_sizegrip_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnTimerEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QChildEvent* event ```
void q_sizegrip_child_event(void* self, void* event) {
    QSizeGrip_ChildEvent((QSizeGrip*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QChildEvent* event ```
void q_sizegrip_qbase_child_event(void* self, void* event) {
    QSizeGrip_QBaseChildEvent((QSizeGrip*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QChildEvent*) ```
void q_sizegrip_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnChildEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QEvent* event ```
void q_sizegrip_custom_event(void* self, void* event) {
    QSizeGrip_CustomEvent((QSizeGrip*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QEvent* event ```
void q_sizegrip_qbase_custom_event(void* self, void* event) {
    QSizeGrip_QBaseCustomEvent((QSizeGrip*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QEvent*) ```
void q_sizegrip_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnCustomEvent((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QMetaMethod* signal ```
void q_sizegrip_connect_notify(void* self, void* signal) {
    QSizeGrip_ConnectNotify((QSizeGrip*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QMetaMethod* signal ```
void q_sizegrip_qbase_connect_notify(void* self, void* signal) {
    QSizeGrip_QBaseConnectNotify((QSizeGrip*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QMetaMethod*) ```
void q_sizegrip_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnConnectNotify((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QMetaMethod* signal ```
void q_sizegrip_disconnect_notify(void* self, void* signal) {
    QSizeGrip_DisconnectNotify((QSizeGrip*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QMetaMethod* signal ```
void q_sizegrip_qbase_disconnect_notify(void* self, void* signal) {
    QSizeGrip_QBaseDisconnectNotify((QSizeGrip*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)(QSizeGrip*, QMetaMethod*) ```
void q_sizegrip_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSizeGrip_OnDisconnectNotify((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self ```
void q_sizegrip_update_micro_focus(void* self) {
    QSizeGrip_UpdateMicroFocus((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self ```
void q_sizegrip_qbase_update_micro_focus(void* self) {
    QSizeGrip_QBaseUpdateMicroFocus((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)() ```
void q_sizegrip_on_update_micro_focus(void* self, void (*slot)()) {
    QSizeGrip_OnUpdateMicroFocus((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self ```
void q_sizegrip_create(void* self) {
    QSizeGrip_Create((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self ```
void q_sizegrip_qbase_create(void* self) {
    QSizeGrip_QBaseCreate((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)() ```
void q_sizegrip_on_create(void* self, void (*slot)()) {
    QSizeGrip_OnCreate((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self ```
void q_sizegrip_destroy(void* self) {
    QSizeGrip_Destroy((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self ```
void q_sizegrip_qbase_destroy(void* self) {
    QSizeGrip_QBaseDestroy((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, void (*slot)() ```
void q_sizegrip_on_destroy(void* self, void (*slot)()) {
    QSizeGrip_OnDestroy((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_focus_next_child(void* self) {
    return QSizeGrip_FocusNextChild((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_qbase_focus_next_child(void* self) {
    return QSizeGrip_QBaseFocusNextChild((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, bool (*slot)() ```
void q_sizegrip_on_focus_next_child(void* self, bool (*slot)()) {
    QSizeGrip_OnFocusNextChild((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_focus_previous_child(void* self) {
    return QSizeGrip_FocusPreviousChild((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self ```
bool q_sizegrip_qbase_focus_previous_child(void* self) {
    return QSizeGrip_QBaseFocusPreviousChild((QSizeGrip*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, bool (*slot)() ```
void q_sizegrip_on_focus_previous_child(void* self, bool (*slot)()) {
    QSizeGrip_OnFocusPreviousChild((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self ```
QObject* q_sizegrip_sender(void* self) {
    return QSizeGrip_Sender((QSizeGrip*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self ```
QObject* q_sizegrip_qbase_sender(void* self) {
    return QSizeGrip_QBaseSender((QSizeGrip*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, QObject* (*slot)() ```
void q_sizegrip_on_sender(void* self, QObject* (*slot)()) {
    QSizeGrip_OnSender((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_sender_signal_index(void* self) {
    return QSizeGrip_SenderSignalIndex((QSizeGrip*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self ```
int32_t q_sizegrip_qbase_sender_signal_index(void* self) {
    return QSizeGrip_QBaseSenderSignalIndex((QSizeGrip*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, int32_t (*slot)() ```
void q_sizegrip_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSizeGrip_OnSenderSignalIndex((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, const char* signal ```
int32_t q_sizegrip_receivers(void* self, const char* signal) {
    return QSizeGrip_Receivers((QSizeGrip*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, const char* signal ```
int32_t q_sizegrip_qbase_receivers(void* self, const char* signal) {
    return QSizeGrip_QBaseReceivers((QSizeGrip*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, int32_t (*slot)(QSizeGrip*, const char*) ```
void q_sizegrip_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSizeGrip_OnReceivers((QSizeGrip*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSizeGrip* self, QMetaMethod* signal ```
bool q_sizegrip_is_signal_connected(void* self, void* signal) {
    return QSizeGrip_IsSignalConnected((QSizeGrip*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSizeGrip* self, QMetaMethod* signal ```
bool q_sizegrip_qbase_is_signal_connected(void* self, void* signal) {
    return QSizeGrip_QBaseIsSignalConnected((QSizeGrip*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSizeGrip* self, bool (*slot)(QSizeGrip*, QMetaMethod*) ```
void q_sizegrip_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSizeGrip_OnIsSignalConnected((QSizeGrip*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSizeGrip* self ```
void q_sizegrip_delete(void* self) {
    QSizeGrip_Delete((QSizeGrip*)(self));
}