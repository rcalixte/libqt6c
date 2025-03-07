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
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqvideosink.hpp"
#include "../libqwidget.hpp"
#include "../libqwindow.hpp"
#include "../libqcoreevent.hpp"
#include "libqvideowidget.hpp"
#include "libqvideowidget.h"

/// https://doc.qt.io/qt-6/qvideowidget.html

/// q_videowidget_new constructs a new QVideoWidget object.
///
/// ``` QWidget* parent ```
QVideoWidget* q_videowidget_new(void* parent) {
    return QVideoWidget_new((QWidget*)parent);
}

/// q_videowidget_new2 constructs a new QVideoWidget object.
///
///
QVideoWidget* q_videowidget_new2() {
    return QVideoWidget_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVideoWidget* self ```
QMetaObject* q_videowidget_meta_object(void* self) {
    return QVideoWidget_MetaObject((QVideoWidget*)self);
}

/// ``` QVideoWidget* self, const char* param1 ```
void* q_videowidget_metacast(void* self, const char* param1) {
    return QVideoWidget_Metacast((QVideoWidget*)self, param1);
}

/// ``` QVideoWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_videowidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVideoWidget_Metacall((QVideoWidget*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QVideoWidget* self, int32_t (*slot)(QVideoWidget*, enum QMetaObject__Call, int, void*) ```
void q_videowidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QVideoWidget_OnMetacall((QVideoWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVideoWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_videowidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVideoWidget_QBaseMetacall((QVideoWidget*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_videowidget_tr(const char* s) {
    libqt_string _str = QVideoWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideowidget.html#videoSink)
///
/// ``` QVideoWidget* self ```
QVideoSink* q_videowidget_video_sink(void* self) {
    return QVideoWidget_VideoSink((QVideoWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideowidget.html#aspectRatioMode)
///
/// ``` QVideoWidget* self ```
int64_t q_videowidget_aspect_ratio_mode(void* self) {
    return QVideoWidget_AspectRatioMode((QVideoWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideowidget.html#sizeHint)
///
/// ``` QVideoWidget* self ```
QSize* q_videowidget_size_hint(void* self) {
    return QVideoWidget_SizeHint((QVideoWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QVideoWidget* self, QSize* (*slot)() ```
void q_videowidget_on_size_hint(void* self, QSize* (*slot)()) {
    QVideoWidget_OnSizeHint((QVideoWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVideoWidget* self ```
QSize* q_videowidget_qbase_size_hint(void* self) {
    return QVideoWidget_QBaseSizeHint((QVideoWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideowidget.html#setFullScreen)
///
/// ``` QVideoWidget* self, bool fullScreen ```
void q_videowidget_set_full_screen(void* self, bool fullScreen) {
    QVideoWidget_SetFullScreen((QVideoWidget*)self, fullScreen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideowidget.html#setAspectRatioMode)
///
/// ``` QVideoWidget* self, enum Qt__AspectRatioMode mode ```
void q_videowidget_set_aspect_ratio_mode(void* self, int64_t mode) {
    QVideoWidget_SetAspectRatioMode((QVideoWidget*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideowidget.html#fullScreenChanged)
///
/// ``` QVideoWidget* self, bool fullScreen ```
void q_videowidget_full_screen_changed(void* self, bool fullScreen) {
    QVideoWidget_FullScreenChanged((QVideoWidget*)self, fullScreen);
}

/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, bool) ```
void q_videowidget_on_full_screen_changed(void* self, void (*slot)(void*, bool)) {
    QVideoWidget_Connect_FullScreenChanged((QVideoWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideowidget.html#aspectRatioModeChanged)
///
/// ``` QVideoWidget* self, enum Qt__AspectRatioMode mode ```
void q_videowidget_aspect_ratio_mode_changed(void* self, int64_t mode) {
    QVideoWidget_AspectRatioModeChanged((QVideoWidget*)self, mode);
}

/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, enum Qt__AspectRatioMode) ```
void q_videowidget_on_aspect_ratio_mode_changed(void* self, void (*slot)(void*, int64_t)) {
    QVideoWidget_Connect_AspectRatioModeChanged((QVideoWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideowidget.html#event)
///
/// ``` QVideoWidget* self, QEvent* event ```
bool q_videowidget_event(void* self, void* event) {
    return QVideoWidget_Event((QVideoWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QVideoWidget* self, bool (*slot)(QVideoWidget*, QEvent*) ```
void q_videowidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QVideoWidget_OnEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVideoWidget* self, QEvent* event ```
bool q_videowidget_qbase_event(void* self, void* event) {
    return QVideoWidget_QBaseEvent((QVideoWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideowidget.html#showEvent)
///
/// ``` QVideoWidget* self, QShowEvent* event ```
void q_videowidget_show_event(void* self, void* event) {
    QVideoWidget_ShowEvent((QVideoWidget*)self, (QShowEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QShowEvent*) ```
void q_videowidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnShowEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVideoWidget* self, QShowEvent* event ```
void q_videowidget_qbase_show_event(void* self, void* event) {
    QVideoWidget_QBaseShowEvent((QVideoWidget*)self, (QShowEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideowidget.html#hideEvent)
///
/// ``` QVideoWidget* self, QHideEvent* event ```
void q_videowidget_hide_event(void* self, void* event) {
    QVideoWidget_HideEvent((QVideoWidget*)self, (QHideEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QHideEvent*) ```
void q_videowidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnHideEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVideoWidget* self, QHideEvent* event ```
void q_videowidget_qbase_hide_event(void* self, void* event) {
    QVideoWidget_QBaseHideEvent((QVideoWidget*)self, (QHideEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideowidget.html#resizeEvent)
///
/// ``` QVideoWidget* self, QResizeEvent* event ```
void q_videowidget_resize_event(void* self, void* event) {
    QVideoWidget_ResizeEvent((QVideoWidget*)self, (QResizeEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QResizeEvent*) ```
void q_videowidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnResizeEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVideoWidget* self, QResizeEvent* event ```
void q_videowidget_qbase_resize_event(void* self, void* event) {
    QVideoWidget_QBaseResizeEvent((QVideoWidget*)self, (QResizeEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideowidget.html#moveEvent)
///
/// ``` QVideoWidget* self, QMoveEvent* event ```
void q_videowidget_move_event(void* self, void* event) {
    QVideoWidget_MoveEvent((QVideoWidget*)self, (QMoveEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QMoveEvent*) ```
void q_videowidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnMoveEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVideoWidget* self, QMoveEvent* event ```
void q_videowidget_qbase_move_event(void* self, void* event) {
    QVideoWidget_QBaseMoveEvent((QVideoWidget*)self, (QMoveEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_videowidget_tr2(const char* s, const char* c) {
    libqt_string _str = QVideoWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_videowidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QVideoWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QVideoWidget* self ```
uintptr_t q_videowidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QVideoWidget* self ```
void q_videowidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QVideoWidget* self ```
uintptr_t q_videowidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QVideoWidget* self ```
uintptr_t q_videowidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QVideoWidget* self ```
QStyle* q_videowidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QVideoWidget* self, QStyle* style ```
void q_videowidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QVideoWidget* self ```
int64_t q_videowidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QVideoWidget* self, enum Qt__WindowModality windowModality ```
void q_videowidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QVideoWidget* self, QWidget* param1 ```
bool q_videowidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QVideoWidget* self, bool enabled ```
void q_videowidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QVideoWidget* self, bool disabled ```
void q_videowidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QVideoWidget* self, bool windowModified ```
void q_videowidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QVideoWidget* self ```
QRect* q_videowidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QVideoWidget* self ```
QRect* q_videowidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QVideoWidget* self ```
QRect* q_videowidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QVideoWidget* self ```
QPoint* q_videowidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QVideoWidget* self ```
QSize* q_videowidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QVideoWidget* self ```
QSize* q_videowidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QVideoWidget* self ```
QRect* q_videowidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QVideoWidget* self ```
QRect* q_videowidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QVideoWidget* self ```
QRegion* q_videowidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QVideoWidget* self ```
QSize* q_videowidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QVideoWidget* self ```
QSize* q_videowidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QVideoWidget* self, QSize* minimumSize ```
void q_videowidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QVideoWidget* self, int minw, int minh ```
void q_videowidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QVideoWidget* self, QSize* maximumSize ```
void q_videowidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QVideoWidget* self, int maxw, int maxh ```
void q_videowidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QVideoWidget* self, int minw ```
void q_videowidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QVideoWidget* self, int minh ```
void q_videowidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QVideoWidget* self, int maxw ```
void q_videowidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QVideoWidget* self, int maxh ```
void q_videowidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QVideoWidget* self ```
QSize* q_videowidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QVideoWidget* self, QSize* sizeIncrement ```
void q_videowidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QVideoWidget* self, int w, int h ```
void q_videowidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QVideoWidget* self ```
QSize* q_videowidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QVideoWidget* self, QSize* baseSize ```
void q_videowidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QVideoWidget* self, int basew, int baseh ```
void q_videowidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QVideoWidget* self, QSize* fixedSize ```
void q_videowidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QVideoWidget* self, int w, int h ```
void q_videowidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QVideoWidget* self, int w ```
void q_videowidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QVideoWidget* self, int h ```
void q_videowidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QVideoWidget* self, QPointF* param1 ```
QPointF* q_videowidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QVideoWidget* self, QPoint* param1 ```
QPoint* q_videowidget_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QVideoWidget* self, QPointF* param1 ```
QPointF* q_videowidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QVideoWidget* self, QPoint* param1 ```
QPoint* q_videowidget_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QVideoWidget* self, QPointF* param1 ```
QPointF* q_videowidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QVideoWidget* self, QPoint* param1 ```
QPoint* q_videowidget_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QVideoWidget* self, QPointF* param1 ```
QPointF* q_videowidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QVideoWidget* self, QPoint* param1 ```
QPoint* q_videowidget_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QVideoWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_videowidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QVideoWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_videowidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QVideoWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_videowidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QVideoWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_videowidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QVideoWidget* self ```
QWidget* q_videowidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QVideoWidget* self ```
QWidget* q_videowidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QVideoWidget* self ```
QWidget* q_videowidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QVideoWidget* self ```
QPalette* q_videowidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QVideoWidget* self, QPalette* palette ```
void q_videowidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QVideoWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_videowidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QVideoWidget* self ```
int64_t q_videowidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QVideoWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_videowidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QVideoWidget* self ```
int64_t q_videowidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QVideoWidget* self ```
QFont* q_videowidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QVideoWidget* self, QFont* font ```
void q_videowidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QVideoWidget* self ```
QFontMetrics* q_videowidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QVideoWidget* self ```
QFontInfo* q_videowidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QVideoWidget* self ```
QCursor* q_videowidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QVideoWidget* self, QCursor* cursor ```
void q_videowidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QVideoWidget* self ```
void q_videowidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QVideoWidget* self, bool enable ```
void q_videowidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QVideoWidget* self, bool enable ```
void q_videowidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QVideoWidget* self, QBitmap* mask ```
void q_videowidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QVideoWidget* self, QRegion* mask ```
void q_videowidget_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QVideoWidget* self ```
QRegion* q_videowidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QVideoWidget* self ```
void q_videowidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QVideoWidget* self, QPaintDevice* target ```
void q_videowidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QVideoWidget* self, QPainter* painter ```
void q_videowidget_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QVideoWidget* self ```
QPixmap* q_videowidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QVideoWidget* self ```
QGraphicsEffect* q_videowidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QVideoWidget* self, QGraphicsEffect* effect ```
void q_videowidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QVideoWidget* self, enum Qt__GestureType typeVal ```
void q_videowidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QVideoWidget* self, enum Qt__GestureType typeVal ```
void q_videowidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QVideoWidget* self, const char* windowTitle ```
void q_videowidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QVideoWidget* self, const char* styleSheet ```
void q_videowidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QVideoWidget* self ```
const char* q_videowidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QVideoWidget* self ```
const char* q_videowidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QVideoWidget* self, QIcon* icon ```
void q_videowidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QVideoWidget* self ```
QIcon* q_videowidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QVideoWidget* self, const char* windowIconText ```
void q_videowidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QVideoWidget* self ```
const char* q_videowidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QVideoWidget* self, const char* windowRole ```
void q_videowidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QVideoWidget* self ```
const char* q_videowidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QVideoWidget* self, const char* filePath ```
void q_videowidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QVideoWidget* self ```
const char* q_videowidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QVideoWidget* self, double level ```
void q_videowidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QVideoWidget* self ```
double q_videowidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QVideoWidget* self, const char* toolTip ```
void q_videowidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QVideoWidget* self ```
const char* q_videowidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QVideoWidget* self, int msec ```
void q_videowidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QVideoWidget* self, const char* statusTip ```
void q_videowidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QVideoWidget* self ```
const char* q_videowidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QVideoWidget* self, const char* whatsThis ```
void q_videowidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QVideoWidget* self ```
const char* q_videowidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QVideoWidget* self ```
const char* q_videowidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QVideoWidget* self, const char* name ```
void q_videowidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QVideoWidget* self ```
const char* q_videowidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QVideoWidget* self, const char* description ```
void q_videowidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QVideoWidget* self, enum Qt__LayoutDirection direction ```
void q_videowidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QVideoWidget* self ```
int64_t q_videowidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QVideoWidget* self ```
void q_videowidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QVideoWidget* self, QLocale* locale ```
void q_videowidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QVideoWidget* self ```
QLocale* q_videowidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QVideoWidget* self ```
void q_videowidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QVideoWidget* self ```
void q_videowidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QVideoWidget* self ```
void q_videowidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QVideoWidget* self ```
void q_videowidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QVideoWidget* self, enum Qt__FocusReason reason ```
void q_videowidget_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QVideoWidget* self ```
int64_t q_videowidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QVideoWidget* self, enum Qt__FocusPolicy policy ```
void q_videowidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_videowidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QVideoWidget* self, QWidget* focusProxy ```
void q_videowidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QVideoWidget* self ```
QWidget* q_videowidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QVideoWidget* self ```
int64_t q_videowidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QVideoWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_videowidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QVideoWidget* self ```
void q_videowidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QVideoWidget* self, QCursor* param1 ```
void q_videowidget_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QVideoWidget* self ```
void q_videowidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QVideoWidget* self ```
void q_videowidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QVideoWidget* self ```
void q_videowidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QVideoWidget* self, QKeySequence* key ```
int32_t q_videowidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QVideoWidget* self, int id ```
void q_videowidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QVideoWidget* self, int id ```
void q_videowidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QVideoWidget* self, int id ```
void q_videowidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_videowidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_videowidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QVideoWidget* self, bool enable ```
void q_videowidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QVideoWidget* self ```
QGraphicsProxyWidget* q_videowidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QVideoWidget* self ```
void q_videowidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QVideoWidget* self ```
void q_videowidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QVideoWidget* self, int x, int y, int w, int h ```
void q_videowidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QVideoWidget* self, QRect* param1 ```
void q_videowidget_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QVideoWidget* self, QRegion* param1 ```
void q_videowidget_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QVideoWidget* self, int x, int y, int w, int h ```
void q_videowidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QVideoWidget* self, QRect* param1 ```
void q_videowidget_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QVideoWidget* self, QRegion* param1 ```
void q_videowidget_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QVideoWidget* self, bool hidden ```
void q_videowidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QVideoWidget* self ```
void q_videowidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QVideoWidget* self ```
void q_videowidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QVideoWidget* self ```
void q_videowidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QVideoWidget* self ```
void q_videowidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QVideoWidget* self ```
void q_videowidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QVideoWidget* self ```
void q_videowidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QVideoWidget* self ```
void q_videowidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QVideoWidget* self ```
void q_videowidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QVideoWidget* self, QWidget* param1 ```
void q_videowidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QVideoWidget* self, int x, int y ```
void q_videowidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QVideoWidget* self, QPoint* param1 ```
void q_videowidget_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QVideoWidget* self, int w, int h ```
void q_videowidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QVideoWidget* self, QSize* param1 ```
void q_videowidget_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QVideoWidget* self, int x, int y, int w, int h ```
void q_videowidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QVideoWidget* self, QRect* geometry ```
void q_videowidget_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QVideoWidget* self ```
char* q_videowidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QVideoWidget* self, const char* geometry ```
bool q_videowidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QVideoWidget* self ```
void q_videowidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QVideoWidget* self, QWidget* param1 ```
bool q_videowidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QVideoWidget* self ```
int64_t q_videowidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QVideoWidget* self, int state ```
void q_videowidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QVideoWidget* self, int state ```
void q_videowidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QVideoWidget* self ```
QSizePolicy* q_videowidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QVideoWidget* self, QSizePolicy* sizePolicy ```
void q_videowidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QVideoWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_videowidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QVideoWidget* self ```
QRegion* q_videowidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QVideoWidget* self, int left, int top, int right, int bottom ```
void q_videowidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QVideoWidget* self, QMargins* margins ```
void q_videowidget_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QVideoWidget* self ```
QMargins* q_videowidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QVideoWidget* self ```
QRect* q_videowidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QVideoWidget* self ```
QLayout* q_videowidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QVideoWidget* self, QLayout* layout ```
void q_videowidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QVideoWidget* self ```
void q_videowidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QVideoWidget* self, QWidget* parent ```
void q_videowidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QVideoWidget* self, QWidget* parent, int f ```
void q_videowidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QVideoWidget* self, int dx, int dy ```
void q_videowidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QVideoWidget* self, int dx, int dy, QRect* param3 ```
void q_videowidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QVideoWidget* self ```
QWidget* q_videowidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QVideoWidget* self ```
QWidget* q_videowidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QVideoWidget* self ```
QWidget* q_videowidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QVideoWidget* self, bool on ```
void q_videowidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QVideoWidget* self, QAction* action ```
void q_videowidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QVideoWidget* self, QAction* actions[] ```
void q_videowidget_add_actions(void* self, void* actions[]) {
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
/// ``` QVideoWidget* self, QAction* before, QAction* actions[] ```
void q_videowidget_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QVideoWidget* self, QAction* before, QAction* action ```
void q_videowidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QVideoWidget* self, QAction* action ```
void q_videowidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QVideoWidget* self ```
libqt_list /* of QAction* */ q_videowidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QVideoWidget* self, const char* text ```
QAction* q_videowidget_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QVideoWidget* self, QIcon* icon, const char* text ```
QAction* q_videowidget_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QVideoWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_videowidget_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QVideoWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_videowidget_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QVideoWidget* self ```
QWidget* q_videowidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QVideoWidget* self, int typeVal ```
void q_videowidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QVideoWidget* self ```
int64_t q_videowidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QVideoWidget* self, enum Qt__WindowType param1 ```
void q_videowidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QVideoWidget* self, int typeVal ```
void q_videowidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QVideoWidget* self ```
int64_t q_videowidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_videowidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QVideoWidget* self, int x, int y ```
QWidget* q_videowidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QVideoWidget* self, QPoint* p ```
QWidget* q_videowidget_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QVideoWidget* self, enum Qt__WidgetAttribute param1 ```
void q_videowidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QVideoWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_videowidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QVideoWidget* self ```
void q_videowidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QVideoWidget* self, QWidget* child ```
bool q_videowidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QVideoWidget* self, bool enabled ```
void q_videowidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QVideoWidget* self ```
QBackingStore* q_videowidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QVideoWidget* self ```
QWindow* q_videowidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QVideoWidget* self ```
QScreen* q_videowidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QVideoWidget* self, QScreen* screen ```
void q_videowidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_videowidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QVideoWidget* self, const char* title ```
void q_videowidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QVideoWidget* self, void (*slot)(QWidget*, const char*) ```
void q_videowidget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QVideoWidget* self, QIcon* icon ```
void q_videowidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QVideoWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_videowidget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QVideoWidget* self, const char* iconText ```
void q_videowidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QVideoWidget* self, void (*slot)(QWidget*, const char*) ```
void q_videowidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QVideoWidget* self, QPoint* pos ```
void q_videowidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QVideoWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_videowidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QVideoWidget* self ```
int64_t q_videowidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QVideoWidget* self, int hints ```
void q_videowidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QVideoWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_videowidget_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QVideoWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_videowidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QVideoWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_videowidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QVideoWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_videowidget_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QVideoWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_videowidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QVideoWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_videowidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QVideoWidget* self, QRect* rectangle ```
QPixmap* q_videowidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QVideoWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_videowidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QVideoWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_videowidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QVideoWidget* self, int id, bool enable ```
void q_videowidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QVideoWidget* self, int id, bool enable ```
void q_videowidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QVideoWidget* self, enum Qt__WindowType param1, bool on ```
void q_videowidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QVideoWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_videowidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_videowidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_videowidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVideoWidget* self ```
const char* q_videowidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVideoWidget* self, const char* name ```
void q_videowidget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVideoWidget* self, bool b ```
bool q_videowidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVideoWidget* self ```
QThread* q_videowidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVideoWidget* self, QThread* thread ```
void q_videowidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVideoWidget* self, int interval ```
int32_t q_videowidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVideoWidget* self, int id ```
void q_videowidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVideoWidget* self ```
libqt_list /* of QObject* */ q_videowidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVideoWidget* self, QObject* filterObj ```
void q_videowidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVideoWidget* self, QObject* obj ```
void q_videowidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_videowidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVideoWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_videowidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_videowidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_videowidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVideoWidget* self ```
void q_videowidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVideoWidget* self ```
void q_videowidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVideoWidget* self, const char* name, QVariant* value ```
bool q_videowidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVideoWidget* self, const char* name ```
QVariant* q_videowidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVideoWidget* self ```
const char** q_videowidget_dynamic_property_names(void* self) {
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
/// ``` QVideoWidget* self ```
QBindingStorage* q_videowidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVideoWidget* self ```
QBindingStorage* q_videowidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVideoWidget* self ```
void q_videowidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QVideoWidget* self, void (*slot)(QObject*) ```
void q_videowidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVideoWidget* self ```
QObject* q_videowidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVideoWidget* self, const char* classname ```
bool q_videowidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVideoWidget* self ```
void q_videowidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVideoWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_videowidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_videowidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVideoWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_videowidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVideoWidget* self, QObject* param1 ```
void q_videowidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QVideoWidget* self, void (*slot)(QObject*, QObject*) ```
void q_videowidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QVideoWidget* self ```
bool q_videowidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QVideoWidget* self ```
double q_videowidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QVideoWidget* self ```
double q_videowidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_videowidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_dev_type(void* self) {
    return QVideoWidget_DevType((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_qbase_dev_type(void* self) {
    return QVideoWidget_QBaseDevType((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, int32_t (*slot)() ```
void q_videowidget_on_dev_type(void* self, int32_t (*slot)()) {
    QVideoWidget_OnDevType((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, bool visible ```
void q_videowidget_set_visible(void* self, bool visible) {
    QVideoWidget_SetVisible((QVideoWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, bool visible ```
void q_videowidget_qbase_set_visible(void* self, bool visible) {
    QVideoWidget_QBaseSetVisible((QVideoWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, bool) ```
void q_videowidget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QVideoWidget_OnSetVisible((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self ```
QSize* q_videowidget_minimum_size_hint(void* self) {
    return QVideoWidget_MinimumSizeHint((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self ```
QSize* q_videowidget_qbase_minimum_size_hint(void* self) {
    return QVideoWidget_QBaseMinimumSizeHint((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, QSize* (*slot)() ```
void q_videowidget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QVideoWidget_OnMinimumSizeHint((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, int param1 ```
int32_t q_videowidget_height_for_width(void* self, int param1) {
    return QVideoWidget_HeightForWidth((QVideoWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, int param1 ```
int32_t q_videowidget_qbase_height_for_width(void* self, int param1) {
    return QVideoWidget_QBaseHeightForWidth((QVideoWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, int32_t (*slot)(QVideoWidget*, int) ```
void q_videowidget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QVideoWidget_OnHeightForWidth((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self ```
bool q_videowidget_has_height_for_width(void* self) {
    return QVideoWidget_HasHeightForWidth((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self ```
bool q_videowidget_qbase_has_height_for_width(void* self) {
    return QVideoWidget_QBaseHasHeightForWidth((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, bool (*slot)() ```
void q_videowidget_on_has_height_for_width(void* self, bool (*slot)()) {
    QVideoWidget_OnHasHeightForWidth((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self ```
QPaintEngine* q_videowidget_paint_engine(void* self) {
    return QVideoWidget_PaintEngine((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self ```
QPaintEngine* q_videowidget_qbase_paint_engine(void* self) {
    return QVideoWidget_QBasePaintEngine((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, QPaintEngine* (*slot)() ```
void q_videowidget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QVideoWidget_OnPaintEngine((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QMouseEvent* event ```
void q_videowidget_mouse_press_event(void* self, void* event) {
    QVideoWidget_MousePressEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QMouseEvent* event ```
void q_videowidget_qbase_mouse_press_event(void* self, void* event) {
    QVideoWidget_QBaseMousePressEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QMouseEvent*) ```
void q_videowidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnMousePressEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QMouseEvent* event ```
void q_videowidget_mouse_release_event(void* self, void* event) {
    QVideoWidget_MouseReleaseEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QMouseEvent* event ```
void q_videowidget_qbase_mouse_release_event(void* self, void* event) {
    QVideoWidget_QBaseMouseReleaseEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QMouseEvent*) ```
void q_videowidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnMouseReleaseEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QMouseEvent* event ```
void q_videowidget_mouse_double_click_event(void* self, void* event) {
    QVideoWidget_MouseDoubleClickEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QMouseEvent* event ```
void q_videowidget_qbase_mouse_double_click_event(void* self, void* event) {
    QVideoWidget_QBaseMouseDoubleClickEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QMouseEvent*) ```
void q_videowidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnMouseDoubleClickEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QMouseEvent* event ```
void q_videowidget_mouse_move_event(void* self, void* event) {
    QVideoWidget_MouseMoveEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QMouseEvent* event ```
void q_videowidget_qbase_mouse_move_event(void* self, void* event) {
    QVideoWidget_QBaseMouseMoveEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QMouseEvent*) ```
void q_videowidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnMouseMoveEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QWheelEvent* event ```
void q_videowidget_wheel_event(void* self, void* event) {
    QVideoWidget_WheelEvent((QVideoWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QWheelEvent* event ```
void q_videowidget_qbase_wheel_event(void* self, void* event) {
    QVideoWidget_QBaseWheelEvent((QVideoWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QWheelEvent*) ```
void q_videowidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnWheelEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QKeyEvent* event ```
void q_videowidget_key_press_event(void* self, void* event) {
    QVideoWidget_KeyPressEvent((QVideoWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QKeyEvent* event ```
void q_videowidget_qbase_key_press_event(void* self, void* event) {
    QVideoWidget_QBaseKeyPressEvent((QVideoWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QKeyEvent*) ```
void q_videowidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnKeyPressEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QKeyEvent* event ```
void q_videowidget_key_release_event(void* self, void* event) {
    QVideoWidget_KeyReleaseEvent((QVideoWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QKeyEvent* event ```
void q_videowidget_qbase_key_release_event(void* self, void* event) {
    QVideoWidget_QBaseKeyReleaseEvent((QVideoWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QKeyEvent*) ```
void q_videowidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnKeyReleaseEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QFocusEvent* event ```
void q_videowidget_focus_in_event(void* self, void* event) {
    QVideoWidget_FocusInEvent((QVideoWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QFocusEvent* event ```
void q_videowidget_qbase_focus_in_event(void* self, void* event) {
    QVideoWidget_QBaseFocusInEvent((QVideoWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QFocusEvent*) ```
void q_videowidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnFocusInEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QFocusEvent* event ```
void q_videowidget_focus_out_event(void* self, void* event) {
    QVideoWidget_FocusOutEvent((QVideoWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QFocusEvent* event ```
void q_videowidget_qbase_focus_out_event(void* self, void* event) {
    QVideoWidget_QBaseFocusOutEvent((QVideoWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QFocusEvent*) ```
void q_videowidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnFocusOutEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QEnterEvent* event ```
void q_videowidget_enter_event(void* self, void* event) {
    QVideoWidget_EnterEvent((QVideoWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QEnterEvent* event ```
void q_videowidget_qbase_enter_event(void* self, void* event) {
    QVideoWidget_QBaseEnterEvent((QVideoWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QEnterEvent*) ```
void q_videowidget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnEnterEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QEvent* event ```
void q_videowidget_leave_event(void* self, void* event) {
    QVideoWidget_LeaveEvent((QVideoWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QEvent* event ```
void q_videowidget_qbase_leave_event(void* self, void* event) {
    QVideoWidget_QBaseLeaveEvent((QVideoWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QEvent*) ```
void q_videowidget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnLeaveEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QPaintEvent* event ```
void q_videowidget_paint_event(void* self, void* event) {
    QVideoWidget_PaintEvent((QVideoWidget*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QPaintEvent* event ```
void q_videowidget_qbase_paint_event(void* self, void* event) {
    QVideoWidget_QBasePaintEvent((QVideoWidget*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QPaintEvent*) ```
void q_videowidget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnPaintEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QCloseEvent* event ```
void q_videowidget_close_event(void* self, void* event) {
    QVideoWidget_CloseEvent((QVideoWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QCloseEvent* event ```
void q_videowidget_qbase_close_event(void* self, void* event) {
    QVideoWidget_QBaseCloseEvent((QVideoWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QCloseEvent*) ```
void q_videowidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnCloseEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QContextMenuEvent* event ```
void q_videowidget_context_menu_event(void* self, void* event) {
    QVideoWidget_ContextMenuEvent((QVideoWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QContextMenuEvent* event ```
void q_videowidget_qbase_context_menu_event(void* self, void* event) {
    QVideoWidget_QBaseContextMenuEvent((QVideoWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QContextMenuEvent*) ```
void q_videowidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnContextMenuEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QTabletEvent* event ```
void q_videowidget_tablet_event(void* self, void* event) {
    QVideoWidget_TabletEvent((QVideoWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QTabletEvent* event ```
void q_videowidget_qbase_tablet_event(void* self, void* event) {
    QVideoWidget_QBaseTabletEvent((QVideoWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QTabletEvent*) ```
void q_videowidget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnTabletEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QActionEvent* event ```
void q_videowidget_action_event(void* self, void* event) {
    QVideoWidget_ActionEvent((QVideoWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QActionEvent* event ```
void q_videowidget_qbase_action_event(void* self, void* event) {
    QVideoWidget_QBaseActionEvent((QVideoWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QActionEvent*) ```
void q_videowidget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnActionEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QDragEnterEvent* event ```
void q_videowidget_drag_enter_event(void* self, void* event) {
    QVideoWidget_DragEnterEvent((QVideoWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QDragEnterEvent* event ```
void q_videowidget_qbase_drag_enter_event(void* self, void* event) {
    QVideoWidget_QBaseDragEnterEvent((QVideoWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QDragEnterEvent*) ```
void q_videowidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnDragEnterEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QDragMoveEvent* event ```
void q_videowidget_drag_move_event(void* self, void* event) {
    QVideoWidget_DragMoveEvent((QVideoWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QDragMoveEvent* event ```
void q_videowidget_qbase_drag_move_event(void* self, void* event) {
    QVideoWidget_QBaseDragMoveEvent((QVideoWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QDragMoveEvent*) ```
void q_videowidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnDragMoveEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QDragLeaveEvent* event ```
void q_videowidget_drag_leave_event(void* self, void* event) {
    QVideoWidget_DragLeaveEvent((QVideoWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QDragLeaveEvent* event ```
void q_videowidget_qbase_drag_leave_event(void* self, void* event) {
    QVideoWidget_QBaseDragLeaveEvent((QVideoWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QDragLeaveEvent*) ```
void q_videowidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnDragLeaveEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QDropEvent* event ```
void q_videowidget_drop_event(void* self, void* event) {
    QVideoWidget_DropEvent((QVideoWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QDropEvent* event ```
void q_videowidget_qbase_drop_event(void* self, void* event) {
    QVideoWidget_QBaseDropEvent((QVideoWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QDropEvent*) ```
void q_videowidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnDropEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_videowidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QVideoWidget_NativeEvent((QVideoWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_videowidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QVideoWidget_QBaseNativeEvent((QVideoWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, bool (*slot)(QVideoWidget*, const char*, void*, intptr_t*) ```
void q_videowidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QVideoWidget_OnNativeEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QEvent* param1 ```
void q_videowidget_change_event(void* self, void* param1) {
    QVideoWidget_ChangeEvent((QVideoWidget*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QEvent* param1 ```
void q_videowidget_qbase_change_event(void* self, void* param1) {
    QVideoWidget_QBaseChangeEvent((QVideoWidget*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QEvent*) ```
void q_videowidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnChangeEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_videowidget_metric(void* self, int64_t param1) {
    return QVideoWidget_Metric((QVideoWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_videowidget_qbase_metric(void* self, int64_t param1) {
    return QVideoWidget_QBaseMetric((QVideoWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, int32_t (*slot)(QVideoWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_videowidget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QVideoWidget_OnMetric((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QPainter* painter ```
void q_videowidget_init_painter(void* self, void* painter) {
    QVideoWidget_InitPainter((QVideoWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QPainter* painter ```
void q_videowidget_qbase_init_painter(void* self, void* painter) {
    QVideoWidget_QBaseInitPainter((QVideoWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QPainter*) ```
void q_videowidget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnInitPainter((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QPoint* offset ```
QPaintDevice* q_videowidget_redirected(void* self, void* offset) {
    return QVideoWidget_Redirected((QVideoWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QPoint* offset ```
QPaintDevice* q_videowidget_qbase_redirected(void* self, void* offset) {
    return QVideoWidget_QBaseRedirected((QVideoWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, QPaintDevice* (*slot)(QVideoWidget*, QPoint*) ```
void q_videowidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QVideoWidget_OnRedirected((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self ```
QPainter* q_videowidget_shared_painter(void* self) {
    return QVideoWidget_SharedPainter((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self ```
QPainter* q_videowidget_qbase_shared_painter(void* self) {
    return QVideoWidget_QBaseSharedPainter((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, QPainter* (*slot)() ```
void q_videowidget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QVideoWidget_OnSharedPainter((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QInputMethodEvent* param1 ```
void q_videowidget_input_method_event(void* self, void* param1) {
    QVideoWidget_InputMethodEvent((QVideoWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QInputMethodEvent* param1 ```
void q_videowidget_qbase_input_method_event(void* self, void* param1) {
    QVideoWidget_QBaseInputMethodEvent((QVideoWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QInputMethodEvent*) ```
void q_videowidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnInputMethodEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_videowidget_input_method_query(void* self, int64_t param1) {
    return QVideoWidget_InputMethodQuery((QVideoWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_videowidget_qbase_input_method_query(void* self, int64_t param1) {
    return QVideoWidget_QBaseInputMethodQuery((QVideoWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, QVariant* (*slot)(QVideoWidget*, enum Qt__InputMethodQuery) ```
void q_videowidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QVideoWidget_OnInputMethodQuery((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, bool next ```
bool q_videowidget_focus_next_prev_child(void* self, bool next) {
    return QVideoWidget_FocusNextPrevChild((QVideoWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, bool next ```
bool q_videowidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QVideoWidget_QBaseFocusNextPrevChild((QVideoWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, bool (*slot)(QVideoWidget*, bool) ```
void q_videowidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QVideoWidget_OnFocusNextPrevChild((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QObject* watched, QEvent* event ```
bool q_videowidget_event_filter(void* self, void* watched, void* event) {
    return QVideoWidget_EventFilter((QVideoWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QObject* watched, QEvent* event ```
bool q_videowidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QVideoWidget_QBaseEventFilter((QVideoWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, bool (*slot)(QVideoWidget*, QObject*, QEvent*) ```
void q_videowidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QVideoWidget_OnEventFilter((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QTimerEvent* event ```
void q_videowidget_timer_event(void* self, void* event) {
    QVideoWidget_TimerEvent((QVideoWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QTimerEvent* event ```
void q_videowidget_qbase_timer_event(void* self, void* event) {
    QVideoWidget_QBaseTimerEvent((QVideoWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QTimerEvent*) ```
void q_videowidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnTimerEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QChildEvent* event ```
void q_videowidget_child_event(void* self, void* event) {
    QVideoWidget_ChildEvent((QVideoWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QChildEvent* event ```
void q_videowidget_qbase_child_event(void* self, void* event) {
    QVideoWidget_QBaseChildEvent((QVideoWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QChildEvent*) ```
void q_videowidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnChildEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QEvent* event ```
void q_videowidget_custom_event(void* self, void* event) {
    QVideoWidget_CustomEvent((QVideoWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QEvent* event ```
void q_videowidget_qbase_custom_event(void* self, void* event) {
    QVideoWidget_QBaseCustomEvent((QVideoWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QEvent*) ```
void q_videowidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnCustomEvent((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QMetaMethod* signal ```
void q_videowidget_connect_notify(void* self, void* signal) {
    QVideoWidget_ConnectNotify((QVideoWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QMetaMethod* signal ```
void q_videowidget_qbase_connect_notify(void* self, void* signal) {
    QVideoWidget_QBaseConnectNotify((QVideoWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QMetaMethod*) ```
void q_videowidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnConnectNotify((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QMetaMethod* signal ```
void q_videowidget_disconnect_notify(void* self, void* signal) {
    QVideoWidget_DisconnectNotify((QVideoWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QMetaMethod* signal ```
void q_videowidget_qbase_disconnect_notify(void* self, void* signal) {
    QVideoWidget_QBaseDisconnectNotify((QVideoWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)(QVideoWidget*, QMetaMethod*) ```
void q_videowidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QVideoWidget_OnDisconnectNotify((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self ```
void q_videowidget_update_micro_focus(void* self) {
    QVideoWidget_UpdateMicroFocus((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self ```
void q_videowidget_qbase_update_micro_focus(void* self) {
    QVideoWidget_QBaseUpdateMicroFocus((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)() ```
void q_videowidget_on_update_micro_focus(void* self, void (*slot)()) {
    QVideoWidget_OnUpdateMicroFocus((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self ```
void q_videowidget_create(void* self) {
    QVideoWidget_Create((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self ```
void q_videowidget_qbase_create(void* self) {
    QVideoWidget_QBaseCreate((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)() ```
void q_videowidget_on_create(void* self, void (*slot)()) {
    QVideoWidget_OnCreate((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self ```
void q_videowidget_destroy(void* self) {
    QVideoWidget_Destroy((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self ```
void q_videowidget_qbase_destroy(void* self) {
    QVideoWidget_QBaseDestroy((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, void (*slot)() ```
void q_videowidget_on_destroy(void* self, void (*slot)()) {
    QVideoWidget_OnDestroy((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self ```
bool q_videowidget_focus_next_child(void* self) {
    return QVideoWidget_FocusNextChild((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self ```
bool q_videowidget_qbase_focus_next_child(void* self) {
    return QVideoWidget_QBaseFocusNextChild((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, bool (*slot)() ```
void q_videowidget_on_focus_next_child(void* self, bool (*slot)()) {
    QVideoWidget_OnFocusNextChild((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self ```
bool q_videowidget_focus_previous_child(void* self) {
    return QVideoWidget_FocusPreviousChild((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self ```
bool q_videowidget_qbase_focus_previous_child(void* self) {
    return QVideoWidget_QBaseFocusPreviousChild((QVideoWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, bool (*slot)() ```
void q_videowidget_on_focus_previous_child(void* self, bool (*slot)()) {
    QVideoWidget_OnFocusPreviousChild((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self ```
QObject* q_videowidget_sender(void* self) {
    return QVideoWidget_Sender((QVideoWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self ```
QObject* q_videowidget_qbase_sender(void* self) {
    return QVideoWidget_QBaseSender((QVideoWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, QObject* (*slot)() ```
void q_videowidget_on_sender(void* self, QObject* (*slot)()) {
    QVideoWidget_OnSender((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_sender_signal_index(void* self) {
    return QVideoWidget_SenderSignalIndex((QVideoWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self ```
int32_t q_videowidget_qbase_sender_signal_index(void* self) {
    return QVideoWidget_QBaseSenderSignalIndex((QVideoWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, int32_t (*slot)() ```
void q_videowidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QVideoWidget_OnSenderSignalIndex((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, const char* signal ```
int32_t q_videowidget_receivers(void* self, const char* signal) {
    return QVideoWidget_Receivers((QVideoWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, const char* signal ```
int32_t q_videowidget_qbase_receivers(void* self, const char* signal) {
    return QVideoWidget_QBaseReceivers((QVideoWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, int32_t (*slot)(QVideoWidget*, const char*) ```
void q_videowidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QVideoWidget_OnReceivers((QVideoWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoWidget* self, QMetaMethod* signal ```
bool q_videowidget_is_signal_connected(void* self, void* signal) {
    return QVideoWidget_IsSignalConnected((QVideoWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoWidget* self, QMetaMethod* signal ```
bool q_videowidget_qbase_is_signal_connected(void* self, void* signal) {
    return QVideoWidget_QBaseIsSignalConnected((QVideoWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoWidget* self, bool (*slot)(QVideoWidget*, QMetaMethod*) ```
void q_videowidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QVideoWidget_OnIsSignalConnected((QVideoWidget*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QVideoWidget* self ```
void q_videowidget_delete(void* self) {
    QVideoWidget_Delete((QVideoWidget*)(self));
}