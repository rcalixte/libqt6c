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
#include "libqabstractprintdialog.hpp"
#include "libqabstractprintdialog.h"

/// https://doc.qt.io/qt-6/qabstractprintdialog.html

/// q_abstractprintdialog_new constructs a new QAbstractPrintDialog object.
///
/// ``` QPrinter* printer ```
QAbstractPrintDialog* q_abstractprintdialog_new(void* printer) {
    return QAbstractPrintDialog_new((QPrinter*)printer);
}

/// q_abstractprintdialog_new2 constructs a new QAbstractPrintDialog object.
///
/// ``` QPrinter* printer, QWidget* parent ```
QAbstractPrintDialog* q_abstractprintdialog_new2(void* printer, void* parent) {
    return QAbstractPrintDialog_new2((QPrinter*)printer, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractPrintDialog* self ```
QMetaObject* q_abstractprintdialog_meta_object(void* self) {
    return QAbstractPrintDialog_MetaObject((QAbstractPrintDialog*)self);
}

/// ``` QAbstractPrintDialog* self, const char* param1 ```
void* q_abstractprintdialog_metacast(void* self, const char* param1) {
    return QAbstractPrintDialog_Metacast((QAbstractPrintDialog*)self, param1);
}

/// ``` QAbstractPrintDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractprintdialog_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractPrintDialog_Metacall((QAbstractPrintDialog*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractPrintDialog* self, int32_t (*slot)(QAbstractPrintDialog*, enum QMetaObject__Call, int, void*) ```
void q_abstractprintdialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractPrintDialog_OnMetacall((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractPrintDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractprintdialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractPrintDialog_QBaseMetacall((QAbstractPrintDialog*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractprintdialog_tr(const char* s) {
    libqt_string _str = QAbstractPrintDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#setOptionTabs)
///
/// ``` QAbstractPrintDialog* self, QWidget* tabs[] ```
void q_abstractprintdialog_set_option_tabs(void* self, void* tabs[]) {
    QWidget** tabs_arr = (QWidget**)tabs;
    size_t tabs_len = 0;
    while (tabs_arr[tabs_len] != NULL) {
        tabs_len++;
    }
    libqt_list tabs_list = {
        .len = tabs_len,
        .data = {(QWidget*)tabs},
    };
    QAbstractPrintDialog_SetOptionTabs((QAbstractPrintDialog*)self, tabs_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#setPrintRange)
///
/// ``` QAbstractPrintDialog* self, enum QAbstractPrintDialog__PrintRange range ```
void q_abstractprintdialog_set_print_range(void* self, int64_t range) {
    QAbstractPrintDialog_SetPrintRange((QAbstractPrintDialog*)self, range);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#printRange)
///
/// ``` QAbstractPrintDialog* self ```
int64_t q_abstractprintdialog_print_range(void* self) {
    return QAbstractPrintDialog_PrintRange((QAbstractPrintDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#setMinMax)
///
/// ``` QAbstractPrintDialog* self, int min, int max ```
void q_abstractprintdialog_set_min_max(void* self, int min, int max) {
    QAbstractPrintDialog_SetMinMax((QAbstractPrintDialog*)self, min, max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#minPage)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_min_page(void* self) {
    return QAbstractPrintDialog_MinPage((QAbstractPrintDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#maxPage)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_max_page(void* self) {
    return QAbstractPrintDialog_MaxPage((QAbstractPrintDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#setFromTo)
///
/// ``` QAbstractPrintDialog* self, int fromPage, int toPage ```
void q_abstractprintdialog_set_from_to(void* self, int fromPage, int toPage) {
    QAbstractPrintDialog_SetFromTo((QAbstractPrintDialog*)self, fromPage, toPage);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#fromPage)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_from_page(void* self) {
    return QAbstractPrintDialog_FromPage((QAbstractPrintDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#toPage)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_to_page(void* self) {
    return QAbstractPrintDialog_ToPage((QAbstractPrintDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractprintdialog.html#printer)
///
/// ``` QAbstractPrintDialog* self ```
QPrinter* q_abstractprintdialog_printer(void* self) {
    return QAbstractPrintDialog_Printer((QAbstractPrintDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractprintdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractPrintDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractprintdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractPrintDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QAbstractPrintDialog* self, bool sizeGripEnabled ```
void q_abstractprintdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QAbstractPrintDialog* self, bool modal ```
void q_abstractprintdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QAbstractPrintDialog* self, int r ```
void q_abstractprintdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QAbstractPrintDialog* self, int result ```
void q_abstractprintdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

/// Inherited from QDialog
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QDialog*, int) ```
void q_abstractprintdialog_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QDialog*) ```
void q_abstractprintdialog_on_accepted(void* self, void (*slot)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QDialog*) ```
void q_abstractprintdialog_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QAbstractPrintDialog* self ```
uintptr_t q_abstractprintdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QAbstractPrintDialog* self ```
uintptr_t q_abstractprintdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QAbstractPrintDialog* self ```
uintptr_t q_abstractprintdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QAbstractPrintDialog* self ```
QStyle* q_abstractprintdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QAbstractPrintDialog* self, QStyle* style ```
void q_abstractprintdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QAbstractPrintDialog* self ```
int64_t q_abstractprintdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QAbstractPrintDialog* self, enum Qt__WindowModality windowModality ```
void q_abstractprintdialog_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QAbstractPrintDialog* self, QWidget* param1 ```
bool q_abstractprintdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QAbstractPrintDialog* self, bool enabled ```
void q_abstractprintdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QAbstractPrintDialog* self, bool disabled ```
void q_abstractprintdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QAbstractPrintDialog* self, bool windowModified ```
void q_abstractprintdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QAbstractPrintDialog* self ```
QRect* q_abstractprintdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QAbstractPrintDialog* self ```
QRect* q_abstractprintdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QAbstractPrintDialog* self ```
QRect* q_abstractprintdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QAbstractPrintDialog* self ```
QPoint* q_abstractprintdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QAbstractPrintDialog* self ```
QSize* q_abstractprintdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QAbstractPrintDialog* self ```
QSize* q_abstractprintdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QAbstractPrintDialog* self ```
QRect* q_abstractprintdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QAbstractPrintDialog* self ```
QRect* q_abstractprintdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QAbstractPrintDialog* self ```
QRegion* q_abstractprintdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QAbstractPrintDialog* self ```
QSize* q_abstractprintdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QAbstractPrintDialog* self ```
QSize* q_abstractprintdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QAbstractPrintDialog* self, QSize* minimumSize ```
void q_abstractprintdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QAbstractPrintDialog* self, int minw, int minh ```
void q_abstractprintdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QAbstractPrintDialog* self, QSize* maximumSize ```
void q_abstractprintdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QAbstractPrintDialog* self, int maxw, int maxh ```
void q_abstractprintdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QAbstractPrintDialog* self, int minw ```
void q_abstractprintdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QAbstractPrintDialog* self, int minh ```
void q_abstractprintdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QAbstractPrintDialog* self, int maxw ```
void q_abstractprintdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QAbstractPrintDialog* self, int maxh ```
void q_abstractprintdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QAbstractPrintDialog* self ```
QSize* q_abstractprintdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QAbstractPrintDialog* self, QSize* sizeIncrement ```
void q_abstractprintdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QAbstractPrintDialog* self, int w, int h ```
void q_abstractprintdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QAbstractPrintDialog* self ```
QSize* q_abstractprintdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QAbstractPrintDialog* self, QSize* baseSize ```
void q_abstractprintdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QAbstractPrintDialog* self, int basew, int baseh ```
void q_abstractprintdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QAbstractPrintDialog* self, QSize* fixedSize ```
void q_abstractprintdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QAbstractPrintDialog* self, int w, int h ```
void q_abstractprintdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QAbstractPrintDialog* self, int w ```
void q_abstractprintdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QAbstractPrintDialog* self, int h ```
void q_abstractprintdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QAbstractPrintDialog* self, QPointF* param1 ```
QPointF* q_abstractprintdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QAbstractPrintDialog* self, QPoint* param1 ```
QPoint* q_abstractprintdialog_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QAbstractPrintDialog* self, QPointF* param1 ```
QPointF* q_abstractprintdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QAbstractPrintDialog* self, QPoint* param1 ```
QPoint* q_abstractprintdialog_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QAbstractPrintDialog* self, QPointF* param1 ```
QPointF* q_abstractprintdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QAbstractPrintDialog* self, QPoint* param1 ```
QPoint* q_abstractprintdialog_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QAbstractPrintDialog* self, QPointF* param1 ```
QPointF* q_abstractprintdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QAbstractPrintDialog* self, QPoint* param1 ```
QPoint* q_abstractprintdialog_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QAbstractPrintDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_abstractprintdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QAbstractPrintDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_abstractprintdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QAbstractPrintDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_abstractprintdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QAbstractPrintDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_abstractprintdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QAbstractPrintDialog* self ```
QWidget* q_abstractprintdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QAbstractPrintDialog* self ```
QWidget* q_abstractprintdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QAbstractPrintDialog* self ```
QWidget* q_abstractprintdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QAbstractPrintDialog* self ```
QPalette* q_abstractprintdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QAbstractPrintDialog* self, QPalette* palette ```
void q_abstractprintdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QAbstractPrintDialog* self, enum QPalette__ColorRole backgroundRole ```
void q_abstractprintdialog_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QAbstractPrintDialog* self ```
int64_t q_abstractprintdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QAbstractPrintDialog* self, enum QPalette__ColorRole foregroundRole ```
void q_abstractprintdialog_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QAbstractPrintDialog* self ```
int64_t q_abstractprintdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QAbstractPrintDialog* self ```
QFont* q_abstractprintdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QAbstractPrintDialog* self, QFont* font ```
void q_abstractprintdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QAbstractPrintDialog* self ```
QFontMetrics* q_abstractprintdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QAbstractPrintDialog* self ```
QFontInfo* q_abstractprintdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QAbstractPrintDialog* self ```
QCursor* q_abstractprintdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QAbstractPrintDialog* self, QCursor* cursor ```
void q_abstractprintdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QAbstractPrintDialog* self, bool enable ```
void q_abstractprintdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QAbstractPrintDialog* self, bool enable ```
void q_abstractprintdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QAbstractPrintDialog* self, QBitmap* mask ```
void q_abstractprintdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QAbstractPrintDialog* self, QRegion* mask ```
void q_abstractprintdialog_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QAbstractPrintDialog* self ```
QRegion* q_abstractprintdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractPrintDialog* self, QPaintDevice* target ```
void q_abstractprintdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractPrintDialog* self, QPainter* painter ```
void q_abstractprintdialog_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QAbstractPrintDialog* self ```
QPixmap* q_abstractprintdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QAbstractPrintDialog* self ```
QGraphicsEffect* q_abstractprintdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QAbstractPrintDialog* self, QGraphicsEffect* effect ```
void q_abstractprintdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QAbstractPrintDialog* self, enum Qt__GestureType typeVal ```
void q_abstractprintdialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QAbstractPrintDialog* self, enum Qt__GestureType typeVal ```
void q_abstractprintdialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QAbstractPrintDialog* self, const char* windowTitle ```
void q_abstractprintdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QAbstractPrintDialog* self, const char* styleSheet ```
void q_abstractprintdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QAbstractPrintDialog* self ```
const char* q_abstractprintdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QAbstractPrintDialog* self ```
const char* q_abstractprintdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QAbstractPrintDialog* self, QIcon* icon ```
void q_abstractprintdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QAbstractPrintDialog* self ```
QIcon* q_abstractprintdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QAbstractPrintDialog* self, const char* windowIconText ```
void q_abstractprintdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QAbstractPrintDialog* self ```
const char* q_abstractprintdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QAbstractPrintDialog* self, const char* windowRole ```
void q_abstractprintdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QAbstractPrintDialog* self ```
const char* q_abstractprintdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QAbstractPrintDialog* self, const char* filePath ```
void q_abstractprintdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QAbstractPrintDialog* self ```
const char* q_abstractprintdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QAbstractPrintDialog* self, double level ```
void q_abstractprintdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QAbstractPrintDialog* self ```
double q_abstractprintdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QAbstractPrintDialog* self, const char* toolTip ```
void q_abstractprintdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QAbstractPrintDialog* self ```
const char* q_abstractprintdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QAbstractPrintDialog* self, int msec ```
void q_abstractprintdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QAbstractPrintDialog* self, const char* statusTip ```
void q_abstractprintdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QAbstractPrintDialog* self ```
const char* q_abstractprintdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QAbstractPrintDialog* self, const char* whatsThis ```
void q_abstractprintdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QAbstractPrintDialog* self ```
const char* q_abstractprintdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QAbstractPrintDialog* self ```
const char* q_abstractprintdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QAbstractPrintDialog* self, const char* name ```
void q_abstractprintdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QAbstractPrintDialog* self ```
const char* q_abstractprintdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QAbstractPrintDialog* self, const char* description ```
void q_abstractprintdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QAbstractPrintDialog* self, enum Qt__LayoutDirection direction ```
void q_abstractprintdialog_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QAbstractPrintDialog* self ```
int64_t q_abstractprintdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QAbstractPrintDialog* self, QLocale* locale ```
void q_abstractprintdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QAbstractPrintDialog* self ```
QLocale* q_abstractprintdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QAbstractPrintDialog* self, enum Qt__FocusReason reason ```
void q_abstractprintdialog_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QAbstractPrintDialog* self ```
int64_t q_abstractprintdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QAbstractPrintDialog* self, enum Qt__FocusPolicy policy ```
void q_abstractprintdialog_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_abstractprintdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QAbstractPrintDialog* self, QWidget* focusProxy ```
void q_abstractprintdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QAbstractPrintDialog* self ```
QWidget* q_abstractprintdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QAbstractPrintDialog* self ```
int64_t q_abstractprintdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QAbstractPrintDialog* self, enum Qt__ContextMenuPolicy policy ```
void q_abstractprintdialog_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QAbstractPrintDialog* self, QCursor* param1 ```
void q_abstractprintdialog_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QAbstractPrintDialog* self, QKeySequence* key ```
int32_t q_abstractprintdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QAbstractPrintDialog* self, int id ```
void q_abstractprintdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QAbstractPrintDialog* self, int id ```
void q_abstractprintdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QAbstractPrintDialog* self, int id ```
void q_abstractprintdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_abstractprintdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_abstractprintdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QAbstractPrintDialog* self, bool enable ```
void q_abstractprintdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QAbstractPrintDialog* self ```
QGraphicsProxyWidget* q_abstractprintdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractPrintDialog* self, int x, int y, int w, int h ```
void q_abstractprintdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractPrintDialog* self, QRect* param1 ```
void q_abstractprintdialog_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractPrintDialog* self, QRegion* param1 ```
void q_abstractprintdialog_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractPrintDialog* self, int x, int y, int w, int h ```
void q_abstractprintdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractPrintDialog* self, QRect* param1 ```
void q_abstractprintdialog_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractPrintDialog* self, QRegion* param1 ```
void q_abstractprintdialog_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QAbstractPrintDialog* self, bool hidden ```
void q_abstractprintdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QAbstractPrintDialog* self, QWidget* param1 ```
void q_abstractprintdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QAbstractPrintDialog* self, int x, int y ```
void q_abstractprintdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QAbstractPrintDialog* self, QPoint* param1 ```
void q_abstractprintdialog_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QAbstractPrintDialog* self, int w, int h ```
void q_abstractprintdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QAbstractPrintDialog* self, QSize* param1 ```
void q_abstractprintdialog_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QAbstractPrintDialog* self, int x, int y, int w, int h ```
void q_abstractprintdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QAbstractPrintDialog* self, QRect* geometry ```
void q_abstractprintdialog_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QAbstractPrintDialog* self ```
char* q_abstractprintdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QAbstractPrintDialog* self, const char* geometry ```
bool q_abstractprintdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QAbstractPrintDialog* self, QWidget* param1 ```
bool q_abstractprintdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QAbstractPrintDialog* self ```
int64_t q_abstractprintdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QAbstractPrintDialog* self, int state ```
void q_abstractprintdialog_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QAbstractPrintDialog* self, int state ```
void q_abstractprintdialog_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QAbstractPrintDialog* self ```
QSizePolicy* q_abstractprintdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QAbstractPrintDialog* self, QSizePolicy* sizePolicy ```
void q_abstractprintdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QAbstractPrintDialog* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_abstractprintdialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QAbstractPrintDialog* self ```
QRegion* q_abstractprintdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QAbstractPrintDialog* self, int left, int top, int right, int bottom ```
void q_abstractprintdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QAbstractPrintDialog* self, QMargins* margins ```
void q_abstractprintdialog_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QAbstractPrintDialog* self ```
QMargins* q_abstractprintdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QAbstractPrintDialog* self ```
QRect* q_abstractprintdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QAbstractPrintDialog* self ```
QLayout* q_abstractprintdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QAbstractPrintDialog* self, QLayout* layout ```
void q_abstractprintdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QAbstractPrintDialog* self, QWidget* parent ```
void q_abstractprintdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QAbstractPrintDialog* self, QWidget* parent, int f ```
void q_abstractprintdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QAbstractPrintDialog* self, int dx, int dy ```
void q_abstractprintdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QAbstractPrintDialog* self, int dx, int dy, QRect* param3 ```
void q_abstractprintdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QAbstractPrintDialog* self ```
QWidget* q_abstractprintdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QAbstractPrintDialog* self ```
QWidget* q_abstractprintdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QAbstractPrintDialog* self ```
QWidget* q_abstractprintdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QAbstractPrintDialog* self, bool on ```
void q_abstractprintdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractPrintDialog* self, QAction* action ```
void q_abstractprintdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QAbstractPrintDialog* self, QAction* actions[] ```
void q_abstractprintdialog_add_actions(void* self, void* actions[]) {
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
/// ``` QAbstractPrintDialog* self, QAction* before, QAction* actions[] ```
void q_abstractprintdialog_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QAbstractPrintDialog* self, QAction* before, QAction* action ```
void q_abstractprintdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QAbstractPrintDialog* self, QAction* action ```
void q_abstractprintdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QAbstractPrintDialog* self ```
libqt_list /* of QAction* */ q_abstractprintdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractPrintDialog* self, const char* text ```
QAction* q_abstractprintdialog_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractPrintDialog* self, QIcon* icon, const char* text ```
QAction* q_abstractprintdialog_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractPrintDialog* self, const char* text, QKeySequence* shortcut ```
QAction* q_abstractprintdialog_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractPrintDialog* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_abstractprintdialog_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QAbstractPrintDialog* self ```
QWidget* q_abstractprintdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QAbstractPrintDialog* self, int typeVal ```
void q_abstractprintdialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QAbstractPrintDialog* self ```
int64_t q_abstractprintdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QAbstractPrintDialog* self, enum Qt__WindowType param1 ```
void q_abstractprintdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QAbstractPrintDialog* self, int typeVal ```
void q_abstractprintdialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QAbstractPrintDialog* self ```
int64_t q_abstractprintdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_abstractprintdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QAbstractPrintDialog* self, int x, int y ```
QWidget* q_abstractprintdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QAbstractPrintDialog* self, QPoint* p ```
QWidget* q_abstractprintdialog_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QAbstractPrintDialog* self, enum Qt__WidgetAttribute param1 ```
void q_abstractprintdialog_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QAbstractPrintDialog* self, enum Qt__WidgetAttribute param1 ```
bool q_abstractprintdialog_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QAbstractPrintDialog* self, QWidget* child ```
bool q_abstractprintdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QAbstractPrintDialog* self, bool enabled ```
void q_abstractprintdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QAbstractPrintDialog* self ```
QBackingStore* q_abstractprintdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QAbstractPrintDialog* self ```
QWindow* q_abstractprintdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QAbstractPrintDialog* self ```
QScreen* q_abstractprintdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QAbstractPrintDialog* self, QScreen* screen ```
void q_abstractprintdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_abstractprintdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QAbstractPrintDialog* self, const char* title ```
void q_abstractprintdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QWidget*, const char*) ```
void q_abstractprintdialog_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QAbstractPrintDialog* self, QIcon* icon ```
void q_abstractprintdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QWidget*, QIcon*) ```
void q_abstractprintdialog_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QAbstractPrintDialog* self, const char* iconText ```
void q_abstractprintdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QWidget*, const char*) ```
void q_abstractprintdialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QAbstractPrintDialog* self, QPoint* pos ```
void q_abstractprintdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QWidget*, QPoint*) ```
void q_abstractprintdialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QAbstractPrintDialog* self ```
int64_t q_abstractprintdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QAbstractPrintDialog* self, int hints ```
void q_abstractprintdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractPrintDialog* self, QPaintDevice* target, QPoint* targetOffset ```
void q_abstractprintdialog_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractPrintDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_abstractprintdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractPrintDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_abstractprintdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractPrintDialog* self, QPainter* painter, QPoint* targetOffset ```
void q_abstractprintdialog_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractPrintDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_abstractprintdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractPrintDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_abstractprintdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QAbstractPrintDialog* self, QRect* rectangle ```
QPixmap* q_abstractprintdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QAbstractPrintDialog* self, enum Qt__GestureType typeVal, int flags ```
void q_abstractprintdialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QAbstractPrintDialog* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_abstractprintdialog_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QAbstractPrintDialog* self, int id, bool enable ```
void q_abstractprintdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QAbstractPrintDialog* self, int id, bool enable ```
void q_abstractprintdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QAbstractPrintDialog* self, enum Qt__WindowType param1, bool on ```
void q_abstractprintdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QAbstractPrintDialog* self, enum Qt__WidgetAttribute param1, bool on ```
void q_abstractprintdialog_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_abstractprintdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_abstractprintdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractPrintDialog* self ```
const char* q_abstractprintdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractPrintDialog* self, const char* name ```
void q_abstractprintdialog_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractPrintDialog* self, bool b ```
bool q_abstractprintdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractPrintDialog* self ```
QThread* q_abstractprintdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractPrintDialog* self, QThread* thread ```
void q_abstractprintdialog_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractPrintDialog* self, int interval ```
int32_t q_abstractprintdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractPrintDialog* self, int id ```
void q_abstractprintdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractPrintDialog* self ```
libqt_list /* of QObject* */ q_abstractprintdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractPrintDialog* self, QObject* filterObj ```
void q_abstractprintdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractPrintDialog* self, QObject* obj ```
void q_abstractprintdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractprintdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractPrintDialog* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractprintdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractprintdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractprintdialog_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractPrintDialog* self, const char* name, QVariant* value ```
bool q_abstractprintdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractPrintDialog* self, const char* name ```
QVariant* q_abstractprintdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractPrintDialog* self ```
const char** q_abstractprintdialog_dynamic_property_names(void* self) {
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
/// ``` QAbstractPrintDialog* self ```
QBindingStorage* q_abstractprintdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractPrintDialog* self ```
QBindingStorage* q_abstractprintdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QObject*) ```
void q_abstractprintdialog_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractPrintDialog* self ```
QObject* q_abstractprintdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractPrintDialog* self, const char* classname ```
bool q_abstractprintdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractPrintDialog* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractprintdialog_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractprintdialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractPrintDialog* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractprintdialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractPrintDialog* self, QObject* param1 ```
void q_abstractprintdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QObject*, QObject*) ```
void q_abstractprintdialog_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QAbstractPrintDialog* self ```
double q_abstractprintdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QAbstractPrintDialog* self ```
double q_abstractprintdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_abstractprintdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, bool visible ```
void q_abstractprintdialog_set_visible(void* self, bool visible) {
    QAbstractPrintDialog_SetVisible((QAbstractPrintDialog*)self, visible);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, bool visible ```
void q_abstractprintdialog_qbase_set_visible(void* self, bool visible) {
    QAbstractPrintDialog_QBaseSetVisible((QAbstractPrintDialog*)self, visible);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, bool) ```
void q_abstractprintdialog_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QAbstractPrintDialog_OnSetVisible((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
QSize* q_abstractprintdialog_size_hint(void* self) {
    return QAbstractPrintDialog_SizeHint((QAbstractPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
QSize* q_abstractprintdialog_qbase_size_hint(void* self) {
    return QAbstractPrintDialog_QBaseSizeHint((QAbstractPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QSize* (*slot)() ```
void q_abstractprintdialog_on_size_hint(void* self, QSize* (*slot)()) {
    QAbstractPrintDialog_OnSizeHint((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
QSize* q_abstractprintdialog_minimum_size_hint(void* self) {
    return QAbstractPrintDialog_MinimumSizeHint((QAbstractPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
QSize* q_abstractprintdialog_qbase_minimum_size_hint(void* self) {
    return QAbstractPrintDialog_QBaseMinimumSizeHint((QAbstractPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QSize* (*slot)() ```
void q_abstractprintdialog_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QAbstractPrintDialog_OnMinimumSizeHint((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_open(void* self) {
    QAbstractPrintDialog_Open((QAbstractPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_qbase_open(void* self) {
    QAbstractPrintDialog_QBaseOpen((QAbstractPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)() ```
void q_abstractprintdialog_on_open(void* self, void (*slot)()) {
    QAbstractPrintDialog_OnOpen((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_exec(void* self) {
    return QAbstractPrintDialog_Exec((QAbstractPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_qbase_exec(void* self) {
    return QAbstractPrintDialog_QBaseExec((QAbstractPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, int32_t (*slot)() ```
void q_abstractprintdialog_on_exec(void* self, int32_t (*slot)()) {
    QAbstractPrintDialog_OnExec((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, int param1 ```
void q_abstractprintdialog_done(void* self, int param1) {
    QAbstractPrintDialog_Done((QAbstractPrintDialog*)self, param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, int param1 ```
void q_abstractprintdialog_qbase_done(void* self, int param1) {
    QAbstractPrintDialog_QBaseDone((QAbstractPrintDialog*)self, param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, int) ```
void q_abstractprintdialog_on_done(void* self, void (*slot)(void*, int)) {
    QAbstractPrintDialog_OnDone((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_accept(void* self) {
    QAbstractPrintDialog_Accept((QAbstractPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_qbase_accept(void* self) {
    QAbstractPrintDialog_QBaseAccept((QAbstractPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)() ```
void q_abstractprintdialog_on_accept(void* self, void (*slot)()) {
    QAbstractPrintDialog_OnAccept((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_reject(void* self) {
    QAbstractPrintDialog_Reject((QAbstractPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_qbase_reject(void* self) {
    QAbstractPrintDialog_QBaseReject((QAbstractPrintDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)() ```
void q_abstractprintdialog_on_reject(void* self, void (*slot)()) {
    QAbstractPrintDialog_OnReject((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QKeyEvent* param1 ```
void q_abstractprintdialog_key_press_event(void* self, void* param1) {
    QAbstractPrintDialog_KeyPressEvent((QAbstractPrintDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QKeyEvent* param1 ```
void q_abstractprintdialog_qbase_key_press_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseKeyPressEvent((QAbstractPrintDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QKeyEvent*) ```
void q_abstractprintdialog_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnKeyPressEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QCloseEvent* param1 ```
void q_abstractprintdialog_close_event(void* self, void* param1) {
    QAbstractPrintDialog_CloseEvent((QAbstractPrintDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QCloseEvent* param1 ```
void q_abstractprintdialog_qbase_close_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseCloseEvent((QAbstractPrintDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QCloseEvent*) ```
void q_abstractprintdialog_on_close_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnCloseEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QShowEvent* param1 ```
void q_abstractprintdialog_show_event(void* self, void* param1) {
    QAbstractPrintDialog_ShowEvent((QAbstractPrintDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QShowEvent* param1 ```
void q_abstractprintdialog_qbase_show_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseShowEvent((QAbstractPrintDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QShowEvent*) ```
void q_abstractprintdialog_on_show_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnShowEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QResizeEvent* param1 ```
void q_abstractprintdialog_resize_event(void* self, void* param1) {
    QAbstractPrintDialog_ResizeEvent((QAbstractPrintDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QResizeEvent* param1 ```
void q_abstractprintdialog_qbase_resize_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseResizeEvent((QAbstractPrintDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QResizeEvent*) ```
void q_abstractprintdialog_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnResizeEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QContextMenuEvent* param1 ```
void q_abstractprintdialog_context_menu_event(void* self, void* param1) {
    QAbstractPrintDialog_ContextMenuEvent((QAbstractPrintDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QContextMenuEvent* param1 ```
void q_abstractprintdialog_qbase_context_menu_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseContextMenuEvent((QAbstractPrintDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QContextMenuEvent*) ```
void q_abstractprintdialog_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnContextMenuEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QObject* param1, QEvent* param2 ```
bool q_abstractprintdialog_event_filter(void* self, void* param1, void* param2) {
    return QAbstractPrintDialog_EventFilter((QAbstractPrintDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QObject* param1, QEvent* param2 ```
bool q_abstractprintdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QAbstractPrintDialog_QBaseEventFilter((QAbstractPrintDialog*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, bool (*slot)(QAbstractPrintDialog*, QObject*, QEvent*) ```
void q_abstractprintdialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractPrintDialog_OnEventFilter((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_dev_type(void* self) {
    return QAbstractPrintDialog_DevType((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_qbase_dev_type(void* self) {
    return QAbstractPrintDialog_QBaseDevType((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, int32_t (*slot)() ```
void q_abstractprintdialog_on_dev_type(void* self, int32_t (*slot)()) {
    QAbstractPrintDialog_OnDevType((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, int param1 ```
int32_t q_abstractprintdialog_height_for_width(void* self, int param1) {
    return QAbstractPrintDialog_HeightForWidth((QAbstractPrintDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, int param1 ```
int32_t q_abstractprintdialog_qbase_height_for_width(void* self, int param1) {
    return QAbstractPrintDialog_QBaseHeightForWidth((QAbstractPrintDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, int32_t (*slot)(QAbstractPrintDialog*, int) ```
void q_abstractprintdialog_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QAbstractPrintDialog_OnHeightForWidth((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_has_height_for_width(void* self) {
    return QAbstractPrintDialog_HasHeightForWidth((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_qbase_has_height_for_width(void* self) {
    return QAbstractPrintDialog_QBaseHasHeightForWidth((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, bool (*slot)() ```
void q_abstractprintdialog_on_has_height_for_width(void* self, bool (*slot)()) {
    QAbstractPrintDialog_OnHasHeightForWidth((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
QPaintEngine* q_abstractprintdialog_paint_engine(void* self) {
    return QAbstractPrintDialog_PaintEngine((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
QPaintEngine* q_abstractprintdialog_qbase_paint_engine(void* self) {
    return QAbstractPrintDialog_QBasePaintEngine((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QPaintEngine* (*slot)() ```
void q_abstractprintdialog_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QAbstractPrintDialog_OnPaintEngine((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QEvent* event ```
bool q_abstractprintdialog_event(void* self, void* event) {
    return QAbstractPrintDialog_Event((QAbstractPrintDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QEvent* event ```
bool q_abstractprintdialog_qbase_event(void* self, void* event) {
    return QAbstractPrintDialog_QBaseEvent((QAbstractPrintDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, bool (*slot)(QAbstractPrintDialog*, QEvent*) ```
void q_abstractprintdialog_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMouseEvent* event ```
void q_abstractprintdialog_mouse_press_event(void* self, void* event) {
    QAbstractPrintDialog_MousePressEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMouseEvent* event ```
void q_abstractprintdialog_qbase_mouse_press_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseMousePressEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QMouseEvent*) ```
void q_abstractprintdialog_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnMousePressEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMouseEvent* event ```
void q_abstractprintdialog_mouse_release_event(void* self, void* event) {
    QAbstractPrintDialog_MouseReleaseEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMouseEvent* event ```
void q_abstractprintdialog_qbase_mouse_release_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseMouseReleaseEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QMouseEvent*) ```
void q_abstractprintdialog_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnMouseReleaseEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMouseEvent* event ```
void q_abstractprintdialog_mouse_double_click_event(void* self, void* event) {
    QAbstractPrintDialog_MouseDoubleClickEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMouseEvent* event ```
void q_abstractprintdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseMouseDoubleClickEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QMouseEvent*) ```
void q_abstractprintdialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnMouseDoubleClickEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMouseEvent* event ```
void q_abstractprintdialog_mouse_move_event(void* self, void* event) {
    QAbstractPrintDialog_MouseMoveEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMouseEvent* event ```
void q_abstractprintdialog_qbase_mouse_move_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseMouseMoveEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QMouseEvent*) ```
void q_abstractprintdialog_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnMouseMoveEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QWheelEvent* event ```
void q_abstractprintdialog_wheel_event(void* self, void* event) {
    QAbstractPrintDialog_WheelEvent((QAbstractPrintDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QWheelEvent* event ```
void q_abstractprintdialog_qbase_wheel_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseWheelEvent((QAbstractPrintDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QWheelEvent*) ```
void q_abstractprintdialog_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnWheelEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QKeyEvent* event ```
void q_abstractprintdialog_key_release_event(void* self, void* event) {
    QAbstractPrintDialog_KeyReleaseEvent((QAbstractPrintDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QKeyEvent* event ```
void q_abstractprintdialog_qbase_key_release_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseKeyReleaseEvent((QAbstractPrintDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QKeyEvent*) ```
void q_abstractprintdialog_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnKeyReleaseEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QFocusEvent* event ```
void q_abstractprintdialog_focus_in_event(void* self, void* event) {
    QAbstractPrintDialog_FocusInEvent((QAbstractPrintDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QFocusEvent* event ```
void q_abstractprintdialog_qbase_focus_in_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseFocusInEvent((QAbstractPrintDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QFocusEvent*) ```
void q_abstractprintdialog_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnFocusInEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QFocusEvent* event ```
void q_abstractprintdialog_focus_out_event(void* self, void* event) {
    QAbstractPrintDialog_FocusOutEvent((QAbstractPrintDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QFocusEvent* event ```
void q_abstractprintdialog_qbase_focus_out_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseFocusOutEvent((QAbstractPrintDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QFocusEvent*) ```
void q_abstractprintdialog_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnFocusOutEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QEnterEvent* event ```
void q_abstractprintdialog_enter_event(void* self, void* event) {
    QAbstractPrintDialog_EnterEvent((QAbstractPrintDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QEnterEvent* event ```
void q_abstractprintdialog_qbase_enter_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseEnterEvent((QAbstractPrintDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QEnterEvent*) ```
void q_abstractprintdialog_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnEnterEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QEvent* event ```
void q_abstractprintdialog_leave_event(void* self, void* event) {
    QAbstractPrintDialog_LeaveEvent((QAbstractPrintDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QEvent* event ```
void q_abstractprintdialog_qbase_leave_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseLeaveEvent((QAbstractPrintDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QEvent*) ```
void q_abstractprintdialog_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnLeaveEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QPaintEvent* event ```
void q_abstractprintdialog_paint_event(void* self, void* event) {
    QAbstractPrintDialog_PaintEvent((QAbstractPrintDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QPaintEvent* event ```
void q_abstractprintdialog_qbase_paint_event(void* self, void* event) {
    QAbstractPrintDialog_QBasePaintEvent((QAbstractPrintDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QPaintEvent*) ```
void q_abstractprintdialog_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnPaintEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMoveEvent* event ```
void q_abstractprintdialog_move_event(void* self, void* event) {
    QAbstractPrintDialog_MoveEvent((QAbstractPrintDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMoveEvent* event ```
void q_abstractprintdialog_qbase_move_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseMoveEvent((QAbstractPrintDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QMoveEvent*) ```
void q_abstractprintdialog_on_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnMoveEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QTabletEvent* event ```
void q_abstractprintdialog_tablet_event(void* self, void* event) {
    QAbstractPrintDialog_TabletEvent((QAbstractPrintDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QTabletEvent* event ```
void q_abstractprintdialog_qbase_tablet_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseTabletEvent((QAbstractPrintDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QTabletEvent*) ```
void q_abstractprintdialog_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnTabletEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QActionEvent* event ```
void q_abstractprintdialog_action_event(void* self, void* event) {
    QAbstractPrintDialog_ActionEvent((QAbstractPrintDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QActionEvent* event ```
void q_abstractprintdialog_qbase_action_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseActionEvent((QAbstractPrintDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QActionEvent*) ```
void q_abstractprintdialog_on_action_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnActionEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QDragEnterEvent* event ```
void q_abstractprintdialog_drag_enter_event(void* self, void* event) {
    QAbstractPrintDialog_DragEnterEvent((QAbstractPrintDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QDragEnterEvent* event ```
void q_abstractprintdialog_qbase_drag_enter_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseDragEnterEvent((QAbstractPrintDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QDragEnterEvent*) ```
void q_abstractprintdialog_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnDragEnterEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QDragMoveEvent* event ```
void q_abstractprintdialog_drag_move_event(void* self, void* event) {
    QAbstractPrintDialog_DragMoveEvent((QAbstractPrintDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QDragMoveEvent* event ```
void q_abstractprintdialog_qbase_drag_move_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseDragMoveEvent((QAbstractPrintDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QDragMoveEvent*) ```
void q_abstractprintdialog_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnDragMoveEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QDragLeaveEvent* event ```
void q_abstractprintdialog_drag_leave_event(void* self, void* event) {
    QAbstractPrintDialog_DragLeaveEvent((QAbstractPrintDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QDragLeaveEvent* event ```
void q_abstractprintdialog_qbase_drag_leave_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseDragLeaveEvent((QAbstractPrintDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QDragLeaveEvent*) ```
void q_abstractprintdialog_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnDragLeaveEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QDropEvent* event ```
void q_abstractprintdialog_drop_event(void* self, void* event) {
    QAbstractPrintDialog_DropEvent((QAbstractPrintDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QDropEvent* event ```
void q_abstractprintdialog_qbase_drop_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseDropEvent((QAbstractPrintDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QDropEvent*) ```
void q_abstractprintdialog_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnDropEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QHideEvent* event ```
void q_abstractprintdialog_hide_event(void* self, void* event) {
    QAbstractPrintDialog_HideEvent((QAbstractPrintDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QHideEvent* event ```
void q_abstractprintdialog_qbase_hide_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseHideEvent((QAbstractPrintDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QHideEvent*) ```
void q_abstractprintdialog_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnHideEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractprintdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractPrintDialog_NativeEvent((QAbstractPrintDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractprintdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractPrintDialog_QBaseNativeEvent((QAbstractPrintDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, bool (*slot)(QAbstractPrintDialog*, const char*, void*, intptr_t*) ```
void q_abstractprintdialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QAbstractPrintDialog_OnNativeEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QEvent* param1 ```
void q_abstractprintdialog_change_event(void* self, void* param1) {
    QAbstractPrintDialog_ChangeEvent((QAbstractPrintDialog*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QEvent* param1 ```
void q_abstractprintdialog_qbase_change_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseChangeEvent((QAbstractPrintDialog*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QEvent*) ```
void q_abstractprintdialog_on_change_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnChangeEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_abstractprintdialog_metric(void* self, int64_t param1) {
    return QAbstractPrintDialog_Metric((QAbstractPrintDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_abstractprintdialog_qbase_metric(void* self, int64_t param1) {
    return QAbstractPrintDialog_QBaseMetric((QAbstractPrintDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, int32_t (*slot)(QAbstractPrintDialog*, enum QPaintDevice__PaintDeviceMetric) ```
void q_abstractprintdialog_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QAbstractPrintDialog_OnMetric((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QPainter* painter ```
void q_abstractprintdialog_init_painter(void* self, void* painter) {
    QAbstractPrintDialog_InitPainter((QAbstractPrintDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QPainter* painter ```
void q_abstractprintdialog_qbase_init_painter(void* self, void* painter) {
    QAbstractPrintDialog_QBaseInitPainter((QAbstractPrintDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QPainter*) ```
void q_abstractprintdialog_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnInitPainter((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QPoint* offset ```
QPaintDevice* q_abstractprintdialog_redirected(void* self, void* offset) {
    return QAbstractPrintDialog_Redirected((QAbstractPrintDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QPoint* offset ```
QPaintDevice* q_abstractprintdialog_qbase_redirected(void* self, void* offset) {
    return QAbstractPrintDialog_QBaseRedirected((QAbstractPrintDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QPaintDevice* (*slot)(QAbstractPrintDialog*, QPoint*) ```
void q_abstractprintdialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnRedirected((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
QPainter* q_abstractprintdialog_shared_painter(void* self) {
    return QAbstractPrintDialog_SharedPainter((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
QPainter* q_abstractprintdialog_qbase_shared_painter(void* self) {
    return QAbstractPrintDialog_QBaseSharedPainter((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QPainter* (*slot)() ```
void q_abstractprintdialog_on_shared_painter(void* self, QPainter* (*slot)()) {
    QAbstractPrintDialog_OnSharedPainter((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QInputMethodEvent* param1 ```
void q_abstractprintdialog_input_method_event(void* self, void* param1) {
    QAbstractPrintDialog_InputMethodEvent((QAbstractPrintDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QInputMethodEvent* param1 ```
void q_abstractprintdialog_qbase_input_method_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseInputMethodEvent((QAbstractPrintDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QInputMethodEvent*) ```
void q_abstractprintdialog_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnInputMethodEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_abstractprintdialog_input_method_query(void* self, int64_t param1) {
    return QAbstractPrintDialog_InputMethodQuery((QAbstractPrintDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_abstractprintdialog_qbase_input_method_query(void* self, int64_t param1) {
    return QAbstractPrintDialog_QBaseInputMethodQuery((QAbstractPrintDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QVariant* (*slot)(QAbstractPrintDialog*, enum Qt__InputMethodQuery) ```
void q_abstractprintdialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QAbstractPrintDialog_OnInputMethodQuery((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, bool next ```
bool q_abstractprintdialog_focus_next_prev_child(void* self, bool next) {
    return QAbstractPrintDialog_FocusNextPrevChild((QAbstractPrintDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, bool next ```
bool q_abstractprintdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QAbstractPrintDialog_QBaseFocusNextPrevChild((QAbstractPrintDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, bool (*slot)(QAbstractPrintDialog*, bool) ```
void q_abstractprintdialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QAbstractPrintDialog_OnFocusNextPrevChild((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QTimerEvent* event ```
void q_abstractprintdialog_timer_event(void* self, void* event) {
    QAbstractPrintDialog_TimerEvent((QAbstractPrintDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QTimerEvent* event ```
void q_abstractprintdialog_qbase_timer_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseTimerEvent((QAbstractPrintDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QTimerEvent*) ```
void q_abstractprintdialog_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnTimerEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QChildEvent* event ```
void q_abstractprintdialog_child_event(void* self, void* event) {
    QAbstractPrintDialog_ChildEvent((QAbstractPrintDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QChildEvent* event ```
void q_abstractprintdialog_qbase_child_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseChildEvent((QAbstractPrintDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QChildEvent*) ```
void q_abstractprintdialog_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnChildEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QEvent* event ```
void q_abstractprintdialog_custom_event(void* self, void* event) {
    QAbstractPrintDialog_CustomEvent((QAbstractPrintDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QEvent* event ```
void q_abstractprintdialog_qbase_custom_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseCustomEvent((QAbstractPrintDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QEvent*) ```
void q_abstractprintdialog_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnCustomEvent((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMetaMethod* signal ```
void q_abstractprintdialog_connect_notify(void* self, void* signal) {
    QAbstractPrintDialog_ConnectNotify((QAbstractPrintDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMetaMethod* signal ```
void q_abstractprintdialog_qbase_connect_notify(void* self, void* signal) {
    QAbstractPrintDialog_QBaseConnectNotify((QAbstractPrintDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QMetaMethod*) ```
void q_abstractprintdialog_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnConnectNotify((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMetaMethod* signal ```
void q_abstractprintdialog_disconnect_notify(void* self, void* signal) {
    QAbstractPrintDialog_DisconnectNotify((QAbstractPrintDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMetaMethod* signal ```
void q_abstractprintdialog_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractPrintDialog_QBaseDisconnectNotify((QAbstractPrintDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QMetaMethod*) ```
void q_abstractprintdialog_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnDisconnectNotify((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QWidget* param1 ```
void q_abstractprintdialog_adjust_position(void* self, void* param1) {
    QAbstractPrintDialog_AdjustPosition((QAbstractPrintDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QWidget* param1 ```
void q_abstractprintdialog_qbase_adjust_position(void* self, void* param1) {
    QAbstractPrintDialog_QBaseAdjustPosition((QAbstractPrintDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)(QAbstractPrintDialog*, QWidget*) ```
void q_abstractprintdialog_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnAdjustPosition((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_update_micro_focus(void* self) {
    QAbstractPrintDialog_UpdateMicroFocus((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_qbase_update_micro_focus(void* self) {
    QAbstractPrintDialog_QBaseUpdateMicroFocus((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)() ```
void q_abstractprintdialog_on_update_micro_focus(void* self, void (*slot)()) {
    QAbstractPrintDialog_OnUpdateMicroFocus((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_create(void* self) {
    QAbstractPrintDialog_Create((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_qbase_create(void* self) {
    QAbstractPrintDialog_QBaseCreate((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)() ```
void q_abstractprintdialog_on_create(void* self, void (*slot)()) {
    QAbstractPrintDialog_OnCreate((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_destroy(void* self) {
    QAbstractPrintDialog_Destroy((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_qbase_destroy(void* self) {
    QAbstractPrintDialog_QBaseDestroy((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, void (*slot)() ```
void q_abstractprintdialog_on_destroy(void* self, void (*slot)()) {
    QAbstractPrintDialog_OnDestroy((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_focus_next_child(void* self) {
    return QAbstractPrintDialog_FocusNextChild((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_qbase_focus_next_child(void* self) {
    return QAbstractPrintDialog_QBaseFocusNextChild((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, bool (*slot)() ```
void q_abstractprintdialog_on_focus_next_child(void* self, bool (*slot)()) {
    QAbstractPrintDialog_OnFocusNextChild((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_focus_previous_child(void* self) {
    return QAbstractPrintDialog_FocusPreviousChild((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
bool q_abstractprintdialog_qbase_focus_previous_child(void* self) {
    return QAbstractPrintDialog_QBaseFocusPreviousChild((QAbstractPrintDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, bool (*slot)() ```
void q_abstractprintdialog_on_focus_previous_child(void* self, bool (*slot)()) {
    QAbstractPrintDialog_OnFocusPreviousChild((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
QObject* q_abstractprintdialog_sender(void* self) {
    return QAbstractPrintDialog_Sender((QAbstractPrintDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
QObject* q_abstractprintdialog_qbase_sender(void* self) {
    return QAbstractPrintDialog_QBaseSender((QAbstractPrintDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QObject* (*slot)() ```
void q_abstractprintdialog_on_sender(void* self, QObject* (*slot)()) {
    QAbstractPrintDialog_OnSender((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_sender_signal_index(void* self) {
    return QAbstractPrintDialog_SenderSignalIndex((QAbstractPrintDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self ```
int32_t q_abstractprintdialog_qbase_sender_signal_index(void* self) {
    return QAbstractPrintDialog_QBaseSenderSignalIndex((QAbstractPrintDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, int32_t (*slot)() ```
void q_abstractprintdialog_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractPrintDialog_OnSenderSignalIndex((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, const char* signal ```
int32_t q_abstractprintdialog_receivers(void* self, const char* signal) {
    return QAbstractPrintDialog_Receivers((QAbstractPrintDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, const char* signal ```
int32_t q_abstractprintdialog_qbase_receivers(void* self, const char* signal) {
    return QAbstractPrintDialog_QBaseReceivers((QAbstractPrintDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, int32_t (*slot)(QAbstractPrintDialog*, const char*) ```
void q_abstractprintdialog_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractPrintDialog_OnReceivers((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMetaMethod* signal ```
bool q_abstractprintdialog_is_signal_connected(void* self, void* signal) {
    return QAbstractPrintDialog_IsSignalConnected((QAbstractPrintDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, QMetaMethod* signal ```
bool q_abstractprintdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractPrintDialog_QBaseIsSignalConnected((QAbstractPrintDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractPrintDialog* self, bool (*slot)(QAbstractPrintDialog*, QMetaMethod*) ```
void q_abstractprintdialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractPrintDialog_OnIsSignalConnected((QAbstractPrintDialog*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractPrintDialog* self ```
void q_abstractprintdialog_delete(void* self) {
    QAbstractPrintDialog_Delete((QAbstractPrintDialog*)(self));
}