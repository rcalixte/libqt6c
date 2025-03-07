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
#include "libqkeysequenceedit.hpp"
#include "libqkeysequenceedit.h"

/// https://doc.qt.io/qt-6/qkeysequenceedit.html

/// q_keysequenceedit_new constructs a new QKeySequenceEdit object.
///
/// ``` QWidget* parent ```
QKeySequenceEdit* q_keysequenceedit_new(void* parent) {
    return QKeySequenceEdit_new((QWidget*)parent);
}

/// q_keysequenceedit_new2 constructs a new QKeySequenceEdit object.
///
///
QKeySequenceEdit* q_keysequenceedit_new2() {
    return QKeySequenceEdit_new2();
}

/// q_keysequenceedit_new3 constructs a new QKeySequenceEdit object.
///
/// ``` QKeySequence* keySequence ```
QKeySequenceEdit* q_keysequenceedit_new3(void* keySequence) {
    return QKeySequenceEdit_new3((QKeySequence*)keySequence);
}

/// q_keysequenceedit_new4 constructs a new QKeySequenceEdit object.
///
/// ``` QKeySequence* keySequence, QWidget* parent ```
QKeySequenceEdit* q_keysequenceedit_new4(void* keySequence, void* parent) {
    return QKeySequenceEdit_new4((QKeySequence*)keySequence, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QKeySequenceEdit* self ```
QMetaObject* q_keysequenceedit_meta_object(void* self) {
    return QKeySequenceEdit_MetaObject((QKeySequenceEdit*)self);
}

/// ``` QKeySequenceEdit* self, const char* param1 ```
void* q_keysequenceedit_metacast(void* self, const char* param1) {
    return QKeySequenceEdit_Metacast((QKeySequenceEdit*)self, param1);
}

/// ``` QKeySequenceEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_keysequenceedit_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QKeySequenceEdit_Metacall((QKeySequenceEdit*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QKeySequenceEdit* self, int32_t (*slot)(QKeySequenceEdit*, enum QMetaObject__Call, int, void*) ```
void q_keysequenceedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QKeySequenceEdit_OnMetacall((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QKeySequenceEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_keysequenceedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QKeySequenceEdit_QBaseMetacall((QKeySequenceEdit*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_keysequenceedit_tr(const char* s) {
    libqt_string _str = QKeySequenceEdit_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequenceedit.html#keySequence)
///
/// ``` QKeySequenceEdit* self ```
QKeySequence* q_keysequenceedit_key_sequence(void* self) {
    return QKeySequenceEdit_KeySequence((QKeySequenceEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequenceedit.html#setClearButtonEnabled)
///
/// ``` QKeySequenceEdit* self, bool enable ```
void q_keysequenceedit_set_clear_button_enabled(void* self, bool enable) {
    QKeySequenceEdit_SetClearButtonEnabled((QKeySequenceEdit*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequenceedit.html#isClearButtonEnabled)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_clear_button_enabled(void* self) {
    return QKeySequenceEdit_IsClearButtonEnabled((QKeySequenceEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequenceedit.html#setKeySequence)
///
/// ``` QKeySequenceEdit* self, QKeySequence* keySequence ```
void q_keysequenceedit_set_key_sequence(void* self, void* keySequence) {
    QKeySequenceEdit_SetKeySequence((QKeySequenceEdit*)self, (QKeySequence*)keySequence);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequenceedit.html#clear)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_clear(void* self) {
    QKeySequenceEdit_Clear((QKeySequenceEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequenceedit.html#editingFinished)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_editing_finished(void* self) {
    QKeySequenceEdit_EditingFinished((QKeySequenceEdit*)self);
}

/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*) ```
void q_keysequenceedit_on_editing_finished(void* self, void (*slot)(void*)) {
    QKeySequenceEdit_Connect_EditingFinished((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequenceedit.html#keySequenceChanged)
///
/// ``` QKeySequenceEdit* self, QKeySequence* keySequence ```
void q_keysequenceedit_key_sequence_changed(void* self, void* keySequence) {
    QKeySequenceEdit_KeySequenceChanged((QKeySequenceEdit*)self, (QKeySequence*)keySequence);
}

/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QKeySequence*) ```
void q_keysequenceedit_on_key_sequence_changed(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_Connect_KeySequenceChanged((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequenceedit.html#event)
///
/// ``` QKeySequenceEdit* self, QEvent* param1 ```
bool q_keysequenceedit_event(void* self, void* param1) {
    return QKeySequenceEdit_Event((QKeySequenceEdit*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QKeySequenceEdit* self, bool (*slot)(QKeySequenceEdit*, QEvent*) ```
void q_keysequenceedit_on_event(void* self, bool (*slot)(void*, void*)) {
    QKeySequenceEdit_OnEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QKeySequenceEdit* self, QEvent* param1 ```
bool q_keysequenceedit_qbase_event(void* self, void* param1) {
    return QKeySequenceEdit_QBaseEvent((QKeySequenceEdit*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequenceedit.html#keyPressEvent)
///
/// ``` QKeySequenceEdit* self, QKeyEvent* param1 ```
void q_keysequenceedit_key_press_event(void* self, void* param1) {
    QKeySequenceEdit_KeyPressEvent((QKeySequenceEdit*)self, (QKeyEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QKeyEvent*) ```
void q_keysequenceedit_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnKeyPressEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QKeySequenceEdit* self, QKeyEvent* param1 ```
void q_keysequenceedit_qbase_key_press_event(void* self, void* param1) {
    QKeySequenceEdit_QBaseKeyPressEvent((QKeySequenceEdit*)self, (QKeyEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequenceedit.html#keyReleaseEvent)
///
/// ``` QKeySequenceEdit* self, QKeyEvent* param1 ```
void q_keysequenceedit_key_release_event(void* self, void* param1) {
    QKeySequenceEdit_KeyReleaseEvent((QKeySequenceEdit*)self, (QKeyEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QKeyEvent*) ```
void q_keysequenceedit_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnKeyReleaseEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QKeySequenceEdit* self, QKeyEvent* param1 ```
void q_keysequenceedit_qbase_key_release_event(void* self, void* param1) {
    QKeySequenceEdit_QBaseKeyReleaseEvent((QKeySequenceEdit*)self, (QKeyEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequenceedit.html#timerEvent)
///
/// ``` QKeySequenceEdit* self, QTimerEvent* param1 ```
void q_keysequenceedit_timer_event(void* self, void* param1) {
    QKeySequenceEdit_TimerEvent((QKeySequenceEdit*)self, (QTimerEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QTimerEvent*) ```
void q_keysequenceedit_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnTimerEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QKeySequenceEdit* self, QTimerEvent* param1 ```
void q_keysequenceedit_qbase_timer_event(void* self, void* param1) {
    QKeySequenceEdit_QBaseTimerEvent((QKeySequenceEdit*)self, (QTimerEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qkeysequenceedit.html#focusOutEvent)
///
/// ``` QKeySequenceEdit* self, QFocusEvent* param1 ```
void q_keysequenceedit_focus_out_event(void* self, void* param1) {
    QKeySequenceEdit_FocusOutEvent((QKeySequenceEdit*)self, (QFocusEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QFocusEvent*) ```
void q_keysequenceedit_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnFocusOutEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QKeySequenceEdit* self, QFocusEvent* param1 ```
void q_keysequenceedit_qbase_focus_out_event(void* self, void* param1) {
    QKeySequenceEdit_QBaseFocusOutEvent((QKeySequenceEdit*)self, (QFocusEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_keysequenceedit_tr2(const char* s, const char* c) {
    libqt_string _str = QKeySequenceEdit_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_keysequenceedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QKeySequenceEdit_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QKeySequenceEdit* self ```
uintptr_t q_keysequenceedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QKeySequenceEdit* self ```
uintptr_t q_keysequenceedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QKeySequenceEdit* self ```
uintptr_t q_keysequenceedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QKeySequenceEdit* self ```
QStyle* q_keysequenceedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QKeySequenceEdit* self, QStyle* style ```
void q_keysequenceedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QKeySequenceEdit* self ```
int64_t q_keysequenceedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QKeySequenceEdit* self, enum Qt__WindowModality windowModality ```
void q_keysequenceedit_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QKeySequenceEdit* self, QWidget* param1 ```
bool q_keysequenceedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QKeySequenceEdit* self, bool enabled ```
void q_keysequenceedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QKeySequenceEdit* self, bool disabled ```
void q_keysequenceedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QKeySequenceEdit* self, bool windowModified ```
void q_keysequenceedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QKeySequenceEdit* self ```
QRect* q_keysequenceedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QKeySequenceEdit* self ```
QRect* q_keysequenceedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QKeySequenceEdit* self ```
QRect* q_keysequenceedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QKeySequenceEdit* self ```
QPoint* q_keysequenceedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QKeySequenceEdit* self ```
QSize* q_keysequenceedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QKeySequenceEdit* self ```
QSize* q_keysequenceedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QKeySequenceEdit* self ```
QRect* q_keysequenceedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QKeySequenceEdit* self ```
QRect* q_keysequenceedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QKeySequenceEdit* self ```
QRegion* q_keysequenceedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QKeySequenceEdit* self ```
QSize* q_keysequenceedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QKeySequenceEdit* self ```
QSize* q_keysequenceedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QKeySequenceEdit* self, QSize* minimumSize ```
void q_keysequenceedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QKeySequenceEdit* self, int minw, int minh ```
void q_keysequenceedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QKeySequenceEdit* self, QSize* maximumSize ```
void q_keysequenceedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QKeySequenceEdit* self, int maxw, int maxh ```
void q_keysequenceedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QKeySequenceEdit* self, int minw ```
void q_keysequenceedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QKeySequenceEdit* self, int minh ```
void q_keysequenceedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QKeySequenceEdit* self, int maxw ```
void q_keysequenceedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QKeySequenceEdit* self, int maxh ```
void q_keysequenceedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QKeySequenceEdit* self ```
QSize* q_keysequenceedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QKeySequenceEdit* self, QSize* sizeIncrement ```
void q_keysequenceedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QKeySequenceEdit* self, int w, int h ```
void q_keysequenceedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QKeySequenceEdit* self ```
QSize* q_keysequenceedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QKeySequenceEdit* self, QSize* baseSize ```
void q_keysequenceedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QKeySequenceEdit* self, int basew, int baseh ```
void q_keysequenceedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QKeySequenceEdit* self, QSize* fixedSize ```
void q_keysequenceedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QKeySequenceEdit* self, int w, int h ```
void q_keysequenceedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QKeySequenceEdit* self, int w ```
void q_keysequenceedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QKeySequenceEdit* self, int h ```
void q_keysequenceedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QKeySequenceEdit* self, QPointF* param1 ```
QPointF* q_keysequenceedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QKeySequenceEdit* self, QPoint* param1 ```
QPoint* q_keysequenceedit_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QKeySequenceEdit* self, QPointF* param1 ```
QPointF* q_keysequenceedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QKeySequenceEdit* self, QPoint* param1 ```
QPoint* q_keysequenceedit_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QKeySequenceEdit* self, QPointF* param1 ```
QPointF* q_keysequenceedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QKeySequenceEdit* self, QPoint* param1 ```
QPoint* q_keysequenceedit_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QKeySequenceEdit* self, QPointF* param1 ```
QPointF* q_keysequenceedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QKeySequenceEdit* self, QPoint* param1 ```
QPoint* q_keysequenceedit_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QKeySequenceEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_keysequenceedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QKeySequenceEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_keysequenceedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QKeySequenceEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_keysequenceedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QKeySequenceEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_keysequenceedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QKeySequenceEdit* self ```
QWidget* q_keysequenceedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QKeySequenceEdit* self ```
QWidget* q_keysequenceedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QKeySequenceEdit* self ```
QWidget* q_keysequenceedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QKeySequenceEdit* self ```
QPalette* q_keysequenceedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QKeySequenceEdit* self, QPalette* palette ```
void q_keysequenceedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QKeySequenceEdit* self, enum QPalette__ColorRole backgroundRole ```
void q_keysequenceedit_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QKeySequenceEdit* self ```
int64_t q_keysequenceedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QKeySequenceEdit* self, enum QPalette__ColorRole foregroundRole ```
void q_keysequenceedit_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QKeySequenceEdit* self ```
int64_t q_keysequenceedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QKeySequenceEdit* self ```
QFont* q_keysequenceedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QKeySequenceEdit* self, QFont* font ```
void q_keysequenceedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QKeySequenceEdit* self ```
QFontMetrics* q_keysequenceedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QKeySequenceEdit* self ```
QFontInfo* q_keysequenceedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QKeySequenceEdit* self ```
QCursor* q_keysequenceedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QKeySequenceEdit* self, QCursor* cursor ```
void q_keysequenceedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QKeySequenceEdit* self, bool enable ```
void q_keysequenceedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QKeySequenceEdit* self, bool enable ```
void q_keysequenceedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QKeySequenceEdit* self, QBitmap* mask ```
void q_keysequenceedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QKeySequenceEdit* self, QRegion* mask ```
void q_keysequenceedit_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QKeySequenceEdit* self ```
QRegion* q_keysequenceedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QKeySequenceEdit* self, QPaintDevice* target ```
void q_keysequenceedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QKeySequenceEdit* self, QPainter* painter ```
void q_keysequenceedit_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QKeySequenceEdit* self ```
QPixmap* q_keysequenceedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QKeySequenceEdit* self ```
QGraphicsEffect* q_keysequenceedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QKeySequenceEdit* self, QGraphicsEffect* effect ```
void q_keysequenceedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QKeySequenceEdit* self, enum Qt__GestureType typeVal ```
void q_keysequenceedit_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QKeySequenceEdit* self, enum Qt__GestureType typeVal ```
void q_keysequenceedit_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QKeySequenceEdit* self, const char* windowTitle ```
void q_keysequenceedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QKeySequenceEdit* self, const char* styleSheet ```
void q_keysequenceedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QKeySequenceEdit* self ```
const char* q_keysequenceedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QKeySequenceEdit* self ```
const char* q_keysequenceedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QKeySequenceEdit* self, QIcon* icon ```
void q_keysequenceedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QKeySequenceEdit* self ```
QIcon* q_keysequenceedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QKeySequenceEdit* self, const char* windowIconText ```
void q_keysequenceedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QKeySequenceEdit* self ```
const char* q_keysequenceedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QKeySequenceEdit* self, const char* windowRole ```
void q_keysequenceedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QKeySequenceEdit* self ```
const char* q_keysequenceedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QKeySequenceEdit* self, const char* filePath ```
void q_keysequenceedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QKeySequenceEdit* self ```
const char* q_keysequenceedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QKeySequenceEdit* self, double level ```
void q_keysequenceedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QKeySequenceEdit* self ```
double q_keysequenceedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QKeySequenceEdit* self, const char* toolTip ```
void q_keysequenceedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QKeySequenceEdit* self ```
const char* q_keysequenceedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QKeySequenceEdit* self, int msec ```
void q_keysequenceedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QKeySequenceEdit* self, const char* statusTip ```
void q_keysequenceedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QKeySequenceEdit* self ```
const char* q_keysequenceedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QKeySequenceEdit* self, const char* whatsThis ```
void q_keysequenceedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QKeySequenceEdit* self ```
const char* q_keysequenceedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QKeySequenceEdit* self ```
const char* q_keysequenceedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QKeySequenceEdit* self, const char* name ```
void q_keysequenceedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QKeySequenceEdit* self ```
const char* q_keysequenceedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QKeySequenceEdit* self, const char* description ```
void q_keysequenceedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QKeySequenceEdit* self, enum Qt__LayoutDirection direction ```
void q_keysequenceedit_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QKeySequenceEdit* self ```
int64_t q_keysequenceedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QKeySequenceEdit* self, QLocale* locale ```
void q_keysequenceedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QKeySequenceEdit* self ```
QLocale* q_keysequenceedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QKeySequenceEdit* self, enum Qt__FocusReason reason ```
void q_keysequenceedit_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QKeySequenceEdit* self ```
int64_t q_keysequenceedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QKeySequenceEdit* self, enum Qt__FocusPolicy policy ```
void q_keysequenceedit_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_keysequenceedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QKeySequenceEdit* self, QWidget* focusProxy ```
void q_keysequenceedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QKeySequenceEdit* self ```
QWidget* q_keysequenceedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QKeySequenceEdit* self ```
int64_t q_keysequenceedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QKeySequenceEdit* self, enum Qt__ContextMenuPolicy policy ```
void q_keysequenceedit_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QKeySequenceEdit* self, QCursor* param1 ```
void q_keysequenceedit_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QKeySequenceEdit* self, QKeySequence* key ```
int32_t q_keysequenceedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QKeySequenceEdit* self, int id ```
void q_keysequenceedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QKeySequenceEdit* self, int id ```
void q_keysequenceedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QKeySequenceEdit* self, int id ```
void q_keysequenceedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_keysequenceedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_keysequenceedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QKeySequenceEdit* self, bool enable ```
void q_keysequenceedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QKeySequenceEdit* self ```
QGraphicsProxyWidget* q_keysequenceedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QKeySequenceEdit* self, int x, int y, int w, int h ```
void q_keysequenceedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QKeySequenceEdit* self, QRect* param1 ```
void q_keysequenceedit_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QKeySequenceEdit* self, QRegion* param1 ```
void q_keysequenceedit_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QKeySequenceEdit* self, int x, int y, int w, int h ```
void q_keysequenceedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QKeySequenceEdit* self, QRect* param1 ```
void q_keysequenceedit_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QKeySequenceEdit* self, QRegion* param1 ```
void q_keysequenceedit_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QKeySequenceEdit* self, bool hidden ```
void q_keysequenceedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QKeySequenceEdit* self, QWidget* param1 ```
void q_keysequenceedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QKeySequenceEdit* self, int x, int y ```
void q_keysequenceedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QKeySequenceEdit* self, QPoint* param1 ```
void q_keysequenceedit_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QKeySequenceEdit* self, int w, int h ```
void q_keysequenceedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QKeySequenceEdit* self, QSize* param1 ```
void q_keysequenceedit_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QKeySequenceEdit* self, int x, int y, int w, int h ```
void q_keysequenceedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QKeySequenceEdit* self, QRect* geometry ```
void q_keysequenceedit_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QKeySequenceEdit* self ```
char* q_keysequenceedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QKeySequenceEdit* self, const char* geometry ```
bool q_keysequenceedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QKeySequenceEdit* self, QWidget* param1 ```
bool q_keysequenceedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QKeySequenceEdit* self ```
int64_t q_keysequenceedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QKeySequenceEdit* self, int state ```
void q_keysequenceedit_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QKeySequenceEdit* self, int state ```
void q_keysequenceedit_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QKeySequenceEdit* self ```
QSizePolicy* q_keysequenceedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QKeySequenceEdit* self, QSizePolicy* sizePolicy ```
void q_keysequenceedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QKeySequenceEdit* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_keysequenceedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QKeySequenceEdit* self ```
QRegion* q_keysequenceedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QKeySequenceEdit* self, int left, int top, int right, int bottom ```
void q_keysequenceedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QKeySequenceEdit* self, QMargins* margins ```
void q_keysequenceedit_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QKeySequenceEdit* self ```
QMargins* q_keysequenceedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QKeySequenceEdit* self ```
QRect* q_keysequenceedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QKeySequenceEdit* self ```
QLayout* q_keysequenceedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QKeySequenceEdit* self, QLayout* layout ```
void q_keysequenceedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QKeySequenceEdit* self, QWidget* parent ```
void q_keysequenceedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QKeySequenceEdit* self, QWidget* parent, int f ```
void q_keysequenceedit_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QKeySequenceEdit* self, int dx, int dy ```
void q_keysequenceedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QKeySequenceEdit* self, int dx, int dy, QRect* param3 ```
void q_keysequenceedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QKeySequenceEdit* self ```
QWidget* q_keysequenceedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QKeySequenceEdit* self ```
QWidget* q_keysequenceedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QKeySequenceEdit* self ```
QWidget* q_keysequenceedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QKeySequenceEdit* self, bool on ```
void q_keysequenceedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QKeySequenceEdit* self, QAction* action ```
void q_keysequenceedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QKeySequenceEdit* self, QAction* actions[] ```
void q_keysequenceedit_add_actions(void* self, void* actions[]) {
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
/// ``` QKeySequenceEdit* self, QAction* before, QAction* actions[] ```
void q_keysequenceedit_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QKeySequenceEdit* self, QAction* before, QAction* action ```
void q_keysequenceedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QKeySequenceEdit* self, QAction* action ```
void q_keysequenceedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QKeySequenceEdit* self ```
libqt_list /* of QAction* */ q_keysequenceedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QKeySequenceEdit* self, const char* text ```
QAction* q_keysequenceedit_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QKeySequenceEdit* self, QIcon* icon, const char* text ```
QAction* q_keysequenceedit_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QKeySequenceEdit* self, const char* text, QKeySequence* shortcut ```
QAction* q_keysequenceedit_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QKeySequenceEdit* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_keysequenceedit_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QKeySequenceEdit* self ```
QWidget* q_keysequenceedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QKeySequenceEdit* self, int typeVal ```
void q_keysequenceedit_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QKeySequenceEdit* self ```
int64_t q_keysequenceedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QKeySequenceEdit* self, enum Qt__WindowType param1 ```
void q_keysequenceedit_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QKeySequenceEdit* self, int typeVal ```
void q_keysequenceedit_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QKeySequenceEdit* self ```
int64_t q_keysequenceedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_keysequenceedit_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QKeySequenceEdit* self, int x, int y ```
QWidget* q_keysequenceedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QKeySequenceEdit* self, QPoint* p ```
QWidget* q_keysequenceedit_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QKeySequenceEdit* self, enum Qt__WidgetAttribute param1 ```
void q_keysequenceedit_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QKeySequenceEdit* self, enum Qt__WidgetAttribute param1 ```
bool q_keysequenceedit_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QKeySequenceEdit* self, QWidget* child ```
bool q_keysequenceedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QKeySequenceEdit* self, bool enabled ```
void q_keysequenceedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QKeySequenceEdit* self ```
QBackingStore* q_keysequenceedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QKeySequenceEdit* self ```
QWindow* q_keysequenceedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QKeySequenceEdit* self ```
QScreen* q_keysequenceedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QKeySequenceEdit* self, QScreen* screen ```
void q_keysequenceedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_keysequenceedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QKeySequenceEdit* self, const char* title ```
void q_keysequenceedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QKeySequenceEdit* self, void (*slot)(QWidget*, const char*) ```
void q_keysequenceedit_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QKeySequenceEdit* self, QIcon* icon ```
void q_keysequenceedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QKeySequenceEdit* self, void (*slot)(QWidget*, QIcon*) ```
void q_keysequenceedit_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QKeySequenceEdit* self, const char* iconText ```
void q_keysequenceedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QKeySequenceEdit* self, void (*slot)(QWidget*, const char*) ```
void q_keysequenceedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QKeySequenceEdit* self, QPoint* pos ```
void q_keysequenceedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QKeySequenceEdit* self, void (*slot)(QWidget*, QPoint*) ```
void q_keysequenceedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QKeySequenceEdit* self ```
int64_t q_keysequenceedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QKeySequenceEdit* self, int hints ```
void q_keysequenceedit_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QKeySequenceEdit* self, QPaintDevice* target, QPoint* targetOffset ```
void q_keysequenceedit_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QKeySequenceEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_keysequenceedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QKeySequenceEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_keysequenceedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QKeySequenceEdit* self, QPainter* painter, QPoint* targetOffset ```
void q_keysequenceedit_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QKeySequenceEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_keysequenceedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QKeySequenceEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_keysequenceedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QKeySequenceEdit* self, QRect* rectangle ```
QPixmap* q_keysequenceedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QKeySequenceEdit* self, enum Qt__GestureType typeVal, int flags ```
void q_keysequenceedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QKeySequenceEdit* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_keysequenceedit_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QKeySequenceEdit* self, int id, bool enable ```
void q_keysequenceedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QKeySequenceEdit* self, int id, bool enable ```
void q_keysequenceedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QKeySequenceEdit* self, enum Qt__WindowType param1, bool on ```
void q_keysequenceedit_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QKeySequenceEdit* self, enum Qt__WidgetAttribute param1, bool on ```
void q_keysequenceedit_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_keysequenceedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_keysequenceedit_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QKeySequenceEdit* self ```
const char* q_keysequenceedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QKeySequenceEdit* self, const char* name ```
void q_keysequenceedit_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QKeySequenceEdit* self, bool b ```
bool q_keysequenceedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QKeySequenceEdit* self ```
QThread* q_keysequenceedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QKeySequenceEdit* self, QThread* thread ```
void q_keysequenceedit_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QKeySequenceEdit* self, int interval ```
int32_t q_keysequenceedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QKeySequenceEdit* self, int id ```
void q_keysequenceedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QKeySequenceEdit* self ```
libqt_list /* of QObject* */ q_keysequenceedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QKeySequenceEdit* self, QObject* filterObj ```
void q_keysequenceedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QKeySequenceEdit* self, QObject* obj ```
void q_keysequenceedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_keysequenceedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QKeySequenceEdit* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_keysequenceedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_keysequenceedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_keysequenceedit_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QKeySequenceEdit* self, const char* name, QVariant* value ```
bool q_keysequenceedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QKeySequenceEdit* self, const char* name ```
QVariant* q_keysequenceedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QKeySequenceEdit* self ```
const char** q_keysequenceedit_dynamic_property_names(void* self) {
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
/// ``` QKeySequenceEdit* self ```
QBindingStorage* q_keysequenceedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QKeySequenceEdit* self ```
QBindingStorage* q_keysequenceedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QKeySequenceEdit* self, void (*slot)(QObject*) ```
void q_keysequenceedit_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QKeySequenceEdit* self ```
QObject* q_keysequenceedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QKeySequenceEdit* self, const char* classname ```
bool q_keysequenceedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QKeySequenceEdit* self, int interval, enum Qt__TimerType timerType ```
int32_t q_keysequenceedit_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_keysequenceedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QKeySequenceEdit* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_keysequenceedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QKeySequenceEdit* self, QObject* param1 ```
void q_keysequenceedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QKeySequenceEdit* self, void (*slot)(QObject*, QObject*) ```
void q_keysequenceedit_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QKeySequenceEdit* self ```
double q_keysequenceedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QKeySequenceEdit* self ```
double q_keysequenceedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_keysequenceedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_dev_type(void* self) {
    return QKeySequenceEdit_DevType((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_qbase_dev_type(void* self) {
    return QKeySequenceEdit_QBaseDevType((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, int32_t (*slot)() ```
void q_keysequenceedit_on_dev_type(void* self, int32_t (*slot)()) {
    QKeySequenceEdit_OnDevType((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, bool visible ```
void q_keysequenceedit_set_visible(void* self, bool visible) {
    QKeySequenceEdit_SetVisible((QKeySequenceEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, bool visible ```
void q_keysequenceedit_qbase_set_visible(void* self, bool visible) {
    QKeySequenceEdit_QBaseSetVisible((QKeySequenceEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, bool) ```
void q_keysequenceedit_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QKeySequenceEdit_OnSetVisible((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
QSize* q_keysequenceedit_size_hint(void* self) {
    return QKeySequenceEdit_SizeHint((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
QSize* q_keysequenceedit_qbase_size_hint(void* self) {
    return QKeySequenceEdit_QBaseSizeHint((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QSize* (*slot)() ```
void q_keysequenceedit_on_size_hint(void* self, QSize* (*slot)()) {
    QKeySequenceEdit_OnSizeHint((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
QSize* q_keysequenceedit_minimum_size_hint(void* self) {
    return QKeySequenceEdit_MinimumSizeHint((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
QSize* q_keysequenceedit_qbase_minimum_size_hint(void* self) {
    return QKeySequenceEdit_QBaseMinimumSizeHint((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QSize* (*slot)() ```
void q_keysequenceedit_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QKeySequenceEdit_OnMinimumSizeHint((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, int param1 ```
int32_t q_keysequenceedit_height_for_width(void* self, int param1) {
    return QKeySequenceEdit_HeightForWidth((QKeySequenceEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, int param1 ```
int32_t q_keysequenceedit_qbase_height_for_width(void* self, int param1) {
    return QKeySequenceEdit_QBaseHeightForWidth((QKeySequenceEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, int32_t (*slot)(QKeySequenceEdit*, int) ```
void q_keysequenceedit_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QKeySequenceEdit_OnHeightForWidth((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_has_height_for_width(void* self) {
    return QKeySequenceEdit_HasHeightForWidth((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_qbase_has_height_for_width(void* self) {
    return QKeySequenceEdit_QBaseHasHeightForWidth((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, bool (*slot)() ```
void q_keysequenceedit_on_has_height_for_width(void* self, bool (*slot)()) {
    QKeySequenceEdit_OnHasHeightForWidth((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
QPaintEngine* q_keysequenceedit_paint_engine(void* self) {
    return QKeySequenceEdit_PaintEngine((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
QPaintEngine* q_keysequenceedit_qbase_paint_engine(void* self) {
    return QKeySequenceEdit_QBasePaintEngine((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QPaintEngine* (*slot)() ```
void q_keysequenceedit_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QKeySequenceEdit_OnPaintEngine((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMouseEvent* event ```
void q_keysequenceedit_mouse_press_event(void* self, void* event) {
    QKeySequenceEdit_MousePressEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMouseEvent* event ```
void q_keysequenceedit_qbase_mouse_press_event(void* self, void* event) {
    QKeySequenceEdit_QBaseMousePressEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QMouseEvent*) ```
void q_keysequenceedit_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnMousePressEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMouseEvent* event ```
void q_keysequenceedit_mouse_release_event(void* self, void* event) {
    QKeySequenceEdit_MouseReleaseEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMouseEvent* event ```
void q_keysequenceedit_qbase_mouse_release_event(void* self, void* event) {
    QKeySequenceEdit_QBaseMouseReleaseEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QMouseEvent*) ```
void q_keysequenceedit_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnMouseReleaseEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMouseEvent* event ```
void q_keysequenceedit_mouse_double_click_event(void* self, void* event) {
    QKeySequenceEdit_MouseDoubleClickEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMouseEvent* event ```
void q_keysequenceedit_qbase_mouse_double_click_event(void* self, void* event) {
    QKeySequenceEdit_QBaseMouseDoubleClickEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QMouseEvent*) ```
void q_keysequenceedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnMouseDoubleClickEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMouseEvent* event ```
void q_keysequenceedit_mouse_move_event(void* self, void* event) {
    QKeySequenceEdit_MouseMoveEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMouseEvent* event ```
void q_keysequenceedit_qbase_mouse_move_event(void* self, void* event) {
    QKeySequenceEdit_QBaseMouseMoveEvent((QKeySequenceEdit*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QMouseEvent*) ```
void q_keysequenceedit_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnMouseMoveEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QWheelEvent* event ```
void q_keysequenceedit_wheel_event(void* self, void* event) {
    QKeySequenceEdit_WheelEvent((QKeySequenceEdit*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QWheelEvent* event ```
void q_keysequenceedit_qbase_wheel_event(void* self, void* event) {
    QKeySequenceEdit_QBaseWheelEvent((QKeySequenceEdit*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QWheelEvent*) ```
void q_keysequenceedit_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnWheelEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QFocusEvent* event ```
void q_keysequenceedit_focus_in_event(void* self, void* event) {
    QKeySequenceEdit_FocusInEvent((QKeySequenceEdit*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QFocusEvent* event ```
void q_keysequenceedit_qbase_focus_in_event(void* self, void* event) {
    QKeySequenceEdit_QBaseFocusInEvent((QKeySequenceEdit*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QFocusEvent*) ```
void q_keysequenceedit_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnFocusInEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QEnterEvent* event ```
void q_keysequenceedit_enter_event(void* self, void* event) {
    QKeySequenceEdit_EnterEvent((QKeySequenceEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QEnterEvent* event ```
void q_keysequenceedit_qbase_enter_event(void* self, void* event) {
    QKeySequenceEdit_QBaseEnterEvent((QKeySequenceEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QEnterEvent*) ```
void q_keysequenceedit_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnEnterEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QEvent* event ```
void q_keysequenceedit_leave_event(void* self, void* event) {
    QKeySequenceEdit_LeaveEvent((QKeySequenceEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QEvent* event ```
void q_keysequenceedit_qbase_leave_event(void* self, void* event) {
    QKeySequenceEdit_QBaseLeaveEvent((QKeySequenceEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QEvent*) ```
void q_keysequenceedit_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnLeaveEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QPaintEvent* event ```
void q_keysequenceedit_paint_event(void* self, void* event) {
    QKeySequenceEdit_PaintEvent((QKeySequenceEdit*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QPaintEvent* event ```
void q_keysequenceedit_qbase_paint_event(void* self, void* event) {
    QKeySequenceEdit_QBasePaintEvent((QKeySequenceEdit*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QPaintEvent*) ```
void q_keysequenceedit_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnPaintEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMoveEvent* event ```
void q_keysequenceedit_move_event(void* self, void* event) {
    QKeySequenceEdit_MoveEvent((QKeySequenceEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMoveEvent* event ```
void q_keysequenceedit_qbase_move_event(void* self, void* event) {
    QKeySequenceEdit_QBaseMoveEvent((QKeySequenceEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QMoveEvent*) ```
void q_keysequenceedit_on_move_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnMoveEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QResizeEvent* event ```
void q_keysequenceedit_resize_event(void* self, void* event) {
    QKeySequenceEdit_ResizeEvent((QKeySequenceEdit*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QResizeEvent* event ```
void q_keysequenceedit_qbase_resize_event(void* self, void* event) {
    QKeySequenceEdit_QBaseResizeEvent((QKeySequenceEdit*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QResizeEvent*) ```
void q_keysequenceedit_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnResizeEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QCloseEvent* event ```
void q_keysequenceedit_close_event(void* self, void* event) {
    QKeySequenceEdit_CloseEvent((QKeySequenceEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QCloseEvent* event ```
void q_keysequenceedit_qbase_close_event(void* self, void* event) {
    QKeySequenceEdit_QBaseCloseEvent((QKeySequenceEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QCloseEvent*) ```
void q_keysequenceedit_on_close_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnCloseEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QContextMenuEvent* event ```
void q_keysequenceedit_context_menu_event(void* self, void* event) {
    QKeySequenceEdit_ContextMenuEvent((QKeySequenceEdit*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QContextMenuEvent* event ```
void q_keysequenceedit_qbase_context_menu_event(void* self, void* event) {
    QKeySequenceEdit_QBaseContextMenuEvent((QKeySequenceEdit*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QContextMenuEvent*) ```
void q_keysequenceedit_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnContextMenuEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QTabletEvent* event ```
void q_keysequenceedit_tablet_event(void* self, void* event) {
    QKeySequenceEdit_TabletEvent((QKeySequenceEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QTabletEvent* event ```
void q_keysequenceedit_qbase_tablet_event(void* self, void* event) {
    QKeySequenceEdit_QBaseTabletEvent((QKeySequenceEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QTabletEvent*) ```
void q_keysequenceedit_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnTabletEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QActionEvent* event ```
void q_keysequenceedit_action_event(void* self, void* event) {
    QKeySequenceEdit_ActionEvent((QKeySequenceEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QActionEvent* event ```
void q_keysequenceedit_qbase_action_event(void* self, void* event) {
    QKeySequenceEdit_QBaseActionEvent((QKeySequenceEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QActionEvent*) ```
void q_keysequenceedit_on_action_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnActionEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QDragEnterEvent* event ```
void q_keysequenceedit_drag_enter_event(void* self, void* event) {
    QKeySequenceEdit_DragEnterEvent((QKeySequenceEdit*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QDragEnterEvent* event ```
void q_keysequenceedit_qbase_drag_enter_event(void* self, void* event) {
    QKeySequenceEdit_QBaseDragEnterEvent((QKeySequenceEdit*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QDragEnterEvent*) ```
void q_keysequenceedit_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnDragEnterEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QDragMoveEvent* event ```
void q_keysequenceedit_drag_move_event(void* self, void* event) {
    QKeySequenceEdit_DragMoveEvent((QKeySequenceEdit*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QDragMoveEvent* event ```
void q_keysequenceedit_qbase_drag_move_event(void* self, void* event) {
    QKeySequenceEdit_QBaseDragMoveEvent((QKeySequenceEdit*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QDragMoveEvent*) ```
void q_keysequenceedit_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnDragMoveEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QDragLeaveEvent* event ```
void q_keysequenceedit_drag_leave_event(void* self, void* event) {
    QKeySequenceEdit_DragLeaveEvent((QKeySequenceEdit*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QDragLeaveEvent* event ```
void q_keysequenceedit_qbase_drag_leave_event(void* self, void* event) {
    QKeySequenceEdit_QBaseDragLeaveEvent((QKeySequenceEdit*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QDragLeaveEvent*) ```
void q_keysequenceedit_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnDragLeaveEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QDropEvent* event ```
void q_keysequenceedit_drop_event(void* self, void* event) {
    QKeySequenceEdit_DropEvent((QKeySequenceEdit*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QDropEvent* event ```
void q_keysequenceedit_qbase_drop_event(void* self, void* event) {
    QKeySequenceEdit_QBaseDropEvent((QKeySequenceEdit*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QDropEvent*) ```
void q_keysequenceedit_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnDropEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QShowEvent* event ```
void q_keysequenceedit_show_event(void* self, void* event) {
    QKeySequenceEdit_ShowEvent((QKeySequenceEdit*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QShowEvent* event ```
void q_keysequenceedit_qbase_show_event(void* self, void* event) {
    QKeySequenceEdit_QBaseShowEvent((QKeySequenceEdit*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QShowEvent*) ```
void q_keysequenceedit_on_show_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnShowEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QHideEvent* event ```
void q_keysequenceedit_hide_event(void* self, void* event) {
    QKeySequenceEdit_HideEvent((QKeySequenceEdit*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QHideEvent* event ```
void q_keysequenceedit_qbase_hide_event(void* self, void* event) {
    QKeySequenceEdit_QBaseHideEvent((QKeySequenceEdit*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QHideEvent*) ```
void q_keysequenceedit_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnHideEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_keysequenceedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QKeySequenceEdit_NativeEvent((QKeySequenceEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_keysequenceedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QKeySequenceEdit_QBaseNativeEvent((QKeySequenceEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, bool (*slot)(QKeySequenceEdit*, const char*, void*, intptr_t*) ```
void q_keysequenceedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QKeySequenceEdit_OnNativeEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QEvent* param1 ```
void q_keysequenceedit_change_event(void* self, void* param1) {
    QKeySequenceEdit_ChangeEvent((QKeySequenceEdit*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QEvent* param1 ```
void q_keysequenceedit_qbase_change_event(void* self, void* param1) {
    QKeySequenceEdit_QBaseChangeEvent((QKeySequenceEdit*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QEvent*) ```
void q_keysequenceedit_on_change_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnChangeEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_keysequenceedit_metric(void* self, int64_t param1) {
    return QKeySequenceEdit_Metric((QKeySequenceEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_keysequenceedit_qbase_metric(void* self, int64_t param1) {
    return QKeySequenceEdit_QBaseMetric((QKeySequenceEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, int32_t (*slot)(QKeySequenceEdit*, enum QPaintDevice__PaintDeviceMetric) ```
void q_keysequenceedit_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QKeySequenceEdit_OnMetric((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QPainter* painter ```
void q_keysequenceedit_init_painter(void* self, void* painter) {
    QKeySequenceEdit_InitPainter((QKeySequenceEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QPainter* painter ```
void q_keysequenceedit_qbase_init_painter(void* self, void* painter) {
    QKeySequenceEdit_QBaseInitPainter((QKeySequenceEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QPainter*) ```
void q_keysequenceedit_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnInitPainter((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QPoint* offset ```
QPaintDevice* q_keysequenceedit_redirected(void* self, void* offset) {
    return QKeySequenceEdit_Redirected((QKeySequenceEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QPoint* offset ```
QPaintDevice* q_keysequenceedit_qbase_redirected(void* self, void* offset) {
    return QKeySequenceEdit_QBaseRedirected((QKeySequenceEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QPaintDevice* (*slot)(QKeySequenceEdit*, QPoint*) ```
void q_keysequenceedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QKeySequenceEdit_OnRedirected((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
QPainter* q_keysequenceedit_shared_painter(void* self) {
    return QKeySequenceEdit_SharedPainter((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
QPainter* q_keysequenceedit_qbase_shared_painter(void* self) {
    return QKeySequenceEdit_QBaseSharedPainter((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QPainter* (*slot)() ```
void q_keysequenceedit_on_shared_painter(void* self, QPainter* (*slot)()) {
    QKeySequenceEdit_OnSharedPainter((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QInputMethodEvent* param1 ```
void q_keysequenceedit_input_method_event(void* self, void* param1) {
    QKeySequenceEdit_InputMethodEvent((QKeySequenceEdit*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QInputMethodEvent* param1 ```
void q_keysequenceedit_qbase_input_method_event(void* self, void* param1) {
    QKeySequenceEdit_QBaseInputMethodEvent((QKeySequenceEdit*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QInputMethodEvent*) ```
void q_keysequenceedit_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnInputMethodEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_keysequenceedit_input_method_query(void* self, int64_t param1) {
    return QKeySequenceEdit_InputMethodQuery((QKeySequenceEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_keysequenceedit_qbase_input_method_query(void* self, int64_t param1) {
    return QKeySequenceEdit_QBaseInputMethodQuery((QKeySequenceEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QVariant* (*slot)(QKeySequenceEdit*, enum Qt__InputMethodQuery) ```
void q_keysequenceedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QKeySequenceEdit_OnInputMethodQuery((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, bool next ```
bool q_keysequenceedit_focus_next_prev_child(void* self, bool next) {
    return QKeySequenceEdit_FocusNextPrevChild((QKeySequenceEdit*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, bool next ```
bool q_keysequenceedit_qbase_focus_next_prev_child(void* self, bool next) {
    return QKeySequenceEdit_QBaseFocusNextPrevChild((QKeySequenceEdit*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, bool (*slot)(QKeySequenceEdit*, bool) ```
void q_keysequenceedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QKeySequenceEdit_OnFocusNextPrevChild((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QObject* watched, QEvent* event ```
bool q_keysequenceedit_event_filter(void* self, void* watched, void* event) {
    return QKeySequenceEdit_EventFilter((QKeySequenceEdit*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QObject* watched, QEvent* event ```
bool q_keysequenceedit_qbase_event_filter(void* self, void* watched, void* event) {
    return QKeySequenceEdit_QBaseEventFilter((QKeySequenceEdit*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, bool (*slot)(QKeySequenceEdit*, QObject*, QEvent*) ```
void q_keysequenceedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QKeySequenceEdit_OnEventFilter((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QChildEvent* event ```
void q_keysequenceedit_child_event(void* self, void* event) {
    QKeySequenceEdit_ChildEvent((QKeySequenceEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QChildEvent* event ```
void q_keysequenceedit_qbase_child_event(void* self, void* event) {
    QKeySequenceEdit_QBaseChildEvent((QKeySequenceEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QChildEvent*) ```
void q_keysequenceedit_on_child_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnChildEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QEvent* event ```
void q_keysequenceedit_custom_event(void* self, void* event) {
    QKeySequenceEdit_CustomEvent((QKeySequenceEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QEvent* event ```
void q_keysequenceedit_qbase_custom_event(void* self, void* event) {
    QKeySequenceEdit_QBaseCustomEvent((QKeySequenceEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QEvent*) ```
void q_keysequenceedit_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnCustomEvent((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMetaMethod* signal ```
void q_keysequenceedit_connect_notify(void* self, void* signal) {
    QKeySequenceEdit_ConnectNotify((QKeySequenceEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMetaMethod* signal ```
void q_keysequenceedit_qbase_connect_notify(void* self, void* signal) {
    QKeySequenceEdit_QBaseConnectNotify((QKeySequenceEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QMetaMethod*) ```
void q_keysequenceedit_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnConnectNotify((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMetaMethod* signal ```
void q_keysequenceedit_disconnect_notify(void* self, void* signal) {
    QKeySequenceEdit_DisconnectNotify((QKeySequenceEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMetaMethod* signal ```
void q_keysequenceedit_qbase_disconnect_notify(void* self, void* signal) {
    QKeySequenceEdit_QBaseDisconnectNotify((QKeySequenceEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)(QKeySequenceEdit*, QMetaMethod*) ```
void q_keysequenceedit_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QKeySequenceEdit_OnDisconnectNotify((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_update_micro_focus(void* self) {
    QKeySequenceEdit_UpdateMicroFocus((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_qbase_update_micro_focus(void* self) {
    QKeySequenceEdit_QBaseUpdateMicroFocus((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)() ```
void q_keysequenceedit_on_update_micro_focus(void* self, void (*slot)()) {
    QKeySequenceEdit_OnUpdateMicroFocus((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_create(void* self) {
    QKeySequenceEdit_Create((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_qbase_create(void* self) {
    QKeySequenceEdit_QBaseCreate((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)() ```
void q_keysequenceedit_on_create(void* self, void (*slot)()) {
    QKeySequenceEdit_OnCreate((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_destroy(void* self) {
    QKeySequenceEdit_Destroy((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_qbase_destroy(void* self) {
    QKeySequenceEdit_QBaseDestroy((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, void (*slot)() ```
void q_keysequenceedit_on_destroy(void* self, void (*slot)()) {
    QKeySequenceEdit_OnDestroy((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_focus_next_child(void* self) {
    return QKeySequenceEdit_FocusNextChild((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_qbase_focus_next_child(void* self) {
    return QKeySequenceEdit_QBaseFocusNextChild((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, bool (*slot)() ```
void q_keysequenceedit_on_focus_next_child(void* self, bool (*slot)()) {
    QKeySequenceEdit_OnFocusNextChild((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_focus_previous_child(void* self) {
    return QKeySequenceEdit_FocusPreviousChild((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
bool q_keysequenceedit_qbase_focus_previous_child(void* self) {
    return QKeySequenceEdit_QBaseFocusPreviousChild((QKeySequenceEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, bool (*slot)() ```
void q_keysequenceedit_on_focus_previous_child(void* self, bool (*slot)()) {
    QKeySequenceEdit_OnFocusPreviousChild((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
QObject* q_keysequenceedit_sender(void* self) {
    return QKeySequenceEdit_Sender((QKeySequenceEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
QObject* q_keysequenceedit_qbase_sender(void* self) {
    return QKeySequenceEdit_QBaseSender((QKeySequenceEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QObject* (*slot)() ```
void q_keysequenceedit_on_sender(void* self, QObject* (*slot)()) {
    QKeySequenceEdit_OnSender((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_sender_signal_index(void* self) {
    return QKeySequenceEdit_SenderSignalIndex((QKeySequenceEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self ```
int32_t q_keysequenceedit_qbase_sender_signal_index(void* self) {
    return QKeySequenceEdit_QBaseSenderSignalIndex((QKeySequenceEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, int32_t (*slot)() ```
void q_keysequenceedit_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QKeySequenceEdit_OnSenderSignalIndex((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, const char* signal ```
int32_t q_keysequenceedit_receivers(void* self, const char* signal) {
    return QKeySequenceEdit_Receivers((QKeySequenceEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, const char* signal ```
int32_t q_keysequenceedit_qbase_receivers(void* self, const char* signal) {
    return QKeySequenceEdit_QBaseReceivers((QKeySequenceEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, int32_t (*slot)(QKeySequenceEdit*, const char*) ```
void q_keysequenceedit_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QKeySequenceEdit_OnReceivers((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMetaMethod* signal ```
bool q_keysequenceedit_is_signal_connected(void* self, void* signal) {
    return QKeySequenceEdit_IsSignalConnected((QKeySequenceEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, QMetaMethod* signal ```
bool q_keysequenceedit_qbase_is_signal_connected(void* self, void* signal) {
    return QKeySequenceEdit_QBaseIsSignalConnected((QKeySequenceEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QKeySequenceEdit* self, bool (*slot)(QKeySequenceEdit*, QMetaMethod*) ```
void q_keysequenceedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QKeySequenceEdit_OnIsSignalConnected((QKeySequenceEdit*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QKeySequenceEdit* self ```
void q_keysequenceedit_delete(void* self) {
    QKeySequenceEdit_Delete((QKeySequenceEdit*)(self));
}