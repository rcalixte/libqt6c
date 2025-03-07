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
#include "libqstatusbar.hpp"
#include "libqstatusbar.h"

/// https://doc.qt.io/qt-6/qstatusbar.html

/// q_statusbar_new constructs a new QStatusBar object.
///
/// ``` QWidget* parent ```
QStatusBar* q_statusbar_new(void* parent) {
    return QStatusBar_new((QWidget*)parent);
}

/// q_statusbar_new2 constructs a new QStatusBar object.
///
///
QStatusBar* q_statusbar_new2() {
    return QStatusBar_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QStatusBar* self ```
QMetaObject* q_statusbar_meta_object(void* self) {
    return QStatusBar_MetaObject((QStatusBar*)self);
}

/// ``` QStatusBar* self, const char* param1 ```
void* q_statusbar_metacast(void* self, const char* param1) {
    return QStatusBar_Metacast((QStatusBar*)self, param1);
}

/// ``` QStatusBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_statusbar_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStatusBar_Metacall((QStatusBar*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QStatusBar* self, int32_t (*slot)(QStatusBar*, enum QMetaObject__Call, int, void*) ```
void q_statusbar_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QStatusBar_OnMetacall((QStatusBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStatusBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_statusbar_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStatusBar_QBaseMetacall((QStatusBar*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_statusbar_tr(const char* s) {
    libqt_string _str = QStatusBar_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#addWidget)
///
/// ``` QStatusBar* self, QWidget* widget ```
void q_statusbar_add_widget(void* self, void* widget) {
    QStatusBar_AddWidget((QStatusBar*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#insertWidget)
///
/// ``` QStatusBar* self, int index, QWidget* widget ```
int32_t q_statusbar_insert_widget(void* self, int index, void* widget) {
    return QStatusBar_InsertWidget((QStatusBar*)self, index, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#addPermanentWidget)
///
/// ``` QStatusBar* self, QWidget* widget ```
void q_statusbar_add_permanent_widget(void* self, void* widget) {
    QStatusBar_AddPermanentWidget((QStatusBar*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#insertPermanentWidget)
///
/// ``` QStatusBar* self, int index, QWidget* widget ```
int32_t q_statusbar_insert_permanent_widget(void* self, int index, void* widget) {
    return QStatusBar_InsertPermanentWidget((QStatusBar*)self, index, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#removeWidget)
///
/// ``` QStatusBar* self, QWidget* widget ```
void q_statusbar_remove_widget(void* self, void* widget) {
    QStatusBar_RemoveWidget((QStatusBar*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#setSizeGripEnabled)
///
/// ``` QStatusBar* self, bool sizeGripEnabled ```
void q_statusbar_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QStatusBar_SetSizeGripEnabled((QStatusBar*)self, sizeGripEnabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#isSizeGripEnabled)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_size_grip_enabled(void* self) {
    return QStatusBar_IsSizeGripEnabled((QStatusBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#currentMessage)
///
/// ``` QStatusBar* self ```
const char* q_statusbar_current_message(void* self) {
    libqt_string _str = QStatusBar_CurrentMessage((QStatusBar*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#showMessage)
///
/// ``` QStatusBar* self, const char* text ```
void q_statusbar_show_message(void* self, const char* text) {
    QStatusBar_ShowMessage((QStatusBar*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#clearMessage)
///
/// ``` QStatusBar* self ```
void q_statusbar_clear_message(void* self) {
    QStatusBar_ClearMessage((QStatusBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#messageChanged)
///
/// ``` QStatusBar* self, const char* text ```
void q_statusbar_message_changed(void* self, const char* text) {
    QStatusBar_MessageChanged((QStatusBar*)self, qstring(text));
}

/// ``` QStatusBar* self, void (*slot)(QStatusBar*, const char*) ```
void q_statusbar_on_message_changed(void* self, void (*slot)(void*, const char*)) {
    QStatusBar_Connect_MessageChanged((QStatusBar*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#showEvent)
///
/// ``` QStatusBar* self, QShowEvent* param1 ```
void q_statusbar_show_event(void* self, void* param1) {
    QStatusBar_ShowEvent((QStatusBar*)self, (QShowEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QShowEvent*) ```
void q_statusbar_on_show_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnShowEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStatusBar* self, QShowEvent* param1 ```
void q_statusbar_qbase_show_event(void* self, void* param1) {
    QStatusBar_QBaseShowEvent((QStatusBar*)self, (QShowEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#paintEvent)
///
/// ``` QStatusBar* self, QPaintEvent* param1 ```
void q_statusbar_paint_event(void* self, void* param1) {
    QStatusBar_PaintEvent((QStatusBar*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QPaintEvent*) ```
void q_statusbar_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnPaintEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStatusBar* self, QPaintEvent* param1 ```
void q_statusbar_qbase_paint_event(void* self, void* param1) {
    QStatusBar_QBasePaintEvent((QStatusBar*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#resizeEvent)
///
/// ``` QStatusBar* self, QResizeEvent* param1 ```
void q_statusbar_resize_event(void* self, void* param1) {
    QStatusBar_ResizeEvent((QStatusBar*)self, (QResizeEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QResizeEvent*) ```
void q_statusbar_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnResizeEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStatusBar* self, QResizeEvent* param1 ```
void q_statusbar_qbase_resize_event(void* self, void* param1) {
    QStatusBar_QBaseResizeEvent((QStatusBar*)self, (QResizeEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#reformat)
///
/// ``` QStatusBar* self ```
void q_statusbar_reformat(void* self) {
    QStatusBar_Reformat((QStatusBar*)self);
}

/// Allows for overriding the related default method
///
/// ``` QStatusBar* self, void (*slot)() ```
void q_statusbar_on_reformat(void* self, void (*slot)()) {
    QStatusBar_OnReformat((QStatusBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStatusBar* self ```
void q_statusbar_qbase_reformat(void* self) {
    QStatusBar_QBaseReformat((QStatusBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#hideOrShow)
///
/// ``` QStatusBar* self ```
void q_statusbar_hide_or_show(void* self) {
    QStatusBar_HideOrShow((QStatusBar*)self);
}

/// Allows for overriding the related default method
///
/// ``` QStatusBar* self, void (*slot)() ```
void q_statusbar_on_hide_or_show(void* self, void (*slot)()) {
    QStatusBar_OnHideOrShow((QStatusBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStatusBar* self ```
void q_statusbar_qbase_hide_or_show(void* self) {
    QStatusBar_QBaseHideOrShow((QStatusBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#event)
///
/// ``` QStatusBar* self, QEvent* param1 ```
bool q_statusbar_event(void* self, void* param1) {
    return QStatusBar_Event((QStatusBar*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QStatusBar* self, bool (*slot)(QStatusBar*, QEvent*) ```
void q_statusbar_on_event(void* self, bool (*slot)(void*, void*)) {
    QStatusBar_OnEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStatusBar* self, QEvent* param1 ```
bool q_statusbar_qbase_event(void* self, void* param1) {
    return QStatusBar_QBaseEvent((QStatusBar*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_statusbar_tr2(const char* s, const char* c) {
    libqt_string _str = QStatusBar_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_statusbar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStatusBar_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#addWidget)
///
/// ``` QStatusBar* self, QWidget* widget, int stretch ```
void q_statusbar_add_widget2(void* self, void* widget, int stretch) {
    QStatusBar_AddWidget2((QStatusBar*)self, (QWidget*)widget, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#insertWidget)
///
/// ``` QStatusBar* self, int index, QWidget* widget, int stretch ```
int32_t q_statusbar_insert_widget3(void* self, int index, void* widget, int stretch) {
    return QStatusBar_InsertWidget3((QStatusBar*)self, index, (QWidget*)widget, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#addPermanentWidget)
///
/// ``` QStatusBar* self, QWidget* widget, int stretch ```
void q_statusbar_add_permanent_widget2(void* self, void* widget, int stretch) {
    QStatusBar_AddPermanentWidget2((QStatusBar*)self, (QWidget*)widget, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#insertPermanentWidget)
///
/// ``` QStatusBar* self, int index, QWidget* widget, int stretch ```
int32_t q_statusbar_insert_permanent_widget3(void* self, int index, void* widget, int stretch) {
    return QStatusBar_InsertPermanentWidget3((QStatusBar*)self, index, (QWidget*)widget, stretch);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstatusbar.html#showMessage)
///
/// ``` QStatusBar* self, const char* text, int timeout ```
void q_statusbar_show_message2(void* self, const char* text, int timeout) {
    QStatusBar_ShowMessage2((QStatusBar*)self, qstring(text), timeout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QStatusBar* self ```
uintptr_t q_statusbar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QStatusBar* self ```
void q_statusbar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QStatusBar* self ```
uintptr_t q_statusbar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QStatusBar* self ```
uintptr_t q_statusbar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QStatusBar* self ```
QStyle* q_statusbar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QStatusBar* self, QStyle* style ```
void q_statusbar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QStatusBar* self ```
int64_t q_statusbar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QStatusBar* self, enum Qt__WindowModality windowModality ```
void q_statusbar_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QStatusBar* self, QWidget* param1 ```
bool q_statusbar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QStatusBar* self, bool enabled ```
void q_statusbar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QStatusBar* self, bool disabled ```
void q_statusbar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QStatusBar* self, bool windowModified ```
void q_statusbar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QStatusBar* self ```
QRect* q_statusbar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QStatusBar* self ```
QRect* q_statusbar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QStatusBar* self ```
QRect* q_statusbar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QStatusBar* self ```
QPoint* q_statusbar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QStatusBar* self ```
QSize* q_statusbar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QStatusBar* self ```
QSize* q_statusbar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QStatusBar* self ```
QRect* q_statusbar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QStatusBar* self ```
QRect* q_statusbar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QStatusBar* self ```
QRegion* q_statusbar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QStatusBar* self ```
QSize* q_statusbar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QStatusBar* self ```
QSize* q_statusbar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QStatusBar* self, QSize* minimumSize ```
void q_statusbar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QStatusBar* self, int minw, int minh ```
void q_statusbar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QStatusBar* self, QSize* maximumSize ```
void q_statusbar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QStatusBar* self, int maxw, int maxh ```
void q_statusbar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QStatusBar* self, int minw ```
void q_statusbar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QStatusBar* self, int minh ```
void q_statusbar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QStatusBar* self, int maxw ```
void q_statusbar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QStatusBar* self, int maxh ```
void q_statusbar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QStatusBar* self ```
QSize* q_statusbar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QStatusBar* self, QSize* sizeIncrement ```
void q_statusbar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QStatusBar* self, int w, int h ```
void q_statusbar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QStatusBar* self ```
QSize* q_statusbar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QStatusBar* self, QSize* baseSize ```
void q_statusbar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QStatusBar* self, int basew, int baseh ```
void q_statusbar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QStatusBar* self, QSize* fixedSize ```
void q_statusbar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QStatusBar* self, int w, int h ```
void q_statusbar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QStatusBar* self, int w ```
void q_statusbar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QStatusBar* self, int h ```
void q_statusbar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QStatusBar* self, QPointF* param1 ```
QPointF* q_statusbar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QStatusBar* self, QPoint* param1 ```
QPoint* q_statusbar_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QStatusBar* self, QPointF* param1 ```
QPointF* q_statusbar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QStatusBar* self, QPoint* param1 ```
QPoint* q_statusbar_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QStatusBar* self, QPointF* param1 ```
QPointF* q_statusbar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QStatusBar* self, QPoint* param1 ```
QPoint* q_statusbar_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QStatusBar* self, QPointF* param1 ```
QPointF* q_statusbar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QStatusBar* self, QPoint* param1 ```
QPoint* q_statusbar_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QStatusBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_statusbar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QStatusBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_statusbar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QStatusBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_statusbar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QStatusBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_statusbar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QStatusBar* self ```
QWidget* q_statusbar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QStatusBar* self ```
QWidget* q_statusbar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QStatusBar* self ```
QWidget* q_statusbar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QStatusBar* self ```
QPalette* q_statusbar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QStatusBar* self, QPalette* palette ```
void q_statusbar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QStatusBar* self, enum QPalette__ColorRole backgroundRole ```
void q_statusbar_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QStatusBar* self ```
int64_t q_statusbar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QStatusBar* self, enum QPalette__ColorRole foregroundRole ```
void q_statusbar_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QStatusBar* self ```
int64_t q_statusbar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QStatusBar* self ```
QFont* q_statusbar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QStatusBar* self, QFont* font ```
void q_statusbar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QStatusBar* self ```
QFontMetrics* q_statusbar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QStatusBar* self ```
QFontInfo* q_statusbar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QStatusBar* self ```
QCursor* q_statusbar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QStatusBar* self, QCursor* cursor ```
void q_statusbar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QStatusBar* self ```
void q_statusbar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QStatusBar* self, bool enable ```
void q_statusbar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QStatusBar* self ```
bool q_statusbar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QStatusBar* self ```
bool q_statusbar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QStatusBar* self, bool enable ```
void q_statusbar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QStatusBar* self ```
bool q_statusbar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QStatusBar* self, QBitmap* mask ```
void q_statusbar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QStatusBar* self, QRegion* mask ```
void q_statusbar_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QStatusBar* self ```
QRegion* q_statusbar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QStatusBar* self ```
void q_statusbar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStatusBar* self, QPaintDevice* target ```
void q_statusbar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStatusBar* self, QPainter* painter ```
void q_statusbar_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QStatusBar* self ```
QPixmap* q_statusbar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QStatusBar* self ```
QGraphicsEffect* q_statusbar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QStatusBar* self, QGraphicsEffect* effect ```
void q_statusbar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QStatusBar* self, enum Qt__GestureType typeVal ```
void q_statusbar_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QStatusBar* self, enum Qt__GestureType typeVal ```
void q_statusbar_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QStatusBar* self, const char* windowTitle ```
void q_statusbar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QStatusBar* self, const char* styleSheet ```
void q_statusbar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QStatusBar* self ```
const char* q_statusbar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QStatusBar* self ```
const char* q_statusbar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QStatusBar* self, QIcon* icon ```
void q_statusbar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QStatusBar* self ```
QIcon* q_statusbar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QStatusBar* self, const char* windowIconText ```
void q_statusbar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QStatusBar* self ```
const char* q_statusbar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QStatusBar* self, const char* windowRole ```
void q_statusbar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QStatusBar* self ```
const char* q_statusbar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QStatusBar* self, const char* filePath ```
void q_statusbar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QStatusBar* self ```
const char* q_statusbar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QStatusBar* self, double level ```
void q_statusbar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QStatusBar* self ```
double q_statusbar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QStatusBar* self, const char* toolTip ```
void q_statusbar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QStatusBar* self ```
const char* q_statusbar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QStatusBar* self, int msec ```
void q_statusbar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QStatusBar* self, const char* statusTip ```
void q_statusbar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QStatusBar* self ```
const char* q_statusbar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QStatusBar* self, const char* whatsThis ```
void q_statusbar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QStatusBar* self ```
const char* q_statusbar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QStatusBar* self ```
const char* q_statusbar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QStatusBar* self, const char* name ```
void q_statusbar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QStatusBar* self ```
const char* q_statusbar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QStatusBar* self, const char* description ```
void q_statusbar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QStatusBar* self, enum Qt__LayoutDirection direction ```
void q_statusbar_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QStatusBar* self ```
int64_t q_statusbar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QStatusBar* self ```
void q_statusbar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QStatusBar* self, QLocale* locale ```
void q_statusbar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QStatusBar* self ```
QLocale* q_statusbar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QStatusBar* self ```
void q_statusbar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QStatusBar* self ```
void q_statusbar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QStatusBar* self ```
void q_statusbar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QStatusBar* self ```
void q_statusbar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QStatusBar* self, enum Qt__FocusReason reason ```
void q_statusbar_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QStatusBar* self ```
int64_t q_statusbar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QStatusBar* self, enum Qt__FocusPolicy policy ```
void q_statusbar_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QStatusBar* self ```
bool q_statusbar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_statusbar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QStatusBar* self, QWidget* focusProxy ```
void q_statusbar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QStatusBar* self ```
QWidget* q_statusbar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QStatusBar* self ```
int64_t q_statusbar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QStatusBar* self, enum Qt__ContextMenuPolicy policy ```
void q_statusbar_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QStatusBar* self ```
void q_statusbar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QStatusBar* self, QCursor* param1 ```
void q_statusbar_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QStatusBar* self ```
void q_statusbar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QStatusBar* self ```
void q_statusbar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QStatusBar* self ```
void q_statusbar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QStatusBar* self, QKeySequence* key ```
int32_t q_statusbar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QStatusBar* self, int id ```
void q_statusbar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QStatusBar* self, int id ```
void q_statusbar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QStatusBar* self, int id ```
void q_statusbar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_statusbar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_statusbar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QStatusBar* self ```
bool q_statusbar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QStatusBar* self, bool enable ```
void q_statusbar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QStatusBar* self ```
QGraphicsProxyWidget* q_statusbar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QStatusBar* self ```
void q_statusbar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QStatusBar* self ```
void q_statusbar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QStatusBar* self, int x, int y, int w, int h ```
void q_statusbar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QStatusBar* self, QRect* param1 ```
void q_statusbar_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QStatusBar* self, QRegion* param1 ```
void q_statusbar_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QStatusBar* self, int x, int y, int w, int h ```
void q_statusbar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QStatusBar* self, QRect* param1 ```
void q_statusbar_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QStatusBar* self, QRegion* param1 ```
void q_statusbar_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QStatusBar* self, bool hidden ```
void q_statusbar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QStatusBar* self ```
void q_statusbar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QStatusBar* self ```
void q_statusbar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QStatusBar* self ```
void q_statusbar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QStatusBar* self ```
void q_statusbar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QStatusBar* self ```
void q_statusbar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QStatusBar* self ```
void q_statusbar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QStatusBar* self ```
bool q_statusbar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QStatusBar* self ```
void q_statusbar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QStatusBar* self ```
void q_statusbar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QStatusBar* self, QWidget* param1 ```
void q_statusbar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QStatusBar* self, int x, int y ```
void q_statusbar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QStatusBar* self, QPoint* param1 ```
void q_statusbar_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QStatusBar* self, int w, int h ```
void q_statusbar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QStatusBar* self, QSize* param1 ```
void q_statusbar_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QStatusBar* self, int x, int y, int w, int h ```
void q_statusbar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QStatusBar* self, QRect* geometry ```
void q_statusbar_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QStatusBar* self ```
char* q_statusbar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QStatusBar* self, const char* geometry ```
bool q_statusbar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QStatusBar* self ```
void q_statusbar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QStatusBar* self, QWidget* param1 ```
bool q_statusbar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QStatusBar* self ```
int64_t q_statusbar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QStatusBar* self, int state ```
void q_statusbar_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QStatusBar* self, int state ```
void q_statusbar_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QStatusBar* self ```
QSizePolicy* q_statusbar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QStatusBar* self, QSizePolicy* sizePolicy ```
void q_statusbar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QStatusBar* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_statusbar_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QStatusBar* self ```
QRegion* q_statusbar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QStatusBar* self, int left, int top, int right, int bottom ```
void q_statusbar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QStatusBar* self, QMargins* margins ```
void q_statusbar_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QStatusBar* self ```
QMargins* q_statusbar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QStatusBar* self ```
QRect* q_statusbar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QStatusBar* self ```
QLayout* q_statusbar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QStatusBar* self, QLayout* layout ```
void q_statusbar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QStatusBar* self ```
void q_statusbar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QStatusBar* self, QWidget* parent ```
void q_statusbar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QStatusBar* self, QWidget* parent, int f ```
void q_statusbar_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QStatusBar* self, int dx, int dy ```
void q_statusbar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QStatusBar* self, int dx, int dy, QRect* param3 ```
void q_statusbar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QStatusBar* self ```
QWidget* q_statusbar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QStatusBar* self ```
QWidget* q_statusbar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QStatusBar* self ```
QWidget* q_statusbar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QStatusBar* self ```
bool q_statusbar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QStatusBar* self, bool on ```
void q_statusbar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QStatusBar* self, QAction* action ```
void q_statusbar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QStatusBar* self, QAction* actions[] ```
void q_statusbar_add_actions(void* self, void* actions[]) {
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
/// ``` QStatusBar* self, QAction* before, QAction* actions[] ```
void q_statusbar_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QStatusBar* self, QAction* before, QAction* action ```
void q_statusbar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QStatusBar* self, QAction* action ```
void q_statusbar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QStatusBar* self ```
libqt_list /* of QAction* */ q_statusbar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QStatusBar* self, const char* text ```
QAction* q_statusbar_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QStatusBar* self, QIcon* icon, const char* text ```
QAction* q_statusbar_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QStatusBar* self, const char* text, QKeySequence* shortcut ```
QAction* q_statusbar_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QStatusBar* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_statusbar_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QStatusBar* self ```
QWidget* q_statusbar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QStatusBar* self, int typeVal ```
void q_statusbar_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QStatusBar* self ```
int64_t q_statusbar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QStatusBar* self, enum Qt__WindowType param1 ```
void q_statusbar_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QStatusBar* self, int typeVal ```
void q_statusbar_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QStatusBar* self ```
int64_t q_statusbar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_statusbar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QStatusBar* self, int x, int y ```
QWidget* q_statusbar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QStatusBar* self, QPoint* p ```
QWidget* q_statusbar_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QStatusBar* self, enum Qt__WidgetAttribute param1 ```
void q_statusbar_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QStatusBar* self, enum Qt__WidgetAttribute param1 ```
bool q_statusbar_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QStatusBar* self ```
void q_statusbar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QStatusBar* self, QWidget* child ```
bool q_statusbar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QStatusBar* self ```
bool q_statusbar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QStatusBar* self, bool enabled ```
void q_statusbar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QStatusBar* self ```
QBackingStore* q_statusbar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QStatusBar* self ```
QWindow* q_statusbar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QStatusBar* self ```
QScreen* q_statusbar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QStatusBar* self, QScreen* screen ```
void q_statusbar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_statusbar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QStatusBar* self, const char* title ```
void q_statusbar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QStatusBar* self, void (*slot)(QWidget*, const char*) ```
void q_statusbar_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QStatusBar* self, QIcon* icon ```
void q_statusbar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QStatusBar* self, void (*slot)(QWidget*, QIcon*) ```
void q_statusbar_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QStatusBar* self, const char* iconText ```
void q_statusbar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QStatusBar* self, void (*slot)(QWidget*, const char*) ```
void q_statusbar_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QStatusBar* self, QPoint* pos ```
void q_statusbar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QStatusBar* self, void (*slot)(QWidget*, QPoint*) ```
void q_statusbar_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QStatusBar* self ```
int64_t q_statusbar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QStatusBar* self, int hints ```
void q_statusbar_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStatusBar* self, QPaintDevice* target, QPoint* targetOffset ```
void q_statusbar_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStatusBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_statusbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStatusBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_statusbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStatusBar* self, QPainter* painter, QPoint* targetOffset ```
void q_statusbar_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStatusBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_statusbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStatusBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_statusbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QStatusBar* self, QRect* rectangle ```
QPixmap* q_statusbar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QStatusBar* self, enum Qt__GestureType typeVal, int flags ```
void q_statusbar_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QStatusBar* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_statusbar_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QStatusBar* self, int id, bool enable ```
void q_statusbar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QStatusBar* self, int id, bool enable ```
void q_statusbar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QStatusBar* self, enum Qt__WindowType param1, bool on ```
void q_statusbar_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QStatusBar* self, enum Qt__WidgetAttribute param1, bool on ```
void q_statusbar_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_statusbar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_statusbar_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QStatusBar* self ```
const char* q_statusbar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QStatusBar* self, const char* name ```
void q_statusbar_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QStatusBar* self ```
bool q_statusbar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QStatusBar* self ```
bool q_statusbar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QStatusBar* self, bool b ```
bool q_statusbar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QStatusBar* self ```
QThread* q_statusbar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QStatusBar* self, QThread* thread ```
void q_statusbar_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStatusBar* self, int interval ```
int32_t q_statusbar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QStatusBar* self, int id ```
void q_statusbar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QStatusBar* self ```
libqt_list /* of QObject* */ q_statusbar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QStatusBar* self, QObject* filterObj ```
void q_statusbar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QStatusBar* self, QObject* obj ```
void q_statusbar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_statusbar_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStatusBar* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_statusbar_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_statusbar_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_statusbar_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QStatusBar* self ```
void q_statusbar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QStatusBar* self ```
void q_statusbar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QStatusBar* self, const char* name, QVariant* value ```
bool q_statusbar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QStatusBar* self, const char* name ```
QVariant* q_statusbar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QStatusBar* self ```
const char** q_statusbar_dynamic_property_names(void* self) {
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
/// ``` QStatusBar* self ```
QBindingStorage* q_statusbar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStatusBar* self ```
QBindingStorage* q_statusbar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStatusBar* self ```
void q_statusbar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QStatusBar* self, void (*slot)(QObject*) ```
void q_statusbar_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QStatusBar* self ```
QObject* q_statusbar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QStatusBar* self, const char* classname ```
bool q_statusbar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QStatusBar* self ```
void q_statusbar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStatusBar* self, int interval, enum Qt__TimerType timerType ```
int32_t q_statusbar_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_statusbar_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStatusBar* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_statusbar_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStatusBar* self, QObject* param1 ```
void q_statusbar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QStatusBar* self, void (*slot)(QObject*, QObject*) ```
void q_statusbar_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QStatusBar* self ```
bool q_statusbar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QStatusBar* self ```
double q_statusbar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QStatusBar* self ```
double q_statusbar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_statusbar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_dev_type(void* self) {
    return QStatusBar_DevType((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_qbase_dev_type(void* self) {
    return QStatusBar_QBaseDevType((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, int32_t (*slot)() ```
void q_statusbar_on_dev_type(void* self, int32_t (*slot)()) {
    QStatusBar_OnDevType((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, bool visible ```
void q_statusbar_set_visible(void* self, bool visible) {
    QStatusBar_SetVisible((QStatusBar*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, bool visible ```
void q_statusbar_qbase_set_visible(void* self, bool visible) {
    QStatusBar_QBaseSetVisible((QStatusBar*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, bool) ```
void q_statusbar_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QStatusBar_OnSetVisible((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self ```
QSize* q_statusbar_size_hint(void* self) {
    return QStatusBar_SizeHint((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self ```
QSize* q_statusbar_qbase_size_hint(void* self) {
    return QStatusBar_QBaseSizeHint((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, QSize* (*slot)() ```
void q_statusbar_on_size_hint(void* self, QSize* (*slot)()) {
    QStatusBar_OnSizeHint((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self ```
QSize* q_statusbar_minimum_size_hint(void* self) {
    return QStatusBar_MinimumSizeHint((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self ```
QSize* q_statusbar_qbase_minimum_size_hint(void* self) {
    return QStatusBar_QBaseMinimumSizeHint((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, QSize* (*slot)() ```
void q_statusbar_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QStatusBar_OnMinimumSizeHint((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, int param1 ```
int32_t q_statusbar_height_for_width(void* self, int param1) {
    return QStatusBar_HeightForWidth((QStatusBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, int param1 ```
int32_t q_statusbar_qbase_height_for_width(void* self, int param1) {
    return QStatusBar_QBaseHeightForWidth((QStatusBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, int32_t (*slot)(QStatusBar*, int) ```
void q_statusbar_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QStatusBar_OnHeightForWidth((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self ```
bool q_statusbar_has_height_for_width(void* self) {
    return QStatusBar_HasHeightForWidth((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self ```
bool q_statusbar_qbase_has_height_for_width(void* self) {
    return QStatusBar_QBaseHasHeightForWidth((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, bool (*slot)() ```
void q_statusbar_on_has_height_for_width(void* self, bool (*slot)()) {
    QStatusBar_OnHasHeightForWidth((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self ```
QPaintEngine* q_statusbar_paint_engine(void* self) {
    return QStatusBar_PaintEngine((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self ```
QPaintEngine* q_statusbar_qbase_paint_engine(void* self) {
    return QStatusBar_QBasePaintEngine((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, QPaintEngine* (*slot)() ```
void q_statusbar_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QStatusBar_OnPaintEngine((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QMouseEvent* event ```
void q_statusbar_mouse_press_event(void* self, void* event) {
    QStatusBar_MousePressEvent((QStatusBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QMouseEvent* event ```
void q_statusbar_qbase_mouse_press_event(void* self, void* event) {
    QStatusBar_QBaseMousePressEvent((QStatusBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QMouseEvent*) ```
void q_statusbar_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnMousePressEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QMouseEvent* event ```
void q_statusbar_mouse_release_event(void* self, void* event) {
    QStatusBar_MouseReleaseEvent((QStatusBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QMouseEvent* event ```
void q_statusbar_qbase_mouse_release_event(void* self, void* event) {
    QStatusBar_QBaseMouseReleaseEvent((QStatusBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QMouseEvent*) ```
void q_statusbar_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnMouseReleaseEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QMouseEvent* event ```
void q_statusbar_mouse_double_click_event(void* self, void* event) {
    QStatusBar_MouseDoubleClickEvent((QStatusBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QMouseEvent* event ```
void q_statusbar_qbase_mouse_double_click_event(void* self, void* event) {
    QStatusBar_QBaseMouseDoubleClickEvent((QStatusBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QMouseEvent*) ```
void q_statusbar_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnMouseDoubleClickEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QMouseEvent* event ```
void q_statusbar_mouse_move_event(void* self, void* event) {
    QStatusBar_MouseMoveEvent((QStatusBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QMouseEvent* event ```
void q_statusbar_qbase_mouse_move_event(void* self, void* event) {
    QStatusBar_QBaseMouseMoveEvent((QStatusBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QMouseEvent*) ```
void q_statusbar_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnMouseMoveEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QWheelEvent* event ```
void q_statusbar_wheel_event(void* self, void* event) {
    QStatusBar_WheelEvent((QStatusBar*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QWheelEvent* event ```
void q_statusbar_qbase_wheel_event(void* self, void* event) {
    QStatusBar_QBaseWheelEvent((QStatusBar*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QWheelEvent*) ```
void q_statusbar_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnWheelEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QKeyEvent* event ```
void q_statusbar_key_press_event(void* self, void* event) {
    QStatusBar_KeyPressEvent((QStatusBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QKeyEvent* event ```
void q_statusbar_qbase_key_press_event(void* self, void* event) {
    QStatusBar_QBaseKeyPressEvent((QStatusBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QKeyEvent*) ```
void q_statusbar_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnKeyPressEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QKeyEvent* event ```
void q_statusbar_key_release_event(void* self, void* event) {
    QStatusBar_KeyReleaseEvent((QStatusBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QKeyEvent* event ```
void q_statusbar_qbase_key_release_event(void* self, void* event) {
    QStatusBar_QBaseKeyReleaseEvent((QStatusBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QKeyEvent*) ```
void q_statusbar_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnKeyReleaseEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QFocusEvent* event ```
void q_statusbar_focus_in_event(void* self, void* event) {
    QStatusBar_FocusInEvent((QStatusBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QFocusEvent* event ```
void q_statusbar_qbase_focus_in_event(void* self, void* event) {
    QStatusBar_QBaseFocusInEvent((QStatusBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QFocusEvent*) ```
void q_statusbar_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnFocusInEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QFocusEvent* event ```
void q_statusbar_focus_out_event(void* self, void* event) {
    QStatusBar_FocusOutEvent((QStatusBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QFocusEvent* event ```
void q_statusbar_qbase_focus_out_event(void* self, void* event) {
    QStatusBar_QBaseFocusOutEvent((QStatusBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QFocusEvent*) ```
void q_statusbar_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnFocusOutEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QEnterEvent* event ```
void q_statusbar_enter_event(void* self, void* event) {
    QStatusBar_EnterEvent((QStatusBar*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QEnterEvent* event ```
void q_statusbar_qbase_enter_event(void* self, void* event) {
    QStatusBar_QBaseEnterEvent((QStatusBar*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QEnterEvent*) ```
void q_statusbar_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnEnterEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QEvent* event ```
void q_statusbar_leave_event(void* self, void* event) {
    QStatusBar_LeaveEvent((QStatusBar*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QEvent* event ```
void q_statusbar_qbase_leave_event(void* self, void* event) {
    QStatusBar_QBaseLeaveEvent((QStatusBar*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QEvent*) ```
void q_statusbar_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnLeaveEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QMoveEvent* event ```
void q_statusbar_move_event(void* self, void* event) {
    QStatusBar_MoveEvent((QStatusBar*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QMoveEvent* event ```
void q_statusbar_qbase_move_event(void* self, void* event) {
    QStatusBar_QBaseMoveEvent((QStatusBar*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QMoveEvent*) ```
void q_statusbar_on_move_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnMoveEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QCloseEvent* event ```
void q_statusbar_close_event(void* self, void* event) {
    QStatusBar_CloseEvent((QStatusBar*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QCloseEvent* event ```
void q_statusbar_qbase_close_event(void* self, void* event) {
    QStatusBar_QBaseCloseEvent((QStatusBar*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QCloseEvent*) ```
void q_statusbar_on_close_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnCloseEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QContextMenuEvent* event ```
void q_statusbar_context_menu_event(void* self, void* event) {
    QStatusBar_ContextMenuEvent((QStatusBar*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QContextMenuEvent* event ```
void q_statusbar_qbase_context_menu_event(void* self, void* event) {
    QStatusBar_QBaseContextMenuEvent((QStatusBar*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QContextMenuEvent*) ```
void q_statusbar_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnContextMenuEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QTabletEvent* event ```
void q_statusbar_tablet_event(void* self, void* event) {
    QStatusBar_TabletEvent((QStatusBar*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QTabletEvent* event ```
void q_statusbar_qbase_tablet_event(void* self, void* event) {
    QStatusBar_QBaseTabletEvent((QStatusBar*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QTabletEvent*) ```
void q_statusbar_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnTabletEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QActionEvent* event ```
void q_statusbar_action_event(void* self, void* event) {
    QStatusBar_ActionEvent((QStatusBar*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QActionEvent* event ```
void q_statusbar_qbase_action_event(void* self, void* event) {
    QStatusBar_QBaseActionEvent((QStatusBar*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QActionEvent*) ```
void q_statusbar_on_action_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnActionEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QDragEnterEvent* event ```
void q_statusbar_drag_enter_event(void* self, void* event) {
    QStatusBar_DragEnterEvent((QStatusBar*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QDragEnterEvent* event ```
void q_statusbar_qbase_drag_enter_event(void* self, void* event) {
    QStatusBar_QBaseDragEnterEvent((QStatusBar*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QDragEnterEvent*) ```
void q_statusbar_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnDragEnterEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QDragMoveEvent* event ```
void q_statusbar_drag_move_event(void* self, void* event) {
    QStatusBar_DragMoveEvent((QStatusBar*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QDragMoveEvent* event ```
void q_statusbar_qbase_drag_move_event(void* self, void* event) {
    QStatusBar_QBaseDragMoveEvent((QStatusBar*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QDragMoveEvent*) ```
void q_statusbar_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnDragMoveEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QDragLeaveEvent* event ```
void q_statusbar_drag_leave_event(void* self, void* event) {
    QStatusBar_DragLeaveEvent((QStatusBar*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QDragLeaveEvent* event ```
void q_statusbar_qbase_drag_leave_event(void* self, void* event) {
    QStatusBar_QBaseDragLeaveEvent((QStatusBar*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QDragLeaveEvent*) ```
void q_statusbar_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnDragLeaveEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QDropEvent* event ```
void q_statusbar_drop_event(void* self, void* event) {
    QStatusBar_DropEvent((QStatusBar*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QDropEvent* event ```
void q_statusbar_qbase_drop_event(void* self, void* event) {
    QStatusBar_QBaseDropEvent((QStatusBar*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QDropEvent*) ```
void q_statusbar_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnDropEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QHideEvent* event ```
void q_statusbar_hide_event(void* self, void* event) {
    QStatusBar_HideEvent((QStatusBar*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QHideEvent* event ```
void q_statusbar_qbase_hide_event(void* self, void* event) {
    QStatusBar_QBaseHideEvent((QStatusBar*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QHideEvent*) ```
void q_statusbar_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnHideEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_statusbar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QStatusBar_NativeEvent((QStatusBar*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_statusbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QStatusBar_QBaseNativeEvent((QStatusBar*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, bool (*slot)(QStatusBar*, const char*, void*, intptr_t*) ```
void q_statusbar_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QStatusBar_OnNativeEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QEvent* param1 ```
void q_statusbar_change_event(void* self, void* param1) {
    QStatusBar_ChangeEvent((QStatusBar*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QEvent* param1 ```
void q_statusbar_qbase_change_event(void* self, void* param1) {
    QStatusBar_QBaseChangeEvent((QStatusBar*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QEvent*) ```
void q_statusbar_on_change_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnChangeEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_statusbar_metric(void* self, int64_t param1) {
    return QStatusBar_Metric((QStatusBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_statusbar_qbase_metric(void* self, int64_t param1) {
    return QStatusBar_QBaseMetric((QStatusBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, int32_t (*slot)(QStatusBar*, enum QPaintDevice__PaintDeviceMetric) ```
void q_statusbar_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QStatusBar_OnMetric((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QPainter* painter ```
void q_statusbar_init_painter(void* self, void* painter) {
    QStatusBar_InitPainter((QStatusBar*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QPainter* painter ```
void q_statusbar_qbase_init_painter(void* self, void* painter) {
    QStatusBar_QBaseInitPainter((QStatusBar*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QPainter*) ```
void q_statusbar_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnInitPainter((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QPoint* offset ```
QPaintDevice* q_statusbar_redirected(void* self, void* offset) {
    return QStatusBar_Redirected((QStatusBar*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QPoint* offset ```
QPaintDevice* q_statusbar_qbase_redirected(void* self, void* offset) {
    return QStatusBar_QBaseRedirected((QStatusBar*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, QPaintDevice* (*slot)(QStatusBar*, QPoint*) ```
void q_statusbar_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QStatusBar_OnRedirected((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self ```
QPainter* q_statusbar_shared_painter(void* self) {
    return QStatusBar_SharedPainter((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self ```
QPainter* q_statusbar_qbase_shared_painter(void* self) {
    return QStatusBar_QBaseSharedPainter((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, QPainter* (*slot)() ```
void q_statusbar_on_shared_painter(void* self, QPainter* (*slot)()) {
    QStatusBar_OnSharedPainter((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QInputMethodEvent* param1 ```
void q_statusbar_input_method_event(void* self, void* param1) {
    QStatusBar_InputMethodEvent((QStatusBar*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QInputMethodEvent* param1 ```
void q_statusbar_qbase_input_method_event(void* self, void* param1) {
    QStatusBar_QBaseInputMethodEvent((QStatusBar*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QInputMethodEvent*) ```
void q_statusbar_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnInputMethodEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_statusbar_input_method_query(void* self, int64_t param1) {
    return QStatusBar_InputMethodQuery((QStatusBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_statusbar_qbase_input_method_query(void* self, int64_t param1) {
    return QStatusBar_QBaseInputMethodQuery((QStatusBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, QVariant* (*slot)(QStatusBar*, enum Qt__InputMethodQuery) ```
void q_statusbar_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QStatusBar_OnInputMethodQuery((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, bool next ```
bool q_statusbar_focus_next_prev_child(void* self, bool next) {
    return QStatusBar_FocusNextPrevChild((QStatusBar*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, bool next ```
bool q_statusbar_qbase_focus_next_prev_child(void* self, bool next) {
    return QStatusBar_QBaseFocusNextPrevChild((QStatusBar*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, bool (*slot)(QStatusBar*, bool) ```
void q_statusbar_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QStatusBar_OnFocusNextPrevChild((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QObject* watched, QEvent* event ```
bool q_statusbar_event_filter(void* self, void* watched, void* event) {
    return QStatusBar_EventFilter((QStatusBar*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QObject* watched, QEvent* event ```
bool q_statusbar_qbase_event_filter(void* self, void* watched, void* event) {
    return QStatusBar_QBaseEventFilter((QStatusBar*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, bool (*slot)(QStatusBar*, QObject*, QEvent*) ```
void q_statusbar_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QStatusBar_OnEventFilter((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QTimerEvent* event ```
void q_statusbar_timer_event(void* self, void* event) {
    QStatusBar_TimerEvent((QStatusBar*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QTimerEvent* event ```
void q_statusbar_qbase_timer_event(void* self, void* event) {
    QStatusBar_QBaseTimerEvent((QStatusBar*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QTimerEvent*) ```
void q_statusbar_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnTimerEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QChildEvent* event ```
void q_statusbar_child_event(void* self, void* event) {
    QStatusBar_ChildEvent((QStatusBar*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QChildEvent* event ```
void q_statusbar_qbase_child_event(void* self, void* event) {
    QStatusBar_QBaseChildEvent((QStatusBar*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QChildEvent*) ```
void q_statusbar_on_child_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnChildEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QEvent* event ```
void q_statusbar_custom_event(void* self, void* event) {
    QStatusBar_CustomEvent((QStatusBar*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QEvent* event ```
void q_statusbar_qbase_custom_event(void* self, void* event) {
    QStatusBar_QBaseCustomEvent((QStatusBar*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QEvent*) ```
void q_statusbar_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnCustomEvent((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QMetaMethod* signal ```
void q_statusbar_connect_notify(void* self, void* signal) {
    QStatusBar_ConnectNotify((QStatusBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QMetaMethod* signal ```
void q_statusbar_qbase_connect_notify(void* self, void* signal) {
    QStatusBar_QBaseConnectNotify((QStatusBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QMetaMethod*) ```
void q_statusbar_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnConnectNotify((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QMetaMethod* signal ```
void q_statusbar_disconnect_notify(void* self, void* signal) {
    QStatusBar_DisconnectNotify((QStatusBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QMetaMethod* signal ```
void q_statusbar_qbase_disconnect_notify(void* self, void* signal) {
    QStatusBar_QBaseDisconnectNotify((QStatusBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)(QStatusBar*, QMetaMethod*) ```
void q_statusbar_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QStatusBar_OnDisconnectNotify((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self ```
void q_statusbar_update_micro_focus(void* self) {
    QStatusBar_UpdateMicroFocus((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self ```
void q_statusbar_qbase_update_micro_focus(void* self) {
    QStatusBar_QBaseUpdateMicroFocus((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)() ```
void q_statusbar_on_update_micro_focus(void* self, void (*slot)()) {
    QStatusBar_OnUpdateMicroFocus((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self ```
void q_statusbar_create(void* self) {
    QStatusBar_Create((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self ```
void q_statusbar_qbase_create(void* self) {
    QStatusBar_QBaseCreate((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)() ```
void q_statusbar_on_create(void* self, void (*slot)()) {
    QStatusBar_OnCreate((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self ```
void q_statusbar_destroy(void* self) {
    QStatusBar_Destroy((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self ```
void q_statusbar_qbase_destroy(void* self) {
    QStatusBar_QBaseDestroy((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, void (*slot)() ```
void q_statusbar_on_destroy(void* self, void (*slot)()) {
    QStatusBar_OnDestroy((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self ```
bool q_statusbar_focus_next_child(void* self) {
    return QStatusBar_FocusNextChild((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self ```
bool q_statusbar_qbase_focus_next_child(void* self) {
    return QStatusBar_QBaseFocusNextChild((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, bool (*slot)() ```
void q_statusbar_on_focus_next_child(void* self, bool (*slot)()) {
    QStatusBar_OnFocusNextChild((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self ```
bool q_statusbar_focus_previous_child(void* self) {
    return QStatusBar_FocusPreviousChild((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self ```
bool q_statusbar_qbase_focus_previous_child(void* self) {
    return QStatusBar_QBaseFocusPreviousChild((QStatusBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, bool (*slot)() ```
void q_statusbar_on_focus_previous_child(void* self, bool (*slot)()) {
    QStatusBar_OnFocusPreviousChild((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self ```
QObject* q_statusbar_sender(void* self) {
    return QStatusBar_Sender((QStatusBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self ```
QObject* q_statusbar_qbase_sender(void* self) {
    return QStatusBar_QBaseSender((QStatusBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, QObject* (*slot)() ```
void q_statusbar_on_sender(void* self, QObject* (*slot)()) {
    QStatusBar_OnSender((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_sender_signal_index(void* self) {
    return QStatusBar_SenderSignalIndex((QStatusBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self ```
int32_t q_statusbar_qbase_sender_signal_index(void* self) {
    return QStatusBar_QBaseSenderSignalIndex((QStatusBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, int32_t (*slot)() ```
void q_statusbar_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QStatusBar_OnSenderSignalIndex((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, const char* signal ```
int32_t q_statusbar_receivers(void* self, const char* signal) {
    return QStatusBar_Receivers((QStatusBar*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, const char* signal ```
int32_t q_statusbar_qbase_receivers(void* self, const char* signal) {
    return QStatusBar_QBaseReceivers((QStatusBar*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, int32_t (*slot)(QStatusBar*, const char*) ```
void q_statusbar_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QStatusBar_OnReceivers((QStatusBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStatusBar* self, QMetaMethod* signal ```
bool q_statusbar_is_signal_connected(void* self, void* signal) {
    return QStatusBar_IsSignalConnected((QStatusBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStatusBar* self, QMetaMethod* signal ```
bool q_statusbar_qbase_is_signal_connected(void* self, void* signal) {
    return QStatusBar_QBaseIsSignalConnected((QStatusBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStatusBar* self, bool (*slot)(QStatusBar*, QMetaMethod*) ```
void q_statusbar_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QStatusBar_OnIsSignalConnected((QStatusBar*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QStatusBar* self ```
void q_statusbar_delete(void* self) {
    QStatusBar_Delete((QStatusBar*)(self));
}