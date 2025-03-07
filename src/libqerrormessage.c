#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqdialog.hpp"
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
#include "libqerrormessage.hpp"
#include "libqerrormessage.h"

/// https://doc.qt.io/qt-6/qerrormessage.html

/// q_errormessage_new constructs a new QErrorMessage object.
///
/// ``` QWidget* parent ```
QErrorMessage* q_errormessage_new(void* parent) {
    return QErrorMessage_new((QWidget*)parent);
}

/// q_errormessage_new2 constructs a new QErrorMessage object.
///
///
QErrorMessage* q_errormessage_new2() {
    return QErrorMessage_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QErrorMessage* self ```
QMetaObject* q_errormessage_meta_object(void* self) {
    return QErrorMessage_MetaObject((QErrorMessage*)self);
}

/// ``` QErrorMessage* self, const char* param1 ```
void* q_errormessage_metacast(void* self, const char* param1) {
    return QErrorMessage_Metacast((QErrorMessage*)self, param1);
}

/// ``` QErrorMessage* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_errormessage_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QErrorMessage_Metacall((QErrorMessage*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QErrorMessage* self, int32_t (*slot)(QErrorMessage*, enum QMetaObject__Call, int, void*) ```
void q_errormessage_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QErrorMessage_OnMetacall((QErrorMessage*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QErrorMessage* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_errormessage_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QErrorMessage_QBaseMetacall((QErrorMessage*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_errormessage_tr(const char* s) {
    libqt_string _str = QErrorMessage_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qerrormessage.html#qtHandler)
///
///
QErrorMessage* q_errormessage_qt_handler() {
    return QErrorMessage_QtHandler();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qerrormessage.html#showMessage)
///
/// ``` QErrorMessage* self, const char* message ```
void q_errormessage_show_message(void* self, const char* message) {
    QErrorMessage_ShowMessage((QErrorMessage*)self, qstring(message));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qerrormessage.html#showMessage)
///
/// ``` QErrorMessage* self, const char* message, const char* typeVal ```
void q_errormessage_show_message2(void* self, const char* message, const char* typeVal) {
    QErrorMessage_ShowMessage2((QErrorMessage*)self, qstring(message), qstring(typeVal));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qerrormessage.html#done)
///
/// ``` QErrorMessage* self, int param1 ```
void q_errormessage_done(void* self, int param1) {
    QErrorMessage_Done((QErrorMessage*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, int) ```
void q_errormessage_on_done(void* self, void (*slot)(void*, int)) {
    QErrorMessage_OnDone((QErrorMessage*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QErrorMessage* self, int param1 ```
void q_errormessage_qbase_done(void* self, int param1) {
    QErrorMessage_QBaseDone((QErrorMessage*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qerrormessage.html#changeEvent)
///
/// ``` QErrorMessage* self, QEvent* e ```
void q_errormessage_change_event(void* self, void* e) {
    QErrorMessage_ChangeEvent((QErrorMessage*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QEvent*) ```
void q_errormessage_on_change_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnChangeEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QErrorMessage* self, QEvent* e ```
void q_errormessage_qbase_change_event(void* self, void* e) {
    QErrorMessage_QBaseChangeEvent((QErrorMessage*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_errormessage_tr2(const char* s, const char* c) {
    libqt_string _str = QErrorMessage_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_errormessage_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QErrorMessage_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QErrorMessage* self, bool sizeGripEnabled ```
void q_errormessage_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QErrorMessage* self, bool modal ```
void q_errormessage_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QErrorMessage* self, int r ```
void q_errormessage_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QErrorMessage* self, int result ```
void q_errormessage_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

/// Inherited from QDialog
///
/// ``` QErrorMessage* self, void (*slot)(QDialog*, int) ```
void q_errormessage_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QErrorMessage* self ```
void q_errormessage_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QErrorMessage* self, void (*slot)(QDialog*) ```
void q_errormessage_on_accepted(void* self, void (*slot)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QErrorMessage* self ```
void q_errormessage_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QErrorMessage* self, void (*slot)(QDialog*) ```
void q_errormessage_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QErrorMessage* self ```
uintptr_t q_errormessage_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QErrorMessage* self ```
void q_errormessage_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QErrorMessage* self ```
uintptr_t q_errormessage_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QErrorMessage* self ```
uintptr_t q_errormessage_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QErrorMessage* self ```
QStyle* q_errormessage_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QErrorMessage* self, QStyle* style ```
void q_errormessage_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QErrorMessage* self ```
int64_t q_errormessage_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QErrorMessage* self, enum Qt__WindowModality windowModality ```
void q_errormessage_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QErrorMessage* self, QWidget* param1 ```
bool q_errormessage_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QErrorMessage* self, bool enabled ```
void q_errormessage_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QErrorMessage* self, bool disabled ```
void q_errormessage_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QErrorMessage* self, bool windowModified ```
void q_errormessage_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QErrorMessage* self ```
QRect* q_errormessage_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QErrorMessage* self ```
QRect* q_errormessage_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QErrorMessage* self ```
QRect* q_errormessage_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QErrorMessage* self ```
QPoint* q_errormessage_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QErrorMessage* self ```
QSize* q_errormessage_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QErrorMessage* self ```
QSize* q_errormessage_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QErrorMessage* self ```
QRect* q_errormessage_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QErrorMessage* self ```
QRect* q_errormessage_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QErrorMessage* self ```
QRegion* q_errormessage_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QErrorMessage* self ```
QSize* q_errormessage_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QErrorMessage* self ```
QSize* q_errormessage_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QErrorMessage* self, QSize* minimumSize ```
void q_errormessage_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QErrorMessage* self, int minw, int minh ```
void q_errormessage_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QErrorMessage* self, QSize* maximumSize ```
void q_errormessage_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QErrorMessage* self, int maxw, int maxh ```
void q_errormessage_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QErrorMessage* self, int minw ```
void q_errormessage_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QErrorMessage* self, int minh ```
void q_errormessage_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QErrorMessage* self, int maxw ```
void q_errormessage_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QErrorMessage* self, int maxh ```
void q_errormessage_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QErrorMessage* self ```
QSize* q_errormessage_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QErrorMessage* self, QSize* sizeIncrement ```
void q_errormessage_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QErrorMessage* self, int w, int h ```
void q_errormessage_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QErrorMessage* self ```
QSize* q_errormessage_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QErrorMessage* self, QSize* baseSize ```
void q_errormessage_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QErrorMessage* self, int basew, int baseh ```
void q_errormessage_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QErrorMessage* self, QSize* fixedSize ```
void q_errormessage_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QErrorMessage* self, int w, int h ```
void q_errormessage_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QErrorMessage* self, int w ```
void q_errormessage_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QErrorMessage* self, int h ```
void q_errormessage_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QErrorMessage* self, QPointF* param1 ```
QPointF* q_errormessage_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QErrorMessage* self, QPoint* param1 ```
QPoint* q_errormessage_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QErrorMessage* self, QPointF* param1 ```
QPointF* q_errormessage_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QErrorMessage* self, QPoint* param1 ```
QPoint* q_errormessage_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QErrorMessage* self, QPointF* param1 ```
QPointF* q_errormessage_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QErrorMessage* self, QPoint* param1 ```
QPoint* q_errormessage_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QErrorMessage* self, QPointF* param1 ```
QPointF* q_errormessage_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QErrorMessage* self, QPoint* param1 ```
QPoint* q_errormessage_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QErrorMessage* self, QWidget* param1, QPointF* param2 ```
QPointF* q_errormessage_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QErrorMessage* self, QWidget* param1, QPoint* param2 ```
QPoint* q_errormessage_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QErrorMessage* self, QWidget* param1, QPointF* param2 ```
QPointF* q_errormessage_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QErrorMessage* self, QWidget* param1, QPoint* param2 ```
QPoint* q_errormessage_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QErrorMessage* self ```
QWidget* q_errormessage_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QErrorMessage* self ```
QWidget* q_errormessage_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QErrorMessage* self ```
QWidget* q_errormessage_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QErrorMessage* self ```
QPalette* q_errormessage_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QErrorMessage* self, QPalette* palette ```
void q_errormessage_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QErrorMessage* self, enum QPalette__ColorRole backgroundRole ```
void q_errormessage_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QErrorMessage* self ```
int64_t q_errormessage_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QErrorMessage* self, enum QPalette__ColorRole foregroundRole ```
void q_errormessage_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QErrorMessage* self ```
int64_t q_errormessage_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QErrorMessage* self ```
QFont* q_errormessage_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QErrorMessage* self, QFont* font ```
void q_errormessage_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QErrorMessage* self ```
QFontMetrics* q_errormessage_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QErrorMessage* self ```
QFontInfo* q_errormessage_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QErrorMessage* self ```
QCursor* q_errormessage_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QErrorMessage* self, QCursor* cursor ```
void q_errormessage_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QErrorMessage* self ```
void q_errormessage_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QErrorMessage* self, bool enable ```
void q_errormessage_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QErrorMessage* self, bool enable ```
void q_errormessage_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QErrorMessage* self, QBitmap* mask ```
void q_errormessage_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QErrorMessage* self, QRegion* mask ```
void q_errormessage_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QErrorMessage* self ```
QRegion* q_errormessage_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QErrorMessage* self ```
void q_errormessage_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QErrorMessage* self, QPaintDevice* target ```
void q_errormessage_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QErrorMessage* self, QPainter* painter ```
void q_errormessage_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QErrorMessage* self ```
QPixmap* q_errormessage_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QErrorMessage* self ```
QGraphicsEffect* q_errormessage_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QErrorMessage* self, QGraphicsEffect* effect ```
void q_errormessage_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QErrorMessage* self, enum Qt__GestureType typeVal ```
void q_errormessage_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QErrorMessage* self, enum Qt__GestureType typeVal ```
void q_errormessage_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QErrorMessage* self, const char* windowTitle ```
void q_errormessage_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QErrorMessage* self, const char* styleSheet ```
void q_errormessage_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QErrorMessage* self ```
const char* q_errormessage_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QErrorMessage* self ```
const char* q_errormessage_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QErrorMessage* self, QIcon* icon ```
void q_errormessage_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QErrorMessage* self ```
QIcon* q_errormessage_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QErrorMessage* self, const char* windowIconText ```
void q_errormessage_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QErrorMessage* self ```
const char* q_errormessage_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QErrorMessage* self, const char* windowRole ```
void q_errormessage_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QErrorMessage* self ```
const char* q_errormessage_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QErrorMessage* self, const char* filePath ```
void q_errormessage_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QErrorMessage* self ```
const char* q_errormessage_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QErrorMessage* self, double level ```
void q_errormessage_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QErrorMessage* self ```
double q_errormessage_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QErrorMessage* self, const char* toolTip ```
void q_errormessage_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QErrorMessage* self ```
const char* q_errormessage_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QErrorMessage* self, int msec ```
void q_errormessage_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QErrorMessage* self, const char* statusTip ```
void q_errormessage_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QErrorMessage* self ```
const char* q_errormessage_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QErrorMessage* self, const char* whatsThis ```
void q_errormessage_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QErrorMessage* self ```
const char* q_errormessage_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QErrorMessage* self ```
const char* q_errormessage_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QErrorMessage* self, const char* name ```
void q_errormessage_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QErrorMessage* self ```
const char* q_errormessage_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QErrorMessage* self, const char* description ```
void q_errormessage_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QErrorMessage* self, enum Qt__LayoutDirection direction ```
void q_errormessage_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QErrorMessage* self ```
int64_t q_errormessage_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QErrorMessage* self ```
void q_errormessage_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QErrorMessage* self, QLocale* locale ```
void q_errormessage_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QErrorMessage* self ```
QLocale* q_errormessage_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QErrorMessage* self ```
void q_errormessage_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QErrorMessage* self ```
void q_errormessage_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QErrorMessage* self ```
void q_errormessage_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QErrorMessage* self ```
void q_errormessage_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QErrorMessage* self, enum Qt__FocusReason reason ```
void q_errormessage_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QErrorMessage* self ```
int64_t q_errormessage_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QErrorMessage* self, enum Qt__FocusPolicy policy ```
void q_errormessage_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_errormessage_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QErrorMessage* self, QWidget* focusProxy ```
void q_errormessage_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QErrorMessage* self ```
QWidget* q_errormessage_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QErrorMessage* self ```
int64_t q_errormessage_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QErrorMessage* self, enum Qt__ContextMenuPolicy policy ```
void q_errormessage_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QErrorMessage* self ```
void q_errormessage_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QErrorMessage* self, QCursor* param1 ```
void q_errormessage_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QErrorMessage* self ```
void q_errormessage_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QErrorMessage* self ```
void q_errormessage_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QErrorMessage* self ```
void q_errormessage_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QErrorMessage* self, QKeySequence* key ```
int32_t q_errormessage_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QErrorMessage* self, int id ```
void q_errormessage_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QErrorMessage* self, int id ```
void q_errormessage_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QErrorMessage* self, int id ```
void q_errormessage_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_errormessage_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_errormessage_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QErrorMessage* self, bool enable ```
void q_errormessage_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QErrorMessage* self ```
QGraphicsProxyWidget* q_errormessage_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QErrorMessage* self ```
void q_errormessage_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QErrorMessage* self ```
void q_errormessage_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QErrorMessage* self, int x, int y, int w, int h ```
void q_errormessage_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QErrorMessage* self, QRect* param1 ```
void q_errormessage_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QErrorMessage* self, QRegion* param1 ```
void q_errormessage_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QErrorMessage* self, int x, int y, int w, int h ```
void q_errormessage_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QErrorMessage* self, QRect* param1 ```
void q_errormessage_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QErrorMessage* self, QRegion* param1 ```
void q_errormessage_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QErrorMessage* self, bool hidden ```
void q_errormessage_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QErrorMessage* self ```
void q_errormessage_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QErrorMessage* self ```
void q_errormessage_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QErrorMessage* self ```
void q_errormessage_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QErrorMessage* self ```
void q_errormessage_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QErrorMessage* self ```
void q_errormessage_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QErrorMessage* self ```
void q_errormessage_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QErrorMessage* self ```
void q_errormessage_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QErrorMessage* self ```
void q_errormessage_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QErrorMessage* self, QWidget* param1 ```
void q_errormessage_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QErrorMessage* self, int x, int y ```
void q_errormessage_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QErrorMessage* self, QPoint* param1 ```
void q_errormessage_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QErrorMessage* self, int w, int h ```
void q_errormessage_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QErrorMessage* self, QSize* param1 ```
void q_errormessage_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QErrorMessage* self, int x, int y, int w, int h ```
void q_errormessage_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QErrorMessage* self, QRect* geometry ```
void q_errormessage_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QErrorMessage* self ```
char* q_errormessage_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QErrorMessage* self, const char* geometry ```
bool q_errormessage_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QErrorMessage* self ```
void q_errormessage_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QErrorMessage* self, QWidget* param1 ```
bool q_errormessage_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QErrorMessage* self ```
int64_t q_errormessage_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QErrorMessage* self, int state ```
void q_errormessage_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QErrorMessage* self, int state ```
void q_errormessage_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QErrorMessage* self ```
QSizePolicy* q_errormessage_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QErrorMessage* self, QSizePolicy* sizePolicy ```
void q_errormessage_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QErrorMessage* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_errormessage_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QErrorMessage* self ```
QRegion* q_errormessage_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QErrorMessage* self, int left, int top, int right, int bottom ```
void q_errormessage_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QErrorMessage* self, QMargins* margins ```
void q_errormessage_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QErrorMessage* self ```
QMargins* q_errormessage_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QErrorMessage* self ```
QRect* q_errormessage_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QErrorMessage* self ```
QLayout* q_errormessage_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QErrorMessage* self, QLayout* layout ```
void q_errormessage_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QErrorMessage* self ```
void q_errormessage_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QErrorMessage* self, QWidget* parent ```
void q_errormessage_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QErrorMessage* self, QWidget* parent, int f ```
void q_errormessage_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QErrorMessage* self, int dx, int dy ```
void q_errormessage_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QErrorMessage* self, int dx, int dy, QRect* param3 ```
void q_errormessage_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QErrorMessage* self ```
QWidget* q_errormessage_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QErrorMessage* self ```
QWidget* q_errormessage_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QErrorMessage* self ```
QWidget* q_errormessage_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QErrorMessage* self, bool on ```
void q_errormessage_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QErrorMessage* self, QAction* action ```
void q_errormessage_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QErrorMessage* self, QAction* actions[] ```
void q_errormessage_add_actions(void* self, void* actions[]) {
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
/// ``` QErrorMessage* self, QAction* before, QAction* actions[] ```
void q_errormessage_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QErrorMessage* self, QAction* before, QAction* action ```
void q_errormessage_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QErrorMessage* self, QAction* action ```
void q_errormessage_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QErrorMessage* self ```
libqt_list /* of QAction* */ q_errormessage_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QErrorMessage* self, const char* text ```
QAction* q_errormessage_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QErrorMessage* self, QIcon* icon, const char* text ```
QAction* q_errormessage_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QErrorMessage* self, const char* text, QKeySequence* shortcut ```
QAction* q_errormessage_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QErrorMessage* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_errormessage_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QErrorMessage* self ```
QWidget* q_errormessage_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QErrorMessage* self, int typeVal ```
void q_errormessage_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QErrorMessage* self ```
int64_t q_errormessage_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QErrorMessage* self, enum Qt__WindowType param1 ```
void q_errormessage_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QErrorMessage* self, int typeVal ```
void q_errormessage_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QErrorMessage* self ```
int64_t q_errormessage_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_errormessage_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QErrorMessage* self, int x, int y ```
QWidget* q_errormessage_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QErrorMessage* self, QPoint* p ```
QWidget* q_errormessage_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QErrorMessage* self, enum Qt__WidgetAttribute param1 ```
void q_errormessage_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QErrorMessage* self, enum Qt__WidgetAttribute param1 ```
bool q_errormessage_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QErrorMessage* self ```
void q_errormessage_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QErrorMessage* self, QWidget* child ```
bool q_errormessage_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QErrorMessage* self, bool enabled ```
void q_errormessage_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QErrorMessage* self ```
QBackingStore* q_errormessage_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QErrorMessage* self ```
QWindow* q_errormessage_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QErrorMessage* self ```
QScreen* q_errormessage_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QErrorMessage* self, QScreen* screen ```
void q_errormessage_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_errormessage_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QErrorMessage* self, const char* title ```
void q_errormessage_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QErrorMessage* self, void (*slot)(QWidget*, const char*) ```
void q_errormessage_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QErrorMessage* self, QIcon* icon ```
void q_errormessage_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QErrorMessage* self, void (*slot)(QWidget*, QIcon*) ```
void q_errormessage_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QErrorMessage* self, const char* iconText ```
void q_errormessage_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QErrorMessage* self, void (*slot)(QWidget*, const char*) ```
void q_errormessage_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QErrorMessage* self, QPoint* pos ```
void q_errormessage_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QErrorMessage* self, void (*slot)(QWidget*, QPoint*) ```
void q_errormessage_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QErrorMessage* self ```
int64_t q_errormessage_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QErrorMessage* self, int hints ```
void q_errormessage_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QErrorMessage* self, QPaintDevice* target, QPoint* targetOffset ```
void q_errormessage_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QErrorMessage* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_errormessage_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QErrorMessage* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_errormessage_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QErrorMessage* self, QPainter* painter, QPoint* targetOffset ```
void q_errormessage_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QErrorMessage* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_errormessage_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QErrorMessage* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_errormessage_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QErrorMessage* self, QRect* rectangle ```
QPixmap* q_errormessage_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QErrorMessage* self, enum Qt__GestureType typeVal, int flags ```
void q_errormessage_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QErrorMessage* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_errormessage_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QErrorMessage* self, int id, bool enable ```
void q_errormessage_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QErrorMessage* self, int id, bool enable ```
void q_errormessage_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QErrorMessage* self, enum Qt__WindowType param1, bool on ```
void q_errormessage_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QErrorMessage* self, enum Qt__WidgetAttribute param1, bool on ```
void q_errormessage_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_errormessage_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_errormessage_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QErrorMessage* self ```
const char* q_errormessage_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QErrorMessage* self, const char* name ```
void q_errormessage_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QErrorMessage* self, bool b ```
bool q_errormessage_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QErrorMessage* self ```
QThread* q_errormessage_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QErrorMessage* self, QThread* thread ```
void q_errormessage_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QErrorMessage* self, int interval ```
int32_t q_errormessage_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QErrorMessage* self, int id ```
void q_errormessage_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QErrorMessage* self ```
libqt_list /* of QObject* */ q_errormessage_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QErrorMessage* self, QObject* filterObj ```
void q_errormessage_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QErrorMessage* self, QObject* obj ```
void q_errormessage_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_errormessage_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QErrorMessage* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_errormessage_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_errormessage_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_errormessage_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QErrorMessage* self ```
void q_errormessage_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QErrorMessage* self ```
void q_errormessage_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QErrorMessage* self, const char* name, QVariant* value ```
bool q_errormessage_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QErrorMessage* self, const char* name ```
QVariant* q_errormessage_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QErrorMessage* self ```
const char** q_errormessage_dynamic_property_names(void* self) {
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
/// ``` QErrorMessage* self ```
QBindingStorage* q_errormessage_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QErrorMessage* self ```
QBindingStorage* q_errormessage_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QErrorMessage* self ```
void q_errormessage_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QErrorMessage* self, void (*slot)(QObject*) ```
void q_errormessage_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QErrorMessage* self ```
QObject* q_errormessage_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QErrorMessage* self, const char* classname ```
bool q_errormessage_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QErrorMessage* self ```
void q_errormessage_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QErrorMessage* self, int interval, enum Qt__TimerType timerType ```
int32_t q_errormessage_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_errormessage_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QErrorMessage* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_errormessage_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QErrorMessage* self, QObject* param1 ```
void q_errormessage_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QErrorMessage* self, void (*slot)(QObject*, QObject*) ```
void q_errormessage_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QErrorMessage* self ```
bool q_errormessage_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QErrorMessage* self ```
double q_errormessage_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QErrorMessage* self ```
double q_errormessage_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_errormessage_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, bool visible ```
void q_errormessage_set_visible(void* self, bool visible) {
    QErrorMessage_SetVisible((QErrorMessage*)self, visible);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, bool visible ```
void q_errormessage_qbase_set_visible(void* self, bool visible) {
    QErrorMessage_QBaseSetVisible((QErrorMessage*)self, visible);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, bool) ```
void q_errormessage_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QErrorMessage_OnSetVisible((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
QSize* q_errormessage_size_hint(void* self) {
    return QErrorMessage_SizeHint((QErrorMessage*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
QSize* q_errormessage_qbase_size_hint(void* self) {
    return QErrorMessage_QBaseSizeHint((QErrorMessage*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, QSize* (*slot)() ```
void q_errormessage_on_size_hint(void* self, QSize* (*slot)()) {
    QErrorMessage_OnSizeHint((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
QSize* q_errormessage_minimum_size_hint(void* self) {
    return QErrorMessage_MinimumSizeHint((QErrorMessage*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
QSize* q_errormessage_qbase_minimum_size_hint(void* self) {
    return QErrorMessage_QBaseMinimumSizeHint((QErrorMessage*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, QSize* (*slot)() ```
void q_errormessage_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QErrorMessage_OnMinimumSizeHint((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
void q_errormessage_open(void* self) {
    QErrorMessage_Open((QErrorMessage*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
void q_errormessage_qbase_open(void* self) {
    QErrorMessage_QBaseOpen((QErrorMessage*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)() ```
void q_errormessage_on_open(void* self, void (*slot)()) {
    QErrorMessage_OnOpen((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_exec(void* self) {
    return QErrorMessage_Exec((QErrorMessage*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_qbase_exec(void* self) {
    return QErrorMessage_QBaseExec((QErrorMessage*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, int32_t (*slot)() ```
void q_errormessage_on_exec(void* self, int32_t (*slot)()) {
    QErrorMessage_OnExec((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
void q_errormessage_accept(void* self) {
    QErrorMessage_Accept((QErrorMessage*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
void q_errormessage_qbase_accept(void* self) {
    QErrorMessage_QBaseAccept((QErrorMessage*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)() ```
void q_errormessage_on_accept(void* self, void (*slot)()) {
    QErrorMessage_OnAccept((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
void q_errormessage_reject(void* self) {
    QErrorMessage_Reject((QErrorMessage*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
void q_errormessage_qbase_reject(void* self) {
    QErrorMessage_QBaseReject((QErrorMessage*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)() ```
void q_errormessage_on_reject(void* self, void (*slot)()) {
    QErrorMessage_OnReject((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QKeyEvent* param1 ```
void q_errormessage_key_press_event(void* self, void* param1) {
    QErrorMessage_KeyPressEvent((QErrorMessage*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QKeyEvent* param1 ```
void q_errormessage_qbase_key_press_event(void* self, void* param1) {
    QErrorMessage_QBaseKeyPressEvent((QErrorMessage*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QKeyEvent*) ```
void q_errormessage_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnKeyPressEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QCloseEvent* param1 ```
void q_errormessage_close_event(void* self, void* param1) {
    QErrorMessage_CloseEvent((QErrorMessage*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QCloseEvent* param1 ```
void q_errormessage_qbase_close_event(void* self, void* param1) {
    QErrorMessage_QBaseCloseEvent((QErrorMessage*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QCloseEvent*) ```
void q_errormessage_on_close_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnCloseEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QShowEvent* param1 ```
void q_errormessage_show_event(void* self, void* param1) {
    QErrorMessage_ShowEvent((QErrorMessage*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QShowEvent* param1 ```
void q_errormessage_qbase_show_event(void* self, void* param1) {
    QErrorMessage_QBaseShowEvent((QErrorMessage*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QShowEvent*) ```
void q_errormessage_on_show_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnShowEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QResizeEvent* param1 ```
void q_errormessage_resize_event(void* self, void* param1) {
    QErrorMessage_ResizeEvent((QErrorMessage*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QResizeEvent* param1 ```
void q_errormessage_qbase_resize_event(void* self, void* param1) {
    QErrorMessage_QBaseResizeEvent((QErrorMessage*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QResizeEvent*) ```
void q_errormessage_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnResizeEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QContextMenuEvent* param1 ```
void q_errormessage_context_menu_event(void* self, void* param1) {
    QErrorMessage_ContextMenuEvent((QErrorMessage*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QContextMenuEvent* param1 ```
void q_errormessage_qbase_context_menu_event(void* self, void* param1) {
    QErrorMessage_QBaseContextMenuEvent((QErrorMessage*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QContextMenuEvent*) ```
void q_errormessage_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnContextMenuEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QObject* param1, QEvent* param2 ```
bool q_errormessage_event_filter(void* self, void* param1, void* param2) {
    return QErrorMessage_EventFilter((QErrorMessage*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QObject* param1, QEvent* param2 ```
bool q_errormessage_qbase_event_filter(void* self, void* param1, void* param2) {
    return QErrorMessage_QBaseEventFilter((QErrorMessage*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, bool (*slot)(QErrorMessage*, QObject*, QEvent*) ```
void q_errormessage_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QErrorMessage_OnEventFilter((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_dev_type(void* self) {
    return QErrorMessage_DevType((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_qbase_dev_type(void* self) {
    return QErrorMessage_QBaseDevType((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, int32_t (*slot)() ```
void q_errormessage_on_dev_type(void* self, int32_t (*slot)()) {
    QErrorMessage_OnDevType((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, int param1 ```
int32_t q_errormessage_height_for_width(void* self, int param1) {
    return QErrorMessage_HeightForWidth((QErrorMessage*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, int param1 ```
int32_t q_errormessage_qbase_height_for_width(void* self, int param1) {
    return QErrorMessage_QBaseHeightForWidth((QErrorMessage*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, int32_t (*slot)(QErrorMessage*, int) ```
void q_errormessage_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QErrorMessage_OnHeightForWidth((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
bool q_errormessage_has_height_for_width(void* self) {
    return QErrorMessage_HasHeightForWidth((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
bool q_errormessage_qbase_has_height_for_width(void* self) {
    return QErrorMessage_QBaseHasHeightForWidth((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, bool (*slot)() ```
void q_errormessage_on_has_height_for_width(void* self, bool (*slot)()) {
    QErrorMessage_OnHasHeightForWidth((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
QPaintEngine* q_errormessage_paint_engine(void* self) {
    return QErrorMessage_PaintEngine((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
QPaintEngine* q_errormessage_qbase_paint_engine(void* self) {
    return QErrorMessage_QBasePaintEngine((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, QPaintEngine* (*slot)() ```
void q_errormessage_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QErrorMessage_OnPaintEngine((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QEvent* event ```
bool q_errormessage_event(void* self, void* event) {
    return QErrorMessage_Event((QErrorMessage*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QEvent* event ```
bool q_errormessage_qbase_event(void* self, void* event) {
    return QErrorMessage_QBaseEvent((QErrorMessage*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, bool (*slot)(QErrorMessage*, QEvent*) ```
void q_errormessage_on_event(void* self, bool (*slot)(void*, void*)) {
    QErrorMessage_OnEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QMouseEvent* event ```
void q_errormessage_mouse_press_event(void* self, void* event) {
    QErrorMessage_MousePressEvent((QErrorMessage*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QMouseEvent* event ```
void q_errormessage_qbase_mouse_press_event(void* self, void* event) {
    QErrorMessage_QBaseMousePressEvent((QErrorMessage*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QMouseEvent*) ```
void q_errormessage_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnMousePressEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QMouseEvent* event ```
void q_errormessage_mouse_release_event(void* self, void* event) {
    QErrorMessage_MouseReleaseEvent((QErrorMessage*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QMouseEvent* event ```
void q_errormessage_qbase_mouse_release_event(void* self, void* event) {
    QErrorMessage_QBaseMouseReleaseEvent((QErrorMessage*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QMouseEvent*) ```
void q_errormessage_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnMouseReleaseEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QMouseEvent* event ```
void q_errormessage_mouse_double_click_event(void* self, void* event) {
    QErrorMessage_MouseDoubleClickEvent((QErrorMessage*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QMouseEvent* event ```
void q_errormessage_qbase_mouse_double_click_event(void* self, void* event) {
    QErrorMessage_QBaseMouseDoubleClickEvent((QErrorMessage*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QMouseEvent*) ```
void q_errormessage_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnMouseDoubleClickEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QMouseEvent* event ```
void q_errormessage_mouse_move_event(void* self, void* event) {
    QErrorMessage_MouseMoveEvent((QErrorMessage*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QMouseEvent* event ```
void q_errormessage_qbase_mouse_move_event(void* self, void* event) {
    QErrorMessage_QBaseMouseMoveEvent((QErrorMessage*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QMouseEvent*) ```
void q_errormessage_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnMouseMoveEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QWheelEvent* event ```
void q_errormessage_wheel_event(void* self, void* event) {
    QErrorMessage_WheelEvent((QErrorMessage*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QWheelEvent* event ```
void q_errormessage_qbase_wheel_event(void* self, void* event) {
    QErrorMessage_QBaseWheelEvent((QErrorMessage*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QWheelEvent*) ```
void q_errormessage_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnWheelEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QKeyEvent* event ```
void q_errormessage_key_release_event(void* self, void* event) {
    QErrorMessage_KeyReleaseEvent((QErrorMessage*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QKeyEvent* event ```
void q_errormessage_qbase_key_release_event(void* self, void* event) {
    QErrorMessage_QBaseKeyReleaseEvent((QErrorMessage*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QKeyEvent*) ```
void q_errormessage_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnKeyReleaseEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QFocusEvent* event ```
void q_errormessage_focus_in_event(void* self, void* event) {
    QErrorMessage_FocusInEvent((QErrorMessage*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QFocusEvent* event ```
void q_errormessage_qbase_focus_in_event(void* self, void* event) {
    QErrorMessage_QBaseFocusInEvent((QErrorMessage*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QFocusEvent*) ```
void q_errormessage_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnFocusInEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QFocusEvent* event ```
void q_errormessage_focus_out_event(void* self, void* event) {
    QErrorMessage_FocusOutEvent((QErrorMessage*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QFocusEvent* event ```
void q_errormessage_qbase_focus_out_event(void* self, void* event) {
    QErrorMessage_QBaseFocusOutEvent((QErrorMessage*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QFocusEvent*) ```
void q_errormessage_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnFocusOutEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QEnterEvent* event ```
void q_errormessage_enter_event(void* self, void* event) {
    QErrorMessage_EnterEvent((QErrorMessage*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QEnterEvent* event ```
void q_errormessage_qbase_enter_event(void* self, void* event) {
    QErrorMessage_QBaseEnterEvent((QErrorMessage*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QEnterEvent*) ```
void q_errormessage_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnEnterEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QEvent* event ```
void q_errormessage_leave_event(void* self, void* event) {
    QErrorMessage_LeaveEvent((QErrorMessage*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QEvent* event ```
void q_errormessage_qbase_leave_event(void* self, void* event) {
    QErrorMessage_QBaseLeaveEvent((QErrorMessage*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QEvent*) ```
void q_errormessage_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnLeaveEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QPaintEvent* event ```
void q_errormessage_paint_event(void* self, void* event) {
    QErrorMessage_PaintEvent((QErrorMessage*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QPaintEvent* event ```
void q_errormessage_qbase_paint_event(void* self, void* event) {
    QErrorMessage_QBasePaintEvent((QErrorMessage*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QPaintEvent*) ```
void q_errormessage_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnPaintEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QMoveEvent* event ```
void q_errormessage_move_event(void* self, void* event) {
    QErrorMessage_MoveEvent((QErrorMessage*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QMoveEvent* event ```
void q_errormessage_qbase_move_event(void* self, void* event) {
    QErrorMessage_QBaseMoveEvent((QErrorMessage*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QMoveEvent*) ```
void q_errormessage_on_move_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnMoveEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QTabletEvent* event ```
void q_errormessage_tablet_event(void* self, void* event) {
    QErrorMessage_TabletEvent((QErrorMessage*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QTabletEvent* event ```
void q_errormessage_qbase_tablet_event(void* self, void* event) {
    QErrorMessage_QBaseTabletEvent((QErrorMessage*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QTabletEvent*) ```
void q_errormessage_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnTabletEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QActionEvent* event ```
void q_errormessage_action_event(void* self, void* event) {
    QErrorMessage_ActionEvent((QErrorMessage*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QActionEvent* event ```
void q_errormessage_qbase_action_event(void* self, void* event) {
    QErrorMessage_QBaseActionEvent((QErrorMessage*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QActionEvent*) ```
void q_errormessage_on_action_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnActionEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QDragEnterEvent* event ```
void q_errormessage_drag_enter_event(void* self, void* event) {
    QErrorMessage_DragEnterEvent((QErrorMessage*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QDragEnterEvent* event ```
void q_errormessage_qbase_drag_enter_event(void* self, void* event) {
    QErrorMessage_QBaseDragEnterEvent((QErrorMessage*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QDragEnterEvent*) ```
void q_errormessage_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnDragEnterEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QDragMoveEvent* event ```
void q_errormessage_drag_move_event(void* self, void* event) {
    QErrorMessage_DragMoveEvent((QErrorMessage*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QDragMoveEvent* event ```
void q_errormessage_qbase_drag_move_event(void* self, void* event) {
    QErrorMessage_QBaseDragMoveEvent((QErrorMessage*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QDragMoveEvent*) ```
void q_errormessage_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnDragMoveEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QDragLeaveEvent* event ```
void q_errormessage_drag_leave_event(void* self, void* event) {
    QErrorMessage_DragLeaveEvent((QErrorMessage*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QDragLeaveEvent* event ```
void q_errormessage_qbase_drag_leave_event(void* self, void* event) {
    QErrorMessage_QBaseDragLeaveEvent((QErrorMessage*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QDragLeaveEvent*) ```
void q_errormessage_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnDragLeaveEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QDropEvent* event ```
void q_errormessage_drop_event(void* self, void* event) {
    QErrorMessage_DropEvent((QErrorMessage*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QDropEvent* event ```
void q_errormessage_qbase_drop_event(void* self, void* event) {
    QErrorMessage_QBaseDropEvent((QErrorMessage*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QDropEvent*) ```
void q_errormessage_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnDropEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QHideEvent* event ```
void q_errormessage_hide_event(void* self, void* event) {
    QErrorMessage_HideEvent((QErrorMessage*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QHideEvent* event ```
void q_errormessage_qbase_hide_event(void* self, void* event) {
    QErrorMessage_QBaseHideEvent((QErrorMessage*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QHideEvent*) ```
void q_errormessage_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnHideEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, const char* eventType, void* message, intptr_t* result ```
bool q_errormessage_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QErrorMessage_NativeEvent((QErrorMessage*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, const char* eventType, void* message, intptr_t* result ```
bool q_errormessage_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QErrorMessage_QBaseNativeEvent((QErrorMessage*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, bool (*slot)(QErrorMessage*, const char*, void*, intptr_t*) ```
void q_errormessage_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QErrorMessage_OnNativeEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_errormessage_metric(void* self, int64_t param1) {
    return QErrorMessage_Metric((QErrorMessage*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_errormessage_qbase_metric(void* self, int64_t param1) {
    return QErrorMessage_QBaseMetric((QErrorMessage*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, int32_t (*slot)(QErrorMessage*, enum QPaintDevice__PaintDeviceMetric) ```
void q_errormessage_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QErrorMessage_OnMetric((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QPainter* painter ```
void q_errormessage_init_painter(void* self, void* painter) {
    QErrorMessage_InitPainter((QErrorMessage*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QPainter* painter ```
void q_errormessage_qbase_init_painter(void* self, void* painter) {
    QErrorMessage_QBaseInitPainter((QErrorMessage*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QPainter*) ```
void q_errormessage_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnInitPainter((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QPoint* offset ```
QPaintDevice* q_errormessage_redirected(void* self, void* offset) {
    return QErrorMessage_Redirected((QErrorMessage*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QPoint* offset ```
QPaintDevice* q_errormessage_qbase_redirected(void* self, void* offset) {
    return QErrorMessage_QBaseRedirected((QErrorMessage*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, QPaintDevice* (*slot)(QErrorMessage*, QPoint*) ```
void q_errormessage_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QErrorMessage_OnRedirected((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
QPainter* q_errormessage_shared_painter(void* self) {
    return QErrorMessage_SharedPainter((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
QPainter* q_errormessage_qbase_shared_painter(void* self) {
    return QErrorMessage_QBaseSharedPainter((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, QPainter* (*slot)() ```
void q_errormessage_on_shared_painter(void* self, QPainter* (*slot)()) {
    QErrorMessage_OnSharedPainter((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QInputMethodEvent* param1 ```
void q_errormessage_input_method_event(void* self, void* param1) {
    QErrorMessage_InputMethodEvent((QErrorMessage*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QInputMethodEvent* param1 ```
void q_errormessage_qbase_input_method_event(void* self, void* param1) {
    QErrorMessage_QBaseInputMethodEvent((QErrorMessage*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QInputMethodEvent*) ```
void q_errormessage_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnInputMethodEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_errormessage_input_method_query(void* self, int64_t param1) {
    return QErrorMessage_InputMethodQuery((QErrorMessage*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_errormessage_qbase_input_method_query(void* self, int64_t param1) {
    return QErrorMessage_QBaseInputMethodQuery((QErrorMessage*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, QVariant* (*slot)(QErrorMessage*, enum Qt__InputMethodQuery) ```
void q_errormessage_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QErrorMessage_OnInputMethodQuery((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, bool next ```
bool q_errormessage_focus_next_prev_child(void* self, bool next) {
    return QErrorMessage_FocusNextPrevChild((QErrorMessage*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, bool next ```
bool q_errormessage_qbase_focus_next_prev_child(void* self, bool next) {
    return QErrorMessage_QBaseFocusNextPrevChild((QErrorMessage*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, bool (*slot)(QErrorMessage*, bool) ```
void q_errormessage_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QErrorMessage_OnFocusNextPrevChild((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QTimerEvent* event ```
void q_errormessage_timer_event(void* self, void* event) {
    QErrorMessage_TimerEvent((QErrorMessage*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QTimerEvent* event ```
void q_errormessage_qbase_timer_event(void* self, void* event) {
    QErrorMessage_QBaseTimerEvent((QErrorMessage*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QTimerEvent*) ```
void q_errormessage_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnTimerEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QChildEvent* event ```
void q_errormessage_child_event(void* self, void* event) {
    QErrorMessage_ChildEvent((QErrorMessage*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QChildEvent* event ```
void q_errormessage_qbase_child_event(void* self, void* event) {
    QErrorMessage_QBaseChildEvent((QErrorMessage*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QChildEvent*) ```
void q_errormessage_on_child_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnChildEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QEvent* event ```
void q_errormessage_custom_event(void* self, void* event) {
    QErrorMessage_CustomEvent((QErrorMessage*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QEvent* event ```
void q_errormessage_qbase_custom_event(void* self, void* event) {
    QErrorMessage_QBaseCustomEvent((QErrorMessage*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QEvent*) ```
void q_errormessage_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnCustomEvent((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QMetaMethod* signal ```
void q_errormessage_connect_notify(void* self, void* signal) {
    QErrorMessage_ConnectNotify((QErrorMessage*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QMetaMethod* signal ```
void q_errormessage_qbase_connect_notify(void* self, void* signal) {
    QErrorMessage_QBaseConnectNotify((QErrorMessage*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QMetaMethod*) ```
void q_errormessage_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnConnectNotify((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QMetaMethod* signal ```
void q_errormessage_disconnect_notify(void* self, void* signal) {
    QErrorMessage_DisconnectNotify((QErrorMessage*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QMetaMethod* signal ```
void q_errormessage_qbase_disconnect_notify(void* self, void* signal) {
    QErrorMessage_QBaseDisconnectNotify((QErrorMessage*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QMetaMethod*) ```
void q_errormessage_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnDisconnectNotify((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QWidget* param1 ```
void q_errormessage_adjust_position(void* self, void* param1) {
    QErrorMessage_AdjustPosition((QErrorMessage*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QWidget* param1 ```
void q_errormessage_qbase_adjust_position(void* self, void* param1) {
    QErrorMessage_QBaseAdjustPosition((QErrorMessage*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)(QErrorMessage*, QWidget*) ```
void q_errormessage_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QErrorMessage_OnAdjustPosition((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
void q_errormessage_update_micro_focus(void* self) {
    QErrorMessage_UpdateMicroFocus((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
void q_errormessage_qbase_update_micro_focus(void* self) {
    QErrorMessage_QBaseUpdateMicroFocus((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)() ```
void q_errormessage_on_update_micro_focus(void* self, void (*slot)()) {
    QErrorMessage_OnUpdateMicroFocus((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
void q_errormessage_create(void* self) {
    QErrorMessage_Create((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
void q_errormessage_qbase_create(void* self) {
    QErrorMessage_QBaseCreate((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)() ```
void q_errormessage_on_create(void* self, void (*slot)()) {
    QErrorMessage_OnCreate((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
void q_errormessage_destroy(void* self) {
    QErrorMessage_Destroy((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
void q_errormessage_qbase_destroy(void* self) {
    QErrorMessage_QBaseDestroy((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, void (*slot)() ```
void q_errormessage_on_destroy(void* self, void (*slot)()) {
    QErrorMessage_OnDestroy((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
bool q_errormessage_focus_next_child(void* self) {
    return QErrorMessage_FocusNextChild((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
bool q_errormessage_qbase_focus_next_child(void* self) {
    return QErrorMessage_QBaseFocusNextChild((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, bool (*slot)() ```
void q_errormessage_on_focus_next_child(void* self, bool (*slot)()) {
    QErrorMessage_OnFocusNextChild((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
bool q_errormessage_focus_previous_child(void* self) {
    return QErrorMessage_FocusPreviousChild((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
bool q_errormessage_qbase_focus_previous_child(void* self) {
    return QErrorMessage_QBaseFocusPreviousChild((QErrorMessage*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, bool (*slot)() ```
void q_errormessage_on_focus_previous_child(void* self, bool (*slot)()) {
    QErrorMessage_OnFocusPreviousChild((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
QObject* q_errormessage_sender(void* self) {
    return QErrorMessage_Sender((QErrorMessage*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
QObject* q_errormessage_qbase_sender(void* self) {
    return QErrorMessage_QBaseSender((QErrorMessage*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, QObject* (*slot)() ```
void q_errormessage_on_sender(void* self, QObject* (*slot)()) {
    QErrorMessage_OnSender((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_sender_signal_index(void* self) {
    return QErrorMessage_SenderSignalIndex((QErrorMessage*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self ```
int32_t q_errormessage_qbase_sender_signal_index(void* self) {
    return QErrorMessage_QBaseSenderSignalIndex((QErrorMessage*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, int32_t (*slot)() ```
void q_errormessage_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QErrorMessage_OnSenderSignalIndex((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, const char* signal ```
int32_t q_errormessage_receivers(void* self, const char* signal) {
    return QErrorMessage_Receivers((QErrorMessage*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, const char* signal ```
int32_t q_errormessage_qbase_receivers(void* self, const char* signal) {
    return QErrorMessage_QBaseReceivers((QErrorMessage*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, int32_t (*slot)(QErrorMessage*, const char*) ```
void q_errormessage_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QErrorMessage_OnReceivers((QErrorMessage*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QErrorMessage* self, QMetaMethod* signal ```
bool q_errormessage_is_signal_connected(void* self, void* signal) {
    return QErrorMessage_IsSignalConnected((QErrorMessage*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QErrorMessage* self, QMetaMethod* signal ```
bool q_errormessage_qbase_is_signal_connected(void* self, void* signal) {
    return QErrorMessage_QBaseIsSignalConnected((QErrorMessage*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QErrorMessage* self, bool (*slot)(QErrorMessage*, QMetaMethod*) ```
void q_errormessage_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QErrorMessage_OnIsSignalConnected((QErrorMessage*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QErrorMessage* self ```
void q_errormessage_delete(void* self) {
    QErrorMessage_Delete((QErrorMessage*)(self));
}