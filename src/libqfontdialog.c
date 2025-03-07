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
#include "libqfontdialog.hpp"
#include "libqfontdialog.h"

/// https://doc.qt.io/qt-6/qfontdialog.html

/// q_fontdialog_new constructs a new QFontDialog object.
///
/// ``` QWidget* parent ```
QFontDialog* q_fontdialog_new(void* parent) {
    return QFontDialog_new((QWidget*)parent);
}

/// q_fontdialog_new2 constructs a new QFontDialog object.
///
///
QFontDialog* q_fontdialog_new2() {
    return QFontDialog_new2();
}

/// q_fontdialog_new3 constructs a new QFontDialog object.
///
/// ``` QFont* initial ```
QFontDialog* q_fontdialog_new3(void* initial) {
    return QFontDialog_new3((QFont*)initial);
}

/// q_fontdialog_new4 constructs a new QFontDialog object.
///
/// ``` QFont* initial, QWidget* parent ```
QFontDialog* q_fontdialog_new4(void* initial, void* parent) {
    return QFontDialog_new4((QFont*)initial, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFontDialog* self ```
QMetaObject* q_fontdialog_meta_object(void* self) {
    return QFontDialog_MetaObject((QFontDialog*)self);
}

/// ``` QFontDialog* self, const char* param1 ```
void* q_fontdialog_metacast(void* self, const char* param1) {
    return QFontDialog_Metacast((QFontDialog*)self, param1);
}

/// ``` QFontDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_fontdialog_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFontDialog_Metacall((QFontDialog*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QFontDialog* self, int32_t (*slot)(QFontDialog*, enum QMetaObject__Call, int, void*) ```
void q_fontdialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QFontDialog_OnMetacall((QFontDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFontDialog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_fontdialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFontDialog_QBaseMetacall((QFontDialog*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_fontdialog_tr(const char* s) {
    libqt_string _str = QFontDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#setCurrentFont)
///
/// ``` QFontDialog* self, QFont* font ```
void q_fontdialog_set_current_font(void* self, void* font) {
    QFontDialog_SetCurrentFont((QFontDialog*)self, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#currentFont)
///
/// ``` QFontDialog* self ```
QFont* q_fontdialog_current_font(void* self) {
    return QFontDialog_CurrentFont((QFontDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#selectedFont)
///
/// ``` QFontDialog* self ```
QFont* q_fontdialog_selected_font(void* self) {
    return QFontDialog_SelectedFont((QFontDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#setOption)
///
/// ``` QFontDialog* self, enum QFontDialog__FontDialogOption option ```
void q_fontdialog_set_option(void* self, int64_t option) {
    QFontDialog_SetOption((QFontDialog*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#testOption)
///
/// ``` QFontDialog* self, enum QFontDialog__FontDialogOption option ```
bool q_fontdialog_test_option(void* self, int64_t option) {
    return QFontDialog_TestOption((QFontDialog*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#setOptions)
///
/// ``` QFontDialog* self, int options ```
void q_fontdialog_set_options(void* self, int64_t options) {
    QFontDialog_SetOptions((QFontDialog*)self, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#options)
///
/// ``` QFontDialog* self ```
int64_t q_fontdialog_options(void* self) {
    return QFontDialog_Options((QFontDialog*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#setVisible)
///
/// ``` QFontDialog* self, bool visible ```
void q_fontdialog_set_visible(void* self, bool visible) {
    QFontDialog_SetVisible((QFontDialog*)self, visible);
}

/// Allows for overriding the related default method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, bool) ```
void q_fontdialog_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QFontDialog_OnSetVisible((QFontDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFontDialog* self, bool visible ```
void q_fontdialog_qbase_set_visible(void* self, bool visible) {
    QFontDialog_QBaseSetVisible((QFontDialog*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#getFont)
///
/// ``` bool* ok ```
QFont* q_fontdialog_get_font(bool* ok) {
    return QFontDialog_GetFont((bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#getFont)
///
/// ``` bool* ok, QFont* initial ```
QFont* q_fontdialog_get_font2(bool* ok, void* initial) {
    return QFontDialog_GetFont2((bool*)ok, (QFont*)initial);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#currentFontChanged)
///
/// ``` QFontDialog* self, QFont* font ```
void q_fontdialog_current_font_changed(void* self, void* font) {
    QFontDialog_CurrentFontChanged((QFontDialog*)self, (QFont*)font);
}

/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QFont*) ```
void q_fontdialog_on_current_font_changed(void* self, void (*slot)(void*, void*)) {
    QFontDialog_Connect_CurrentFontChanged((QFontDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#fontSelected)
///
/// ``` QFontDialog* self, QFont* font ```
void q_fontdialog_font_selected(void* self, void* font) {
    QFontDialog_FontSelected((QFontDialog*)self, (QFont*)font);
}

/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QFont*) ```
void q_fontdialog_on_font_selected(void* self, void (*slot)(void*, void*)) {
    QFontDialog_Connect_FontSelected((QFontDialog*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#changeEvent)
///
/// ``` QFontDialog* self, QEvent* event ```
void q_fontdialog_change_event(void* self, void* event) {
    QFontDialog_ChangeEvent((QFontDialog*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QEvent*) ```
void q_fontdialog_on_change_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnChangeEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFontDialog* self, QEvent* event ```
void q_fontdialog_qbase_change_event(void* self, void* event) {
    QFontDialog_QBaseChangeEvent((QFontDialog*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#done)
///
/// ``` QFontDialog* self, int result ```
void q_fontdialog_done(void* self, int result) {
    QFontDialog_Done((QFontDialog*)self, result);
}

/// Allows for overriding the related default method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, int) ```
void q_fontdialog_on_done(void* self, void (*slot)(void*, int)) {
    QFontDialog_OnDone((QFontDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFontDialog* self, int result ```
void q_fontdialog_qbase_done(void* self, int result) {
    QFontDialog_QBaseDone((QFontDialog*)self, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#eventFilter)
///
/// ``` QFontDialog* self, QObject* object, QEvent* event ```
bool q_fontdialog_event_filter(void* self, void* object, void* event) {
    return QFontDialog_EventFilter((QFontDialog*)self, (QObject*)object, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QFontDialog* self, bool (*slot)(QFontDialog*, QObject*, QEvent*) ```
void q_fontdialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QFontDialog_OnEventFilter((QFontDialog*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFontDialog* self, QObject* object, QEvent* event ```
bool q_fontdialog_qbase_event_filter(void* self, void* object, void* event) {
    return QFontDialog_QBaseEventFilter((QFontDialog*)self, (QObject*)object, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_fontdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QFontDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_fontdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QFontDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#setOption)
///
/// ``` QFontDialog* self, enum QFontDialog__FontDialogOption option, bool on ```
void q_fontdialog_set_option2(void* self, int64_t option, bool on) {
    QFontDialog_SetOption2((QFontDialog*)self, option, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#getFont)
///
/// ``` bool* ok, QWidget* parent ```
QFont* q_fontdialog_get_font22(bool* ok, void* parent) {
    return QFontDialog_GetFont22((bool*)ok, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#getFont)
///
/// ``` bool* ok, QFont* initial, QWidget* parent ```
QFont* q_fontdialog_get_font3(bool* ok, void* initial, void* parent) {
    return QFontDialog_GetFont3((bool*)ok, (QFont*)initial, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#getFont)
///
/// ``` bool* ok, QFont* initial, QWidget* parent, const char* title ```
QFont* q_fontdialog_get_font4(bool* ok, void* initial, void* parent, const char* title) {
    return QFontDialog_GetFont4((bool*)ok, (QFont*)initial, (QWidget*)parent, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdialog.html#getFont)
///
/// ``` bool* ok, QFont* initial, QWidget* parent, const char* title, int options ```
QFont* q_fontdialog_get_font5(bool* ok, void* initial, void* parent, const char* title, int64_t options) {
    return QFontDialog_GetFont5((bool*)ok, (QFont*)initial, (QWidget*)parent, qstring(title), options);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QFontDialog* self, bool sizeGripEnabled ```
void q_fontdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QFontDialog* self, bool modal ```
void q_fontdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QFontDialog* self, int r ```
void q_fontdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QFontDialog* self, int result ```
void q_fontdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

/// Inherited from QDialog
///
/// ``` QFontDialog* self, void (*slot)(QDialog*, int) ```
void q_fontdialog_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QFontDialog* self ```
void q_fontdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QFontDialog* self, void (*slot)(QDialog*) ```
void q_fontdialog_on_accepted(void* self, void (*slot)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QFontDialog* self ```
void q_fontdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QFontDialog* self, void (*slot)(QDialog*) ```
void q_fontdialog_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QFontDialog* self ```
uintptr_t q_fontdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QFontDialog* self ```
void q_fontdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QFontDialog* self ```
uintptr_t q_fontdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QFontDialog* self ```
uintptr_t q_fontdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QFontDialog* self ```
QStyle* q_fontdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QFontDialog* self, QStyle* style ```
void q_fontdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QFontDialog* self ```
int64_t q_fontdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QFontDialog* self, enum Qt__WindowModality windowModality ```
void q_fontdialog_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QFontDialog* self, QWidget* param1 ```
bool q_fontdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QFontDialog* self, bool enabled ```
void q_fontdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QFontDialog* self, bool disabled ```
void q_fontdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QFontDialog* self, bool windowModified ```
void q_fontdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QFontDialog* self ```
QRect* q_fontdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QFontDialog* self ```
QRect* q_fontdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QFontDialog* self ```
QRect* q_fontdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QFontDialog* self ```
QPoint* q_fontdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QFontDialog* self ```
QSize* q_fontdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QFontDialog* self ```
QSize* q_fontdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QFontDialog* self ```
QRect* q_fontdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QFontDialog* self ```
QRect* q_fontdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QFontDialog* self ```
QRegion* q_fontdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QFontDialog* self ```
QSize* q_fontdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QFontDialog* self ```
QSize* q_fontdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QFontDialog* self, QSize* minimumSize ```
void q_fontdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QFontDialog* self, int minw, int minh ```
void q_fontdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QFontDialog* self, QSize* maximumSize ```
void q_fontdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QFontDialog* self, int maxw, int maxh ```
void q_fontdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QFontDialog* self, int minw ```
void q_fontdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QFontDialog* self, int minh ```
void q_fontdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QFontDialog* self, int maxw ```
void q_fontdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QFontDialog* self, int maxh ```
void q_fontdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QFontDialog* self ```
QSize* q_fontdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QFontDialog* self, QSize* sizeIncrement ```
void q_fontdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QFontDialog* self, int w, int h ```
void q_fontdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QFontDialog* self ```
QSize* q_fontdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QFontDialog* self, QSize* baseSize ```
void q_fontdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QFontDialog* self, int basew, int baseh ```
void q_fontdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QFontDialog* self, QSize* fixedSize ```
void q_fontdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QFontDialog* self, int w, int h ```
void q_fontdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QFontDialog* self, int w ```
void q_fontdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QFontDialog* self, int h ```
void q_fontdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QFontDialog* self, QPointF* param1 ```
QPointF* q_fontdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QFontDialog* self, QPoint* param1 ```
QPoint* q_fontdialog_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QFontDialog* self, QPointF* param1 ```
QPointF* q_fontdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QFontDialog* self, QPoint* param1 ```
QPoint* q_fontdialog_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QFontDialog* self, QPointF* param1 ```
QPointF* q_fontdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QFontDialog* self, QPoint* param1 ```
QPoint* q_fontdialog_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QFontDialog* self, QPointF* param1 ```
QPointF* q_fontdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QFontDialog* self, QPoint* param1 ```
QPoint* q_fontdialog_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QFontDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_fontdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QFontDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_fontdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QFontDialog* self, QWidget* param1, QPointF* param2 ```
QPointF* q_fontdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QFontDialog* self, QWidget* param1, QPoint* param2 ```
QPoint* q_fontdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QFontDialog* self ```
QWidget* q_fontdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QFontDialog* self ```
QWidget* q_fontdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QFontDialog* self ```
QWidget* q_fontdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QFontDialog* self ```
QPalette* q_fontdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QFontDialog* self, QPalette* palette ```
void q_fontdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QFontDialog* self, enum QPalette__ColorRole backgroundRole ```
void q_fontdialog_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QFontDialog* self ```
int64_t q_fontdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QFontDialog* self, enum QPalette__ColorRole foregroundRole ```
void q_fontdialog_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QFontDialog* self ```
int64_t q_fontdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QFontDialog* self ```
QFont* q_fontdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QFontDialog* self, QFont* font ```
void q_fontdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QFontDialog* self ```
QFontMetrics* q_fontdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QFontDialog* self ```
QFontInfo* q_fontdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QFontDialog* self ```
QCursor* q_fontdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QFontDialog* self, QCursor* cursor ```
void q_fontdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QFontDialog* self ```
void q_fontdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QFontDialog* self, bool enable ```
void q_fontdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QFontDialog* self, bool enable ```
void q_fontdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QFontDialog* self, QBitmap* mask ```
void q_fontdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QFontDialog* self, QRegion* mask ```
void q_fontdialog_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QFontDialog* self ```
QRegion* q_fontdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QFontDialog* self ```
void q_fontdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontDialog* self, QPaintDevice* target ```
void q_fontdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontDialog* self, QPainter* painter ```
void q_fontdialog_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QFontDialog* self ```
QPixmap* q_fontdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QFontDialog* self ```
QGraphicsEffect* q_fontdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QFontDialog* self, QGraphicsEffect* effect ```
void q_fontdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QFontDialog* self, enum Qt__GestureType typeVal ```
void q_fontdialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QFontDialog* self, enum Qt__GestureType typeVal ```
void q_fontdialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QFontDialog* self, const char* windowTitle ```
void q_fontdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QFontDialog* self, const char* styleSheet ```
void q_fontdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QFontDialog* self ```
const char* q_fontdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QFontDialog* self ```
const char* q_fontdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QFontDialog* self, QIcon* icon ```
void q_fontdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QFontDialog* self ```
QIcon* q_fontdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QFontDialog* self, const char* windowIconText ```
void q_fontdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QFontDialog* self ```
const char* q_fontdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QFontDialog* self, const char* windowRole ```
void q_fontdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QFontDialog* self ```
const char* q_fontdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QFontDialog* self, const char* filePath ```
void q_fontdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QFontDialog* self ```
const char* q_fontdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QFontDialog* self, double level ```
void q_fontdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QFontDialog* self ```
double q_fontdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QFontDialog* self, const char* toolTip ```
void q_fontdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QFontDialog* self ```
const char* q_fontdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QFontDialog* self, int msec ```
void q_fontdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QFontDialog* self, const char* statusTip ```
void q_fontdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QFontDialog* self ```
const char* q_fontdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QFontDialog* self, const char* whatsThis ```
void q_fontdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QFontDialog* self ```
const char* q_fontdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QFontDialog* self ```
const char* q_fontdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QFontDialog* self, const char* name ```
void q_fontdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QFontDialog* self ```
const char* q_fontdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QFontDialog* self, const char* description ```
void q_fontdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QFontDialog* self, enum Qt__LayoutDirection direction ```
void q_fontdialog_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QFontDialog* self ```
int64_t q_fontdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QFontDialog* self ```
void q_fontdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QFontDialog* self, QLocale* locale ```
void q_fontdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QFontDialog* self ```
QLocale* q_fontdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QFontDialog* self ```
void q_fontdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QFontDialog* self ```
void q_fontdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QFontDialog* self ```
void q_fontdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QFontDialog* self ```
void q_fontdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QFontDialog* self, enum Qt__FocusReason reason ```
void q_fontdialog_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QFontDialog* self ```
int64_t q_fontdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QFontDialog* self, enum Qt__FocusPolicy policy ```
void q_fontdialog_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_fontdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QFontDialog* self, QWidget* focusProxy ```
void q_fontdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QFontDialog* self ```
QWidget* q_fontdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QFontDialog* self ```
int64_t q_fontdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QFontDialog* self, enum Qt__ContextMenuPolicy policy ```
void q_fontdialog_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QFontDialog* self ```
void q_fontdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QFontDialog* self, QCursor* param1 ```
void q_fontdialog_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QFontDialog* self ```
void q_fontdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QFontDialog* self ```
void q_fontdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QFontDialog* self ```
void q_fontdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QFontDialog* self, QKeySequence* key ```
int32_t q_fontdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QFontDialog* self, int id ```
void q_fontdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QFontDialog* self, int id ```
void q_fontdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QFontDialog* self, int id ```
void q_fontdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_fontdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_fontdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QFontDialog* self, bool enable ```
void q_fontdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QFontDialog* self ```
QGraphicsProxyWidget* q_fontdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFontDialog* self ```
void q_fontdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFontDialog* self ```
void q_fontdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFontDialog* self, int x, int y, int w, int h ```
void q_fontdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFontDialog* self, QRect* param1 ```
void q_fontdialog_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFontDialog* self, QRegion* param1 ```
void q_fontdialog_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFontDialog* self, int x, int y, int w, int h ```
void q_fontdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFontDialog* self, QRect* param1 ```
void q_fontdialog_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFontDialog* self, QRegion* param1 ```
void q_fontdialog_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QFontDialog* self, bool hidden ```
void q_fontdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QFontDialog* self ```
void q_fontdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QFontDialog* self ```
void q_fontdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QFontDialog* self ```
void q_fontdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QFontDialog* self ```
void q_fontdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QFontDialog* self ```
void q_fontdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QFontDialog* self ```
void q_fontdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QFontDialog* self ```
void q_fontdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QFontDialog* self ```
void q_fontdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QFontDialog* self, QWidget* param1 ```
void q_fontdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QFontDialog* self, int x, int y ```
void q_fontdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QFontDialog* self, QPoint* param1 ```
void q_fontdialog_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QFontDialog* self, int w, int h ```
void q_fontdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QFontDialog* self, QSize* param1 ```
void q_fontdialog_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QFontDialog* self, int x, int y, int w, int h ```
void q_fontdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QFontDialog* self, QRect* geometry ```
void q_fontdialog_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QFontDialog* self ```
char* q_fontdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QFontDialog* self, const char* geometry ```
bool q_fontdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QFontDialog* self ```
void q_fontdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QFontDialog* self, QWidget* param1 ```
bool q_fontdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QFontDialog* self ```
int64_t q_fontdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QFontDialog* self, int state ```
void q_fontdialog_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QFontDialog* self, int state ```
void q_fontdialog_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QFontDialog* self ```
QSizePolicy* q_fontdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QFontDialog* self, QSizePolicy* sizePolicy ```
void q_fontdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QFontDialog* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_fontdialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QFontDialog* self ```
QRegion* q_fontdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QFontDialog* self, int left, int top, int right, int bottom ```
void q_fontdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QFontDialog* self, QMargins* margins ```
void q_fontdialog_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QFontDialog* self ```
QMargins* q_fontdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QFontDialog* self ```
QRect* q_fontdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QFontDialog* self ```
QLayout* q_fontdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QFontDialog* self, QLayout* layout ```
void q_fontdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QFontDialog* self ```
void q_fontdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QFontDialog* self, QWidget* parent ```
void q_fontdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QFontDialog* self, QWidget* parent, int f ```
void q_fontdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QFontDialog* self, int dx, int dy ```
void q_fontdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QFontDialog* self, int dx, int dy, QRect* param3 ```
void q_fontdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QFontDialog* self ```
QWidget* q_fontdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QFontDialog* self ```
QWidget* q_fontdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QFontDialog* self ```
QWidget* q_fontdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QFontDialog* self, bool on ```
void q_fontdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFontDialog* self, QAction* action ```
void q_fontdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QFontDialog* self, QAction* actions[] ```
void q_fontdialog_add_actions(void* self, void* actions[]) {
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
/// ``` QFontDialog* self, QAction* before, QAction* actions[] ```
void q_fontdialog_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QFontDialog* self, QAction* before, QAction* action ```
void q_fontdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QFontDialog* self, QAction* action ```
void q_fontdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QFontDialog* self ```
libqt_list /* of QAction* */ q_fontdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFontDialog* self, const char* text ```
QAction* q_fontdialog_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFontDialog* self, QIcon* icon, const char* text ```
QAction* q_fontdialog_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFontDialog* self, const char* text, QKeySequence* shortcut ```
QAction* q_fontdialog_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFontDialog* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_fontdialog_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QFontDialog* self ```
QWidget* q_fontdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QFontDialog* self, int typeVal ```
void q_fontdialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QFontDialog* self ```
int64_t q_fontdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QFontDialog* self, enum Qt__WindowType param1 ```
void q_fontdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QFontDialog* self, int typeVal ```
void q_fontdialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QFontDialog* self ```
int64_t q_fontdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_fontdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QFontDialog* self, int x, int y ```
QWidget* q_fontdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QFontDialog* self, QPoint* p ```
QWidget* q_fontdialog_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QFontDialog* self, enum Qt__WidgetAttribute param1 ```
void q_fontdialog_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QFontDialog* self, enum Qt__WidgetAttribute param1 ```
bool q_fontdialog_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QFontDialog* self ```
void q_fontdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QFontDialog* self, QWidget* child ```
bool q_fontdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QFontDialog* self, bool enabled ```
void q_fontdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QFontDialog* self ```
QBackingStore* q_fontdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QFontDialog* self ```
QWindow* q_fontdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QFontDialog* self ```
QScreen* q_fontdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QFontDialog* self, QScreen* screen ```
void q_fontdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_fontdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QFontDialog* self, const char* title ```
void q_fontdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QFontDialog* self, void (*slot)(QWidget*, const char*) ```
void q_fontdialog_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QFontDialog* self, QIcon* icon ```
void q_fontdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QFontDialog* self, void (*slot)(QWidget*, QIcon*) ```
void q_fontdialog_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QFontDialog* self, const char* iconText ```
void q_fontdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QFontDialog* self, void (*slot)(QWidget*, const char*) ```
void q_fontdialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QFontDialog* self, QPoint* pos ```
void q_fontdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QFontDialog* self, void (*slot)(QWidget*, QPoint*) ```
void q_fontdialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QFontDialog* self ```
int64_t q_fontdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QFontDialog* self, int hints ```
void q_fontdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontDialog* self, QPaintDevice* target, QPoint* targetOffset ```
void q_fontdialog_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_fontdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontDialog* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_fontdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontDialog* self, QPainter* painter, QPoint* targetOffset ```
void q_fontdialog_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_fontdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFontDialog* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_fontdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QFontDialog* self, QRect* rectangle ```
QPixmap* q_fontdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QFontDialog* self, enum Qt__GestureType typeVal, int flags ```
void q_fontdialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QFontDialog* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_fontdialog_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QFontDialog* self, int id, bool enable ```
void q_fontdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QFontDialog* self, int id, bool enable ```
void q_fontdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QFontDialog* self, enum Qt__WindowType param1, bool on ```
void q_fontdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QFontDialog* self, enum Qt__WidgetAttribute param1, bool on ```
void q_fontdialog_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_fontdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_fontdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFontDialog* self ```
const char* q_fontdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFontDialog* self, const char* name ```
void q_fontdialog_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFontDialog* self, bool b ```
bool q_fontdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFontDialog* self ```
QThread* q_fontdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFontDialog* self, QThread* thread ```
void q_fontdialog_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFontDialog* self, int interval ```
int32_t q_fontdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFontDialog* self, int id ```
void q_fontdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFontDialog* self ```
libqt_list /* of QObject* */ q_fontdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFontDialog* self, QObject* filterObj ```
void q_fontdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFontDialog* self, QObject* obj ```
void q_fontdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_fontdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFontDialog* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_fontdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_fontdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_fontdialog_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFontDialog* self ```
void q_fontdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFontDialog* self ```
void q_fontdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFontDialog* self, const char* name, QVariant* value ```
bool q_fontdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFontDialog* self, const char* name ```
QVariant* q_fontdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFontDialog* self ```
const char** q_fontdialog_dynamic_property_names(void* self) {
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
/// ``` QFontDialog* self ```
QBindingStorage* q_fontdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFontDialog* self ```
QBindingStorage* q_fontdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFontDialog* self ```
void q_fontdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QFontDialog* self, void (*slot)(QObject*) ```
void q_fontdialog_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFontDialog* self ```
QObject* q_fontdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFontDialog* self, const char* classname ```
bool q_fontdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFontDialog* self ```
void q_fontdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFontDialog* self, int interval, enum Qt__TimerType timerType ```
int32_t q_fontdialog_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_fontdialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFontDialog* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_fontdialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFontDialog* self, QObject* param1 ```
void q_fontdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QFontDialog* self, void (*slot)(QObject*, QObject*) ```
void q_fontdialog_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QFontDialog* self ```
bool q_fontdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QFontDialog* self ```
double q_fontdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QFontDialog* self ```
double q_fontdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_fontdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
QSize* q_fontdialog_size_hint(void* self) {
    return QFontDialog_SizeHint((QFontDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
QSize* q_fontdialog_qbase_size_hint(void* self) {
    return QFontDialog_QBaseSizeHint((QFontDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, QSize* (*slot)() ```
void q_fontdialog_on_size_hint(void* self, QSize* (*slot)()) {
    QFontDialog_OnSizeHint((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
QSize* q_fontdialog_minimum_size_hint(void* self) {
    return QFontDialog_MinimumSizeHint((QFontDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
QSize* q_fontdialog_qbase_minimum_size_hint(void* self) {
    return QFontDialog_QBaseMinimumSizeHint((QFontDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, QSize* (*slot)() ```
void q_fontdialog_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QFontDialog_OnMinimumSizeHint((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
void q_fontdialog_open(void* self) {
    QFontDialog_Open((QFontDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
void q_fontdialog_qbase_open(void* self) {
    QFontDialog_QBaseOpen((QFontDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)() ```
void q_fontdialog_on_open(void* self, void (*slot)()) {
    QFontDialog_OnOpen((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_exec(void* self) {
    return QFontDialog_Exec((QFontDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_qbase_exec(void* self) {
    return QFontDialog_QBaseExec((QFontDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, int32_t (*slot)() ```
void q_fontdialog_on_exec(void* self, int32_t (*slot)()) {
    QFontDialog_OnExec((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
void q_fontdialog_accept(void* self) {
    QFontDialog_Accept((QFontDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
void q_fontdialog_qbase_accept(void* self) {
    QFontDialog_QBaseAccept((QFontDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)() ```
void q_fontdialog_on_accept(void* self, void (*slot)()) {
    QFontDialog_OnAccept((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
void q_fontdialog_reject(void* self) {
    QFontDialog_Reject((QFontDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
void q_fontdialog_qbase_reject(void* self) {
    QFontDialog_QBaseReject((QFontDialog*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)() ```
void q_fontdialog_on_reject(void* self, void (*slot)()) {
    QFontDialog_OnReject((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QKeyEvent* param1 ```
void q_fontdialog_key_press_event(void* self, void* param1) {
    QFontDialog_KeyPressEvent((QFontDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QKeyEvent* param1 ```
void q_fontdialog_qbase_key_press_event(void* self, void* param1) {
    QFontDialog_QBaseKeyPressEvent((QFontDialog*)self, (QKeyEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QKeyEvent*) ```
void q_fontdialog_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnKeyPressEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QCloseEvent* param1 ```
void q_fontdialog_close_event(void* self, void* param1) {
    QFontDialog_CloseEvent((QFontDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QCloseEvent* param1 ```
void q_fontdialog_qbase_close_event(void* self, void* param1) {
    QFontDialog_QBaseCloseEvent((QFontDialog*)self, (QCloseEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QCloseEvent*) ```
void q_fontdialog_on_close_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnCloseEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QShowEvent* param1 ```
void q_fontdialog_show_event(void* self, void* param1) {
    QFontDialog_ShowEvent((QFontDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QShowEvent* param1 ```
void q_fontdialog_qbase_show_event(void* self, void* param1) {
    QFontDialog_QBaseShowEvent((QFontDialog*)self, (QShowEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QShowEvent*) ```
void q_fontdialog_on_show_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnShowEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QResizeEvent* param1 ```
void q_fontdialog_resize_event(void* self, void* param1) {
    QFontDialog_ResizeEvent((QFontDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QResizeEvent* param1 ```
void q_fontdialog_qbase_resize_event(void* self, void* param1) {
    QFontDialog_QBaseResizeEvent((QFontDialog*)self, (QResizeEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QResizeEvent*) ```
void q_fontdialog_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnResizeEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QContextMenuEvent* param1 ```
void q_fontdialog_context_menu_event(void* self, void* param1) {
    QFontDialog_ContextMenuEvent((QFontDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QContextMenuEvent* param1 ```
void q_fontdialog_qbase_context_menu_event(void* self, void* param1) {
    QFontDialog_QBaseContextMenuEvent((QFontDialog*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QContextMenuEvent*) ```
void q_fontdialog_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnContextMenuEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_dev_type(void* self) {
    return QFontDialog_DevType((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_qbase_dev_type(void* self) {
    return QFontDialog_QBaseDevType((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, int32_t (*slot)() ```
void q_fontdialog_on_dev_type(void* self, int32_t (*slot)()) {
    QFontDialog_OnDevType((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, int param1 ```
int32_t q_fontdialog_height_for_width(void* self, int param1) {
    return QFontDialog_HeightForWidth((QFontDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, int param1 ```
int32_t q_fontdialog_qbase_height_for_width(void* self, int param1) {
    return QFontDialog_QBaseHeightForWidth((QFontDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, int32_t (*slot)(QFontDialog*, int) ```
void q_fontdialog_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QFontDialog_OnHeightForWidth((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
bool q_fontdialog_has_height_for_width(void* self) {
    return QFontDialog_HasHeightForWidth((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
bool q_fontdialog_qbase_has_height_for_width(void* self) {
    return QFontDialog_QBaseHasHeightForWidth((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, bool (*slot)() ```
void q_fontdialog_on_has_height_for_width(void* self, bool (*slot)()) {
    QFontDialog_OnHasHeightForWidth((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
QPaintEngine* q_fontdialog_paint_engine(void* self) {
    return QFontDialog_PaintEngine((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
QPaintEngine* q_fontdialog_qbase_paint_engine(void* self) {
    return QFontDialog_QBasePaintEngine((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, QPaintEngine* (*slot)() ```
void q_fontdialog_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QFontDialog_OnPaintEngine((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QEvent* event ```
bool q_fontdialog_event(void* self, void* event) {
    return QFontDialog_Event((QFontDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QEvent* event ```
bool q_fontdialog_qbase_event(void* self, void* event) {
    return QFontDialog_QBaseEvent((QFontDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, bool (*slot)(QFontDialog*, QEvent*) ```
void q_fontdialog_on_event(void* self, bool (*slot)(void*, void*)) {
    QFontDialog_OnEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QMouseEvent* event ```
void q_fontdialog_mouse_press_event(void* self, void* event) {
    QFontDialog_MousePressEvent((QFontDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QMouseEvent* event ```
void q_fontdialog_qbase_mouse_press_event(void* self, void* event) {
    QFontDialog_QBaseMousePressEvent((QFontDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QMouseEvent*) ```
void q_fontdialog_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnMousePressEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QMouseEvent* event ```
void q_fontdialog_mouse_release_event(void* self, void* event) {
    QFontDialog_MouseReleaseEvent((QFontDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QMouseEvent* event ```
void q_fontdialog_qbase_mouse_release_event(void* self, void* event) {
    QFontDialog_QBaseMouseReleaseEvent((QFontDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QMouseEvent*) ```
void q_fontdialog_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnMouseReleaseEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QMouseEvent* event ```
void q_fontdialog_mouse_double_click_event(void* self, void* event) {
    QFontDialog_MouseDoubleClickEvent((QFontDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QMouseEvent* event ```
void q_fontdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QFontDialog_QBaseMouseDoubleClickEvent((QFontDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QMouseEvent*) ```
void q_fontdialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnMouseDoubleClickEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QMouseEvent* event ```
void q_fontdialog_mouse_move_event(void* self, void* event) {
    QFontDialog_MouseMoveEvent((QFontDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QMouseEvent* event ```
void q_fontdialog_qbase_mouse_move_event(void* self, void* event) {
    QFontDialog_QBaseMouseMoveEvent((QFontDialog*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QMouseEvent*) ```
void q_fontdialog_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnMouseMoveEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QWheelEvent* event ```
void q_fontdialog_wheel_event(void* self, void* event) {
    QFontDialog_WheelEvent((QFontDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QWheelEvent* event ```
void q_fontdialog_qbase_wheel_event(void* self, void* event) {
    QFontDialog_QBaseWheelEvent((QFontDialog*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QWheelEvent*) ```
void q_fontdialog_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnWheelEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QKeyEvent* event ```
void q_fontdialog_key_release_event(void* self, void* event) {
    QFontDialog_KeyReleaseEvent((QFontDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QKeyEvent* event ```
void q_fontdialog_qbase_key_release_event(void* self, void* event) {
    QFontDialog_QBaseKeyReleaseEvent((QFontDialog*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QKeyEvent*) ```
void q_fontdialog_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnKeyReleaseEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QFocusEvent* event ```
void q_fontdialog_focus_in_event(void* self, void* event) {
    QFontDialog_FocusInEvent((QFontDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QFocusEvent* event ```
void q_fontdialog_qbase_focus_in_event(void* self, void* event) {
    QFontDialog_QBaseFocusInEvent((QFontDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QFocusEvent*) ```
void q_fontdialog_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnFocusInEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QFocusEvent* event ```
void q_fontdialog_focus_out_event(void* self, void* event) {
    QFontDialog_FocusOutEvent((QFontDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QFocusEvent* event ```
void q_fontdialog_qbase_focus_out_event(void* self, void* event) {
    QFontDialog_QBaseFocusOutEvent((QFontDialog*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QFocusEvent*) ```
void q_fontdialog_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnFocusOutEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QEnterEvent* event ```
void q_fontdialog_enter_event(void* self, void* event) {
    QFontDialog_EnterEvent((QFontDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QEnterEvent* event ```
void q_fontdialog_qbase_enter_event(void* self, void* event) {
    QFontDialog_QBaseEnterEvent((QFontDialog*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QEnterEvent*) ```
void q_fontdialog_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnEnterEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QEvent* event ```
void q_fontdialog_leave_event(void* self, void* event) {
    QFontDialog_LeaveEvent((QFontDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QEvent* event ```
void q_fontdialog_qbase_leave_event(void* self, void* event) {
    QFontDialog_QBaseLeaveEvent((QFontDialog*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QEvent*) ```
void q_fontdialog_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnLeaveEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QPaintEvent* event ```
void q_fontdialog_paint_event(void* self, void* event) {
    QFontDialog_PaintEvent((QFontDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QPaintEvent* event ```
void q_fontdialog_qbase_paint_event(void* self, void* event) {
    QFontDialog_QBasePaintEvent((QFontDialog*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QPaintEvent*) ```
void q_fontdialog_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnPaintEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QMoveEvent* event ```
void q_fontdialog_move_event(void* self, void* event) {
    QFontDialog_MoveEvent((QFontDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QMoveEvent* event ```
void q_fontdialog_qbase_move_event(void* self, void* event) {
    QFontDialog_QBaseMoveEvent((QFontDialog*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QMoveEvent*) ```
void q_fontdialog_on_move_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnMoveEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QTabletEvent* event ```
void q_fontdialog_tablet_event(void* self, void* event) {
    QFontDialog_TabletEvent((QFontDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QTabletEvent* event ```
void q_fontdialog_qbase_tablet_event(void* self, void* event) {
    QFontDialog_QBaseTabletEvent((QFontDialog*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QTabletEvent*) ```
void q_fontdialog_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnTabletEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QActionEvent* event ```
void q_fontdialog_action_event(void* self, void* event) {
    QFontDialog_ActionEvent((QFontDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QActionEvent* event ```
void q_fontdialog_qbase_action_event(void* self, void* event) {
    QFontDialog_QBaseActionEvent((QFontDialog*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QActionEvent*) ```
void q_fontdialog_on_action_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnActionEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QDragEnterEvent* event ```
void q_fontdialog_drag_enter_event(void* self, void* event) {
    QFontDialog_DragEnterEvent((QFontDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QDragEnterEvent* event ```
void q_fontdialog_qbase_drag_enter_event(void* self, void* event) {
    QFontDialog_QBaseDragEnterEvent((QFontDialog*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QDragEnterEvent*) ```
void q_fontdialog_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnDragEnterEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QDragMoveEvent* event ```
void q_fontdialog_drag_move_event(void* self, void* event) {
    QFontDialog_DragMoveEvent((QFontDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QDragMoveEvent* event ```
void q_fontdialog_qbase_drag_move_event(void* self, void* event) {
    QFontDialog_QBaseDragMoveEvent((QFontDialog*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QDragMoveEvent*) ```
void q_fontdialog_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnDragMoveEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QDragLeaveEvent* event ```
void q_fontdialog_drag_leave_event(void* self, void* event) {
    QFontDialog_DragLeaveEvent((QFontDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QDragLeaveEvent* event ```
void q_fontdialog_qbase_drag_leave_event(void* self, void* event) {
    QFontDialog_QBaseDragLeaveEvent((QFontDialog*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QDragLeaveEvent*) ```
void q_fontdialog_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnDragLeaveEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QDropEvent* event ```
void q_fontdialog_drop_event(void* self, void* event) {
    QFontDialog_DropEvent((QFontDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QDropEvent* event ```
void q_fontdialog_qbase_drop_event(void* self, void* event) {
    QFontDialog_QBaseDropEvent((QFontDialog*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QDropEvent*) ```
void q_fontdialog_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnDropEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QHideEvent* event ```
void q_fontdialog_hide_event(void* self, void* event) {
    QFontDialog_HideEvent((QFontDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QHideEvent* event ```
void q_fontdialog_qbase_hide_event(void* self, void* event) {
    QFontDialog_QBaseHideEvent((QFontDialog*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QHideEvent*) ```
void q_fontdialog_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnHideEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_fontdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFontDialog_NativeEvent((QFontDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, const char* eventType, void* message, intptr_t* result ```
bool q_fontdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFontDialog_QBaseNativeEvent((QFontDialog*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, bool (*slot)(QFontDialog*, const char*, void*, intptr_t*) ```
void q_fontdialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QFontDialog_OnNativeEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_fontdialog_metric(void* self, int64_t param1) {
    return QFontDialog_Metric((QFontDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_fontdialog_qbase_metric(void* self, int64_t param1) {
    return QFontDialog_QBaseMetric((QFontDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, int32_t (*slot)(QFontDialog*, enum QPaintDevice__PaintDeviceMetric) ```
void q_fontdialog_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QFontDialog_OnMetric((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QPainter* painter ```
void q_fontdialog_init_painter(void* self, void* painter) {
    QFontDialog_InitPainter((QFontDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QPainter* painter ```
void q_fontdialog_qbase_init_painter(void* self, void* painter) {
    QFontDialog_QBaseInitPainter((QFontDialog*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QPainter*) ```
void q_fontdialog_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnInitPainter((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QPoint* offset ```
QPaintDevice* q_fontdialog_redirected(void* self, void* offset) {
    return QFontDialog_Redirected((QFontDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QPoint* offset ```
QPaintDevice* q_fontdialog_qbase_redirected(void* self, void* offset) {
    return QFontDialog_QBaseRedirected((QFontDialog*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, QPaintDevice* (*slot)(QFontDialog*, QPoint*) ```
void q_fontdialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QFontDialog_OnRedirected((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
QPainter* q_fontdialog_shared_painter(void* self) {
    return QFontDialog_SharedPainter((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
QPainter* q_fontdialog_qbase_shared_painter(void* self) {
    return QFontDialog_QBaseSharedPainter((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, QPainter* (*slot)() ```
void q_fontdialog_on_shared_painter(void* self, QPainter* (*slot)()) {
    QFontDialog_OnSharedPainter((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QInputMethodEvent* param1 ```
void q_fontdialog_input_method_event(void* self, void* param1) {
    QFontDialog_InputMethodEvent((QFontDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QInputMethodEvent* param1 ```
void q_fontdialog_qbase_input_method_event(void* self, void* param1) {
    QFontDialog_QBaseInputMethodEvent((QFontDialog*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QInputMethodEvent*) ```
void q_fontdialog_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnInputMethodEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_fontdialog_input_method_query(void* self, int64_t param1) {
    return QFontDialog_InputMethodQuery((QFontDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_fontdialog_qbase_input_method_query(void* self, int64_t param1) {
    return QFontDialog_QBaseInputMethodQuery((QFontDialog*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, QVariant* (*slot)(QFontDialog*, enum Qt__InputMethodQuery) ```
void q_fontdialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QFontDialog_OnInputMethodQuery((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, bool next ```
bool q_fontdialog_focus_next_prev_child(void* self, bool next) {
    return QFontDialog_FocusNextPrevChild((QFontDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, bool next ```
bool q_fontdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QFontDialog_QBaseFocusNextPrevChild((QFontDialog*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, bool (*slot)(QFontDialog*, bool) ```
void q_fontdialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QFontDialog_OnFocusNextPrevChild((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QTimerEvent* event ```
void q_fontdialog_timer_event(void* self, void* event) {
    QFontDialog_TimerEvent((QFontDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QTimerEvent* event ```
void q_fontdialog_qbase_timer_event(void* self, void* event) {
    QFontDialog_QBaseTimerEvent((QFontDialog*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QTimerEvent*) ```
void q_fontdialog_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnTimerEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QChildEvent* event ```
void q_fontdialog_child_event(void* self, void* event) {
    QFontDialog_ChildEvent((QFontDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QChildEvent* event ```
void q_fontdialog_qbase_child_event(void* self, void* event) {
    QFontDialog_QBaseChildEvent((QFontDialog*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QChildEvent*) ```
void q_fontdialog_on_child_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnChildEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QEvent* event ```
void q_fontdialog_custom_event(void* self, void* event) {
    QFontDialog_CustomEvent((QFontDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QEvent* event ```
void q_fontdialog_qbase_custom_event(void* self, void* event) {
    QFontDialog_QBaseCustomEvent((QFontDialog*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QEvent*) ```
void q_fontdialog_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnCustomEvent((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QMetaMethod* signal ```
void q_fontdialog_connect_notify(void* self, void* signal) {
    QFontDialog_ConnectNotify((QFontDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QMetaMethod* signal ```
void q_fontdialog_qbase_connect_notify(void* self, void* signal) {
    QFontDialog_QBaseConnectNotify((QFontDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QMetaMethod*) ```
void q_fontdialog_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnConnectNotify((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QMetaMethod* signal ```
void q_fontdialog_disconnect_notify(void* self, void* signal) {
    QFontDialog_DisconnectNotify((QFontDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QMetaMethod* signal ```
void q_fontdialog_qbase_disconnect_notify(void* self, void* signal) {
    QFontDialog_QBaseDisconnectNotify((QFontDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QMetaMethod*) ```
void q_fontdialog_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnDisconnectNotify((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QWidget* param1 ```
void q_fontdialog_adjust_position(void* self, void* param1) {
    QFontDialog_AdjustPosition((QFontDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QWidget* param1 ```
void q_fontdialog_qbase_adjust_position(void* self, void* param1) {
    QFontDialog_QBaseAdjustPosition((QFontDialog*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)(QFontDialog*, QWidget*) ```
void q_fontdialog_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QFontDialog_OnAdjustPosition((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
void q_fontdialog_update_micro_focus(void* self) {
    QFontDialog_UpdateMicroFocus((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
void q_fontdialog_qbase_update_micro_focus(void* self) {
    QFontDialog_QBaseUpdateMicroFocus((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)() ```
void q_fontdialog_on_update_micro_focus(void* self, void (*slot)()) {
    QFontDialog_OnUpdateMicroFocus((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
void q_fontdialog_create(void* self) {
    QFontDialog_Create((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
void q_fontdialog_qbase_create(void* self) {
    QFontDialog_QBaseCreate((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)() ```
void q_fontdialog_on_create(void* self, void (*slot)()) {
    QFontDialog_OnCreate((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
void q_fontdialog_destroy(void* self) {
    QFontDialog_Destroy((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
void q_fontdialog_qbase_destroy(void* self) {
    QFontDialog_QBaseDestroy((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, void (*slot)() ```
void q_fontdialog_on_destroy(void* self, void (*slot)()) {
    QFontDialog_OnDestroy((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
bool q_fontdialog_focus_next_child(void* self) {
    return QFontDialog_FocusNextChild((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
bool q_fontdialog_qbase_focus_next_child(void* self) {
    return QFontDialog_QBaseFocusNextChild((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, bool (*slot)() ```
void q_fontdialog_on_focus_next_child(void* self, bool (*slot)()) {
    QFontDialog_OnFocusNextChild((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
bool q_fontdialog_focus_previous_child(void* self) {
    return QFontDialog_FocusPreviousChild((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
bool q_fontdialog_qbase_focus_previous_child(void* self) {
    return QFontDialog_QBaseFocusPreviousChild((QFontDialog*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, bool (*slot)() ```
void q_fontdialog_on_focus_previous_child(void* self, bool (*slot)()) {
    QFontDialog_OnFocusPreviousChild((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
QObject* q_fontdialog_sender(void* self) {
    return QFontDialog_Sender((QFontDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
QObject* q_fontdialog_qbase_sender(void* self) {
    return QFontDialog_QBaseSender((QFontDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, QObject* (*slot)() ```
void q_fontdialog_on_sender(void* self, QObject* (*slot)()) {
    QFontDialog_OnSender((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_sender_signal_index(void* self) {
    return QFontDialog_SenderSignalIndex((QFontDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self ```
int32_t q_fontdialog_qbase_sender_signal_index(void* self) {
    return QFontDialog_QBaseSenderSignalIndex((QFontDialog*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, int32_t (*slot)() ```
void q_fontdialog_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QFontDialog_OnSenderSignalIndex((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, const char* signal ```
int32_t q_fontdialog_receivers(void* self, const char* signal) {
    return QFontDialog_Receivers((QFontDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, const char* signal ```
int32_t q_fontdialog_qbase_receivers(void* self, const char* signal) {
    return QFontDialog_QBaseReceivers((QFontDialog*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, int32_t (*slot)(QFontDialog*, const char*) ```
void q_fontdialog_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QFontDialog_OnReceivers((QFontDialog*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFontDialog* self, QMetaMethod* signal ```
bool q_fontdialog_is_signal_connected(void* self, void* signal) {
    return QFontDialog_IsSignalConnected((QFontDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFontDialog* self, QMetaMethod* signal ```
bool q_fontdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QFontDialog_QBaseIsSignalConnected((QFontDialog*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFontDialog* self, bool (*slot)(QFontDialog*, QMetaMethod*) ```
void q_fontdialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QFontDialog_OnIsSignalConnected((QFontDialog*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QFontDialog* self ```
void q_fontdialog_delete(void* self) {
    QFontDialog_Delete((QFontDialog*)(self));
}