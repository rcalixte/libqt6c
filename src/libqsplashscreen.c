#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcolor.hpp"
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
#include "libqsplashscreen.hpp"
#include "libqsplashscreen.h"

/// https://doc.qt.io/qt-6/qsplashscreen.html

/// q_splashscreen_new constructs a new QSplashScreen object.
///
///
QSplashScreen* q_splashscreen_new() {
    return QSplashScreen_new();
}

/// q_splashscreen_new2 constructs a new QSplashScreen object.
///
/// ``` QScreen* screen ```
QSplashScreen* q_splashscreen_new2(void* screen) {
    return QSplashScreen_new2((QScreen*)screen);
}

/// q_splashscreen_new3 constructs a new QSplashScreen object.
///
/// ``` QPixmap* pixmap ```
QSplashScreen* q_splashscreen_new3(void* pixmap) {
    return QSplashScreen_new3((QPixmap*)pixmap);
}

/// q_splashscreen_new4 constructs a new QSplashScreen object.
///
/// ``` QPixmap* pixmap, int f ```
QSplashScreen* q_splashscreen_new4(void* pixmap, int64_t f) {
    return QSplashScreen_new4((QPixmap*)pixmap, f);
}

/// q_splashscreen_new5 constructs a new QSplashScreen object.
///
/// ``` QScreen* screen, QPixmap* pixmap ```
QSplashScreen* q_splashscreen_new5(void* screen, void* pixmap) {
    return QSplashScreen_new5((QScreen*)screen, (QPixmap*)pixmap);
}

