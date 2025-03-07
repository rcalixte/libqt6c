#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcompleter.hpp"
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
#include "libqmenu.hpp"
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
#include "libqvalidator.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqlineedit.hpp"
#include "libqlineedit.h"

/// https://doc.qt.io/qt-6/qlineedit.html

/// q_lineedit_new constructs a new QLineEdit object.
///
/// ``` QWidget* parent ```
QLineEdit* q_lineedit_new(void* parent) {
    return QLineEdit_new((QWidget*)parent);
}

/// q_lineedit_new2 constructs a new QLineEdit object.
///
///
QLineEdit* q_lineedit_new2() {
    return QLineEdit_new2();
}

/// q_lineedit_new3 constructs a new QLineEdit object.
///
/// ``` const char* param1 ```
QLineEdit* q_lineedit_new3(const char* param1) {
    return QLineEdit_new3(qstring(param1));
}

/// q_lineedit_new4 constructs a new QLineEdit object.
///
/// ``` const char* param1, QWidget* parent ```
QLineEdit* q_lineedit_new4(const char* param1, void* parent) {
    return QLineEdit_new4(qstring(param1), (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLineEdit* self ```
QMetaObject* q_lineedit_meta_object(void* self) {
    return QLineEdit_MetaObject((QLineEdit*)self);
}

/// ``` QLineEdit* self, const char* param1 ```
void* q_lineedit_metacast(void* self, const char* param1) {
    return QLineEdit_Metacast((QLineEdit*)self, param1);
}

/// ``` QLineEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_lineedit_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLineEdit_Metacall((QLineEdit*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, int32_t (*slot)(QLineEdit*, enum QMetaObject__Call, int, void*) ```
void q_lineedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QLineEdit_OnMetacall((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_lineedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLineEdit_QBaseMetacall((QLineEdit*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_lineedit_tr(const char* s) {
    libqt_string _str = QLineEdit_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#text)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_text(void* self) {
    libqt_string _str = QLineEdit_Text((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#displayText)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_display_text(void* self) {
    libqt_string _str = QLineEdit_DisplayText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#placeholderText)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_placeholder_text(void* self) {
    libqt_string _str = QLineEdit_PlaceholderText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setPlaceholderText)
///
/// ``` QLineEdit* self, const char* placeholderText ```
void q_lineedit_set_placeholder_text(void* self, const char* placeholderText) {
    QLineEdit_SetPlaceholderText((QLineEdit*)self, qstring(placeholderText));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#maxLength)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_max_length(void* self) {
    return QLineEdit_MaxLength((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setMaxLength)
///
/// ``` QLineEdit* self, int maxLength ```
void q_lineedit_set_max_length(void* self, int maxLength) {
    QLineEdit_SetMaxLength((QLineEdit*)self, maxLength);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setFrame)
///
/// ``` QLineEdit* self, bool frame ```
void q_lineedit_set_frame(void* self, bool frame) {
    QLineEdit_SetFrame((QLineEdit*)self, frame);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#hasFrame)
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_frame(void* self) {
    return QLineEdit_HasFrame((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setClearButtonEnabled)
///
/// ``` QLineEdit* self, bool enable ```
void q_lineedit_set_clear_button_enabled(void* self, bool enable) {
    QLineEdit_SetClearButtonEnabled((QLineEdit*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isClearButtonEnabled)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_clear_button_enabled(void* self) {
    return QLineEdit_IsClearButtonEnabled((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#echoMode)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_echo_mode(void* self) {
    return QLineEdit_EchoMode((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setEchoMode)
///
/// ``` QLineEdit* self, enum QLineEdit__EchoMode echoMode ```
void q_lineedit_set_echo_mode(void* self, int64_t echoMode) {
    QLineEdit_SetEchoMode((QLineEdit*)self, echoMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isReadOnly)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_read_only(void* self) {
    return QLineEdit_IsReadOnly((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setReadOnly)
///
/// ``` QLineEdit* self, bool readOnly ```
void q_lineedit_set_read_only(void* self, bool readOnly) {
    QLineEdit_SetReadOnly((QLineEdit*)self, readOnly);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setValidator)
///
/// ``` QLineEdit* self, QValidator* validator ```
void q_lineedit_set_validator(void* self, void* validator) {
    QLineEdit_SetValidator((QLineEdit*)self, (QValidator*)validator);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#validator)
///
/// ``` QLineEdit* self ```
QValidator* q_lineedit_validator(void* self) {
    return QLineEdit_Validator((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setCompleter)
///
/// ``` QLineEdit* self, QCompleter* completer ```
void q_lineedit_set_completer(void* self, void* completer) {
    QLineEdit_SetCompleter((QLineEdit*)self, (QCompleter*)completer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#completer)
///
/// ``` QLineEdit* self ```
QCompleter* q_lineedit_completer(void* self) {
    return QLineEdit_Completer((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_size_hint(void* self) {
    return QLineEdit_SizeHint((QLineEdit*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, QSize* (*slot)() ```
void q_lineedit_on_size_hint(void* self, QSize* (*slot)()) {
    QLineEdit_OnSizeHint((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_qbase_size_hint(void* self) {
    return QLineEdit_QBaseSizeHint((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_minimum_size_hint(void* self) {
    return QLineEdit_MinimumSizeHint((QLineEdit*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, QSize* (*slot)() ```
void q_lineedit_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QLineEdit_OnMinimumSizeHint((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_qbase_minimum_size_hint(void* self) {
    return QLineEdit_QBaseMinimumSizeHint((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPosition)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_cursor_position(void* self) {
    return QLineEdit_CursorPosition((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setCursorPosition)
///
/// ``` QLineEdit* self, int cursorPosition ```
void q_lineedit_set_cursor_position(void* self, int cursorPosition) {
    QLineEdit_SetCursorPosition((QLineEdit*)self, cursorPosition);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionAt)
///
/// ``` QLineEdit* self, QPoint* pos ```
int32_t q_lineedit_cursor_position_at(void* self, void* pos) {
    return QLineEdit_CursorPositionAt((QLineEdit*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setAlignment)
///
/// ``` QLineEdit* self, int flag ```
void q_lineedit_set_alignment(void* self, int64_t flag) {
    QLineEdit_SetAlignment((QLineEdit*)self, flag);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#alignment)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_alignment(void* self) {
    return QLineEdit_Alignment((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// ``` QLineEdit* self, bool mark ```
void q_lineedit_cursor_forward(void* self, bool mark) {
    QLineEdit_CursorForward((QLineEdit*)self, mark);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// ``` QLineEdit* self, bool mark ```
void q_lineedit_cursor_backward(void* self, bool mark) {
    QLineEdit_CursorBackward((QLineEdit*)self, mark);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorWordForward)
///
/// ``` QLineEdit* self, bool mark ```
void q_lineedit_cursor_word_forward(void* self, bool mark) {
    QLineEdit_CursorWordForward((QLineEdit*)self, mark);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorWordBackward)
///
/// ``` QLineEdit* self, bool mark ```
void q_lineedit_cursor_word_backward(void* self, bool mark) {
    QLineEdit_CursorWordBackward((QLineEdit*)self, mark);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#backspace)
///
/// ``` QLineEdit* self ```
void q_lineedit_backspace(void* self) {
    QLineEdit_Backspace((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#del)
///
/// ``` QLineEdit* self ```
void q_lineedit_del(void* self) {
    QLineEdit_Del((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#home)
///
/// ``` QLineEdit* self, bool mark ```
void q_lineedit_home(void* self, bool mark) {
    QLineEdit_Home((QLineEdit*)self, mark);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#end)
///
/// ``` QLineEdit* self, bool mark ```
void q_lineedit_end(void* self, bool mark) {
    QLineEdit_End((QLineEdit*)self, mark);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isModified)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_modified(void* self) {
    return QLineEdit_IsModified((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setModified)
///
/// ``` QLineEdit* self, bool modified ```
void q_lineedit_set_modified(void* self, bool modified) {
    QLineEdit_SetModified((QLineEdit*)self, modified);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setSelection)
///
/// ``` QLineEdit* self, int param1, int param2 ```
void q_lineedit_set_selection(void* self, int param1, int param2) {
    QLineEdit_SetSelection((QLineEdit*)self, param1, param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#hasSelectedText)
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_selected_text(void* self) {
    return QLineEdit_HasSelectedText((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectedText)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_selected_text(void* self) {
    libqt_string _str = QLineEdit_SelectedText((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionStart)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_selection_start(void* self) {
    return QLineEdit_SelectionStart((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionEnd)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_selection_end(void* self) {
    return QLineEdit_SelectionEnd((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionLength)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_selection_length(void* self) {
    return QLineEdit_SelectionLength((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isUndoAvailable)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_undo_available(void* self) {
    return QLineEdit_IsUndoAvailable((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isRedoAvailable)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_redo_available(void* self) {
    return QLineEdit_IsRedoAvailable((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setDragEnabled)
///
/// ``` QLineEdit* self, bool b ```
void q_lineedit_set_drag_enabled(void* self, bool b) {
    QLineEdit_SetDragEnabled((QLineEdit*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnabled)
///
/// ``` QLineEdit* self ```
bool q_lineedit_drag_enabled(void* self) {
    return QLineEdit_DragEnabled((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setCursorMoveStyle)
///
/// ``` QLineEdit* self, enum Qt__CursorMoveStyle style ```
void q_lineedit_set_cursor_move_style(void* self, int64_t style) {
    QLineEdit_SetCursorMoveStyle((QLineEdit*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorMoveStyle)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_cursor_move_style(void* self) {
    return QLineEdit_CursorMoveStyle((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMask)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_input_mask(void* self) {
    libqt_string _str = QLineEdit_InputMask((QLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setInputMask)
///
/// ``` QLineEdit* self, const char* inputMask ```
void q_lineedit_set_input_mask(void* self, const char* inputMask) {
    QLineEdit_SetInputMask((QLineEdit*)self, qstring(inputMask));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#hasAcceptableInput)
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_acceptable_input(void* self) {
    return QLineEdit_HasAcceptableInput((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// ``` QLineEdit* self, int left, int top, int right, int bottom ```
void q_lineedit_set_text_margins(void* self, int left, int top, int right, int bottom) {
    QLineEdit_SetTextMargins((QLineEdit*)self, left, top, right, bottom);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// ``` QLineEdit* self, QMargins* margins ```
void q_lineedit_set_text_margins_with_margins(void* self, void* margins) {
    QLineEdit_SetTextMarginsWithMargins((QLineEdit*)self, (QMargins*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textMargins)
///
/// ``` QLineEdit* self ```
QMargins* q_lineedit_text_margins(void* self) {
    return QLineEdit_TextMargins((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// ``` QLineEdit* self, QAction* action, enum QLineEdit__ActionPosition position ```
void q_lineedit_add_action(void* self, void* action, int64_t position) {
    QLineEdit_AddAction((QLineEdit*)self, (QAction*)action, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// ``` QLineEdit* self, QIcon* icon, enum QLineEdit__ActionPosition position ```
QAction* q_lineedit_add_action2(void* self, void* icon, int64_t position) {
    return QLineEdit_AddAction2((QLineEdit*)self, (QIcon*)icon, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setText)
///
/// ``` QLineEdit* self, const char* text ```
void q_lineedit_set_text(void* self, const char* text) {
    QLineEdit_SetText((QLineEdit*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#clear)
///
/// ``` QLineEdit* self ```
void q_lineedit_clear(void* self) {
    QLineEdit_Clear((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectAll)
///
/// ``` QLineEdit* self ```
void q_lineedit_select_all(void* self) {
    QLineEdit_SelectAll((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#undo)
///
/// ``` QLineEdit* self ```
void q_lineedit_undo(void* self) {
    QLineEdit_Undo((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#redo)
///
/// ``` QLineEdit* self ```
void q_lineedit_redo(void* self) {
    QLineEdit_Redo((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cut)
///
/// ``` QLineEdit* self ```
void q_lineedit_cut(void* self) {
    QLineEdit_Cut((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#copy)
///
/// ``` QLineEdit* self ```
void q_lineedit_copy(void* self) {
    QLineEdit_Copy((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#paste)
///
/// ``` QLineEdit* self ```
void q_lineedit_paste(void* self) {
    QLineEdit_Paste((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#deselect)
///
/// ``` QLineEdit* self ```
void q_lineedit_deselect(void* self) {
    QLineEdit_Deselect((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#insert)
///
/// ``` QLineEdit* self, const char* param1 ```
void q_lineedit_insert(void* self, const char* param1) {
    QLineEdit_Insert((QLineEdit*)self, qstring(param1));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#createStandardContextMenu)
///
/// ``` QLineEdit* self ```
QMenu* q_lineedit_create_standard_context_menu(void* self) {
    return QLineEdit_CreateStandardContextMenu((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
///
/// ``` QLineEdit* self, const char* param1 ```
void q_lineedit_text_changed(void* self, const char* param1) {
    QLineEdit_TextChanged((QLineEdit*)self, qstring(param1));
}

/// ``` QLineEdit* self, void (*slot)(QLineEdit*, const char*) ```
void q_lineedit_on_text_changed(void* self, void (*slot)(void*, const char*)) {
    QLineEdit_Connect_TextChanged((QLineEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
///
/// ``` QLineEdit* self, const char* param1 ```
void q_lineedit_text_edited(void* self, const char* param1) {
    QLineEdit_TextEdited((QLineEdit*)self, qstring(param1));
}

/// ``` QLineEdit* self, void (*slot)(QLineEdit*, const char*) ```
void q_lineedit_on_text_edited(void* self, void (*slot)(void*, const char*)) {
    QLineEdit_Connect_TextEdited((QLineEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
///
/// ``` QLineEdit* self, int param1, int param2 ```
void q_lineedit_cursor_position_changed(void* self, int param1, int param2) {
    QLineEdit_CursorPositionChanged((QLineEdit*)self, param1, param2);
}

/// ``` QLineEdit* self, void (*slot)(QLineEdit*, int, int) ```
void q_lineedit_on_cursor_position_changed(void* self, void (*slot)(void*, int, int)) {
    QLineEdit_Connect_CursorPositionChanged((QLineEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
///
/// ``` QLineEdit* self ```
void q_lineedit_return_pressed(void* self) {
    QLineEdit_ReturnPressed((QLineEdit*)self);
}

/// ``` QLineEdit* self, void (*slot)(QLineEdit*) ```
void q_lineedit_on_return_pressed(void* self, void (*slot)(void*)) {
    QLineEdit_Connect_ReturnPressed((QLineEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
///
/// ``` QLineEdit* self ```
void q_lineedit_editing_finished(void* self) {
    QLineEdit_EditingFinished((QLineEdit*)self);
}

/// ``` QLineEdit* self, void (*slot)(QLineEdit*) ```
void q_lineedit_on_editing_finished(void* self, void (*slot)(void*)) {
    QLineEdit_Connect_EditingFinished((QLineEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
///
/// ``` QLineEdit* self ```
void q_lineedit_selection_changed(void* self) {
    QLineEdit_SelectionChanged((QLineEdit*)self);
}

/// ``` QLineEdit* self, void (*slot)(QLineEdit*) ```
void q_lineedit_on_selection_changed(void* self, void (*slot)(void*)) {
    QLineEdit_Connect_SelectionChanged((QLineEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
///
/// ``` QLineEdit* self ```
void q_lineedit_input_rejected(void* self) {
    QLineEdit_InputRejected((QLineEdit*)self);
}

/// ``` QLineEdit* self, void (*slot)(QLineEdit*) ```
void q_lineedit_on_input_rejected(void* self, void (*slot)(void*)) {
    QLineEdit_Connect_InputRejected((QLineEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_mouse_press_event(void* self, void* param1) {
    QLineEdit_MousePressEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMouseEvent*) ```
void q_lineedit_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnMousePressEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_qbase_mouse_press_event(void* self, void* param1) {
    QLineEdit_QBaseMousePressEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_mouse_move_event(void* self, void* param1) {
    QLineEdit_MouseMoveEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMouseEvent*) ```
void q_lineedit_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnMouseMoveEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_qbase_mouse_move_event(void* self, void* param1) {
    QLineEdit_QBaseMouseMoveEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_mouse_release_event(void* self, void* param1) {
    QLineEdit_MouseReleaseEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMouseEvent*) ```
void q_lineedit_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnMouseReleaseEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_qbase_mouse_release_event(void* self, void* param1) {
    QLineEdit_QBaseMouseReleaseEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_mouse_double_click_event(void* self, void* param1) {
    QLineEdit_MouseDoubleClickEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMouseEvent*) ```
void q_lineedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnMouseDoubleClickEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_qbase_mouse_double_click_event(void* self, void* param1) {
    QLineEdit_QBaseMouseDoubleClickEvent((QLineEdit*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// ``` QLineEdit* self, QKeyEvent* param1 ```
void q_lineedit_key_press_event(void* self, void* param1) {
    QLineEdit_KeyPressEvent((QLineEdit*)self, (QKeyEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QKeyEvent*) ```
void q_lineedit_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnKeyPressEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QKeyEvent* param1 ```
void q_lineedit_qbase_key_press_event(void* self, void* param1) {
    QLineEdit_QBaseKeyPressEvent((QLineEdit*)self, (QKeyEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// ``` QLineEdit* self, QKeyEvent* param1 ```
void q_lineedit_key_release_event(void* self, void* param1) {
    QLineEdit_KeyReleaseEvent((QLineEdit*)self, (QKeyEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QKeyEvent*) ```
void q_lineedit_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnKeyReleaseEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QKeyEvent* param1 ```
void q_lineedit_qbase_key_release_event(void* self, void* param1) {
    QLineEdit_QBaseKeyReleaseEvent((QLineEdit*)self, (QKeyEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// ``` QLineEdit* self, QFocusEvent* param1 ```
void q_lineedit_focus_in_event(void* self, void* param1) {
    QLineEdit_FocusInEvent((QLineEdit*)self, (QFocusEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QFocusEvent*) ```
void q_lineedit_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnFocusInEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QFocusEvent* param1 ```
void q_lineedit_qbase_focus_in_event(void* self, void* param1) {
    QLineEdit_QBaseFocusInEvent((QLineEdit*)self, (QFocusEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// ``` QLineEdit* self, QFocusEvent* param1 ```
void q_lineedit_focus_out_event(void* self, void* param1) {
    QLineEdit_FocusOutEvent((QLineEdit*)self, (QFocusEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QFocusEvent*) ```
void q_lineedit_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnFocusOutEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QFocusEvent* param1 ```
void q_lineedit_qbase_focus_out_event(void* self, void* param1) {
    QLineEdit_QBaseFocusOutEvent((QLineEdit*)self, (QFocusEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// ``` QLineEdit* self, QPaintEvent* param1 ```
void q_lineedit_paint_event(void* self, void* param1) {
    QLineEdit_PaintEvent((QLineEdit*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QPaintEvent*) ```
void q_lineedit_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnPaintEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QPaintEvent* param1 ```
void q_lineedit_qbase_paint_event(void* self, void* param1) {
    QLineEdit_QBasePaintEvent((QLineEdit*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// ``` QLineEdit* self, QDragEnterEvent* param1 ```
void q_lineedit_drag_enter_event(void* self, void* param1) {
    QLineEdit_DragEnterEvent((QLineEdit*)self, (QDragEnterEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QDragEnterEvent*) ```
void q_lineedit_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnDragEnterEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QDragEnterEvent* param1 ```
void q_lineedit_qbase_drag_enter_event(void* self, void* param1) {
    QLineEdit_QBaseDragEnterEvent((QLineEdit*)self, (QDragEnterEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// ``` QLineEdit* self, QDragMoveEvent* e ```
void q_lineedit_drag_move_event(void* self, void* e) {
    QLineEdit_DragMoveEvent((QLineEdit*)self, (QDragMoveEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QDragMoveEvent*) ```
void q_lineedit_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnDragMoveEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QDragMoveEvent* e ```
void q_lineedit_qbase_drag_move_event(void* self, void* e) {
    QLineEdit_QBaseDragMoveEvent((QLineEdit*)self, (QDragMoveEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// ``` QLineEdit* self, QDragLeaveEvent* e ```
void q_lineedit_drag_leave_event(void* self, void* e) {
    QLineEdit_DragLeaveEvent((QLineEdit*)self, (QDragLeaveEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QDragLeaveEvent*) ```
void q_lineedit_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnDragLeaveEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QDragLeaveEvent* e ```
void q_lineedit_qbase_drag_leave_event(void* self, void* e) {
    QLineEdit_QBaseDragLeaveEvent((QLineEdit*)self, (QDragLeaveEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// ``` QLineEdit* self, QDropEvent* param1 ```
void q_lineedit_drop_event(void* self, void* param1) {
    QLineEdit_DropEvent((QLineEdit*)self, (QDropEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QDropEvent*) ```
void q_lineedit_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnDropEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QDropEvent* param1 ```
void q_lineedit_qbase_drop_event(void* self, void* param1) {
    QLineEdit_QBaseDropEvent((QLineEdit*)self, (QDropEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// ``` QLineEdit* self, QEvent* param1 ```
void q_lineedit_change_event(void* self, void* param1) {
    QLineEdit_ChangeEvent((QLineEdit*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QEvent*) ```
void q_lineedit_on_change_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnChangeEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QEvent* param1 ```
void q_lineedit_qbase_change_event(void* self, void* param1) {
    QLineEdit_QBaseChangeEvent((QLineEdit*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
///
/// ``` QLineEdit* self, QContextMenuEvent* param1 ```
void q_lineedit_context_menu_event(void* self, void* param1) {
    QLineEdit_ContextMenuEvent((QLineEdit*)self, (QContextMenuEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QContextMenuEvent*) ```
void q_lineedit_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnContextMenuEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QContextMenuEvent* param1 ```
void q_lineedit_qbase_context_menu_event(void* self, void* param1) {
    QLineEdit_QBaseContextMenuEvent((QLineEdit*)self, (QContextMenuEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// ``` QLineEdit* self, QInputMethodEvent* param1 ```
void q_lineedit_input_method_event(void* self, void* param1) {
    QLineEdit_InputMethodEvent((QLineEdit*)self, (QInputMethodEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QInputMethodEvent*) ```
void q_lineedit_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnInputMethodEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QInputMethodEvent* param1 ```
void q_lineedit_qbase_input_method_event(void* self, void* param1) {
    QLineEdit_QBaseInputMethodEvent((QLineEdit*)self, (QInputMethodEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// ``` QLineEdit* self, QStyleOptionFrame* option ```
void q_lineedit_init_style_option(void* self, void* option) {
    QLineEdit_InitStyleOption((QLineEdit*)self, (QStyleOptionFrame*)option);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QStyleOptionFrame*) ```
void q_lineedit_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnInitStyleOption((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QStyleOptionFrame* option ```
void q_lineedit_qbase_init_style_option(void* self, void* option) {
    QLineEdit_QBaseInitStyleOption((QLineEdit*)self, (QStyleOptionFrame*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// ``` QLineEdit* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_lineedit_input_method_query(void* self, int64_t param1) {
    return QLineEdit_InputMethodQuery((QLineEdit*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, QVariant* (*slot)(QLineEdit*, enum Qt__InputMethodQuery) ```
void q_lineedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QLineEdit_OnInputMethodQuery((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_lineedit_qbase_input_method_query(void* self, int64_t param1) {
    return QLineEdit_QBaseInputMethodQuery((QLineEdit*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// ``` QLineEdit* self, enum Qt__InputMethodQuery property, QVariant* argument ```
QVariant* q_lineedit_input_method_query2(void* self, int64_t property, void* argument) {
    return QLineEdit_InputMethodQuery2((QLineEdit*)self, property, (QVariant*)argument);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// ``` QLineEdit* self, QTimerEvent* param1 ```
void q_lineedit_timer_event(void* self, void* param1) {
    QLineEdit_TimerEvent((QLineEdit*)self, (QTimerEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QTimerEvent*) ```
void q_lineedit_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnTimerEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QTimerEvent* param1 ```
void q_lineedit_qbase_timer_event(void* self, void* param1) {
    QLineEdit_QBaseTimerEvent((QLineEdit*)self, (QTimerEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#event)
///
/// ``` QLineEdit* self, QEvent* param1 ```
bool q_lineedit_event(void* self, void* param1) {
    return QLineEdit_Event((QLineEdit*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, bool (*slot)(QLineEdit*, QEvent*) ```
void q_lineedit_on_event(void* self, bool (*slot)(void*, void*)) {
    QLineEdit_OnEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self, QEvent* param1 ```
bool q_lineedit_qbase_event(void* self, void* param1) {
    return QLineEdit_QBaseEvent((QLineEdit*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_cursor_rect(void* self) {
    return QLineEdit_CursorRect((QLineEdit*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, QRect* (*slot)() ```
void q_lineedit_on_cursor_rect(void* self, QRect* (*slot)()) {
    QLineEdit_OnCursorRect((QLineEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_qbase_cursor_rect(void* self) {
    return QLineEdit_QBaseCursorRect((QLineEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_lineedit_tr2(const char* s, const char* c) {
    libqt_string _str = QLineEdit_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_lineedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QLineEdit_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// ``` QLineEdit* self, bool mark, int steps ```
void q_lineedit_cursor_forward2(void* self, bool mark, int steps) {
    QLineEdit_CursorForward2((QLineEdit*)self, mark, steps);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// ``` QLineEdit* self, bool mark, int steps ```
void q_lineedit_cursor_backward2(void* self, bool mark, int steps) {
    QLineEdit_CursorBackward2((QLineEdit*)self, mark, steps);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QLineEdit* self ```
uintptr_t q_lineedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QLineEdit* self ```
void q_lineedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QLineEdit* self ```
uintptr_t q_lineedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QLineEdit* self ```
uintptr_t q_lineedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QLineEdit* self ```
QStyle* q_lineedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QLineEdit* self, QStyle* style ```
void q_lineedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QLineEdit* self, enum Qt__WindowModality windowModality ```
void q_lineedit_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QLineEdit* self, QWidget* param1 ```
bool q_lineedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QLineEdit* self, bool enabled ```
void q_lineedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QLineEdit* self, bool disabled ```
void q_lineedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QLineEdit* self, bool windowModified ```
void q_lineedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QLineEdit* self ```
QPoint* q_lineedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QLineEdit* self ```
QRegion* q_lineedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QLineEdit* self, QSize* minimumSize ```
void q_lineedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QLineEdit* self, int minw, int minh ```
void q_lineedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QLineEdit* self, QSize* maximumSize ```
void q_lineedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QLineEdit* self, int maxw, int maxh ```
void q_lineedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QLineEdit* self, int minw ```
void q_lineedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QLineEdit* self, int minh ```
void q_lineedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QLineEdit* self, int maxw ```
void q_lineedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QLineEdit* self, int maxh ```
void q_lineedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QLineEdit* self, QSize* sizeIncrement ```
void q_lineedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QLineEdit* self, int w, int h ```
void q_lineedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QLineEdit* self, QSize* baseSize ```
void q_lineedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QLineEdit* self, int basew, int baseh ```
void q_lineedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QLineEdit* self, QSize* fixedSize ```
void q_lineedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QLineEdit* self, int w, int h ```
void q_lineedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QLineEdit* self, int w ```
void q_lineedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QLineEdit* self, int h ```
void q_lineedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QLineEdit* self, QPointF* param1 ```
QPointF* q_lineedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QLineEdit* self, QPoint* param1 ```
QPoint* q_lineedit_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QLineEdit* self, QPointF* param1 ```
QPointF* q_lineedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QLineEdit* self, QPoint* param1 ```
QPoint* q_lineedit_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QLineEdit* self, QPointF* param1 ```
QPointF* q_lineedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QLineEdit* self, QPoint* param1 ```
QPoint* q_lineedit_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QLineEdit* self, QPointF* param1 ```
QPointF* q_lineedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QLineEdit* self, QPoint* param1 ```
QPoint* q_lineedit_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QLineEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_lineedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QLineEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_lineedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QLineEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_lineedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QLineEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_lineedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QLineEdit* self ```
QPalette* q_lineedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QLineEdit* self, QPalette* palette ```
void q_lineedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QLineEdit* self, enum QPalette__ColorRole backgroundRole ```
void q_lineedit_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QLineEdit* self, enum QPalette__ColorRole foregroundRole ```
void q_lineedit_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QLineEdit* self ```
QFont* q_lineedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QLineEdit* self, QFont* font ```
void q_lineedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QLineEdit* self ```
QFontMetrics* q_lineedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QLineEdit* self ```
QFontInfo* q_lineedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QLineEdit* self ```
QCursor* q_lineedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QLineEdit* self, QCursor* cursor ```
void q_lineedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QLineEdit* self ```
void q_lineedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QLineEdit* self, bool enable ```
void q_lineedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QLineEdit* self ```
bool q_lineedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QLineEdit* self, bool enable ```
void q_lineedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QLineEdit* self, QBitmap* mask ```
void q_lineedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QLineEdit* self, QRegion* mask ```
void q_lineedit_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QLineEdit* self ```
QRegion* q_lineedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QLineEdit* self ```
void q_lineedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPaintDevice* target ```
void q_lineedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPainter* painter ```
void q_lineedit_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QLineEdit* self ```
QPixmap* q_lineedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QLineEdit* self ```
QGraphicsEffect* q_lineedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QLineEdit* self, QGraphicsEffect* effect ```
void q_lineedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QLineEdit* self, enum Qt__GestureType typeVal ```
void q_lineedit_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QLineEdit* self, enum Qt__GestureType typeVal ```
void q_lineedit_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QLineEdit* self, const char* windowTitle ```
void q_lineedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QLineEdit* self, const char* styleSheet ```
void q_lineedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QLineEdit* self, QIcon* icon ```
void q_lineedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QLineEdit* self ```
QIcon* q_lineedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QLineEdit* self, const char* windowIconText ```
void q_lineedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QLineEdit* self, const char* windowRole ```
void q_lineedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QLineEdit* self, const char* filePath ```
void q_lineedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QLineEdit* self, double level ```
void q_lineedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QLineEdit* self ```
double q_lineedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QLineEdit* self, const char* toolTip ```
void q_lineedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QLineEdit* self, int msec ```
void q_lineedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QLineEdit* self, const char* statusTip ```
void q_lineedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QLineEdit* self, const char* whatsThis ```
void q_lineedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QLineEdit* self, const char* name ```
void q_lineedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QLineEdit* self, const char* description ```
void q_lineedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QLineEdit* self, enum Qt__LayoutDirection direction ```
void q_lineedit_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QLineEdit* self ```
void q_lineedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QLineEdit* self, QLocale* locale ```
void q_lineedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QLineEdit* self ```
QLocale* q_lineedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QLineEdit* self ```
void q_lineedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QLineEdit* self ```
void q_lineedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QLineEdit* self ```
void q_lineedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QLineEdit* self ```
void q_lineedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QLineEdit* self, enum Qt__FocusReason reason ```
void q_lineedit_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QLineEdit* self, enum Qt__FocusPolicy policy ```
void q_lineedit_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_lineedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QLineEdit* self, QWidget* focusProxy ```
void q_lineedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QLineEdit* self, enum Qt__ContextMenuPolicy policy ```
void q_lineedit_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QLineEdit* self ```
void q_lineedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QLineEdit* self, QCursor* param1 ```
void q_lineedit_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QLineEdit* self ```
void q_lineedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QLineEdit* self ```
void q_lineedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QLineEdit* self ```
void q_lineedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QLineEdit* self, QKeySequence* key ```
int32_t q_lineedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QLineEdit* self, int id ```
void q_lineedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QLineEdit* self, int id ```
void q_lineedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QLineEdit* self, int id ```
void q_lineedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_lineedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_lineedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QLineEdit* self ```
bool q_lineedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QLineEdit* self, bool enable ```
void q_lineedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QLineEdit* self ```
QGraphicsProxyWidget* q_lineedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLineEdit* self ```
void q_lineedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLineEdit* self ```
void q_lineedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLineEdit* self, int x, int y, int w, int h ```
void q_lineedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLineEdit* self, QRect* param1 ```
void q_lineedit_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLineEdit* self, QRegion* param1 ```
void q_lineedit_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLineEdit* self, int x, int y, int w, int h ```
void q_lineedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLineEdit* self, QRect* param1 ```
void q_lineedit_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLineEdit* self, QRegion* param1 ```
void q_lineedit_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QLineEdit* self, bool hidden ```
void q_lineedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QLineEdit* self ```
void q_lineedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QLineEdit* self ```
void q_lineedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QLineEdit* self ```
void q_lineedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QLineEdit* self ```
void q_lineedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QLineEdit* self ```
void q_lineedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QLineEdit* self ```
void q_lineedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QLineEdit* self ```
bool q_lineedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QLineEdit* self ```
void q_lineedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QLineEdit* self ```
void q_lineedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QLineEdit* self, QWidget* param1 ```
void q_lineedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QLineEdit* self, int x, int y ```
void q_lineedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QLineEdit* self, QPoint* param1 ```
void q_lineedit_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QLineEdit* self, int w, int h ```
void q_lineedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QLineEdit* self, QSize* param1 ```
void q_lineedit_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QLineEdit* self, int x, int y, int w, int h ```
void q_lineedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QLineEdit* self, QRect* geometry ```
void q_lineedit_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QLineEdit* self ```
char* q_lineedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QLineEdit* self, const char* geometry ```
bool q_lineedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QLineEdit* self ```
void q_lineedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QLineEdit* self, QWidget* param1 ```
bool q_lineedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QLineEdit* self, int state ```
void q_lineedit_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QLineEdit* self, int state ```
void q_lineedit_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QLineEdit* self ```
QSizePolicy* q_lineedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QLineEdit* self, QSizePolicy* sizePolicy ```
void q_lineedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QLineEdit* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_lineedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QLineEdit* self ```
QRegion* q_lineedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QLineEdit* self, int left, int top, int right, int bottom ```
void q_lineedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QLineEdit* self, QMargins* margins ```
void q_lineedit_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QLineEdit* self ```
QMargins* q_lineedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QLineEdit* self ```
QLayout* q_lineedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QLineEdit* self, QLayout* layout ```
void q_lineedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QLineEdit* self ```
void q_lineedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QLineEdit* self, QWidget* parent ```
void q_lineedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QLineEdit* self, QWidget* parent, int f ```
void q_lineedit_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QLineEdit* self, int dx, int dy ```
void q_lineedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QLineEdit* self, int dx, int dy, QRect* param3 ```
void q_lineedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QLineEdit* self ```
bool q_lineedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QLineEdit* self, bool on ```
void q_lineedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QLineEdit* self, QAction* actions[] ```
void q_lineedit_add_actions(void* self, void* actions[]) {
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
/// ``` QLineEdit* self, QAction* before, QAction* actions[] ```
void q_lineedit_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QLineEdit* self, QAction* before, QAction* action ```
void q_lineedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QLineEdit* self, QAction* action ```
void q_lineedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QLineEdit* self ```
libqt_list /* of QAction* */ q_lineedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLineEdit* self, const char* text ```
QAction* q_lineedit_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLineEdit* self, const char* text, QKeySequence* shortcut ```
QAction* q_lineedit_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLineEdit* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_lineedit_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QLineEdit* self, int typeVal ```
void q_lineedit_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QLineEdit* self, enum Qt__WindowType param1 ```
void q_lineedit_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QLineEdit* self, int typeVal ```
void q_lineedit_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_lineedit_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QLineEdit* self, int x, int y ```
QWidget* q_lineedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QLineEdit* self, QPoint* p ```
QWidget* q_lineedit_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QLineEdit* self, enum Qt__WidgetAttribute param1 ```
void q_lineedit_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QLineEdit* self, enum Qt__WidgetAttribute param1 ```
bool q_lineedit_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QLineEdit* self ```
void q_lineedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QLineEdit* self, QWidget* child ```
bool q_lineedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QLineEdit* self ```
bool q_lineedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QLineEdit* self, bool enabled ```
void q_lineedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QLineEdit* self ```
QBackingStore* q_lineedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QLineEdit* self ```
QWindow* q_lineedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QLineEdit* self ```
QScreen* q_lineedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QLineEdit* self, QScreen* screen ```
void q_lineedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_lineedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QLineEdit* self, const char* title ```
void q_lineedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QLineEdit* self, void (*slot)(QWidget*, const char*) ```
void q_lineedit_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QLineEdit* self, QIcon* icon ```
void q_lineedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QLineEdit* self, void (*slot)(QWidget*, QIcon*) ```
void q_lineedit_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QLineEdit* self, const char* iconText ```
void q_lineedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QLineEdit* self, void (*slot)(QWidget*, const char*) ```
void q_lineedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QLineEdit* self, QPoint* pos ```
void q_lineedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QLineEdit* self, void (*slot)(QWidget*, QPoint*) ```
void q_lineedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QLineEdit* self, int hints ```
void q_lineedit_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPaintDevice* target, QPoint* targetOffset ```
void q_lineedit_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_lineedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_lineedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPainter* painter, QPoint* targetOffset ```
void q_lineedit_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_lineedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_lineedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QLineEdit* self, QRect* rectangle ```
QPixmap* q_lineedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QLineEdit* self, enum Qt__GestureType typeVal, int flags ```
void q_lineedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QLineEdit* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_lineedit_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QLineEdit* self, int id, bool enable ```
void q_lineedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QLineEdit* self, int id, bool enable ```
void q_lineedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QLineEdit* self, enum Qt__WindowType param1, bool on ```
void q_lineedit_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QLineEdit* self, enum Qt__WidgetAttribute param1, bool on ```
void q_lineedit_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_lineedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_lineedit_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLineEdit* self, const char* name ```
void q_lineedit_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLineEdit* self ```
bool q_lineedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLineEdit* self, bool b ```
bool q_lineedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLineEdit* self ```
QThread* q_lineedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLineEdit* self, QThread* thread ```
void q_lineedit_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLineEdit* self, int interval ```
int32_t q_lineedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLineEdit* self, int id ```
void q_lineedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLineEdit* self ```
libqt_list /* of QObject* */ q_lineedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLineEdit* self, QObject* filterObj ```
void q_lineedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLineEdit* self, QObject* obj ```
void q_lineedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_lineedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLineEdit* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_lineedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_lineedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_lineedit_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLineEdit* self ```
void q_lineedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLineEdit* self ```
void q_lineedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLineEdit* self, const char* name, QVariant* value ```
bool q_lineedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLineEdit* self, const char* name ```
QVariant* q_lineedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLineEdit* self ```
const char** q_lineedit_dynamic_property_names(void* self) {
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
/// ``` QLineEdit* self ```
QBindingStorage* q_lineedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLineEdit* self ```
QBindingStorage* q_lineedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLineEdit* self ```
void q_lineedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QLineEdit* self, void (*slot)(QObject*) ```
void q_lineedit_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLineEdit* self ```
QObject* q_lineedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLineEdit* self, const char* classname ```
bool q_lineedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLineEdit* self ```
void q_lineedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLineEdit* self, int interval, enum Qt__TimerType timerType ```
int32_t q_lineedit_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_lineedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLineEdit* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_lineedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLineEdit* self, QObject* param1 ```
void q_lineedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QLineEdit* self, void (*slot)(QObject*, QObject*) ```
void q_lineedit_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QLineEdit* self ```
bool q_lineedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QLineEdit* self ```
double q_lineedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QLineEdit* self ```
double q_lineedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_lineedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_dev_type(void* self) {
    return QLineEdit_DevType((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_qbase_dev_type(void* self) {
    return QLineEdit_QBaseDevType((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, int32_t (*slot)() ```
void q_lineedit_on_dev_type(void* self, int32_t (*slot)()) {
    QLineEdit_OnDevType((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, bool visible ```
void q_lineedit_set_visible(void* self, bool visible) {
    QLineEdit_SetVisible((QLineEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, bool visible ```
void q_lineedit_qbase_set_visible(void* self, bool visible) {
    QLineEdit_QBaseSetVisible((QLineEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, bool) ```
void q_lineedit_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QLineEdit_OnSetVisible((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, int param1 ```
int32_t q_lineedit_height_for_width(void* self, int param1) {
    return QLineEdit_HeightForWidth((QLineEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, int param1 ```
int32_t q_lineedit_qbase_height_for_width(void* self, int param1) {
    return QLineEdit_QBaseHeightForWidth((QLineEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, int32_t (*slot)(QLineEdit*, int) ```
void q_lineedit_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QLineEdit_OnHeightForWidth((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_height_for_width(void* self) {
    return QLineEdit_HasHeightForWidth((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
bool q_lineedit_qbase_has_height_for_width(void* self) {
    return QLineEdit_QBaseHasHeightForWidth((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)() ```
void q_lineedit_on_has_height_for_width(void* self, bool (*slot)()) {
    QLineEdit_OnHasHeightForWidth((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
QPaintEngine* q_lineedit_paint_engine(void* self) {
    return QLineEdit_PaintEngine((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
QPaintEngine* q_lineedit_qbase_paint_engine(void* self) {
    return QLineEdit_QBasePaintEngine((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, QPaintEngine* (*slot)() ```
void q_lineedit_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QLineEdit_OnPaintEngine((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QWheelEvent* event ```
void q_lineedit_wheel_event(void* self, void* event) {
    QLineEdit_WheelEvent((QLineEdit*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QWheelEvent* event ```
void q_lineedit_qbase_wheel_event(void* self, void* event) {
    QLineEdit_QBaseWheelEvent((QLineEdit*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QWheelEvent*) ```
void q_lineedit_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnWheelEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QEnterEvent* event ```
void q_lineedit_enter_event(void* self, void* event) {
    QLineEdit_EnterEvent((QLineEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QEnterEvent* event ```
void q_lineedit_qbase_enter_event(void* self, void* event) {
    QLineEdit_QBaseEnterEvent((QLineEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QEnterEvent*) ```
void q_lineedit_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnEnterEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QEvent* event ```
void q_lineedit_leave_event(void* self, void* event) {
    QLineEdit_LeaveEvent((QLineEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QEvent* event ```
void q_lineedit_qbase_leave_event(void* self, void* event) {
    QLineEdit_QBaseLeaveEvent((QLineEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QEvent*) ```
void q_lineedit_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnLeaveEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QMoveEvent* event ```
void q_lineedit_move_event(void* self, void* event) {
    QLineEdit_MoveEvent((QLineEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QMoveEvent* event ```
void q_lineedit_qbase_move_event(void* self, void* event) {
    QLineEdit_QBaseMoveEvent((QLineEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMoveEvent*) ```
void q_lineedit_on_move_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnMoveEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QResizeEvent* event ```
void q_lineedit_resize_event(void* self, void* event) {
    QLineEdit_ResizeEvent((QLineEdit*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QResizeEvent* event ```
void q_lineedit_qbase_resize_event(void* self, void* event) {
    QLineEdit_QBaseResizeEvent((QLineEdit*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QResizeEvent*) ```
void q_lineedit_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnResizeEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QCloseEvent* event ```
void q_lineedit_close_event(void* self, void* event) {
    QLineEdit_CloseEvent((QLineEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QCloseEvent* event ```
void q_lineedit_qbase_close_event(void* self, void* event) {
    QLineEdit_QBaseCloseEvent((QLineEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QCloseEvent*) ```
void q_lineedit_on_close_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnCloseEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QTabletEvent* event ```
void q_lineedit_tablet_event(void* self, void* event) {
    QLineEdit_TabletEvent((QLineEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QTabletEvent* event ```
void q_lineedit_qbase_tablet_event(void* self, void* event) {
    QLineEdit_QBaseTabletEvent((QLineEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QTabletEvent*) ```
void q_lineedit_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnTabletEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QActionEvent* event ```
void q_lineedit_action_event(void* self, void* event) {
    QLineEdit_ActionEvent((QLineEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QActionEvent* event ```
void q_lineedit_qbase_action_event(void* self, void* event) {
    QLineEdit_QBaseActionEvent((QLineEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QActionEvent*) ```
void q_lineedit_on_action_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnActionEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QShowEvent* event ```
void q_lineedit_show_event(void* self, void* event) {
    QLineEdit_ShowEvent((QLineEdit*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QShowEvent* event ```
void q_lineedit_qbase_show_event(void* self, void* event) {
    QLineEdit_QBaseShowEvent((QLineEdit*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QShowEvent*) ```
void q_lineedit_on_show_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnShowEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QHideEvent* event ```
void q_lineedit_hide_event(void* self, void* event) {
    QLineEdit_HideEvent((QLineEdit*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QHideEvent* event ```
void q_lineedit_qbase_hide_event(void* self, void* event) {
    QLineEdit_QBaseHideEvent((QLineEdit*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QHideEvent*) ```
void q_lineedit_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnHideEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_lineedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QLineEdit_NativeEvent((QLineEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_lineedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QLineEdit_QBaseNativeEvent((QLineEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)(QLineEdit*, const char*, void*, intptr_t*) ```
void q_lineedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QLineEdit_OnNativeEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_lineedit_metric(void* self, int64_t param1) {
    return QLineEdit_Metric((QLineEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_lineedit_qbase_metric(void* self, int64_t param1) {
    return QLineEdit_QBaseMetric((QLineEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, int32_t (*slot)(QLineEdit*, enum QPaintDevice__PaintDeviceMetric) ```
void q_lineedit_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QLineEdit_OnMetric((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QPainter* painter ```
void q_lineedit_init_painter(void* self, void* painter) {
    QLineEdit_InitPainter((QLineEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QPainter* painter ```
void q_lineedit_qbase_init_painter(void* self, void* painter) {
    QLineEdit_QBaseInitPainter((QLineEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QPainter*) ```
void q_lineedit_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnInitPainter((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QPoint* offset ```
QPaintDevice* q_lineedit_redirected(void* self, void* offset) {
    return QLineEdit_Redirected((QLineEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QPoint* offset ```
QPaintDevice* q_lineedit_qbase_redirected(void* self, void* offset) {
    return QLineEdit_QBaseRedirected((QLineEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, QPaintDevice* (*slot)(QLineEdit*, QPoint*) ```
void q_lineedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QLineEdit_OnRedirected((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
QPainter* q_lineedit_shared_painter(void* self) {
    return QLineEdit_SharedPainter((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
QPainter* q_lineedit_qbase_shared_painter(void* self) {
    return QLineEdit_QBaseSharedPainter((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, QPainter* (*slot)() ```
void q_lineedit_on_shared_painter(void* self, QPainter* (*slot)()) {
    QLineEdit_OnSharedPainter((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, bool next ```
bool q_lineedit_focus_next_prev_child(void* self, bool next) {
    return QLineEdit_FocusNextPrevChild((QLineEdit*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, bool next ```
bool q_lineedit_qbase_focus_next_prev_child(void* self, bool next) {
    return QLineEdit_QBaseFocusNextPrevChild((QLineEdit*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)(QLineEdit*, bool) ```
void q_lineedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QLineEdit_OnFocusNextPrevChild((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QObject* watched, QEvent* event ```
bool q_lineedit_event_filter(void* self, void* watched, void* event) {
    return QLineEdit_EventFilter((QLineEdit*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QObject* watched, QEvent* event ```
bool q_lineedit_qbase_event_filter(void* self, void* watched, void* event) {
    return QLineEdit_QBaseEventFilter((QLineEdit*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)(QLineEdit*, QObject*, QEvent*) ```
void q_lineedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QLineEdit_OnEventFilter((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QChildEvent* event ```
void q_lineedit_child_event(void* self, void* event) {
    QLineEdit_ChildEvent((QLineEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QChildEvent* event ```
void q_lineedit_qbase_child_event(void* self, void* event) {
    QLineEdit_QBaseChildEvent((QLineEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QChildEvent*) ```
void q_lineedit_on_child_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnChildEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QEvent* event ```
void q_lineedit_custom_event(void* self, void* event) {
    QLineEdit_CustomEvent((QLineEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QEvent* event ```
void q_lineedit_qbase_custom_event(void* self, void* event) {
    QLineEdit_QBaseCustomEvent((QLineEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QEvent*) ```
void q_lineedit_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnCustomEvent((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QMetaMethod* signal ```
void q_lineedit_connect_notify(void* self, void* signal) {
    QLineEdit_ConnectNotify((QLineEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QMetaMethod* signal ```
void q_lineedit_qbase_connect_notify(void* self, void* signal) {
    QLineEdit_QBaseConnectNotify((QLineEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMetaMethod*) ```
void q_lineedit_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnConnectNotify((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QMetaMethod* signal ```
void q_lineedit_disconnect_notify(void* self, void* signal) {
    QLineEdit_DisconnectNotify((QLineEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QMetaMethod* signal ```
void q_lineedit_qbase_disconnect_notify(void* self, void* signal) {
    QLineEdit_QBaseDisconnectNotify((QLineEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMetaMethod*) ```
void q_lineedit_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QLineEdit_OnDisconnectNotify((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
void q_lineedit_update_micro_focus(void* self) {
    QLineEdit_UpdateMicroFocus((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
void q_lineedit_qbase_update_micro_focus(void* self) {
    QLineEdit_QBaseUpdateMicroFocus((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)() ```
void q_lineedit_on_update_micro_focus(void* self, void (*slot)()) {
    QLineEdit_OnUpdateMicroFocus((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
void q_lineedit_create(void* self) {
    QLineEdit_Create((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
void q_lineedit_qbase_create(void* self) {
    QLineEdit_QBaseCreate((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)() ```
void q_lineedit_on_create(void* self, void (*slot)()) {
    QLineEdit_OnCreate((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
void q_lineedit_destroy(void* self) {
    QLineEdit_Destroy((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
void q_lineedit_qbase_destroy(void* self) {
    QLineEdit_QBaseDestroy((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)() ```
void q_lineedit_on_destroy(void* self, void (*slot)()) {
    QLineEdit_OnDestroy((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
bool q_lineedit_focus_next_child(void* self) {
    return QLineEdit_FocusNextChild((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
bool q_lineedit_qbase_focus_next_child(void* self) {
    return QLineEdit_QBaseFocusNextChild((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)() ```
void q_lineedit_on_focus_next_child(void* self, bool (*slot)()) {
    QLineEdit_OnFocusNextChild((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
bool q_lineedit_focus_previous_child(void* self) {
    return QLineEdit_FocusPreviousChild((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
bool q_lineedit_qbase_focus_previous_child(void* self) {
    return QLineEdit_QBaseFocusPreviousChild((QLineEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)() ```
void q_lineedit_on_focus_previous_child(void* self, bool (*slot)()) {
    QLineEdit_OnFocusPreviousChild((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
QObject* q_lineedit_sender(void* self) {
    return QLineEdit_Sender((QLineEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
QObject* q_lineedit_qbase_sender(void* self) {
    return QLineEdit_QBaseSender((QLineEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, QObject* (*slot)() ```
void q_lineedit_on_sender(void* self, QObject* (*slot)()) {
    QLineEdit_OnSender((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_sender_signal_index(void* self) {
    return QLineEdit_SenderSignalIndex((QLineEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_qbase_sender_signal_index(void* self) {
    return QLineEdit_QBaseSenderSignalIndex((QLineEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, int32_t (*slot)() ```
void q_lineedit_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QLineEdit_OnSenderSignalIndex((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, const char* signal ```
int32_t q_lineedit_receivers(void* self, const char* signal) {
    return QLineEdit_Receivers((QLineEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, const char* signal ```
int32_t q_lineedit_qbase_receivers(void* self, const char* signal) {
    return QLineEdit_QBaseReceivers((QLineEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, int32_t (*slot)(QLineEdit*, const char*) ```
void q_lineedit_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QLineEdit_OnReceivers((QLineEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QMetaMethod* signal ```
bool q_lineedit_is_signal_connected(void* self, void* signal) {
    return QLineEdit_IsSignalConnected((QLineEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QMetaMethod* signal ```
bool q_lineedit_qbase_is_signal_connected(void* self, void* signal) {
    return QLineEdit_QBaseIsSignalConnected((QLineEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)(QLineEdit*, QMetaMethod*) ```
void q_lineedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QLineEdit_OnIsSignalConnected((QLineEdit*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QLineEdit* self ```
void q_lineedit_delete(void* self) {
    QLineEdit_Delete((QLineEdit*)(self));
}