#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqanystringview.hpp"
#include "../libqbackingstore.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbitmap.hpp"
#include "../libqcursor.hpp"
#include "../libqdialog.hpp"
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
#include "libqprintpreviewdialog.hpp"
#include "libqprintpreviewdialog.h"

/// https://doc.qt.io/qt-6/qprintpreviewdialog.html

/// q_printpreviewdialog_new constructs a new QPrintPreviewDialog object.
///
/// ``` QWidget* parent ```
QPrintPreviewDialog* q_printpreviewdialog_new(void* parent) {
    return QPrintPreviewDialog_new((QWidget*)parent);
}

/// q_printpreviewdialog_new2 constructs a new QPrintPreviewDialog object.
///
///
QPrintPreviewDialog* q_printpreviewdialog_new2() {
    return QPrintPreviewDialog_new2();
}

/// q_printpreviewdialog_new3 constructs a new QPrintPreviewDialog object.
///
/// ``` QPrinter* printer ```
QPrintPreviewDialog* q_printpreviewdialog_new3(void* printer) {
    return QPrintPreviewDialog_new3((QPrinter*)printer);
}

/// q_printpreviewdialog_new4 constructs a new QPrintPreviewDialog object.
///
/// ``` QWidget* parent, int flags ```
QPrintPreviewDialog* q_printpreviewdialog_new4(void* parent, int64_t flags) {
    return QPrintPreviewDialog_new4((QWidget*)parent, flags);
}

/// q_printpreviewdialog_new5 constructs a new QPrintPreviewDialog object.
///
/// ``` QPrinter* printer, QWidget* parent ```
QPrintPreviewDialog* q_printpreviewdialog_new5(void* printer, void* parent) {
    return QPrintPreviewDialog_new5((QPrinter*)printer, (QWidget*)parent);
}