/// q_splashscreen_new6 constructs a new QSplashScreen object.
///
/// ``` QScreen* screen, QPixmap* pixmap, int f ```
QSplashScreen* q_splashscreen_new6(void* screen, void* pixmap, int64_t f) {
    return QSplashScreen_new6((QScreen*)screen, (QPixmap*)pixmap, f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSplashScreen* self ```
QMetaObject* q_splashscreen_meta_object(void* self) {
    return QSplashScreen_MetaObject((QSplashScreen*)self);
}

/// ``` QSplashScreen* self, const char* param1 ```
void* q_splashscreen_metacast(void* self, const char* param1) {
    return QSplashScreen_Metacast((QSplashScreen*)self, param1);
}

/// ``` QSplashScreen* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_splashscreen_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSplashScreen_Metacall((QSplashScreen*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSplashScreen* self, int32_t (*slot)(QSplashScreen*, enum QMetaObject__Call, int, void*) ```
void q_splashscreen_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSplashScreen_OnMetacall((QSplashScreen*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSplashScreen* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_splashscreen_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSplashScreen_QBaseMetacall((QSplashScreen*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_splashscreen_tr(const char* s) {
    libqt_string _str = QSplashScreen_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsplashscreen.html#setPixmap)
///
/// ``` QSplashScreen* self, QPixmap* pixmap ```
void q_splashscreen_set_pixmap(void* self, void* pixmap) {
    QSplashScreen_SetPixmap((QSplashScreen*)self, (QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsplashscreen.html#pixmap)
///
/// ``` QSplashScreen* self ```
QPixmap* q_splashscreen_pixmap(void* self) {
    return QSplashScreen_Pixmap((QSplashScreen*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsplashscreen.html#finish)
///
/// ``` QSplashScreen* self, QWidget* w ```
void q_splashscreen_finish(void* self, void* w) {
    QSplashScreen_Finish((QSplashScreen*)self, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsplashscreen.html#repaint)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_repaint(void* self) {
    QSplashScreen_Repaint((QSplashScreen*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsplashscreen.html#message)
///
/// ``` QSplashScreen* self ```
const char* q_splashscreen_message(void* self) {
    libqt_string _str = QSplashScreen_Message((QSplashScreen*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsplashscreen.html#showMessage)
///
/// ``` QSplashScreen* self, const char* message ```
void q_splashscreen_show_message(void* self, const char* message) {
    QSplashScreen_ShowMessage((QSplashScreen*)self, qstring(message));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsplashscreen.html#clearMessage)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_clear_message(void* self) {
    QSplashScreen_ClearMessage((QSplashScreen*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsplashscreen.html#messageChanged)
///
/// ``` QSplashScreen* self, const char* message ```
void q_splashscreen_message_changed(void* self, const char* message) {
    QSplashScreen_MessageChanged((QSplashScreen*)self, qstring(message));
}

/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, const char*) ```
void q_splashscreen_on_message_changed(void* self, void (*slot)(void*, const char*)) {
    QSplashScreen_Connect_MessageChanged((QSplashScreen*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsplashscreen.html#event)
///
/// ``` QSplashScreen* self, QEvent* e ```
bool q_splashscreen_event(void* self, void* e) {
    return QSplashScreen_Event((QSplashScreen*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QSplashScreen* self, bool (*slot)(QSplashScreen*, QEvent*) ```
void q_splashscreen_on_event(void* self, bool (*slot)(void*, void*)) {
    QSplashScreen_OnEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSplashScreen* self, QEvent* e ```
bool q_splashscreen_qbase_event(void* self, void* e) {
    return QSplashScreen_QBaseEvent((QSplashScreen*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsplashscreen.html#drawContents)
///
/// ``` QSplashScreen* self, QPainter* painter ```
void q_splashscreen_draw_contents(void* self, void* painter) {
    QSplashScreen_DrawContents((QSplashScreen*)self, (QPainter*)painter);
}

/// Allows for overriding the related default method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QPainter*) ```
void q_splashscreen_on_draw_contents(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnDrawContents((QSplashScreen*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSplashScreen* self, QPainter* painter ```
void q_splashscreen_qbase_draw_contents(void* self, void* painter) {
    QSplashScreen_QBaseDrawContents((QSplashScreen*)self, (QPainter*)painter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsplashscreen.html#mousePressEvent)
///
/// ``` QSplashScreen* self, QMouseEvent* param1 ```
void q_splashscreen_mouse_press_event(void* self, void* param1) {
    QSplashScreen_MousePressEvent((QSplashScreen*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QMouseEvent*) ```
void q_splashscreen_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnMousePressEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSplashScreen* self, QMouseEvent* param1 ```
void q_splashscreen_qbase_mouse_press_event(void* self, void* param1) {
    QSplashScreen_QBaseMousePressEvent((QSplashScreen*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_splashscreen_tr2(const char* s, const char* c) {
    libqt_string _str = QSplashScreen_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_splashscreen_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSplashScreen_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsplashscreen.html#showMessage)
///
/// ``` QSplashScreen* self, const char* message, int alignment ```
void q_splashscreen_show_message2(void* self, const char* message, int alignment) {
    QSplashScreen_ShowMessage2((QSplashScreen*)self, qstring(message), alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsplashscreen.html#showMessage)
///
/// ``` QSplashScreen* self, const char* message, int alignment, QColor* color ```
void q_splashscreen_show_message3(void* self, const char* message, int alignment, void* color) {
    QSplashScreen_ShowMessage3((QSplashScreen*)self, qstring(message), alignment, (QColor*)color);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QSplashScreen* self ```
uintptr_t q_splashscreen_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QSplashScreen* self ```
uintptr_t q_splashscreen_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QSplashScreen* self ```
uintptr_t q_splashscreen_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QSplashScreen* self ```
QStyle* q_splashscreen_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QSplashScreen* self, QStyle* style ```
void q_splashscreen_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QSplashScreen* self ```
int64_t q_splashscreen_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QSplashScreen* self, enum Qt__WindowModality windowModality ```
void q_splashscreen_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QSplashScreen* self, QWidget* param1 ```
bool q_splashscreen_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QSplashScreen* self, bool enabled ```
void q_splashscreen_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QSplashScreen* self, bool disabled ```
void q_splashscreen_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QSplashScreen* self, bool windowModified ```
void q_splashscreen_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QSplashScreen* self ```
QRect* q_splashscreen_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QSplashScreen* self ```
QRect* q_splashscreen_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QSplashScreen* self ```
QRect* q_splashscreen_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QSplashScreen* self ```
QPoint* q_splashscreen_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QSplashScreen* self ```
QSize* q_splashscreen_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QSplashScreen* self ```
QSize* q_splashscreen_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QSplashScreen* self ```
QRect* q_splashscreen_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QSplashScreen* self ```
QRect* q_splashscreen_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QSplashScreen* self ```
QRegion* q_splashscreen_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QSplashScreen* self ```
QSize* q_splashscreen_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QSplashScreen* self ```
QSize* q_splashscreen_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QSplashScreen* self, QSize* minimumSize ```
void q_splashscreen_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QSplashScreen* self, int minw, int minh ```
void q_splashscreen_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QSplashScreen* self, QSize* maximumSize ```
void q_splashscreen_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QSplashScreen* self, int maxw, int maxh ```
void q_splashscreen_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QSplashScreen* self, int minw ```
void q_splashscreen_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QSplashScreen* self, int minh ```
void q_splashscreen_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QSplashScreen* self, int maxw ```
void q_splashscreen_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QSplashScreen* self, int maxh ```
void q_splashscreen_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QSplashScreen* self ```
QSize* q_splashscreen_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QSplashScreen* self, QSize* sizeIncrement ```
void q_splashscreen_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QSplashScreen* self, int w, int h ```
void q_splashscreen_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QSplashScreen* self ```
QSize* q_splashscreen_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QSplashScreen* self, QSize* baseSize ```
void q_splashscreen_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QSplashScreen* self, int basew, int baseh ```
void q_splashscreen_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QSplashScreen* self, QSize* fixedSize ```
void q_splashscreen_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QSplashScreen* self, int w, int h ```
void q_splashscreen_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QSplashScreen* self, int w ```
void q_splashscreen_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QSplashScreen* self, int h ```
void q_splashscreen_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QSplashScreen* self, QPointF* param1 ```
QPointF* q_splashscreen_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QSplashScreen* self, QPoint* param1 ```
QPoint* q_splashscreen_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QSplashScreen* self, QPointF* param1 ```
QPointF* q_splashscreen_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QSplashScreen* self, QPoint* param1 ```
QPoint* q_splashscreen_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QSplashScreen* self, QPointF* param1 ```
QPointF* q_splashscreen_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QSplashScreen* self, QPoint* param1 ```
QPoint* q_splashscreen_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QSplashScreen* self, QPointF* param1 ```
QPointF* q_splashscreen_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QSplashScreen* self, QPoint* param1 ```
QPoint* q_splashscreen_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QSplashScreen* self, QWidget* param1, QPointF* param2 ```
QPointF* q_splashscreen_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QSplashScreen* self, QWidget* param1, QPoint* param2 ```
QPoint* q_splashscreen_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QSplashScreen* self, QWidget* param1, QPointF* param2 ```
QPointF* q_splashscreen_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QSplashScreen* self, QWidget* param1, QPoint* param2 ```
QPoint* q_splashscreen_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QSplashScreen* self ```
QWidget* q_splashscreen_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QSplashScreen* self ```
QWidget* q_splashscreen_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QSplashScreen* self ```
QWidget* q_splashscreen_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QSplashScreen* self ```
QPalette* q_splashscreen_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QSplashScreen* self, QPalette* palette ```
void q_splashscreen_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QSplashScreen* self, enum QPalette__ColorRole backgroundRole ```
void q_splashscreen_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QSplashScreen* self ```
int64_t q_splashscreen_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QSplashScreen* self, enum QPalette__ColorRole foregroundRole ```
void q_splashscreen_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QSplashScreen* self ```
int64_t q_splashscreen_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QSplashScreen* self ```
QFont* q_splashscreen_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QSplashScreen* self, QFont* font ```
void q_splashscreen_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QSplashScreen* self ```
QFontMetrics* q_splashscreen_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QSplashScreen* self ```
QFontInfo* q_splashscreen_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QSplashScreen* self ```
QCursor* q_splashscreen_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QSplashScreen* self, QCursor* cursor ```
void q_splashscreen_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QSplashScreen* self, bool enable ```
void q_splashscreen_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QSplashScreen* self, bool enable ```
void q_splashscreen_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QSplashScreen* self, QBitmap* mask ```
void q_splashscreen_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QSplashScreen* self, QRegion* mask ```
void q_splashscreen_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QSplashScreen* self ```
QRegion* q_splashscreen_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSplashScreen* self, QPaintDevice* target ```
void q_splashscreen_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSplashScreen* self, QPainter* painter ```
void q_splashscreen_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QSplashScreen* self ```
QPixmap* q_splashscreen_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QSplashScreen* self ```
QGraphicsEffect* q_splashscreen_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QSplashScreen* self, QGraphicsEffect* effect ```
void q_splashscreen_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QSplashScreen* self, enum Qt__GestureType typeVal ```
void q_splashscreen_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QSplashScreen* self, enum Qt__GestureType typeVal ```
void q_splashscreen_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QSplashScreen* self, const char* windowTitle ```
void q_splashscreen_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QSplashScreen* self, const char* styleSheet ```
void q_splashscreen_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QSplashScreen* self ```
const char* q_splashscreen_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QSplashScreen* self ```
const char* q_splashscreen_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QSplashScreen* self, QIcon* icon ```
void q_splashscreen_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QSplashScreen* self ```
QIcon* q_splashscreen_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QSplashScreen* self, const char* windowIconText ```
void q_splashscreen_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QSplashScreen* self ```
const char* q_splashscreen_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QSplashScreen* self, const char* windowRole ```
void q_splashscreen_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QSplashScreen* self ```
const char* q_splashscreen_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QSplashScreen* self, const char* filePath ```
void q_splashscreen_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QSplashScreen* self ```
const char* q_splashscreen_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QSplashScreen* self, double level ```
void q_splashscreen_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QSplashScreen* self ```
double q_splashscreen_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QSplashScreen* self, const char* toolTip ```
void q_splashscreen_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QSplashScreen* self ```
const char* q_splashscreen_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QSplashScreen* self, int msec ```
void q_splashscreen_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QSplashScreen* self, const char* statusTip ```
void q_splashscreen_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QSplashScreen* self ```
const char* q_splashscreen_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QSplashScreen* self, const char* whatsThis ```
void q_splashscreen_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QSplashScreen* self ```
const char* q_splashscreen_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QSplashScreen* self ```
const char* q_splashscreen_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QSplashScreen* self, const char* name ```
void q_splashscreen_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QSplashScreen* self ```
const char* q_splashscreen_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QSplashScreen* self, const char* description ```
void q_splashscreen_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QSplashScreen* self, enum Qt__LayoutDirection direction ```
void q_splashscreen_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QSplashScreen* self ```
int64_t q_splashscreen_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QSplashScreen* self, QLocale* locale ```
void q_splashscreen_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QSplashScreen* self ```
QLocale* q_splashscreen_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QSplashScreen* self, enum Qt__FocusReason reason ```
void q_splashscreen_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QSplashScreen* self ```
int64_t q_splashscreen_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QSplashScreen* self, enum Qt__FocusPolicy policy ```
void q_splashscreen_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_splashscreen_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QSplashScreen* self, QWidget* focusProxy ```
void q_splashscreen_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QSplashScreen* self ```
QWidget* q_splashscreen_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QSplashScreen* self ```
int64_t q_splashscreen_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QSplashScreen* self, enum Qt__ContextMenuPolicy policy ```
void q_splashscreen_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QSplashScreen* self, QCursor* param1 ```
void q_splashscreen_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QSplashScreen* self, QKeySequence* key ```
int32_t q_splashscreen_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QSplashScreen* self, int id ```
void q_splashscreen_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QSplashScreen* self, int id ```
void q_splashscreen_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QSplashScreen* self, int id ```
void q_splashscreen_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_splashscreen_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_splashscreen_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QSplashScreen* self, bool enable ```
void q_splashscreen_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QSplashScreen* self ```
QGraphicsProxyWidget* q_splashscreen_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSplashScreen* self, int x, int y, int w, int h ```
void q_splashscreen_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSplashScreen* self, QRect* param1 ```
void q_splashscreen_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSplashScreen* self, QRegion* param1 ```
void q_splashscreen_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSplashScreen* self, int x, int y, int w, int h ```
void q_splashscreen_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSplashScreen* self, QRect* param1 ```
void q_splashscreen_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSplashScreen* self, QRegion* param1 ```
void q_splashscreen_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QSplashScreen* self, bool hidden ```
void q_splashscreen_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QSplashScreen* self, QWidget* param1 ```
void q_splashscreen_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QSplashScreen* self, int x, int y ```
void q_splashscreen_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QSplashScreen* self, QPoint* param1 ```
void q_splashscreen_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QSplashScreen* self, int w, int h ```
void q_splashscreen_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QSplashScreen* self, QSize* param1 ```
void q_splashscreen_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QSplashScreen* self, int x, int y, int w, int h ```
void q_splashscreen_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QSplashScreen* self, QRect* geometry ```
void q_splashscreen_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QSplashScreen* self ```
char* q_splashscreen_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QSplashScreen* self, const char* geometry ```
bool q_splashscreen_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QSplashScreen* self, QWidget* param1 ```
bool q_splashscreen_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QSplashScreen* self ```
int64_t q_splashscreen_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QSplashScreen* self, int state ```
void q_splashscreen_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QSplashScreen* self, int state ```
void q_splashscreen_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QSplashScreen* self ```
QSizePolicy* q_splashscreen_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QSplashScreen* self, QSizePolicy* sizePolicy ```
void q_splashscreen_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QSplashScreen* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_splashscreen_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QSplashScreen* self ```
QRegion* q_splashscreen_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QSplashScreen* self, int left, int top, int right, int bottom ```
void q_splashscreen_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QSplashScreen* self, QMargins* margins ```
void q_splashscreen_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QSplashScreen* self ```
QMargins* q_splashscreen_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QSplashScreen* self ```
QRect* q_splashscreen_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QSplashScreen* self ```
QLayout* q_splashscreen_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QSplashScreen* self, QLayout* layout ```
void q_splashscreen_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QSplashScreen* self, QWidget* parent ```
void q_splashscreen_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QSplashScreen* self, QWidget* parent, int f ```
void q_splashscreen_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QSplashScreen* self, int dx, int dy ```
void q_splashscreen_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QSplashScreen* self, int dx, int dy, QRect* param3 ```
void q_splashscreen_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QSplashScreen* self ```
QWidget* q_splashscreen_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QSplashScreen* self ```
QWidget* q_splashscreen_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QSplashScreen* self ```
QWidget* q_splashscreen_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QSplashScreen* self, bool on ```
void q_splashscreen_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSplashScreen* self, QAction* action ```
void q_splashscreen_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QSplashScreen* self, QAction* actions[] ```
void q_splashscreen_add_actions(void* self, void* actions[]) {
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
/// ``` QSplashScreen* self, QAction* before, QAction* actions[] ```
void q_splashscreen_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QSplashScreen* self, QAction* before, QAction* action ```
void q_splashscreen_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QSplashScreen* self, QAction* action ```
void q_splashscreen_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QSplashScreen* self ```
libqt_list /* of QAction* */ q_splashscreen_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSplashScreen* self, const char* text ```
QAction* q_splashscreen_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSplashScreen* self, QIcon* icon, const char* text ```
QAction* q_splashscreen_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSplashScreen* self, const char* text, QKeySequence* shortcut ```
QAction* q_splashscreen_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSplashScreen* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_splashscreen_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QSplashScreen* self ```
QWidget* q_splashscreen_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QSplashScreen* self, int typeVal ```
void q_splashscreen_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QSplashScreen* self ```
int64_t q_splashscreen_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QSplashScreen* self, enum Qt__WindowType param1 ```
void q_splashscreen_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QSplashScreen* self, int typeVal ```
void q_splashscreen_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QSplashScreen* self ```
int64_t q_splashscreen_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_splashscreen_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QSplashScreen* self, int x, int y ```
QWidget* q_splashscreen_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QSplashScreen* self, QPoint* p ```
QWidget* q_splashscreen_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QSplashScreen* self, enum Qt__WidgetAttribute param1 ```
void q_splashscreen_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QSplashScreen* self, enum Qt__WidgetAttribute param1 ```
bool q_splashscreen_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QSplashScreen* self, QWidget* child ```
bool q_splashscreen_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QSplashScreen* self, bool enabled ```
void q_splashscreen_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QSplashScreen* self ```
QBackingStore* q_splashscreen_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QSplashScreen* self ```
QWindow* q_splashscreen_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QSplashScreen* self ```
QScreen* q_splashscreen_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QSplashScreen* self, QScreen* screen ```
void q_splashscreen_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_splashscreen_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QSplashScreen* self, const char* title ```
void q_splashscreen_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QSplashScreen* self, void (*slot)(QWidget*, const char*) ```
void q_splashscreen_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QSplashScreen* self, QIcon* icon ```
void q_splashscreen_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QSplashScreen* self, void (*slot)(QWidget*, QIcon*) ```
void q_splashscreen_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QSplashScreen* self, const char* iconText ```
void q_splashscreen_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QSplashScreen* self, void (*slot)(QWidget*, const char*) ```
void q_splashscreen_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QSplashScreen* self, QPoint* pos ```
void q_splashscreen_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QSplashScreen* self, void (*slot)(QWidget*, QPoint*) ```
void q_splashscreen_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QSplashScreen* self ```
int64_t q_splashscreen_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QSplashScreen* self, int hints ```
void q_splashscreen_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSplashScreen* self, QPaintDevice* target, QPoint* targetOffset ```
void q_splashscreen_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSplashScreen* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_splashscreen_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSplashScreen* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_splashscreen_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSplashScreen* self, QPainter* painter, QPoint* targetOffset ```
void q_splashscreen_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSplashScreen* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_splashscreen_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSplashScreen* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_splashscreen_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QSplashScreen* self, QRect* rectangle ```
QPixmap* q_splashscreen_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QSplashScreen* self, enum Qt__GestureType typeVal, int flags ```
void q_splashscreen_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QSplashScreen* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_splashscreen_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QSplashScreen* self, int id, bool enable ```
void q_splashscreen_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QSplashScreen* self, int id, bool enable ```
void q_splashscreen_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QSplashScreen* self, enum Qt__WindowType param1, bool on ```
void q_splashscreen_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QSplashScreen* self, enum Qt__WidgetAttribute param1, bool on ```
void q_splashscreen_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_splashscreen_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_splashscreen_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSplashScreen* self ```
const char* q_splashscreen_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSplashScreen* self, const char* name ```
void q_splashscreen_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSplashScreen* self, bool b ```
bool q_splashscreen_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSplashScreen* self ```
QThread* q_splashscreen_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSplashScreen* self, QThread* thread ```
void q_splashscreen_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSplashScreen* self, int interval ```
int32_t q_splashscreen_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSplashScreen* self, int id ```
void q_splashscreen_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSplashScreen* self ```
libqt_list /* of QObject* */ q_splashscreen_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSplashScreen* self, QObject* filterObj ```
void q_splashscreen_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSplashScreen* self, QObject* obj ```
void q_splashscreen_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_splashscreen_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSplashScreen* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_splashscreen_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_splashscreen_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_splashscreen_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSplashScreen* self, const char* name, QVariant* value ```
bool q_splashscreen_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSplashScreen* self, const char* name ```
QVariant* q_splashscreen_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSplashScreen* self ```
const char** q_splashscreen_dynamic_property_names(void* self) {
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
/// ``` QSplashScreen* self ```
QBindingStorage* q_splashscreen_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSplashScreen* self ```
QBindingStorage* q_splashscreen_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSplashScreen* self, void (*slot)(QObject*) ```
void q_splashscreen_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSplashScreen* self ```
QObject* q_splashscreen_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSplashScreen* self, const char* classname ```
bool q_splashscreen_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSplashScreen* self ```
void q_splashscreen_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSplashScreen* self, int interval, enum Qt__TimerType timerType ```
int32_t q_splashscreen_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_splashscreen_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSplashScreen* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_splashscreen_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSplashScreen* self, QObject* param1 ```
void q_splashscreen_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSplashScreen* self, void (*slot)(QObject*, QObject*) ```
void q_splashscreen_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QSplashScreen* self ```
double q_splashscreen_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QSplashScreen* self ```
double q_splashscreen_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_splashscreen_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_dev_type(void* self) {
    return QSplashScreen_DevType((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_qbase_dev_type(void* self) {
    return QSplashScreen_QBaseDevType((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, int32_t (*slot)() ```
void q_splashscreen_on_dev_type(void* self, int32_t (*slot)()) {
    QSplashScreen_OnDevType((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, bool visible ```
void q_splashscreen_set_visible(void* self, bool visible) {
    QSplashScreen_SetVisible((QSplashScreen*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, bool visible ```
void q_splashscreen_qbase_set_visible(void* self, bool visible) {
    QSplashScreen_QBaseSetVisible((QSplashScreen*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, bool) ```
void q_splashscreen_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QSplashScreen_OnSetVisible((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self ```
QSize* q_splashscreen_size_hint(void* self) {
    return QSplashScreen_SizeHint((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self ```
QSize* q_splashscreen_qbase_size_hint(void* self) {
    return QSplashScreen_QBaseSizeHint((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, QSize* (*slot)() ```
void q_splashscreen_on_size_hint(void* self, QSize* (*slot)()) {
    QSplashScreen_OnSizeHint((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self ```
QSize* q_splashscreen_minimum_size_hint(void* self) {
    return QSplashScreen_MinimumSizeHint((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self ```
QSize* q_splashscreen_qbase_minimum_size_hint(void* self) {
    return QSplashScreen_QBaseMinimumSizeHint((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, QSize* (*slot)() ```
void q_splashscreen_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QSplashScreen_OnMinimumSizeHint((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, int param1 ```
int32_t q_splashscreen_height_for_width(void* self, int param1) {
    return QSplashScreen_HeightForWidth((QSplashScreen*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, int param1 ```
int32_t q_splashscreen_qbase_height_for_width(void* self, int param1) {
    return QSplashScreen_QBaseHeightForWidth((QSplashScreen*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, int32_t (*slot)(QSplashScreen*, int) ```
void q_splashscreen_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QSplashScreen_OnHeightForWidth((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_has_height_for_width(void* self) {
    return QSplashScreen_HasHeightForWidth((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_qbase_has_height_for_width(void* self) {
    return QSplashScreen_QBaseHasHeightForWidth((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, bool (*slot)() ```
void q_splashscreen_on_has_height_for_width(void* self, bool (*slot)()) {
    QSplashScreen_OnHasHeightForWidth((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self ```
QPaintEngine* q_splashscreen_paint_engine(void* self) {
    return QSplashScreen_PaintEngine((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self ```
QPaintEngine* q_splashscreen_qbase_paint_engine(void* self) {
    return QSplashScreen_QBasePaintEngine((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, QPaintEngine* (*slot)() ```
void q_splashscreen_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QSplashScreen_OnPaintEngine((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QMouseEvent* event ```
void q_splashscreen_mouse_release_event(void* self, void* event) {
    QSplashScreen_MouseReleaseEvent((QSplashScreen*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QMouseEvent* event ```
void q_splashscreen_qbase_mouse_release_event(void* self, void* event) {
    QSplashScreen_QBaseMouseReleaseEvent((QSplashScreen*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QMouseEvent*) ```
void q_splashscreen_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnMouseReleaseEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QMouseEvent* event ```
void q_splashscreen_mouse_double_click_event(void* self, void* event) {
    QSplashScreen_MouseDoubleClickEvent((QSplashScreen*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QMouseEvent* event ```
void q_splashscreen_qbase_mouse_double_click_event(void* self, void* event) {
    QSplashScreen_QBaseMouseDoubleClickEvent((QSplashScreen*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QMouseEvent*) ```
void q_splashscreen_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnMouseDoubleClickEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QMouseEvent* event ```
void q_splashscreen_mouse_move_event(void* self, void* event) {
    QSplashScreen_MouseMoveEvent((QSplashScreen*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QMouseEvent* event ```
void q_splashscreen_qbase_mouse_move_event(void* self, void* event) {
    QSplashScreen_QBaseMouseMoveEvent((QSplashScreen*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QMouseEvent*) ```
void q_splashscreen_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnMouseMoveEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QWheelEvent* event ```
void q_splashscreen_wheel_event(void* self, void* event) {
    QSplashScreen_WheelEvent((QSplashScreen*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QWheelEvent* event ```
void q_splashscreen_qbase_wheel_event(void* self, void* event) {
    QSplashScreen_QBaseWheelEvent((QSplashScreen*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QWheelEvent*) ```
void q_splashscreen_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnWheelEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QKeyEvent* event ```
void q_splashscreen_key_press_event(void* self, void* event) {
    QSplashScreen_KeyPressEvent((QSplashScreen*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QKeyEvent* event ```
void q_splashscreen_qbase_key_press_event(void* self, void* event) {
    QSplashScreen_QBaseKeyPressEvent((QSplashScreen*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QKeyEvent*) ```
void q_splashscreen_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnKeyPressEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QKeyEvent* event ```
void q_splashscreen_key_release_event(void* self, void* event) {
    QSplashScreen_KeyReleaseEvent((QSplashScreen*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QKeyEvent* event ```
void q_splashscreen_qbase_key_release_event(void* self, void* event) {
    QSplashScreen_QBaseKeyReleaseEvent((QSplashScreen*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QKeyEvent*) ```
void q_splashscreen_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnKeyReleaseEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QFocusEvent* event ```
void q_splashscreen_focus_in_event(void* self, void* event) {
    QSplashScreen_FocusInEvent((QSplashScreen*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QFocusEvent* event ```
void q_splashscreen_qbase_focus_in_event(void* self, void* event) {
    QSplashScreen_QBaseFocusInEvent((QSplashScreen*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QFocusEvent*) ```
void q_splashscreen_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnFocusInEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QFocusEvent* event ```
void q_splashscreen_focus_out_event(void* self, void* event) {
    QSplashScreen_FocusOutEvent((QSplashScreen*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QFocusEvent* event ```
void q_splashscreen_qbase_focus_out_event(void* self, void* event) {
    QSplashScreen_QBaseFocusOutEvent((QSplashScreen*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QFocusEvent*) ```
void q_splashscreen_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnFocusOutEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QEnterEvent* event ```
void q_splashscreen_enter_event(void* self, void* event) {
    QSplashScreen_EnterEvent((QSplashScreen*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QEnterEvent* event ```
void q_splashscreen_qbase_enter_event(void* self, void* event) {
    QSplashScreen_QBaseEnterEvent((QSplashScreen*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QEnterEvent*) ```
void q_splashscreen_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnEnterEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QEvent* event ```
void q_splashscreen_leave_event(void* self, void* event) {
    QSplashScreen_LeaveEvent((QSplashScreen*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QEvent* event ```
void q_splashscreen_qbase_leave_event(void* self, void* event) {
    QSplashScreen_QBaseLeaveEvent((QSplashScreen*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QEvent*) ```
void q_splashscreen_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnLeaveEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QPaintEvent* event ```
void q_splashscreen_paint_event(void* self, void* event) {
    QSplashScreen_PaintEvent((QSplashScreen*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QPaintEvent* event ```
void q_splashscreen_qbase_paint_event(void* self, void* event) {
    QSplashScreen_QBasePaintEvent((QSplashScreen*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QPaintEvent*) ```
void q_splashscreen_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnPaintEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QMoveEvent* event ```
void q_splashscreen_move_event(void* self, void* event) {
    QSplashScreen_MoveEvent((QSplashScreen*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QMoveEvent* event ```
void q_splashscreen_qbase_move_event(void* self, void* event) {
    QSplashScreen_QBaseMoveEvent((QSplashScreen*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QMoveEvent*) ```
void q_splashscreen_on_move_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnMoveEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QResizeEvent* event ```
void q_splashscreen_resize_event(void* self, void* event) {
    QSplashScreen_ResizeEvent((QSplashScreen*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QResizeEvent* event ```
void q_splashscreen_qbase_resize_event(void* self, void* event) {
    QSplashScreen_QBaseResizeEvent((QSplashScreen*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QResizeEvent*) ```
void q_splashscreen_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnResizeEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QCloseEvent* event ```
void q_splashscreen_close_event(void* self, void* event) {
    QSplashScreen_CloseEvent((QSplashScreen*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QCloseEvent* event ```
void q_splashscreen_qbase_close_event(void* self, void* event) {
    QSplashScreen_QBaseCloseEvent((QSplashScreen*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QCloseEvent*) ```
void q_splashscreen_on_close_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnCloseEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QContextMenuEvent* event ```
void q_splashscreen_context_menu_event(void* self, void* event) {
    QSplashScreen_ContextMenuEvent((QSplashScreen*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QContextMenuEvent* event ```
void q_splashscreen_qbase_context_menu_event(void* self, void* event) {
    QSplashScreen_QBaseContextMenuEvent((QSplashScreen*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QContextMenuEvent*) ```
void q_splashscreen_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnContextMenuEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QTabletEvent* event ```
void q_splashscreen_tablet_event(void* self, void* event) {
    QSplashScreen_TabletEvent((QSplashScreen*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QTabletEvent* event ```
void q_splashscreen_qbase_tablet_event(void* self, void* event) {
    QSplashScreen_QBaseTabletEvent((QSplashScreen*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QTabletEvent*) ```
void q_splashscreen_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnTabletEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QActionEvent* event ```
void q_splashscreen_action_event(void* self, void* event) {
    QSplashScreen_ActionEvent((QSplashScreen*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QActionEvent* event ```
void q_splashscreen_qbase_action_event(void* self, void* event) {
    QSplashScreen_QBaseActionEvent((QSplashScreen*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QActionEvent*) ```
void q_splashscreen_on_action_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnActionEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QDragEnterEvent* event ```
void q_splashscreen_drag_enter_event(void* self, void* event) {
    QSplashScreen_DragEnterEvent((QSplashScreen*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QDragEnterEvent* event ```
void q_splashscreen_qbase_drag_enter_event(void* self, void* event) {
    QSplashScreen_QBaseDragEnterEvent((QSplashScreen*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QDragEnterEvent*) ```
void q_splashscreen_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnDragEnterEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QDragMoveEvent* event ```
void q_splashscreen_drag_move_event(void* self, void* event) {
    QSplashScreen_DragMoveEvent((QSplashScreen*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QDragMoveEvent* event ```
void q_splashscreen_qbase_drag_move_event(void* self, void* event) {
    QSplashScreen_QBaseDragMoveEvent((QSplashScreen*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QDragMoveEvent*) ```
void q_splashscreen_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnDragMoveEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QDragLeaveEvent* event ```
void q_splashscreen_drag_leave_event(void* self, void* event) {
    QSplashScreen_DragLeaveEvent((QSplashScreen*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QDragLeaveEvent* event ```
void q_splashscreen_qbase_drag_leave_event(void* self, void* event) {
    QSplashScreen_QBaseDragLeaveEvent((QSplashScreen*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QDragLeaveEvent*) ```
void q_splashscreen_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnDragLeaveEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QDropEvent* event ```
void q_splashscreen_drop_event(void* self, void* event) {
    QSplashScreen_DropEvent((QSplashScreen*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QDropEvent* event ```
void q_splashscreen_qbase_drop_event(void* self, void* event) {
    QSplashScreen_QBaseDropEvent((QSplashScreen*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QDropEvent*) ```
void q_splashscreen_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnDropEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QShowEvent* event ```
void q_splashscreen_show_event(void* self, void* event) {
    QSplashScreen_ShowEvent((QSplashScreen*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QShowEvent* event ```
void q_splashscreen_qbase_show_event(void* self, void* event) {
    QSplashScreen_QBaseShowEvent((QSplashScreen*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QShowEvent*) ```
void q_splashscreen_on_show_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnShowEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QHideEvent* event ```
void q_splashscreen_hide_event(void* self, void* event) {
    QSplashScreen_HideEvent((QSplashScreen*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QHideEvent* event ```
void q_splashscreen_qbase_hide_event(void* self, void* event) {
    QSplashScreen_QBaseHideEvent((QSplashScreen*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QHideEvent*) ```
void q_splashscreen_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnHideEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, const char* eventType, void* message, intptr_t* result ```
bool q_splashscreen_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSplashScreen_NativeEvent((QSplashScreen*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, const char* eventType, void* message, intptr_t* result ```
bool q_splashscreen_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSplashScreen_QBaseNativeEvent((QSplashScreen*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, bool (*slot)(QSplashScreen*, const char*, void*, intptr_t*) ```
void q_splashscreen_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QSplashScreen_OnNativeEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QEvent* param1 ```
void q_splashscreen_change_event(void* self, void* param1) {
    QSplashScreen_ChangeEvent((QSplashScreen*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QEvent* param1 ```
void q_splashscreen_qbase_change_event(void* self, void* param1) {
    QSplashScreen_QBaseChangeEvent((QSplashScreen*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QEvent*) ```
void q_splashscreen_on_change_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnChangeEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_splashscreen_metric(void* self, int64_t param1) {
    return QSplashScreen_Metric((QSplashScreen*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_splashscreen_qbase_metric(void* self, int64_t param1) {
    return QSplashScreen_QBaseMetric((QSplashScreen*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, int32_t (*slot)(QSplashScreen*, enum QPaintDevice__PaintDeviceMetric) ```
void q_splashscreen_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QSplashScreen_OnMetric((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QPainter* painter ```
void q_splashscreen_init_painter(void* self, void* painter) {
    QSplashScreen_InitPainter((QSplashScreen*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QPainter* painter ```
void q_splashscreen_qbase_init_painter(void* self, void* painter) {
    QSplashScreen_QBaseInitPainter((QSplashScreen*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QPainter*) ```
void q_splashscreen_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnInitPainter((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QPoint* offset ```
QPaintDevice* q_splashscreen_redirected(void* self, void* offset) {
    return QSplashScreen_Redirected((QSplashScreen*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QPoint* offset ```
QPaintDevice* q_splashscreen_qbase_redirected(void* self, void* offset) {
    return QSplashScreen_QBaseRedirected((QSplashScreen*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, QPaintDevice* (*slot)(QSplashScreen*, QPoint*) ```
void q_splashscreen_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QSplashScreen_OnRedirected((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self ```
QPainter* q_splashscreen_shared_painter(void* self) {
    return QSplashScreen_SharedPainter((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self ```
QPainter* q_splashscreen_qbase_shared_painter(void* self) {
    return QSplashScreen_QBaseSharedPainter((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, QPainter* (*slot)() ```
void q_splashscreen_on_shared_painter(void* self, QPainter* (*slot)()) {
    QSplashScreen_OnSharedPainter((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QInputMethodEvent* param1 ```
void q_splashscreen_input_method_event(void* self, void* param1) {
    QSplashScreen_InputMethodEvent((QSplashScreen*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QInputMethodEvent* param1 ```
void q_splashscreen_qbase_input_method_event(void* self, void* param1) {
    QSplashScreen_QBaseInputMethodEvent((QSplashScreen*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QInputMethodEvent*) ```
void q_splashscreen_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnInputMethodEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_splashscreen_input_method_query(void* self, int64_t param1) {
    return QSplashScreen_InputMethodQuery((QSplashScreen*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_splashscreen_qbase_input_method_query(void* self, int64_t param1) {
    return QSplashScreen_QBaseInputMethodQuery((QSplashScreen*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, QVariant* (*slot)(QSplashScreen*, enum Qt__InputMethodQuery) ```
void q_splashscreen_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QSplashScreen_OnInputMethodQuery((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, bool next ```
bool q_splashscreen_focus_next_prev_child(void* self, bool next) {
    return QSplashScreen_FocusNextPrevChild((QSplashScreen*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, bool next ```
bool q_splashscreen_qbase_focus_next_prev_child(void* self, bool next) {
    return QSplashScreen_QBaseFocusNextPrevChild((QSplashScreen*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, bool (*slot)(QSplashScreen*, bool) ```
void q_splashscreen_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QSplashScreen_OnFocusNextPrevChild((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QObject* watched, QEvent* event ```
bool q_splashscreen_event_filter(void* self, void* watched, void* event) {
    return QSplashScreen_EventFilter((QSplashScreen*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QObject* watched, QEvent* event ```
bool q_splashscreen_qbase_event_filter(void* self, void* watched, void* event) {
    return QSplashScreen_QBaseEventFilter((QSplashScreen*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, bool (*slot)(QSplashScreen*, QObject*, QEvent*) ```
void q_splashscreen_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSplashScreen_OnEventFilter((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QTimerEvent* event ```
void q_splashscreen_timer_event(void* self, void* event) {
    QSplashScreen_TimerEvent((QSplashScreen*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QTimerEvent* event ```
void q_splashscreen_qbase_timer_event(void* self, void* event) {
    QSplashScreen_QBaseTimerEvent((QSplashScreen*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QTimerEvent*) ```
void q_splashscreen_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnTimerEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QChildEvent* event ```
void q_splashscreen_child_event(void* self, void* event) {
    QSplashScreen_ChildEvent((QSplashScreen*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QChildEvent* event ```
void q_splashscreen_qbase_child_event(void* self, void* event) {
    QSplashScreen_QBaseChildEvent((QSplashScreen*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QChildEvent*) ```
void q_splashscreen_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnChildEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QEvent* event ```
void q_splashscreen_custom_event(void* self, void* event) {
    QSplashScreen_CustomEvent((QSplashScreen*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QEvent* event ```
void q_splashscreen_qbase_custom_event(void* self, void* event) {
    QSplashScreen_QBaseCustomEvent((QSplashScreen*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QEvent*) ```
void q_splashscreen_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnCustomEvent((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QMetaMethod* signal ```
void q_splashscreen_connect_notify(void* self, void* signal) {
    QSplashScreen_ConnectNotify((QSplashScreen*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QMetaMethod* signal ```
void q_splashscreen_qbase_connect_notify(void* self, void* signal) {
    QSplashScreen_QBaseConnectNotify((QSplashScreen*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QMetaMethod*) ```
void q_splashscreen_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnConnectNotify((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QMetaMethod* signal ```
void q_splashscreen_disconnect_notify(void* self, void* signal) {
    QSplashScreen_DisconnectNotify((QSplashScreen*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QMetaMethod* signal ```
void q_splashscreen_qbase_disconnect_notify(void* self, void* signal) {
    QSplashScreen_QBaseDisconnectNotify((QSplashScreen*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)(QSplashScreen*, QMetaMethod*) ```
void q_splashscreen_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSplashScreen_OnDisconnectNotify((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self ```
void q_splashscreen_update_micro_focus(void* self) {
    QSplashScreen_UpdateMicroFocus((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self ```
void q_splashscreen_qbase_update_micro_focus(void* self) {
    QSplashScreen_QBaseUpdateMicroFocus((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)() ```
void q_splashscreen_on_update_micro_focus(void* self, void (*slot)()) {
    QSplashScreen_OnUpdateMicroFocus((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self ```
void q_splashscreen_create(void* self) {
    QSplashScreen_Create((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self ```
void q_splashscreen_qbase_create(void* self) {
    QSplashScreen_QBaseCreate((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)() ```
void q_splashscreen_on_create(void* self, void (*slot)()) {
    QSplashScreen_OnCreate((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self ```
void q_splashscreen_destroy(void* self) {
    QSplashScreen_Destroy((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self ```
void q_splashscreen_qbase_destroy(void* self) {
    QSplashScreen_QBaseDestroy((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, void (*slot)() ```
void q_splashscreen_on_destroy(void* self, void (*slot)()) {
    QSplashScreen_OnDestroy((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_focus_next_child(void* self) {
    return QSplashScreen_FocusNextChild((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_qbase_focus_next_child(void* self) {
    return QSplashScreen_QBaseFocusNextChild((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, bool (*slot)() ```
void q_splashscreen_on_focus_next_child(void* self, bool (*slot)()) {
    QSplashScreen_OnFocusNextChild((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_focus_previous_child(void* self) {
    return QSplashScreen_FocusPreviousChild((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self ```
bool q_splashscreen_qbase_focus_previous_child(void* self) {
    return QSplashScreen_QBaseFocusPreviousChild((QSplashScreen*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, bool (*slot)() ```
void q_splashscreen_on_focus_previous_child(void* self, bool (*slot)()) {
    QSplashScreen_OnFocusPreviousChild((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self ```
QObject* q_splashscreen_sender(void* self) {
    return QSplashScreen_Sender((QSplashScreen*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self ```
QObject* q_splashscreen_qbase_sender(void* self) {
    return QSplashScreen_QBaseSender((QSplashScreen*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, QObject* (*slot)() ```
void q_splashscreen_on_sender(void* self, QObject* (*slot)()) {
    QSplashScreen_OnSender((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_sender_signal_index(void* self) {
    return QSplashScreen_SenderSignalIndex((QSplashScreen*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self ```
int32_t q_splashscreen_qbase_sender_signal_index(void* self) {
    return QSplashScreen_QBaseSenderSignalIndex((QSplashScreen*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, int32_t (*slot)() ```
void q_splashscreen_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSplashScreen_OnSenderSignalIndex((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, const char* signal ```
int32_t q_splashscreen_receivers(void* self, const char* signal) {
    return QSplashScreen_Receivers((QSplashScreen*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, const char* signal ```
int32_t q_splashscreen_qbase_receivers(void* self, const char* signal) {
    return QSplashScreen_QBaseReceivers((QSplashScreen*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, int32_t (*slot)(QSplashScreen*, const char*) ```
void q_splashscreen_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSplashScreen_OnReceivers((QSplashScreen*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSplashScreen* self, QMetaMethod* signal ```
bool q_splashscreen_is_signal_connected(void* self, void* signal) {
    return QSplashScreen_IsSignalConnected((QSplashScreen*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSplashScreen* self, QMetaMethod* signal ```
bool q_splashscreen_qbase_is_signal_connected(void* self, void* signal) {
    return QSplashScreen_QBaseIsSignalConnected((QSplashScreen*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSplashScreen* self, bool (*slot)(QSplashScreen*, QMetaMethod*) ```
void q_splashscreen_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSplashScreen_OnIsSignalConnected((QSplashScreen*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSplashScreen* self ```
void q_splashscreen_delete(void* self) {
    QSplashScreen_Delete((QSplashScreen*)(self));
}