/// q_printpreviewdialog_new6 constructs a new QPrintPreviewDialog object.
///
/// ``` QPrinter* printer, QWidget* parent, int flags ```
QPrintPreviewDialog* q_printpreviewdialog_new6(void* printer, void* parent, int64_t flags) {
    return QPrintPreviewDialog_new6((QPrinter*)printer, (QWidget*)parent, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPrintPreviewDialog* self ```
QMetaObject* q_printpreviewdialog_meta_object(void* self) {
    return QPrintPreviewDialog_MetaObject((QPrintPreviewDialog*)self);
}

/// ``` QPrintPreviewDialog* self, const char* param1 ```
void* q_printpreviewdialog_metacast(void* self, const char* param1) {
    return QPrintPreviewDialog_Metacast((QPrintPreviewDialog*)self, param1);
}

/// ``` QPrintPreviewDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_printpreviewdialog_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPrintPreviewDialog_Metacall((QPrintPreviewDialog*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPrintPreviewDialog* self, int32_t (*slot)(QPrintPreviewDialog*, enum QMetaObject__Call, int, void*) ```
void q_printpreviewdialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPrintPreviewDialog_OnMetacall((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrintPreviewDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_printpreviewdialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPrintPreviewDialog_QBaseMetacall((QPrintPreviewDialog*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_printpreviewdialog_tr(const char* s) {
    libqt_string _str = QPrintPreviewDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewdialog.html#printer)
///
/// ``` QPrintPreviewDialog* self ```
QPrinter* q_printpreviewdialog_printer(void* self) {
    return QPrintPreviewDialog_Printer((QPrintPreviewDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewdialog.html#setVisible)
///
/// ``` QPrintPreviewDialog* self, bool visible ```
void q_printpreviewdialog_set_visible(void* self, bool visible) {
    QPrintPreviewDialog_SetVisible((QPrintPreviewDialog*)self, visible);
}

/// Allows for overriding the related default method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, bool) ```
void q_printpreviewdialog_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QPrintPreviewDialog_OnSetVisible((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrintPreviewDialog* self, bool visible ```
void q_printpreviewdialog_qbase_set_visible(void* self, bool visible) {
    QPrintPreviewDialog_QBaseSetVisible((QPrintPreviewDialog*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewdialog.html#done)
///
/// ``` QPrintPreviewDialog* self, int result ```
void q_printpreviewdialog_done(void* self, int result) {
    QPrintPreviewDialog_Done((QPrintPreviewDialog*)self, result);
}

/// Allows for overriding the related default method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, int) ```
void q_printpreviewdialog_on_done(void* self, void (*slot)(void*, int)) {
    QPrintPreviewDialog_OnDone((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrintPreviewDialog* self, int result ```
void q_printpreviewdialog_qbase_done(void* self, int result) {
    QPrintPreviewDialog_QBaseDone((QPrintPreviewDialog*)self, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintpreviewdialog.html#paintRequested)
///
/// ``` QPrintPreviewDialog* self, QPrinter* printer ```
void q_printpreviewdialog_paint_requested(void* self, void* printer) {
    QPrintPreviewDialog_PaintRequested((QPrintPreviewDialog*)self, (QPrinter*)printer);
}

/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QPrinter*) ```
void q_printpreviewdialog_on_paint_requested(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_Connect_PaintRequested((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_printpreviewdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QPrintPreviewDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_printpreviewdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPrintPreviewDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QPrintPreviewDialog* self, bool sizeGripEnabled ```
void q_printpreviewdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QPrintPreviewDialog* self, bool modal ```
void q_printpreviewdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QPrintPreviewDialog* self, int r ```
void q_printpreviewdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QPrintPreviewDialog* self, int result ```
void q_printpreviewdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

/// Inherited from QDialog
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QDialog*, int) ```
void q_printpreviewdialog_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QDialog*) ```
void q_printpreviewdialog_on_accepted(void* self, void (*slot)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QDialog*) ```
void q_printpreviewdialog_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QPrintPreviewDialog* self ```
uintptr_t q_printpreviewdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QPrintPreviewDialog* self ```
uintptr_t q_printpreviewdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QPrintPreviewDialog* self ```
uintptr_t q_printpreviewdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QPrintPreviewDialog* self ```
QStyle* q_printpreviewdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QPrintPreviewDialog* self, QStyle* style ```
void q_printpreviewdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QPrintPreviewDialog* self ```
int64_t q_printpreviewdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QPrintPreviewDialog* self, enum Qt__WindowModality windowModality ```
void q_printpreviewdialog_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QPrintPreviewDialog* self, QWidget* param1 ```
bool q_printpreviewdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QPrintPreviewDialog* self, bool enabled ```
void q_printpreviewdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QPrintPreviewDialog* self, bool disabled ```
void q_printpreviewdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QPrintPreviewDialog* self, bool windowModified ```
void q_printpreviewdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QPrintPreviewDialog* self ```
QRect* q_printpreviewdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QPrintPreviewDialog* self ```
QRect* q_printpreviewdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QPrintPreviewDialog* self ```
QRect* q_printpreviewdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QPrintPreviewDialog* self ```
QPoint* q_printpreviewdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QPrintPreviewDialog* self ```
QSize* q_printpreviewdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QPrintPreviewDialog* self ```
QSize* q_printpreviewdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QPrintPreviewDialog* self ```
QRect* q_printpreviewdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QPrintPreviewDialog* self ```
QRect* q_printpreviewdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QPrintPreviewDialog* self ```
QRegion* q_printpreviewdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QPrintPreviewDialog* self ```
QSize* q_printpreviewdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QPrintPreviewDialog* self ```
QSize* q_printpreviewdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPrintPreviewDialog* self, QSize* minimumSize ```
void q_printpreviewdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPrintPreviewDialog* self, int minw, int minh ```
void q_printpreviewdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPrintPreviewDialog* self, QSize* maximumSize ```
void q_printpreviewdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPrintPreviewDialog* self, int maxw, int maxh ```
void q_printpreviewdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QPrintPreviewDialog* self, int minw ```
void q_printpreviewdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QPrintPreviewDialog* self, int minh ```
void q_printpreviewdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QPrintPreviewDialog* self, int maxw ```
void q_printpreviewdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QPrintPreviewDialog* self, int maxh ```
void q_printpreviewdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QPrintPreviewDialog* self ```
QSize* q_printpreviewdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPrintPreviewDialog* self, QSize* sizeIncrement ```
void q_printpreviewdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPrintPreviewDialog* self, int w, int h ```
void q_printpreviewdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QPrintPreviewDialog* self ```
QSize* q_printpreviewdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPrintPreviewDialog* self, QSize* baseSize ```
void q_printpreviewdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPrintPreviewDialog* self, int basew, int baseh ```
void q_printpreviewdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPrintPreviewDialog* self, QSize* fixedSize ```
void q_printpreviewdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPrintPreviewDialog* self, int w, int h ```
void q_printpreviewdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QPrintPreviewDialog* self, int w ```
void q_printpreviewdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QPrintPreviewDialog* self, int h ```
void q_printpreviewdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPrintPreviewDialog* self, QPointF* param1 ```
QPointF* q_printpreviewdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPrintPreviewDialog* self, QPoint* param1 ```
QPoint* q_printpreviewdialog_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPrintPreviewDialog* self, QPointF* param1 ```
QPointF* q_printpreviewdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPrintPreviewDialog* self, QPoint* param1 ```
QPoint* q_printpreviewdialog_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPrintPreviewDialog* self, QPointF* param1 ```
QPointF* q_printpreviewdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPrintPreviewDialog* self, QPoint* param1 ```
QPoint* q_printpreviewdialog_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPrintPreviewDialog* self, QPointF* param1 ```
QPointF* q_printpreviewdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPrintPreviewDialog* self, QPoint* param1 ```
QPoint* q_printpreviewdialog_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPrintPreviewDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_printpreviewdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPrintPreviewDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_printpreviewdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPrintPreviewDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_printpreviewdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPrintPreviewDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_printpreviewdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QPrintPreviewDialog* self ```
QWidget* q_printpreviewdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QPrintPreviewDialog* self ```
QWidget* q_printpreviewdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QPrintPreviewDialog* self ```
QWidget* q_printpreviewdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QPrintPreviewDialog* self ```
QPalette* q_printpreviewdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QPrintPreviewDialog* self, QPalette* palette ```
void q_printpreviewdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QPrintPreviewDialog* self, enum QPalette__ColorRole backgroundRole ```
void q_printpreviewdialog_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QPrintPreviewDialog* self ```
int64_t q_printpreviewdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QPrintPreviewDialog* self, enum QPalette__ColorRole foregroundRole ```
void q_printpreviewdialog_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QPrintPreviewDialog* self ```
int64_t q_printpreviewdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QPrintPreviewDialog* self ```
QFont* q_printpreviewdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QPrintPreviewDialog* self, QFont* font ```
void q_printpreviewdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QPrintPreviewDialog* self ```
QFontMetrics* q_printpreviewdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QPrintPreviewDialog* self ```
QFontInfo* q_printpreviewdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QPrintPreviewDialog* self ```
QCursor* q_printpreviewdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QPrintPreviewDialog* self, QCursor* cursor ```
void q_printpreviewdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QPrintPreviewDialog* self, bool enable ```
void q_printpreviewdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QPrintPreviewDialog* self, bool enable ```
void q_printpreviewdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPrintPreviewDialog* self, QBitmap* mask ```
void q_printpreviewdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPrintPreviewDialog* self, QRegion* mask ```
void q_printpreviewdialog_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QPrintPreviewDialog* self ```
QRegion* q_printpreviewdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewDialog* self, QPaintDevice* target ```
void q_printpreviewdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewDialog* self, QPainter* painter ```
void q_printpreviewdialog_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPrintPreviewDialog* self ```
QPixmap* q_printpreviewdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QPrintPreviewDialog* self ```
QGraphicsEffect* q_printpreviewdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QPrintPreviewDialog* self, QGraphicsEffect* effect ```
void q_printpreviewdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPrintPreviewDialog* self, enum Qt__GestureType typeVal ```
void q_printpreviewdialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QPrintPreviewDialog* self, enum Qt__GestureType typeVal ```
void q_printpreviewdialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QPrintPreviewDialog* self, const char* windowTitle ```
void q_printpreviewdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QPrintPreviewDialog* self, const char* styleSheet ```
void q_printpreviewdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QPrintPreviewDialog* self ```
const char* q_printpreviewdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QPrintPreviewDialog* self ```
const char* q_printpreviewdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QPrintPreviewDialog* self, QIcon* icon ```
void q_printpreviewdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QPrintPreviewDialog* self ```
QIcon* q_printpreviewdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QPrintPreviewDialog* self, const char* windowIconText ```
void q_printpreviewdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QPrintPreviewDialog* self ```
const char* q_printpreviewdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QPrintPreviewDialog* self, const char* windowRole ```
void q_printpreviewdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QPrintPreviewDialog* self ```
const char* q_printpreviewdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QPrintPreviewDialog* self, const char* filePath ```
void q_printpreviewdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QPrintPreviewDialog* self ```
const char* q_printpreviewdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QPrintPreviewDialog* self, double level ```
void q_printpreviewdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QPrintPreviewDialog* self ```
double q_printpreviewdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QPrintPreviewDialog* self, const char* toolTip ```
void q_printpreviewdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QPrintPreviewDialog* self ```
const char* q_printpreviewdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QPrintPreviewDialog* self, int msec ```
void q_printpreviewdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QPrintPreviewDialog* self, const char* statusTip ```
void q_printpreviewdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QPrintPreviewDialog* self ```
const char* q_printpreviewdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QPrintPreviewDialog* self, const char* whatsThis ```
void q_printpreviewdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QPrintPreviewDialog* self ```
const char* q_printpreviewdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QPrintPreviewDialog* self ```
const char* q_printpreviewdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QPrintPreviewDialog* self, const char* name ```
void q_printpreviewdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QPrintPreviewDialog* self ```
const char* q_printpreviewdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QPrintPreviewDialog* self, const char* description ```
void q_printpreviewdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QPrintPreviewDialog* self, enum Qt__LayoutDirection direction ```
void q_printpreviewdialog_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QPrintPreviewDialog* self ```
int64_t q_printpreviewdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QPrintPreviewDialog* self, QLocale* locale ```
void q_printpreviewdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QPrintPreviewDialog* self ```
QLocale* q_printpreviewdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPrintPreviewDialog* self, enum Qt__FocusReason reason ```
void q_printpreviewdialog_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QPrintPreviewDialog* self ```
int64_t q_printpreviewdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QPrintPreviewDialog* self, enum Qt__FocusPolicy policy ```
void q_printpreviewdialog_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_printpreviewdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QPrintPreviewDialog* self, QWidget* focusProxy ```
void q_printpreviewdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QPrintPreviewDialog* self ```
QWidget* q_printpreviewdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QPrintPreviewDialog* self ```
int64_t q_printpreviewdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QPrintPreviewDialog* self, enum Qt__ContextMenuPolicy policy ```
void q_printpreviewdialog_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPrintPreviewDialog* self, QCursor* param1 ```
void q_printpreviewdialog_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPrintPreviewDialog* self, QKeySequence* key ```
int32_t q_printpreviewdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QPrintPreviewDialog* self, int id ```
void q_printpreviewdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPrintPreviewDialog* self, int id ```
void q_printpreviewdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPrintPreviewDialog* self, int id ```
void q_printpreviewdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_printpreviewdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_printpreviewdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QPrintPreviewDialog* self, bool enable ```
void q_printpreviewdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QPrintPreviewDialog* self ```
QGraphicsProxyWidget* q_printpreviewdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintPreviewDialog* self, int x, int y, int w, int h ```
void q_printpreviewdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintPreviewDialog* self, QRect* param1 ```
void q_printpreviewdialog_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPrintPreviewDialog* self, QRegion* param1 ```
void q_printpreviewdialog_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintPreviewDialog* self, int x, int y, int w, int h ```
void q_printpreviewdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintPreviewDialog* self, QRect* param1 ```
void q_printpreviewdialog_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPrintPreviewDialog* self, QRegion* param1 ```
void q_printpreviewdialog_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QPrintPreviewDialog* self, bool hidden ```
void q_printpreviewdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QPrintPreviewDialog* self, QWidget* param1 ```
void q_printpreviewdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPrintPreviewDialog* self, int x, int y ```
void q_printpreviewdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPrintPreviewDialog* self, QPoint* param1 ```
void q_printpreviewdialog_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPrintPreviewDialog* self, int w, int h ```
void q_printpreviewdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPrintPreviewDialog* self, QSize* param1 ```
void q_printpreviewdialog_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPrintPreviewDialog* self, int x, int y, int w, int h ```
void q_printpreviewdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPrintPreviewDialog* self, QRect* geometry ```
void q_printpreviewdialog_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QPrintPreviewDialog* self ```
char* q_printpreviewdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QPrintPreviewDialog* self, const char* geometry ```
bool q_printpreviewdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QPrintPreviewDialog* self, QWidget* param1 ```
bool q_printpreviewdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QPrintPreviewDialog* self ```
int64_t q_printpreviewdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QPrintPreviewDialog* self, int state ```
void q_printpreviewdialog_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QPrintPreviewDialog* self, int state ```
void q_printpreviewdialog_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QPrintPreviewDialog* self ```
QSizePolicy* q_printpreviewdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPrintPreviewDialog* self, QSizePolicy* sizePolicy ```
void q_printpreviewdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPrintPreviewDialog* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_printpreviewdialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QPrintPreviewDialog* self ```
QRegion* q_printpreviewdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPrintPreviewDialog* self, int left, int top, int right, int bottom ```
void q_printpreviewdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPrintPreviewDialog* self, QMargins* margins ```
void q_printpreviewdialog_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QPrintPreviewDialog* self ```
QMargins* q_printpreviewdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QPrintPreviewDialog* self ```
QRect* q_printpreviewdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QPrintPreviewDialog* self ```
QLayout* q_printpreviewdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QPrintPreviewDialog* self, QLayout* layout ```
void q_printpreviewdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPrintPreviewDialog* self, QWidget* parent ```
void q_printpreviewdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPrintPreviewDialog* self, QWidget* parent, int f ```
void q_printpreviewdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPrintPreviewDialog* self, int dx, int dy ```
void q_printpreviewdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPrintPreviewDialog* self, int dx, int dy, QRect* param3 ```
void q_printpreviewdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QPrintPreviewDialog* self ```
QWidget* q_printpreviewdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QPrintPreviewDialog* self ```
QWidget* q_printpreviewdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QPrintPreviewDialog* self ```
QWidget* q_printpreviewdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QPrintPreviewDialog* self, bool on ```
void q_printpreviewdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewDialog* self, QAction* action ```
void q_printpreviewdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QPrintPreviewDialog* self, QAction* actions[] ```
void q_printpreviewdialog_add_actions(void* self, void* actions[]) {
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
/// ``` QPrintPreviewDialog* self, QAction* before, QAction* actions[] ```
void q_printpreviewdialog_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QPrintPreviewDialog* self, QAction* before, QAction* action ```
void q_printpreviewdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QPrintPreviewDialog* self, QAction* action ```
void q_printpreviewdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QPrintPreviewDialog* self ```
libqt_list /* of QAction* */ q_printpreviewdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewDialog* self, const char* text ```
QAction* q_printpreviewdialog_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewDialog* self, QIcon* icon, const char* text ```
QAction* q_printpreviewdialog_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewDialog* self, const char* text, QKeySequence* shortcut ```
QAction* q_printpreviewdialog_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPrintPreviewDialog* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_printpreviewdialog_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QPrintPreviewDialog* self ```
QWidget* q_printpreviewdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QPrintPreviewDialog* self, int typeVal ```
void q_printpreviewdialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QPrintPreviewDialog* self ```
int64_t q_printpreviewdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPrintPreviewDialog* self, enum Qt__WindowType param1 ```
void q_printpreviewdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QPrintPreviewDialog* self, int typeVal ```
void q_printpreviewdialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QPrintPreviewDialog* self ```
int64_t q_printpreviewdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_printpreviewdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPrintPreviewDialog* self, int x, int y ```
QWidget* q_printpreviewdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPrintPreviewDialog* self, QPoint* p ```
QWidget* q_printpreviewdialog_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPrintPreviewDialog* self, enum Qt__WidgetAttribute param1 ```
void q_printpreviewdialog_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QPrintPreviewDialog* self, enum Qt__WidgetAttribute param1 ```
bool q_printpreviewdialog_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QPrintPreviewDialog* self, QWidget* child ```
bool q_printpreviewdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QPrintPreviewDialog* self, bool enabled ```
void q_printpreviewdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QPrintPreviewDialog* self ```
QBackingStore* q_printpreviewdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QPrintPreviewDialog* self ```
QWindow* q_printpreviewdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QPrintPreviewDialog* self ```
QScreen* q_printpreviewdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QPrintPreviewDialog* self, QScreen* screen ```
void q_printpreviewdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_printpreviewdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QPrintPreviewDialog* self, const char* title ```
void q_printpreviewdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QWidget*, const char*) ```
void q_printpreviewdialog_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QPrintPreviewDialog* self, QIcon* icon ```
void q_printpreviewdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QWidget*, QIcon*) ```
void q_printpreviewdialog_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QPrintPreviewDialog* self, const char* iconText ```
void q_printpreviewdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QWidget*, const char*) ```
void q_printpreviewdialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QPrintPreviewDialog* self, QPoint* pos ```
void q_printpreviewdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QWidget*, QPoint*) ```
void q_printpreviewdialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QPrintPreviewDialog* self ```
int64_t q_printpreviewdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QPrintPreviewDialog* self, int hints ```
void q_printpreviewdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewDialog* self, QPaintDevice* target, QPoint* targetOffset ```
void q_printpreviewdialog_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_printpreviewdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_printpreviewdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewDialog* self, QPainter* painter, QPoint* targetOffset ```
void q_printpreviewdialog_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_printpreviewdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPrintPreviewDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_printpreviewdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPrintPreviewDialog* self, QRect* rectangle ```
QPixmap* q_printpreviewdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPrintPreviewDialog* self, enum Qt__GestureType typeVal, int flags ```
void q_printpreviewdialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPrintPreviewDialog* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_printpreviewdialog_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPrintPreviewDialog* self, int id, bool enable ```
void q_printpreviewdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPrintPreviewDialog* self, int id, bool enable ```
void q_printpreviewdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPrintPreviewDialog* self, enum Qt__WindowType param1, bool on ```
void q_printpreviewdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPrintPreviewDialog* self, enum Qt__WidgetAttribute param1, bool on ```
void q_printpreviewdialog_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_printpreviewdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_printpreviewdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPrintPreviewDialog* self ```
const char* q_printpreviewdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPrintPreviewDialog* self, const char* name ```
void q_printpreviewdialog_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPrintPreviewDialog* self, bool b ```
bool q_printpreviewdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPrintPreviewDialog* self ```
QThread* q_printpreviewdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPrintPreviewDialog* self, QThread* thread ```
void q_printpreviewdialog_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPrintPreviewDialog* self, int interval ```
int32_t q_printpreviewdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPrintPreviewDialog* self, int id ```
void q_printpreviewdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPrintPreviewDialog* self ```
libqt_list /* of QObject* */ q_printpreviewdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPrintPreviewDialog* self, QObject* filterObj ```
void q_printpreviewdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPrintPreviewDialog* self, QObject* obj ```
void q_printpreviewdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_printpreviewdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPrintPreviewDialog* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_printpreviewdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_printpreviewdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_printpreviewdialog_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPrintPreviewDialog* self, const char* name, QVariant* value ```
bool q_printpreviewdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPrintPreviewDialog* self, const char* name ```
QVariant* q_printpreviewdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPrintPreviewDialog* self ```
const char** q_printpreviewdialog_dynamic_property_names(void* self) {
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
/// ``` QPrintPreviewDialog* self ```
QBindingStorage* q_printpreviewdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPrintPreviewDialog* self ```
QBindingStorage* q_printpreviewdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QObject*) ```
void q_printpreviewdialog_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPrintPreviewDialog* self ```
QObject* q_printpreviewdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPrintPreviewDialog* self, const char* classname ```
bool q_printpreviewdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPrintPreviewDialog* self, int interval, enum Qt__TimerType timerType ```
int32_t q_printpreviewdialog_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_printpreviewdialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPrintPreviewDialog* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_printpreviewdialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPrintPreviewDialog* self, QObject* param1 ```
void q_printpreviewdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QObject*, QObject*) ```
void q_printpreviewdialog_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPrintPreviewDialog* self ```
double q_printpreviewdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPrintPreviewDialog* self ```
double q_printpreviewdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_printpreviewdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
QSize* q_printpreviewdialog_size_hint(void* self) {
    return QPrintPreviewDialog_SizeHint((QPrintPreviewDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
QSize* q_printpreviewdialog_qbase_size_hint(void* self) {
    return QPrintPreviewDialog_QBaseSizeHint((QPrintPreviewDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QSize* (*slot)() ```
void q_printpreviewdialog_on_size_hint(void* self, QSize* (*slot)()) {
    QPrintPreviewDialog_OnSizeHint((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
QSize* q_printpreviewdialog_minimum_size_hint(void* self) {
    return QPrintPreviewDialog_MinimumSizeHint((QPrintPreviewDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
QSize* q_printpreviewdialog_qbase_minimum_size_hint(void* self) {
    return QPrintPreviewDialog_QBaseMinimumSizeHint((QPrintPreviewDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QSize* (*slot)() ```
void q_printpreviewdialog_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QPrintPreviewDialog_OnMinimumSizeHint((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_open(void* self) {
    QPrintPreviewDialog_Open((QPrintPreviewDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_qbase_open(void* self) {
    QPrintPreviewDialog_QBaseOpen((QPrintPreviewDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)() ```
void q_printpreviewdialog_on_open(void* self, void (*slot)()) {
    QPrintPreviewDialog_OnOpen((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_exec(void* self) {
    return QPrintPreviewDialog_Exec((QPrintPreviewDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_qbase_exec(void* self) {
    return QPrintPreviewDialog_QBaseExec((QPrintPreviewDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, int32_t (*slot)() ```
void q_printpreviewdialog_on_exec(void* self, int32_t (*slot)()) {
    QPrintPreviewDialog_OnExec((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_accept(void* self) {
    QPrintPreviewDialog_Accept((QPrintPreviewDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_qbase_accept(void* self) {
    QPrintPreviewDialog_QBaseAccept((QPrintPreviewDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)() ```
void q_printpreviewdialog_on_accept(void* self, void (*slot)()) {
    QPrintPreviewDialog_OnAccept((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_reject(void* self) {
    QPrintPreviewDialog_Reject((QPrintPreviewDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_qbase_reject(void* self) {
    QPrintPreviewDialog_QBaseReject((QPrintPreviewDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)() ```
void q_printpreviewdialog_on_reject(void* self, void (*slot)()) {
    QPrintPreviewDialog_OnReject((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QKeyEvent* param1 ```
void q_printpreviewdialog_key_press_event(void* self, void* param1) {
    QPrintPreviewDialog_KeyPressEvent((QPrintPreviewDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QKeyEvent* param1 ```
void q_printpreviewdialog_qbase_key_press_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseKeyPressEvent((QPrintPreviewDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QKeyEvent*) ```
void q_printpreviewdialog_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnKeyPressEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QCloseEvent* param1 ```
void q_printpreviewdialog_close_event(void* self, void* param1) {
    QPrintPreviewDialog_CloseEvent((QPrintPreviewDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QCloseEvent* param1 ```
void q_printpreviewdialog_qbase_close_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseCloseEvent((QPrintPreviewDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QCloseEvent*) ```
void q_printpreviewdialog_on_close_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnCloseEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QShowEvent* param1 ```
void q_printpreviewdialog_show_event(void* self, void* param1) {
    QPrintPreviewDialog_ShowEvent((QPrintPreviewDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QShowEvent* param1 ```
void q_printpreviewdialog_qbase_show_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseShowEvent((QPrintPreviewDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QShowEvent*) ```
void q_printpreviewdialog_on_show_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnShowEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QResizeEvent* param1 ```
void q_printpreviewdialog_resize_event(void* self, void* param1) {
    QPrintPreviewDialog_ResizeEvent((QPrintPreviewDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QResizeEvent* param1 ```
void q_printpreviewdialog_qbase_resize_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseResizeEvent((QPrintPreviewDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QResizeEvent*) ```
void q_printpreviewdialog_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnResizeEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QContextMenuEvent* param1 ```
void q_printpreviewdialog_context_menu_event(void* self, void* param1) {
    QPrintPreviewDialog_ContextMenuEvent((QPrintPreviewDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QContextMenuEvent* param1 ```
void q_printpreviewdialog_qbase_context_menu_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseContextMenuEvent((QPrintPreviewDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QContextMenuEvent*) ```
void q_printpreviewdialog_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnContextMenuEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QObject* param1, QEvent* param2 ```
bool q_printpreviewdialog_event_filter(void* self, void* param1, void* param2) {
    return QPrintPreviewDialog_EventFilter((QPrintPreviewDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QObject* param1, QEvent* param2 ```
bool q_printpreviewdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QPrintPreviewDialog_QBaseEventFilter((QPrintPreviewDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, bool (*slot)(QPrintPreviewDialog*, QObject*, QEvent*) ```
void q_printpreviewdialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPrintPreviewDialog_OnEventFilter((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_dev_type(void* self) {
    return QPrintPreviewDialog_DevType((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_qbase_dev_type(void* self) {
    return QPrintPreviewDialog_QBaseDevType((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, int32_t (*slot)() ```
void q_printpreviewdialog_on_dev_type(void* self, int32_t (*slot)()) {
    QPrintPreviewDialog_OnDevType((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, int param1 ```
int32_t q_printpreviewdialog_height_for_width(void* self, int param1) {
    return QPrintPreviewDialog_HeightForWidth((QPrintPreviewDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, int param1 ```
int32_t q_printpreviewdialog_qbase_height_for_width(void* self, int param1) {
    return QPrintPreviewDialog_QBaseHeightForWidth((QPrintPreviewDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, int32_t (*slot)(QPrintPreviewDialog*, int) ```
void q_printpreviewdialog_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QPrintPreviewDialog_OnHeightForWidth((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_has_height_for_width(void* self) {
    return QPrintPreviewDialog_HasHeightForWidth((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_qbase_has_height_for_width(void* self) {
    return QPrintPreviewDialog_QBaseHasHeightForWidth((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, bool (*slot)() ```
void q_printpreviewdialog_on_has_height_for_width(void* self, bool (*slot)()) {
    QPrintPreviewDialog_OnHasHeightForWidth((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
QPaintEngine* q_printpreviewdialog_paint_engine(void* self) {
    return QPrintPreviewDialog_PaintEngine((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
QPaintEngine* q_printpreviewdialog_qbase_paint_engine(void* self) {
    return QPrintPreviewDialog_QBasePaintEngine((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QPaintEngine* (*slot)() ```
void q_printpreviewdialog_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QPrintPreviewDialog_OnPaintEngine((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QEvent* event ```
bool q_printpreviewdialog_event(void* self, void* event) {
    return QPrintPreviewDialog_Event((QPrintPreviewDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QEvent* event ```
bool q_printpreviewdialog_qbase_event(void* self, void* event) {
    return QPrintPreviewDialog_QBaseEvent((QPrintPreviewDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, bool (*slot)(QPrintPreviewDialog*, QEvent*) ```
void q_printpreviewdialog_on_event(void* self, bool (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMouseEvent* event ```
void q_printpreviewdialog_mouse_press_event(void* self, void* event) {
    QPrintPreviewDialog_MousePressEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMouseEvent* event ```
void q_printpreviewdialog_qbase_mouse_press_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseMousePressEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QMouseEvent*) ```
void q_printpreviewdialog_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnMousePressEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMouseEvent* event ```
void q_printpreviewdialog_mouse_release_event(void* self, void* event) {
    QPrintPreviewDialog_MouseReleaseEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMouseEvent* event ```
void q_printpreviewdialog_qbase_mouse_release_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseMouseReleaseEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QMouseEvent*) ```
void q_printpreviewdialog_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnMouseReleaseEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMouseEvent* event ```
void q_printpreviewdialog_mouse_double_click_event(void* self, void* event) {
    QPrintPreviewDialog_MouseDoubleClickEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMouseEvent* event ```
void q_printpreviewdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseMouseDoubleClickEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QMouseEvent*) ```
void q_printpreviewdialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnMouseDoubleClickEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMouseEvent* event ```
void q_printpreviewdialog_mouse_move_event(void* self, void* event) {
    QPrintPreviewDialog_MouseMoveEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMouseEvent* event ```
void q_printpreviewdialog_qbase_mouse_move_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseMouseMoveEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QMouseEvent*) ```
void q_printpreviewdialog_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnMouseMoveEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QWheelEvent* event ```
void q_printpreviewdialog_wheel_event(void* self, void* event) {
    QPrintPreviewDialog_WheelEvent((QPrintPreviewDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QWheelEvent* event ```
void q_printpreviewdialog_qbase_wheel_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseWheelEvent((QPrintPreviewDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QWheelEvent*) ```
void q_printpreviewdialog_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnWheelEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QKeyEvent* event ```
void q_printpreviewdialog_key_release_event(void* self, void* event) {
    QPrintPreviewDialog_KeyReleaseEvent((QPrintPreviewDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QKeyEvent* event ```
void q_printpreviewdialog_qbase_key_release_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseKeyReleaseEvent((QPrintPreviewDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QKeyEvent*) ```
void q_printpreviewdialog_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnKeyReleaseEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QFocusEvent* event ```
void q_printpreviewdialog_focus_in_event(void* self, void* event) {
    QPrintPreviewDialog_FocusInEvent((QPrintPreviewDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QFocusEvent* event ```
void q_printpreviewdialog_qbase_focus_in_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseFocusInEvent((QPrintPreviewDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QFocusEvent*) ```
void q_printpreviewdialog_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnFocusInEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QFocusEvent* event ```
void q_printpreviewdialog_focus_out_event(void* self, void* event) {
    QPrintPreviewDialog_FocusOutEvent((QPrintPreviewDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QFocusEvent* event ```
void q_printpreviewdialog_qbase_focus_out_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseFocusOutEvent((QPrintPreviewDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QFocusEvent*) ```
void q_printpreviewdialog_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnFocusOutEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QEnterEvent* event ```
void q_printpreviewdialog_enter_event(void* self, void* event) {
    QPrintPreviewDialog_EnterEvent((QPrintPreviewDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QEnterEvent* event ```
void q_printpreviewdialog_qbase_enter_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseEnterEvent((QPrintPreviewDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QEnterEvent*) ```
void q_printpreviewdialog_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnEnterEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QEvent* event ```
void q_printpreviewdialog_leave_event(void* self, void* event) {
    QPrintPreviewDialog_LeaveEvent((QPrintPreviewDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QEvent* event ```
void q_printpreviewdialog_qbase_leave_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseLeaveEvent((QPrintPreviewDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QEvent*) ```
void q_printpreviewdialog_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnLeaveEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QPaintEvent* event ```
void q_printpreviewdialog_paint_event(void* self, void* event) {
    QPrintPreviewDialog_PaintEvent((QPrintPreviewDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QPaintEvent* event ```
void q_printpreviewdialog_qbase_paint_event(void* self, void* event) {
    QPrintPreviewDialog_QBasePaintEvent((QPrintPreviewDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QPaintEvent*) ```
void q_printpreviewdialog_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnPaintEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMoveEvent* event ```
void q_printpreviewdialog_move_event(void* self, void* event) {
    QPrintPreviewDialog_MoveEvent((QPrintPreviewDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMoveEvent* event ```
void q_printpreviewdialog_qbase_move_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseMoveEvent((QPrintPreviewDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QMoveEvent*) ```
void q_printpreviewdialog_on_move_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnMoveEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QTabletEvent* event ```
void q_printpreviewdialog_tablet_event(void* self, void* event) {
    QPrintPreviewDialog_TabletEvent((QPrintPreviewDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QTabletEvent* event ```
void q_printpreviewdialog_qbase_tablet_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseTabletEvent((QPrintPreviewDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QTabletEvent*) ```
void q_printpreviewdialog_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnTabletEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QActionEvent* event ```
void q_printpreviewdialog_action_event(void* self, void* event) {
    QPrintPreviewDialog_ActionEvent((QPrintPreviewDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QActionEvent* event ```
void q_printpreviewdialog_qbase_action_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseActionEvent((QPrintPreviewDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QActionEvent*) ```
void q_printpreviewdialog_on_action_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnActionEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QDragEnterEvent* event ```
void q_printpreviewdialog_drag_enter_event(void* self, void* event) {
    QPrintPreviewDialog_DragEnterEvent((QPrintPreviewDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QDragEnterEvent* event ```
void q_printpreviewdialog_qbase_drag_enter_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseDragEnterEvent((QPrintPreviewDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QDragEnterEvent*) ```
void q_printpreviewdialog_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnDragEnterEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QDragMoveEvent* event ```
void q_printpreviewdialog_drag_move_event(void* self, void* event) {
    QPrintPreviewDialog_DragMoveEvent((QPrintPreviewDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QDragMoveEvent* event ```
void q_printpreviewdialog_qbase_drag_move_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseDragMoveEvent((QPrintPreviewDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QDragMoveEvent*) ```
void q_printpreviewdialog_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnDragMoveEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QDragLeaveEvent* event ```
void q_printpreviewdialog_drag_leave_event(void* self, void* event) {
    QPrintPreviewDialog_DragLeaveEvent((QPrintPreviewDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QDragLeaveEvent* event ```
void q_printpreviewdialog_qbase_drag_leave_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseDragLeaveEvent((QPrintPreviewDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QDragLeaveEvent*) ```
void q_printpreviewdialog_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnDragLeaveEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QDropEvent* event ```
void q_printpreviewdialog_drop_event(void* self, void* event) {
    QPrintPreviewDialog_DropEvent((QPrintPreviewDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QDropEvent* event ```
void q_printpreviewdialog_qbase_drop_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseDropEvent((QPrintPreviewDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QDropEvent*) ```
void q_printpreviewdialog_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnDropEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QHideEvent* event ```
void q_printpreviewdialog_hide_event(void* self, void* event) {
    QPrintPreviewDialog_HideEvent((QPrintPreviewDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QHideEvent* event ```
void q_printpreviewdialog_qbase_hide_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseHideEvent((QPrintPreviewDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QHideEvent*) ```
void q_printpreviewdialog_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnHideEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_printpreviewdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPrintPreviewDialog_NativeEvent((QPrintPreviewDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_printpreviewdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPrintPreviewDialog_QBaseNativeEvent((QPrintPreviewDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, bool (*slot)(QPrintPreviewDialog*, const char*, void*, intptr_t*) ```
void q_printpreviewdialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QPrintPreviewDialog_OnNativeEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QEvent* param1 ```
void q_printpreviewdialog_change_event(void* self, void* param1) {
    QPrintPreviewDialog_ChangeEvent((QPrintPreviewDialog*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QEvent* param1 ```
void q_printpreviewdialog_qbase_change_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseChangeEvent((QPrintPreviewDialog*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QEvent*) ```
void q_printpreviewdialog_on_change_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnChangeEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printpreviewdialog_metric(void* self, int64_t param1) {
    return QPrintPreviewDialog_Metric((QPrintPreviewDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printpreviewdialog_qbase_metric(void* self, int64_t param1) {
    return QPrintPreviewDialog_QBaseMetric((QPrintPreviewDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, int32_t (*slot)(QPrintPreviewDialog*, enum QPaintDevice__PaintDeviceMetric) ```
void q_printpreviewdialog_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QPrintPreviewDialog_OnMetric((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QPainter* painter ```
void q_printpreviewdialog_init_painter(void* self, void* painter) {
    QPrintPreviewDialog_InitPainter((QPrintPreviewDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QPainter* painter ```
void q_printpreviewdialog_qbase_init_painter(void* self, void* painter) {
    QPrintPreviewDialog_QBaseInitPainter((QPrintPreviewDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QPainter*) ```
void q_printpreviewdialog_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnInitPainter((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QPoint* offset ```
QPaintDevice* q_printpreviewdialog_redirected(void* self, void* offset) {
    return QPrintPreviewDialog_Redirected((QPrintPreviewDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QPoint* offset ```
QPaintDevice* q_printpreviewdialog_qbase_redirected(void* self, void* offset) {
    return QPrintPreviewDialog_QBaseRedirected((QPrintPreviewDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QPaintDevice* (*slot)(QPrintPreviewDialog*, QPoint*) ```
void q_printpreviewdialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnRedirected((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
QPainter* q_printpreviewdialog_shared_painter(void* self) {
    return QPrintPreviewDialog_SharedPainter((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
QPainter* q_printpreviewdialog_qbase_shared_painter(void* self) {
    return QPrintPreviewDialog_QBaseSharedPainter((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QPainter* (*slot)() ```
void q_printpreviewdialog_on_shared_painter(void* self, QPainter* (*slot)()) {
    QPrintPreviewDialog_OnSharedPainter((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QInputMethodEvent* param1 ```
void q_printpreviewdialog_input_method_event(void* self, void* param1) {
    QPrintPreviewDialog_InputMethodEvent((QPrintPreviewDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QInputMethodEvent* param1 ```
void q_printpreviewdialog_qbase_input_method_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseInputMethodEvent((QPrintPreviewDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QInputMethodEvent*) ```
void q_printpreviewdialog_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnInputMethodEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_printpreviewdialog_input_method_query(void* self, int64_t param1) {
    return QPrintPreviewDialog_InputMethodQuery((QPrintPreviewDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_printpreviewdialog_qbase_input_method_query(void* self, int64_t param1) {
    return QPrintPreviewDialog_QBaseInputMethodQuery((QPrintPreviewDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QVariant* (*slot)(QPrintPreviewDialog*, enum Qt__InputMethodQuery) ```
void q_printpreviewdialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QPrintPreviewDialog_OnInputMethodQuery((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, bool next ```
bool q_printpreviewdialog_focus_next_prev_child(void* self, bool next) {
    return QPrintPreviewDialog_FocusNextPrevChild((QPrintPreviewDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, bool next ```
bool q_printpreviewdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QPrintPreviewDialog_QBaseFocusNextPrevChild((QPrintPreviewDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, bool (*slot)(QPrintPreviewDialog*, bool) ```
void q_printpreviewdialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QPrintPreviewDialog_OnFocusNextPrevChild((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QTimerEvent* event ```
void q_printpreviewdialog_timer_event(void* self, void* event) {
    QPrintPreviewDialog_TimerEvent((QPrintPreviewDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QTimerEvent* event ```
void q_printpreviewdialog_qbase_timer_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseTimerEvent((QPrintPreviewDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QTimerEvent*) ```
void q_printpreviewdialog_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnTimerEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QChildEvent* event ```
void q_printpreviewdialog_child_event(void* self, void* event) {
    QPrintPreviewDialog_ChildEvent((QPrintPreviewDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QChildEvent* event ```
void q_printpreviewdialog_qbase_child_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseChildEvent((QPrintPreviewDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QChildEvent*) ```
void q_printpreviewdialog_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnChildEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QEvent* event ```
void q_printpreviewdialog_custom_event(void* self, void* event) {
    QPrintPreviewDialog_CustomEvent((QPrintPreviewDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QEvent* event ```
void q_printpreviewdialog_qbase_custom_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseCustomEvent((QPrintPreviewDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QEvent*) ```
void q_printpreviewdialog_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnCustomEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMetaMethod* signal ```
void q_printpreviewdialog_connect_notify(void* self, void* signal) {
    QPrintPreviewDialog_ConnectNotify((QPrintPreviewDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMetaMethod* signal ```
void q_printpreviewdialog_qbase_connect_notify(void* self, void* signal) {
    QPrintPreviewDialog_QBaseConnectNotify((QPrintPreviewDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QMetaMethod*) ```
void q_printpreviewdialog_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnConnectNotify((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMetaMethod* signal ```
void q_printpreviewdialog_disconnect_notify(void* self, void* signal) {
    QPrintPreviewDialog_DisconnectNotify((QPrintPreviewDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMetaMethod* signal ```
void q_printpreviewdialog_qbase_disconnect_notify(void* self, void* signal) {
    QPrintPreviewDialog_QBaseDisconnectNotify((QPrintPreviewDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QMetaMethod*) ```
void q_printpreviewdialog_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnDisconnectNotify((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QWidget* param1 ```
void q_printpreviewdialog_adjust_position(void* self, void* param1) {
    QPrintPreviewDialog_AdjustPosition((QPrintPreviewDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QWidget* param1 ```
void q_printpreviewdialog_qbase_adjust_position(void* self, void* param1) {
    QPrintPreviewDialog_QBaseAdjustPosition((QPrintPreviewDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)(QPrintPreviewDialog*, QWidget*) ```
void q_printpreviewdialog_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnAdjustPosition((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_update_micro_focus(void* self) {
    QPrintPreviewDialog_UpdateMicroFocus((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_qbase_update_micro_focus(void* self) {
    QPrintPreviewDialog_QBaseUpdateMicroFocus((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)() ```
void q_printpreviewdialog_on_update_micro_focus(void* self, void (*slot)()) {
    QPrintPreviewDialog_OnUpdateMicroFocus((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_create(void* self) {
    QPrintPreviewDialog_Create((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_qbase_create(void* self) {
    QPrintPreviewDialog_QBaseCreate((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)() ```
void q_printpreviewdialog_on_create(void* self, void (*slot)()) {
    QPrintPreviewDialog_OnCreate((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_destroy(void* self) {
    QPrintPreviewDialog_Destroy((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_qbase_destroy(void* self) {
    QPrintPreviewDialog_QBaseDestroy((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, void (*slot)() ```
void q_printpreviewdialog_on_destroy(void* self, void (*slot)()) {
    QPrintPreviewDialog_OnDestroy((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_focus_next_child(void* self) {
    return QPrintPreviewDialog_FocusNextChild((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_qbase_focus_next_child(void* self) {
    return QPrintPreviewDialog_QBaseFocusNextChild((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, bool (*slot)() ```
void q_printpreviewdialog_on_focus_next_child(void* self, bool (*slot)()) {
    QPrintPreviewDialog_OnFocusNextChild((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_focus_previous_child(void* self) {
    return QPrintPreviewDialog_FocusPreviousChild((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
bool q_printpreviewdialog_qbase_focus_previous_child(void* self) {
    return QPrintPreviewDialog_QBaseFocusPreviousChild((QPrintPreviewDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, bool (*slot)() ```
void q_printpreviewdialog_on_focus_previous_child(void* self, bool (*slot)()) {
    QPrintPreviewDialog_OnFocusPreviousChild((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
QObject* q_printpreviewdialog_sender(void* self) {
    return QPrintPreviewDialog_Sender((QPrintPreviewDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
QObject* q_printpreviewdialog_qbase_sender(void* self) {
    return QPrintPreviewDialog_QBaseSender((QPrintPreviewDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QObject* (*slot)() ```
void q_printpreviewdialog_on_sender(void* self, QObject* (*slot)()) {
    QPrintPreviewDialog_OnSender((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_sender_signal_index(void* self) {
    return QPrintPreviewDialog_SenderSignalIndex((QPrintPreviewDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self ```
int32_t q_printpreviewdialog_qbase_sender_signal_index(void* self) {
    return QPrintPreviewDialog_QBaseSenderSignalIndex((QPrintPreviewDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, int32_t (*slot)() ```
void q_printpreviewdialog_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPrintPreviewDialog_OnSenderSignalIndex((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, const char* signal ```
int32_t q_printpreviewdialog_receivers(void* self, const char* signal) {
    return QPrintPreviewDialog_Receivers((QPrintPreviewDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, const char* signal ```
int32_t q_printpreviewdialog_qbase_receivers(void* self, const char* signal) {
    return QPrintPreviewDialog_QBaseReceivers((QPrintPreviewDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, int32_t (*slot)(QPrintPreviewDialog*, const char*) ```
void q_printpreviewdialog_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPrintPreviewDialog_OnReceivers((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMetaMethod* signal ```
bool q_printpreviewdialog_is_signal_connected(void* self, void* signal) {
    return QPrintPreviewDialog_IsSignalConnected((QPrintPreviewDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, QMetaMethod* signal ```
bool q_printpreviewdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QPrintPreviewDialog_QBaseIsSignalConnected((QPrintPreviewDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrintPreviewDialog* self, bool (*slot)(QPrintPreviewDialog*, QMetaMethod*) ```
void q_printpreviewdialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnIsSignalConnected((QPrintPreviewDialog*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPrintPreviewDialog* self ```
void q_printpreviewdialog_delete(void* self) {
    QPrintPreviewDialog_Delete((QPrintPreviewDialog*)(self));
}