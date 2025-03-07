#include "libqabstractscrollarea.hpp"
#include "libqabstracttextdocumentlayout.hpp"
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
#include "libqframe.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmenu.hpp"
#include "libqmetaobject.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqpagedpaintdevice.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqregularexpression.hpp"
#include "libqscreen.hpp"
#include "libqscrollbar.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqtextobject.hpp"
#include "libqtextformat.hpp"
#include "libqtextcursor.hpp"
#include "libqtextdocument.hpp"
#include "libqtextlayout.hpp"
#include "libqthread.hpp"
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqplaintextedit.hpp"
#include "libqplaintextedit.h"

/// https://doc.qt.io/qt-6/qplaintextedit.html

/// q_plaintextedit_new constructs a new QPlainTextEdit object.
///
/// ``` QWidget* parent ```
QPlainTextEdit* q_plaintextedit_new(void* parent) {
    return QPlainTextEdit_new((QWidget*)parent);
}

/// q_plaintextedit_new2 constructs a new QPlainTextEdit object.
///
///
QPlainTextEdit* q_plaintextedit_new2() {
    return QPlainTextEdit_new2();
}

/// q_plaintextedit_new3 constructs a new QPlainTextEdit object.
///
/// ``` const char* text ```
QPlainTextEdit* q_plaintextedit_new3(const char* text) {
    return QPlainTextEdit_new3(qstring(text));
}

/// q_plaintextedit_new4 constructs a new QPlainTextEdit object.
///
/// ``` const char* text, QWidget* parent ```
QPlainTextEdit* q_plaintextedit_new4(const char* text, void* parent) {
    return QPlainTextEdit_new4(qstring(text), (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPlainTextEdit* self ```
QMetaObject* q_plaintextedit_meta_object(void* self) {
    return QPlainTextEdit_MetaObject((QPlainTextEdit*)self);
}

/// ``` QPlainTextEdit* self, const char* param1 ```
void* q_plaintextedit_metacast(void* self, const char* param1) {
    return QPlainTextEdit_Metacast((QPlainTextEdit*)self, param1);
}

/// ``` QPlainTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_plaintextedit_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPlainTextEdit_Metacall((QPlainTextEdit*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, int32_t (*slot)(QPlainTextEdit*, enum QMetaObject__Call, int, void*) ```
void q_plaintextedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPlainTextEdit_OnMetacall((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_plaintextedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPlainTextEdit_QBaseMetacall((QPlainTextEdit*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_plaintextedit_tr(const char* s) {
    libqt_string _str = QPlainTextEdit_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setDocument)
///
/// ``` QPlainTextEdit* self, QTextDocument* document ```
void q_plaintextedit_set_document(void* self, void* document) {
    QPlainTextEdit_SetDocument((QPlainTextEdit*)self, (QTextDocument*)document);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#document)
///
/// ``` QPlainTextEdit* self ```
QTextDocument* q_plaintextedit_document(void* self) {
    return QPlainTextEdit_Document((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setPlaceholderText)
///
/// ``` QPlainTextEdit* self, const char* placeholderText ```
void q_plaintextedit_set_placeholder_text(void* self, const char* placeholderText) {
    QPlainTextEdit_SetPlaceholderText((QPlainTextEdit*)self, qstring(placeholderText));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#placeholderText)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_placeholder_text(void* self) {
    libqt_string _str = QPlainTextEdit_PlaceholderText((QPlainTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setTextCursor)
///
/// ``` QPlainTextEdit* self, QTextCursor* cursor ```
void q_plaintextedit_set_text_cursor(void* self, void* cursor) {
    QPlainTextEdit_SetTextCursor((QPlainTextEdit*)self, (QTextCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#textCursor)
///
/// ``` QPlainTextEdit* self ```
QTextCursor* q_plaintextedit_text_cursor(void* self) {
    return QPlainTextEdit_TextCursor((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#isReadOnly)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_read_only(void* self) {
    return QPlainTextEdit_IsReadOnly((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setReadOnly)
///
/// ``` QPlainTextEdit* self, bool ro ```
void q_plaintextedit_set_read_only(void* self, bool ro) {
    QPlainTextEdit_SetReadOnly((QPlainTextEdit*)self, ro);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setTextInteractionFlags)
///
/// ``` QPlainTextEdit* self, int flags ```
void q_plaintextedit_set_text_interaction_flags(void* self, int64_t flags) {
    QPlainTextEdit_SetTextInteractionFlags((QPlainTextEdit*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#textInteractionFlags)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_text_interaction_flags(void* self) {
    return QPlainTextEdit_TextInteractionFlags((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mergeCurrentCharFormat)
///
/// ``` QPlainTextEdit* self, QTextCharFormat* modifier ```
void q_plaintextedit_merge_current_char_format(void* self, void* modifier) {
    QPlainTextEdit_MergeCurrentCharFormat((QPlainTextEdit*)self, (QTextCharFormat*)modifier);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setCurrentCharFormat)
///
/// ``` QPlainTextEdit* self, QTextCharFormat* format ```
void q_plaintextedit_set_current_char_format(void* self, void* format) {
    QPlainTextEdit_SetCurrentCharFormat((QPlainTextEdit*)self, (QTextCharFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#currentCharFormat)
///
/// ``` QPlainTextEdit* self ```
QTextCharFormat* q_plaintextedit_current_char_format(void* self) {
    return QPlainTextEdit_CurrentCharFormat((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#tabChangesFocus)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_tab_changes_focus(void* self) {
    return QPlainTextEdit_TabChangesFocus((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setTabChangesFocus)
///
/// ``` QPlainTextEdit* self, bool b ```
void q_plaintextedit_set_tab_changes_focus(void* self, bool b) {
    QPlainTextEdit_SetTabChangesFocus((QPlainTextEdit*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setDocumentTitle)
///
/// ``` QPlainTextEdit* self, const char* title ```
void q_plaintextedit_set_document_title(void* self, const char* title) {
    QPlainTextEdit_SetDocumentTitle((QPlainTextEdit*)self, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#documentTitle)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_document_title(void* self) {
    libqt_string _str = QPlainTextEdit_DocumentTitle((QPlainTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#isUndoRedoEnabled)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_undo_redo_enabled(void* self) {
    return QPlainTextEdit_IsUndoRedoEnabled((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setUndoRedoEnabled)
///
/// ``` QPlainTextEdit* self, bool enable ```
void q_plaintextedit_set_undo_redo_enabled(void* self, bool enable) {
    QPlainTextEdit_SetUndoRedoEnabled((QPlainTextEdit*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setMaximumBlockCount)
///
/// ``` QPlainTextEdit* self, int maximum ```
void q_plaintextedit_set_maximum_block_count(void* self, int maximum) {
    QPlainTextEdit_SetMaximumBlockCount((QPlainTextEdit*)self, maximum);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#maximumBlockCount)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_maximum_block_count(void* self) {
    return QPlainTextEdit_MaximumBlockCount((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#lineWrapMode)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_line_wrap_mode(void* self) {
    return QPlainTextEdit_LineWrapMode((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setLineWrapMode)
///
/// ``` QPlainTextEdit* self, enum QPlainTextEdit__LineWrapMode mode ```
void q_plaintextedit_set_line_wrap_mode(void* self, int64_t mode) {
    QPlainTextEdit_SetLineWrapMode((QPlainTextEdit*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#wordWrapMode)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_word_wrap_mode(void* self) {
    return QPlainTextEdit_WordWrapMode((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setWordWrapMode)
///
/// ``` QPlainTextEdit* self, enum QTextOption__WrapMode policy ```
void q_plaintextedit_set_word_wrap_mode(void* self, int64_t policy) {
    QPlainTextEdit_SetWordWrapMode((QPlainTextEdit*)self, policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setBackgroundVisible)
///
/// ``` QPlainTextEdit* self, bool visible ```
void q_plaintextedit_set_background_visible(void* self, bool visible) {
    QPlainTextEdit_SetBackgroundVisible((QPlainTextEdit*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#backgroundVisible)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_background_visible(void* self) {
    return QPlainTextEdit_BackgroundVisible((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setCenterOnScroll)
///
/// ``` QPlainTextEdit* self, bool enabled ```
void q_plaintextedit_set_center_on_scroll(void* self, bool enabled) {
    QPlainTextEdit_SetCenterOnScroll((QPlainTextEdit*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#centerOnScroll)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_center_on_scroll(void* self) {
    return QPlainTextEdit_CenterOnScroll((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// ``` QPlainTextEdit* self, const char* exp ```
bool q_plaintextedit_find(void* self, const char* exp) {
    return QPlainTextEdit_Find((QPlainTextEdit*)self, qstring(exp));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// ``` QPlainTextEdit* self, QRegularExpression* exp ```
bool q_plaintextedit_find_with_exp(void* self, void* exp) {
    return QPlainTextEdit_FindWithExp((QPlainTextEdit*)self, (QRegularExpression*)exp);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#toPlainText)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_to_plain_text(void* self) {
    libqt_string _str = QPlainTextEdit_ToPlainText((QPlainTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#ensureCursorVisible)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_ensure_cursor_visible(void* self) {
    QPlainTextEdit_EnsureCursorVisible((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
///
/// ``` QPlainTextEdit* self, int typeVal, QUrl* name ```
QVariant* q_plaintextedit_load_resource(void* self, int typeVal, void* name) {
    return QPlainTextEdit_LoadResource((QPlainTextEdit*)self, typeVal, (QUrl*)name);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QVariant* (*slot)(QPlainTextEdit*, int, QUrl*) ```
void q_plaintextedit_on_load_resource(void* self, QVariant* (*slot)(void*, int, void*)) {
    QPlainTextEdit_OnLoadResource((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, int typeVal, QUrl* name ```
QVariant* q_plaintextedit_qbase_load_resource(void* self, int typeVal, void* name) {
    return QPlainTextEdit_QBaseLoadResource((QPlainTextEdit*)self, typeVal, (QUrl*)name);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
///
/// ``` QPlainTextEdit* self ```
QMenu* q_plaintextedit_create_standard_context_menu(void* self) {
    return QPlainTextEdit_CreateStandardContextMenu((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
///
/// ``` QPlainTextEdit* self, QPoint* position ```
QMenu* q_plaintextedit_create_standard_context_menu_with_position(void* self, void* position) {
    return QPlainTextEdit_CreateStandardContextMenuWithPosition((QPlainTextEdit*)self, (QPoint*)position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorForPosition)
///
/// ``` QPlainTextEdit* self, QPoint* pos ```
QTextCursor* q_plaintextedit_cursor_for_position(void* self, void* pos) {
    return QPlainTextEdit_CursorForPosition((QPlainTextEdit*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
///
/// ``` QPlainTextEdit* self, QTextCursor* cursor ```
QRect* q_plaintextedit_cursor_rect(void* self, void* cursor) {
    return QPlainTextEdit_CursorRect((QPlainTextEdit*)self, (QTextCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_cursor_rect2(void* self) {
    return QPlainTextEdit_CursorRect2((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#anchorAt)
///
/// ``` QPlainTextEdit* self, QPoint* pos ```
const char* q_plaintextedit_anchor_at(void* self, void* pos) {
    libqt_string _str = QPlainTextEdit_AnchorAt((QPlainTextEdit*)self, (QPoint*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#overwriteMode)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_overwrite_mode(void* self) {
    return QPlainTextEdit_OverwriteMode((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setOverwriteMode)
///
/// ``` QPlainTextEdit* self, bool overwrite ```
void q_plaintextedit_set_overwrite_mode(void* self, bool overwrite) {
    QPlainTextEdit_SetOverwriteMode((QPlainTextEdit*)self, overwrite);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#tabStopDistance)
///
/// ``` QPlainTextEdit* self ```
double q_plaintextedit_tab_stop_distance(void* self) {
    return QPlainTextEdit_TabStopDistance((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setTabStopDistance)
///
/// ``` QPlainTextEdit* self, double distance ```
void q_plaintextedit_set_tab_stop_distance(void* self, double distance) {
    QPlainTextEdit_SetTabStopDistance((QPlainTextEdit*)self, distance);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorWidth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_cursor_width(void* self) {
    return QPlainTextEdit_CursorWidth((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setCursorWidth)
///
/// ``` QPlainTextEdit* self, int width ```
void q_plaintextedit_set_cursor_width(void* self, int width) {
    QPlainTextEdit_SetCursorWidth((QPlainTextEdit*)self, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setExtraSelections)
///
/// ``` QPlainTextEdit* self, QTextEdit__ExtraSelection* selections[] ```
void q_plaintextedit_set_extra_selections(void* self, void* selections[]) {
    QTextEdit__ExtraSelection** selections_arr = (QTextEdit__ExtraSelection**)selections;
    size_t selections_len = 0;
    while (selections_arr[selections_len] != NULL) {
        selections_len++;
    }
    libqt_list selections_list = {
        .len = selections_len,
        .data = {(QTextEdit__ExtraSelection*)selections},
    };
    QPlainTextEdit_SetExtraSelections((QPlainTextEdit*)self, selections_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#extraSelections)
///
/// ``` QPlainTextEdit* self ```
libqt_list /* of QTextEdit__ExtraSelection* */ q_plaintextedit_extra_selections(void* self) {
    libqt_list _arr = QPlainTextEdit_ExtraSelections((QPlainTextEdit*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
///
/// ``` QPlainTextEdit* self, enum QTextCursor__MoveOperation operation ```
void q_plaintextedit_move_cursor(void* self, int64_t operation) {
    QPlainTextEdit_MoveCursor((QPlainTextEdit*)self, operation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#canPaste)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_can_paste(void* self) {
    return QPlainTextEdit_CanPaste((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#print)
///
/// ``` QPlainTextEdit* self, QPagedPaintDevice* printer ```
void q_plaintextedit_print(void* self, void* printer) {
    QPlainTextEdit_Print((QPlainTextEdit*)self, (QPagedPaintDevice*)printer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockCount)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_block_count(void* self) {
    return QPlainTextEdit_BlockCount((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// ``` QPlainTextEdit* self, enum Qt__InputMethodQuery property ```
QVariant* q_plaintextedit_input_method_query(void* self, int64_t property) {
    return QPlainTextEdit_InputMethodQuery((QPlainTextEdit*)self, property);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QVariant* (*slot)(QPlainTextEdit*, enum Qt__InputMethodQuery) ```
void q_plaintextedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QPlainTextEdit_OnInputMethodQuery((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, enum Qt__InputMethodQuery property ```
QVariant* q_plaintextedit_qbase_input_method_query(void* self, int64_t property) {
    return QPlainTextEdit_QBaseInputMethodQuery((QPlainTextEdit*)self, property);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// ``` QPlainTextEdit* self, enum Qt__InputMethodQuery query, QVariant* argument ```
QVariant* q_plaintextedit_input_method_query2(void* self, int64_t query, void* argument) {
    return QPlainTextEdit_InputMethodQuery2((QPlainTextEdit*)self, query, (QVariant*)argument);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setPlainText)
///
/// ``` QPlainTextEdit* self, const char* text ```
void q_plaintextedit_set_plain_text(void* self, const char* text) {
    QPlainTextEdit_SetPlainText((QPlainTextEdit*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cut)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_cut(void* self) {
    QPlainTextEdit_Cut((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#copy)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_copy(void* self) {
    QPlainTextEdit_Copy((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#paste)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_paste(void* self) {
    QPlainTextEdit_Paste((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#undo)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_undo(void* self) {
    QPlainTextEdit_Undo((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#redo)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_redo(void* self) {
    QPlainTextEdit_Redo((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#clear)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_clear(void* self) {
    QPlainTextEdit_Clear((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#selectAll)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_select_all(void* self) {
    QPlainTextEdit_SelectAll((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#insertPlainText)
///
/// ``` QPlainTextEdit* self, const char* text ```
void q_plaintextedit_insert_plain_text(void* self, const char* text) {
    QPlainTextEdit_InsertPlainText((QPlainTextEdit*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#appendPlainText)
///
/// ``` QPlainTextEdit* self, const char* text ```
void q_plaintextedit_append_plain_text(void* self, const char* text) {
    QPlainTextEdit_AppendPlainText((QPlainTextEdit*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#appendHtml)
///
/// ``` QPlainTextEdit* self, const char* html ```
void q_plaintextedit_append_html(void* self, const char* html) {
    QPlainTextEdit_AppendHtml((QPlainTextEdit*)self, qstring(html));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#centerCursor)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_center_cursor(void* self) {
    QPlainTextEdit_CenterCursor((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_zoom_in(void* self) {
    QPlainTextEdit_ZoomIn((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_zoom_out(void* self) {
    QPlainTextEdit_ZoomOut((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_text_changed(void* self) {
    QPlainTextEdit_TextChanged((QPlainTextEdit*)self);
}

/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*) ```
void q_plaintextedit_on_text_changed(void* self, void (*slot)(void*)) {
    QPlainTextEdit_Connect_TextChanged((QPlainTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
///
/// ``` QPlainTextEdit* self, bool b ```
void q_plaintextedit_undo_available(void* self, bool b) {
    QPlainTextEdit_UndoAvailable((QPlainTextEdit*)self, b);
}

/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, bool) ```
void q_plaintextedit_on_undo_available(void* self, void (*slot)(void*, bool)) {
    QPlainTextEdit_Connect_UndoAvailable((QPlainTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
///
/// ``` QPlainTextEdit* self, bool b ```
void q_plaintextedit_redo_available(void* self, bool b) {
    QPlainTextEdit_RedoAvailable((QPlainTextEdit*)self, b);
}

/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, bool) ```
void q_plaintextedit_on_redo_available(void* self, void (*slot)(void*, bool)) {
    QPlainTextEdit_Connect_RedoAvailable((QPlainTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
///
/// ``` QPlainTextEdit* self, bool b ```
void q_plaintextedit_copy_available(void* self, bool b) {
    QPlainTextEdit_CopyAvailable((QPlainTextEdit*)self, b);
}

/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, bool) ```
void q_plaintextedit_on_copy_available(void* self, void (*slot)(void*, bool)) {
    QPlainTextEdit_Connect_CopyAvailable((QPlainTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_selection_changed(void* self) {
    QPlainTextEdit_SelectionChanged((QPlainTextEdit*)self);
}

/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*) ```
void q_plaintextedit_on_selection_changed(void* self, void (*slot)(void*)) {
    QPlainTextEdit_Connect_SelectionChanged((QPlainTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_cursor_position_changed(void* self) {
    QPlainTextEdit_CursorPositionChanged((QPlainTextEdit*)self);
}

/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*) ```
void q_plaintextedit_on_cursor_position_changed(void* self, void (*slot)(void*)) {
    QPlainTextEdit_Connect_CursorPositionChanged((QPlainTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
///
/// ``` QPlainTextEdit* self, QRect* rect, int dy ```
void q_plaintextedit_update_request(void* self, void* rect, int dy) {
    QPlainTextEdit_UpdateRequest((QPlainTextEdit*)self, (QRect*)rect, dy);
}

/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QRect*, int) ```
void q_plaintextedit_on_update_request(void* self, void (*slot)(void*, void*, int)) {
    QPlainTextEdit_Connect_UpdateRequest((QPlainTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
///
/// ``` QPlainTextEdit* self, int newBlockCount ```
void q_plaintextedit_block_count_changed(void* self, int newBlockCount) {
    QPlainTextEdit_BlockCountChanged((QPlainTextEdit*)self, newBlockCount);
}

/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, int) ```
void q_plaintextedit_on_block_count_changed(void* self, void (*slot)(void*, int)) {
    QPlainTextEdit_Connect_BlockCountChanged((QPlainTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
///
/// ``` QPlainTextEdit* self, bool param1 ```
void q_plaintextedit_modification_changed(void* self, bool param1) {
    QPlainTextEdit_ModificationChanged((QPlainTextEdit*)self, param1);
}

/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, bool) ```
void q_plaintextedit_on_modification_changed(void* self, void (*slot)(void*, bool)) {
    QPlainTextEdit_Connect_ModificationChanged((QPlainTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#event)
///
/// ``` QPlainTextEdit* self, QEvent* e ```
bool q_plaintextedit_event(void* self, void* e) {
    return QPlainTextEdit_Event((QPlainTextEdit*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, QEvent*) ```
void q_plaintextedit_on_event(void* self, bool (*slot)(void*, void*)) {
    QPlainTextEdit_OnEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QEvent* e ```
bool q_plaintextedit_qbase_event(void* self, void* e) {
    return QPlainTextEdit_QBaseEvent((QPlainTextEdit*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
///
/// ``` QPlainTextEdit* self, QTimerEvent* e ```
void q_plaintextedit_timer_event(void* self, void* e) {
    QPlainTextEdit_TimerEvent((QPlainTextEdit*)self, (QTimerEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QTimerEvent*) ```
void q_plaintextedit_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnTimerEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QTimerEvent* e ```
void q_plaintextedit_qbase_timer_event(void* self, void* e) {
    QPlainTextEdit_QBaseTimerEvent((QPlainTextEdit*)self, (QTimerEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
///
/// ``` QPlainTextEdit* self, QKeyEvent* e ```
void q_plaintextedit_key_press_event(void* self, void* e) {
    QPlainTextEdit_KeyPressEvent((QPlainTextEdit*)self, (QKeyEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QKeyEvent*) ```
void q_plaintextedit_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnKeyPressEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QKeyEvent* e ```
void q_plaintextedit_qbase_key_press_event(void* self, void* e) {
    QPlainTextEdit_QBaseKeyPressEvent((QPlainTextEdit*)self, (QKeyEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
///
/// ``` QPlainTextEdit* self, QKeyEvent* e ```
void q_plaintextedit_key_release_event(void* self, void* e) {
    QPlainTextEdit_KeyReleaseEvent((QPlainTextEdit*)self, (QKeyEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QKeyEvent*) ```
void q_plaintextedit_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnKeyReleaseEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QKeyEvent* e ```
void q_plaintextedit_qbase_key_release_event(void* self, void* e) {
    QPlainTextEdit_QBaseKeyReleaseEvent((QPlainTextEdit*)self, (QKeyEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
///
/// ``` QPlainTextEdit* self, QResizeEvent* e ```
void q_plaintextedit_resize_event(void* self, void* e) {
    QPlainTextEdit_ResizeEvent((QPlainTextEdit*)self, (QResizeEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QResizeEvent*) ```
void q_plaintextedit_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnResizeEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QResizeEvent* e ```
void q_plaintextedit_qbase_resize_event(void* self, void* e) {
    QPlainTextEdit_QBaseResizeEvent((QPlainTextEdit*)self, (QResizeEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
///
/// ``` QPlainTextEdit* self, QPaintEvent* e ```
void q_plaintextedit_paint_event(void* self, void* e) {
    QPlainTextEdit_PaintEvent((QPlainTextEdit*)self, (QPaintEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QPaintEvent*) ```
void q_plaintextedit_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnPaintEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QPaintEvent* e ```
void q_plaintextedit_qbase_paint_event(void* self, void* e) {
    QPlainTextEdit_QBasePaintEvent((QPlainTextEdit*)self, (QPaintEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_mouse_press_event(void* self, void* e) {
    QPlainTextEdit_MousePressEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMouseEvent*) ```
void q_plaintextedit_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnMousePressEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_qbase_mouse_press_event(void* self, void* e) {
    QPlainTextEdit_QBaseMousePressEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_mouse_move_event(void* self, void* e) {
    QPlainTextEdit_MouseMoveEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMouseEvent*) ```
void q_plaintextedit_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnMouseMoveEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_qbase_mouse_move_event(void* self, void* e) {
    QPlainTextEdit_QBaseMouseMoveEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_mouse_release_event(void* self, void* e) {
    QPlainTextEdit_MouseReleaseEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMouseEvent*) ```
void q_plaintextedit_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnMouseReleaseEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_qbase_mouse_release_event(void* self, void* e) {
    QPlainTextEdit_QBaseMouseReleaseEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_mouse_double_click_event(void* self, void* e) {
    QPlainTextEdit_MouseDoubleClickEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMouseEvent*) ```
void q_plaintextedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnMouseDoubleClickEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_qbase_mouse_double_click_event(void* self, void* e) {
    QPlainTextEdit_QBaseMouseDoubleClickEvent((QPlainTextEdit*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
///
/// ``` QPlainTextEdit* self, bool next ```
bool q_plaintextedit_focus_next_prev_child(void* self, bool next) {
    return QPlainTextEdit_FocusNextPrevChild((QPlainTextEdit*)self, next);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, bool) ```
void q_plaintextedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QPlainTextEdit_OnFocusNextPrevChild((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, bool next ```
bool q_plaintextedit_qbase_focus_next_prev_child(void* self, bool next) {
    return QPlainTextEdit_QBaseFocusNextPrevChild((QPlainTextEdit*)self, next);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
///
/// ``` QPlainTextEdit* self, QContextMenuEvent* e ```
void q_plaintextedit_context_menu_event(void* self, void* e) {
    QPlainTextEdit_ContextMenuEvent((QPlainTextEdit*)self, (QContextMenuEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QContextMenuEvent*) ```
void q_plaintextedit_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnContextMenuEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QContextMenuEvent* e ```
void q_plaintextedit_qbase_context_menu_event(void* self, void* e) {
    QPlainTextEdit_QBaseContextMenuEvent((QPlainTextEdit*)self, (QContextMenuEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
///
/// ``` QPlainTextEdit* self, QDragEnterEvent* e ```
void q_plaintextedit_drag_enter_event(void* self, void* e) {
    QPlainTextEdit_DragEnterEvent((QPlainTextEdit*)self, (QDragEnterEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QDragEnterEvent*) ```
void q_plaintextedit_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnDragEnterEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QDragEnterEvent* e ```
void q_plaintextedit_qbase_drag_enter_event(void* self, void* e) {
    QPlainTextEdit_QBaseDragEnterEvent((QPlainTextEdit*)self, (QDragEnterEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
///
/// ``` QPlainTextEdit* self, QDragLeaveEvent* e ```
void q_plaintextedit_drag_leave_event(void* self, void* e) {
    QPlainTextEdit_DragLeaveEvent((QPlainTextEdit*)self, (QDragLeaveEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QDragLeaveEvent*) ```
void q_plaintextedit_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnDragLeaveEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QDragLeaveEvent* e ```
void q_plaintextedit_qbase_drag_leave_event(void* self, void* e) {
    QPlainTextEdit_QBaseDragLeaveEvent((QPlainTextEdit*)self, (QDragLeaveEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
///
/// ``` QPlainTextEdit* self, QDragMoveEvent* e ```
void q_plaintextedit_drag_move_event(void* self, void* e) {
    QPlainTextEdit_DragMoveEvent((QPlainTextEdit*)self, (QDragMoveEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QDragMoveEvent*) ```
void q_plaintextedit_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnDragMoveEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QDragMoveEvent* e ```
void q_plaintextedit_qbase_drag_move_event(void* self, void* e) {
    QPlainTextEdit_QBaseDragMoveEvent((QPlainTextEdit*)self, (QDragMoveEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
///
/// ``` QPlainTextEdit* self, QDropEvent* e ```
void q_plaintextedit_drop_event(void* self, void* e) {
    QPlainTextEdit_DropEvent((QPlainTextEdit*)self, (QDropEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QDropEvent*) ```
void q_plaintextedit_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnDropEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QDropEvent* e ```
void q_plaintextedit_qbase_drop_event(void* self, void* e) {
    QPlainTextEdit_QBaseDropEvent((QPlainTextEdit*)self, (QDropEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
///
/// ``` QPlainTextEdit* self, QFocusEvent* e ```
void q_plaintextedit_focus_in_event(void* self, void* e) {
    QPlainTextEdit_FocusInEvent((QPlainTextEdit*)self, (QFocusEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QFocusEvent*) ```
void q_plaintextedit_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnFocusInEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QFocusEvent* e ```
void q_plaintextedit_qbase_focus_in_event(void* self, void* e) {
    QPlainTextEdit_QBaseFocusInEvent((QPlainTextEdit*)self, (QFocusEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
///
/// ``` QPlainTextEdit* self, QFocusEvent* e ```
void q_plaintextedit_focus_out_event(void* self, void* e) {
    QPlainTextEdit_FocusOutEvent((QPlainTextEdit*)self, (QFocusEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QFocusEvent*) ```
void q_plaintextedit_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnFocusOutEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QFocusEvent* e ```
void q_plaintextedit_qbase_focus_out_event(void* self, void* e) {
    QPlainTextEdit_QBaseFocusOutEvent((QPlainTextEdit*)self, (QFocusEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
///
/// ``` QPlainTextEdit* self, QShowEvent* param1 ```
void q_plaintextedit_show_event(void* self, void* param1) {
    QPlainTextEdit_ShowEvent((QPlainTextEdit*)self, (QShowEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QShowEvent*) ```
void q_plaintextedit_on_show_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnShowEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QShowEvent* param1 ```
void q_plaintextedit_qbase_show_event(void* self, void* param1) {
    QPlainTextEdit_QBaseShowEvent((QPlainTextEdit*)self, (QShowEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
///
/// ``` QPlainTextEdit* self, QEvent* e ```
void q_plaintextedit_change_event(void* self, void* e) {
    QPlainTextEdit_ChangeEvent((QPlainTextEdit*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QEvent*) ```
void q_plaintextedit_on_change_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnChangeEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QEvent* e ```
void q_plaintextedit_qbase_change_event(void* self, void* e) {
    QPlainTextEdit_QBaseChangeEvent((QPlainTextEdit*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
///
/// ``` QPlainTextEdit* self, QWheelEvent* e ```
void q_plaintextedit_wheel_event(void* self, void* e) {
    QPlainTextEdit_WheelEvent((QPlainTextEdit*)self, (QWheelEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QWheelEvent*) ```
void q_plaintextedit_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnWheelEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QWheelEvent* e ```
void q_plaintextedit_qbase_wheel_event(void* self, void* e) {
    QPlainTextEdit_QBaseWheelEvent((QPlainTextEdit*)self, (QWheelEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
///
/// ``` QPlainTextEdit* self ```
QMimeData* q_plaintextedit_create_mime_data_from_selection(void* self) {
    return QPlainTextEdit_CreateMimeDataFromSelection((QPlainTextEdit*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QMimeData* (*slot)() ```
void q_plaintextedit_on_create_mime_data_from_selection(void* self, QMimeData* (*slot)()) {
    QPlainTextEdit_OnCreateMimeDataFromSelection((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self ```
QMimeData* q_plaintextedit_qbase_create_mime_data_from_selection(void* self) {
    return QPlainTextEdit_QBaseCreateMimeDataFromSelection((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
///
/// ``` QPlainTextEdit* self, QMimeData* source ```
bool q_plaintextedit_can_insert_from_mime_data(void* self, void* source) {
    return QPlainTextEdit_CanInsertFromMimeData((QPlainTextEdit*)self, (QMimeData*)source);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, QMimeData*) ```
void q_plaintextedit_on_can_insert_from_mime_data(void* self, bool (*slot)(void*, void*)) {
    QPlainTextEdit_OnCanInsertFromMimeData((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QMimeData* source ```
bool q_plaintextedit_qbase_can_insert_from_mime_data(void* self, void* source) {
    return QPlainTextEdit_QBaseCanInsertFromMimeData((QPlainTextEdit*)self, (QMimeData*)source);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
///
/// ``` QPlainTextEdit* self, QMimeData* source ```
void q_plaintextedit_insert_from_mime_data(void* self, void* source) {
    QPlainTextEdit_InsertFromMimeData((QPlainTextEdit*)self, (QMimeData*)source);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMimeData*) ```
void q_plaintextedit_on_insert_from_mime_data(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnInsertFromMimeData((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QMimeData* source ```
void q_plaintextedit_qbase_insert_from_mime_data(void* self, void* source) {
    QPlainTextEdit_QBaseInsertFromMimeData((QPlainTextEdit*)self, (QMimeData*)source);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
///
/// ``` QPlainTextEdit* self, QInputMethodEvent* param1 ```
void q_plaintextedit_input_method_event(void* self, void* param1) {
    QPlainTextEdit_InputMethodEvent((QPlainTextEdit*)self, (QInputMethodEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QInputMethodEvent*) ```
void q_plaintextedit_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnInputMethodEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QInputMethodEvent* param1 ```
void q_plaintextedit_qbase_input_method_event(void* self, void* param1) {
    QPlainTextEdit_QBaseInputMethodEvent((QPlainTextEdit*)self, (QInputMethodEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
///
/// ``` QPlainTextEdit* self, int dx, int dy ```
void q_plaintextedit_scroll_contents_by(void* self, int dx, int dy) {
    QPlainTextEdit_ScrollContentsBy((QPlainTextEdit*)self, dx, dy);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, int, int) ```
void q_plaintextedit_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QPlainTextEdit_OnScrollContentsBy((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, int dx, int dy ```
void q_plaintextedit_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QPlainTextEdit_QBaseScrollContentsBy((QPlainTextEdit*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
///
/// ``` QPlainTextEdit* self, QTextCursor* cursor ```
void q_plaintextedit_do_set_text_cursor(void* self, void* cursor) {
    QPlainTextEdit_DoSetTextCursor((QPlainTextEdit*)self, (QTextCursor*)cursor);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QTextCursor*) ```
void q_plaintextedit_on_do_set_text_cursor(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnDoSetTextCursor((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QTextCursor* cursor ```
void q_plaintextedit_qbase_do_set_text_cursor(void* self, void* cursor) {
    QPlainTextEdit_QBaseDoSetTextCursor((QPlainTextEdit*)self, (QTextCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
///
/// ``` QPlainTextEdit* self ```
QTextBlock* q_plaintextedit_first_visible_block(void* self) {
    return QPlainTextEdit_FirstVisibleBlock((QPlainTextEdit*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QTextBlock* (*slot)() ```
void q_plaintextedit_on_first_visible_block(void* self, QTextBlock* (*slot)()) {
    QPlainTextEdit_OnFirstVisibleBlock((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self ```
QTextBlock* q_plaintextedit_qbase_first_visible_block(void* self) {
    return QPlainTextEdit_QBaseFirstVisibleBlock((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
///
/// ``` QPlainTextEdit* self ```
QPointF* q_plaintextedit_content_offset(void* self) {
    return QPlainTextEdit_ContentOffset((QPlainTextEdit*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QPointF* (*slot)() ```
void q_plaintextedit_on_content_offset(void* self, QPointF* (*slot)()) {
    QPlainTextEdit_OnContentOffset((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self ```
QPointF* q_plaintextedit_qbase_content_offset(void* self) {
    return QPlainTextEdit_QBaseContentOffset((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
///
/// ``` QPlainTextEdit* self, QTextBlock* block ```
QRectF* q_plaintextedit_block_bounding_rect(void* self, void* block) {
    return QPlainTextEdit_BlockBoundingRect((QPlainTextEdit*)self, (QTextBlock*)block);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QRectF* (*slot)(QPlainTextEdit*, QTextBlock*) ```
void q_plaintextedit_on_block_bounding_rect(void* self, QRectF* (*slot)(void*, void*)) {
    QPlainTextEdit_OnBlockBoundingRect((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QTextBlock* block ```
QRectF* q_plaintextedit_qbase_block_bounding_rect(void* self, void* block) {
    return QPlainTextEdit_QBaseBlockBoundingRect((QPlainTextEdit*)self, (QTextBlock*)block);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
///
/// ``` QPlainTextEdit* self, QTextBlock* block ```
QRectF* q_plaintextedit_block_bounding_geometry(void* self, void* block) {
    return QPlainTextEdit_BlockBoundingGeometry((QPlainTextEdit*)self, (QTextBlock*)block);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QRectF* (*slot)(QPlainTextEdit*, QTextBlock*) ```
void q_plaintextedit_on_block_bounding_geometry(void* self, QRectF* (*slot)(void*, void*)) {
    QPlainTextEdit_OnBlockBoundingGeometry((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QTextBlock* block ```
QRectF* q_plaintextedit_qbase_block_bounding_geometry(void* self, void* block) {
    return QPlainTextEdit_QBaseBlockBoundingGeometry((QPlainTextEdit*)self, (QTextBlock*)block);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
///
/// ``` QPlainTextEdit* self ```
QAbstractTextDocumentLayout__PaintContext* q_plaintextedit_get_paint_context(void* self) {
    return QPlainTextEdit_GetPaintContext((QPlainTextEdit*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QAbstractTextDocumentLayout__PaintContext* (*slot)() ```
void q_plaintextedit_on_get_paint_context(void* self, QAbstractTextDocumentLayout__PaintContext* (*slot)()) {
    QPlainTextEdit_OnGetPaintContext((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self ```
QAbstractTextDocumentLayout__PaintContext* q_plaintextedit_qbase_get_paint_context(void* self) {
    return QPlainTextEdit_QBaseGetPaintContext((QPlainTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
///
/// ``` QPlainTextEdit* self, float range ```
void q_plaintextedit_zoom_in_f(void* self, float range) {
    QPlainTextEdit_ZoomInF((QPlainTextEdit*)self, range);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, float) ```
void q_plaintextedit_on_zoom_in_f(void* self, void (*slot)(void*, float)) {
    QPlainTextEdit_OnZoomInF((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, float range ```
void q_plaintextedit_qbase_zoom_in_f(void* self, float range) {
    QPlainTextEdit_QBaseZoomInF((QPlainTextEdit*)self, range);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_plaintextedit_tr2(const char* s, const char* c) {
    libqt_string _str = QPlainTextEdit_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_plaintextedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPlainTextEdit_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// ``` QPlainTextEdit* self, const char* exp, int options ```
bool q_plaintextedit_find2(void* self, const char* exp, int64_t options) {
    return QPlainTextEdit_Find2((QPlainTextEdit*)self, qstring(exp), options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// ``` QPlainTextEdit* self, QRegularExpression* exp, int options ```
bool q_plaintextedit_find22(void* self, void* exp, int64_t options) {
    return QPlainTextEdit_Find22((QPlainTextEdit*)self, (QRegularExpression*)exp, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
///
/// ``` QPlainTextEdit* self, enum QTextCursor__MoveOperation operation, enum QTextCursor__MoveMode mode ```
void q_plaintextedit_move_cursor2(void* self, int64_t operation, int64_t mode) {
    QPlainTextEdit_MoveCursor2((QPlainTextEdit*)self, operation, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
///
/// ``` QPlainTextEdit* self, int range ```
void q_plaintextedit_zoom_in1(void* self, int range) {
    QPlainTextEdit_ZoomIn1((QPlainTextEdit*)self, range);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
///
/// ``` QPlainTextEdit* self, int range ```
void q_plaintextedit_zoom_out1(void* self, int range) {
    QPlainTextEdit_ZoomOut1((QPlainTextEdit*)self, range);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QPlainTextEdit* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_plaintextedit_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QPlainTextEdit* self ```
QScrollBar* q_plaintextedit_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QPlainTextEdit* self, QScrollBar* scrollbar ```
void q_plaintextedit_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QPlainTextEdit* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_plaintextedit_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QPlainTextEdit* self ```
QScrollBar* q_plaintextedit_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QPlainTextEdit* self, QScrollBar* scrollbar ```
void q_plaintextedit_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QPlainTextEdit* self, QWidget* widget ```
void q_plaintextedit_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QPlainTextEdit* self, QWidget* widget, int alignment ```
void q_plaintextedit_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QPlainTextEdit* self, int alignment ```
libqt_list /* of QWidget* */ q_plaintextedit_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QPlainTextEdit* self, QWidget* widget ```
void q_plaintextedit_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QPlainTextEdit* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_plaintextedit_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QPlainTextEdit* self, int frameStyle ```
void q_plaintextedit_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QPlainTextEdit* self, enum QFrame__Shape frameShape ```
void q_plaintextedit_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QPlainTextEdit* self, enum QFrame__Shadow frameShadow ```
void q_plaintextedit_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QPlainTextEdit* self, int lineWidth ```
void q_plaintextedit_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QPlainTextEdit* self, int midLineWidth ```
void q_plaintextedit_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QPlainTextEdit* self, QRect* frameRect ```
void q_plaintextedit_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QPlainTextEdit* self ```
uintptr_t q_plaintextedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QPlainTextEdit* self ```
uintptr_t q_plaintextedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QPlainTextEdit* self ```
uintptr_t q_plaintextedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QPlainTextEdit* self ```
QStyle* q_plaintextedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QPlainTextEdit* self, QStyle* style ```
void q_plaintextedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QPlainTextEdit* self, enum Qt__WindowModality windowModality ```
void q_plaintextedit_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QPlainTextEdit* self, QWidget* param1 ```
bool q_plaintextedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QPlainTextEdit* self, bool enabled ```
void q_plaintextedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QPlainTextEdit* self, bool disabled ```
void q_plaintextedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QPlainTextEdit* self, bool windowModified ```
void q_plaintextedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QPlainTextEdit* self ```
QPoint* q_plaintextedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QPlainTextEdit* self ```
QRegion* q_plaintextedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPlainTextEdit* self, QSize* minimumSize ```
void q_plaintextedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPlainTextEdit* self, int minw, int minh ```
void q_plaintextedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPlainTextEdit* self, QSize* maximumSize ```
void q_plaintextedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPlainTextEdit* self, int maxw, int maxh ```
void q_plaintextedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QPlainTextEdit* self, int minw ```
void q_plaintextedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QPlainTextEdit* self, int minh ```
void q_plaintextedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QPlainTextEdit* self, int maxw ```
void q_plaintextedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QPlainTextEdit* self, int maxh ```
void q_plaintextedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPlainTextEdit* self, QSize* sizeIncrement ```
void q_plaintextedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPlainTextEdit* self, int w, int h ```
void q_plaintextedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPlainTextEdit* self, QSize* baseSize ```
void q_plaintextedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPlainTextEdit* self, int basew, int baseh ```
void q_plaintextedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPlainTextEdit* self, QSize* fixedSize ```
void q_plaintextedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPlainTextEdit* self, int w, int h ```
void q_plaintextedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QPlainTextEdit* self, int w ```
void q_plaintextedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QPlainTextEdit* self, int h ```
void q_plaintextedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPlainTextEdit* self, QPointF* param1 ```
QPointF* q_plaintextedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPlainTextEdit* self, QPoint* param1 ```
QPoint* q_plaintextedit_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPlainTextEdit* self, QPointF* param1 ```
QPointF* q_plaintextedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPlainTextEdit* self, QPoint* param1 ```
QPoint* q_plaintextedit_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPlainTextEdit* self, QPointF* param1 ```
QPointF* q_plaintextedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPlainTextEdit* self, QPoint* param1 ```
QPoint* q_plaintextedit_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPlainTextEdit* self, QPointF* param1 ```
QPointF* q_plaintextedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPlainTextEdit* self, QPoint* param1 ```
QPoint* q_plaintextedit_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPlainTextEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_plaintextedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPlainTextEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_plaintextedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPlainTextEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_plaintextedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPlainTextEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_plaintextedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QPlainTextEdit* self ```
QPalette* q_plaintextedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QPlainTextEdit* self, QPalette* palette ```
void q_plaintextedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QPlainTextEdit* self, enum QPalette__ColorRole backgroundRole ```
void q_plaintextedit_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QPlainTextEdit* self, enum QPalette__ColorRole foregroundRole ```
void q_plaintextedit_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QPlainTextEdit* self ```
QFont* q_plaintextedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QPlainTextEdit* self, QFont* font ```
void q_plaintextedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QPlainTextEdit* self ```
QFontMetrics* q_plaintextedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QPlainTextEdit* self ```
QFontInfo* q_plaintextedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QPlainTextEdit* self ```
QCursor* q_plaintextedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QPlainTextEdit* self, QCursor* cursor ```
void q_plaintextedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QPlainTextEdit* self, bool enable ```
void q_plaintextedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QPlainTextEdit* self, bool enable ```
void q_plaintextedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPlainTextEdit* self, QBitmap* mask ```
void q_plaintextedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPlainTextEdit* self, QRegion* mask ```
void q_plaintextedit_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QPlainTextEdit* self ```
QRegion* q_plaintextedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPaintDevice* target ```
void q_plaintextedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPainter* painter ```
void q_plaintextedit_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPlainTextEdit* self ```
QPixmap* q_plaintextedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QPlainTextEdit* self ```
QGraphicsEffect* q_plaintextedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QPlainTextEdit* self, QGraphicsEffect* effect ```
void q_plaintextedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPlainTextEdit* self, enum Qt__GestureType typeVal ```
void q_plaintextedit_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QPlainTextEdit* self, enum Qt__GestureType typeVal ```
void q_plaintextedit_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QPlainTextEdit* self, const char* windowTitle ```
void q_plaintextedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QPlainTextEdit* self, const char* styleSheet ```
void q_plaintextedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QPlainTextEdit* self, QIcon* icon ```
void q_plaintextedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QPlainTextEdit* self ```
QIcon* q_plaintextedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QPlainTextEdit* self, const char* windowIconText ```
void q_plaintextedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QPlainTextEdit* self, const char* windowRole ```
void q_plaintextedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QPlainTextEdit* self, const char* filePath ```
void q_plaintextedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QPlainTextEdit* self, double level ```
void q_plaintextedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QPlainTextEdit* self ```
double q_plaintextedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QPlainTextEdit* self, const char* toolTip ```
void q_plaintextedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QPlainTextEdit* self, int msec ```
void q_plaintextedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QPlainTextEdit* self, const char* statusTip ```
void q_plaintextedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QPlainTextEdit* self, const char* whatsThis ```
void q_plaintextedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QPlainTextEdit* self, const char* name ```
void q_plaintextedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QPlainTextEdit* self, const char* description ```
void q_plaintextedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QPlainTextEdit* self, enum Qt__LayoutDirection direction ```
void q_plaintextedit_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QPlainTextEdit* self, QLocale* locale ```
void q_plaintextedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QPlainTextEdit* self ```
QLocale* q_plaintextedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPlainTextEdit* self, enum Qt__FocusReason reason ```
void q_plaintextedit_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QPlainTextEdit* self, enum Qt__FocusPolicy policy ```
void q_plaintextedit_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_plaintextedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QPlainTextEdit* self, QWidget* focusProxy ```
void q_plaintextedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QPlainTextEdit* self, enum Qt__ContextMenuPolicy policy ```
void q_plaintextedit_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPlainTextEdit* self, QCursor* param1 ```
void q_plaintextedit_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPlainTextEdit* self, QKeySequence* key ```
int32_t q_plaintextedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QPlainTextEdit* self, int id ```
void q_plaintextedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPlainTextEdit* self, int id ```
void q_plaintextedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPlainTextEdit* self, int id ```
void q_plaintextedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_plaintextedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_plaintextedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QPlainTextEdit* self, bool enable ```
void q_plaintextedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QPlainTextEdit* self ```
QGraphicsProxyWidget* q_plaintextedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPlainTextEdit* self, int x, int y, int w, int h ```
void q_plaintextedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPlainTextEdit* self, QRect* param1 ```
void q_plaintextedit_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPlainTextEdit* self, QRegion* param1 ```
void q_plaintextedit_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPlainTextEdit* self, int x, int y, int w, int h ```
void q_plaintextedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPlainTextEdit* self, QRect* param1 ```
void q_plaintextedit_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPlainTextEdit* self, QRegion* param1 ```
void q_plaintextedit_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QPlainTextEdit* self, bool hidden ```
void q_plaintextedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QPlainTextEdit* self, QWidget* param1 ```
void q_plaintextedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPlainTextEdit* self, int x, int y ```
void q_plaintextedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPlainTextEdit* self, QPoint* param1 ```
void q_plaintextedit_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPlainTextEdit* self, int w, int h ```
void q_plaintextedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPlainTextEdit* self, QSize* param1 ```
void q_plaintextedit_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPlainTextEdit* self, int x, int y, int w, int h ```
void q_plaintextedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPlainTextEdit* self, QRect* geometry ```
void q_plaintextedit_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QPlainTextEdit* self ```
char* q_plaintextedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QPlainTextEdit* self, const char* geometry ```
bool q_plaintextedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QPlainTextEdit* self, QWidget* param1 ```
bool q_plaintextedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QPlainTextEdit* self, int state ```
void q_plaintextedit_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QPlainTextEdit* self, int state ```
void q_plaintextedit_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QPlainTextEdit* self ```
QSizePolicy* q_plaintextedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPlainTextEdit* self, QSizePolicy* sizePolicy ```
void q_plaintextedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPlainTextEdit* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_plaintextedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QPlainTextEdit* self ```
QRegion* q_plaintextedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPlainTextEdit* self, int left, int top, int right, int bottom ```
void q_plaintextedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPlainTextEdit* self, QMargins* margins ```
void q_plaintextedit_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QPlainTextEdit* self ```
QMargins* q_plaintextedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QPlainTextEdit* self ```
QLayout* q_plaintextedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QPlainTextEdit* self, QLayout* layout ```
void q_plaintextedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPlainTextEdit* self, QWidget* parent ```
void q_plaintextedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPlainTextEdit* self, QWidget* parent, int f ```
void q_plaintextedit_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPlainTextEdit* self, int dx, int dy ```
void q_plaintextedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPlainTextEdit* self, int dx, int dy, QRect* param3 ```
void q_plaintextedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QPlainTextEdit* self, bool on ```
void q_plaintextedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPlainTextEdit* self, QAction* action ```
void q_plaintextedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QPlainTextEdit* self, QAction* actions[] ```
void q_plaintextedit_add_actions(void* self, void* actions[]) {
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
/// ``` QPlainTextEdit* self, QAction* before, QAction* actions[] ```
void q_plaintextedit_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QPlainTextEdit* self, QAction* before, QAction* action ```
void q_plaintextedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QPlainTextEdit* self, QAction* action ```
void q_plaintextedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QPlainTextEdit* self ```
libqt_list /* of QAction* */ q_plaintextedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPlainTextEdit* self, const char* text ```
QAction* q_plaintextedit_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPlainTextEdit* self, QIcon* icon, const char* text ```
QAction* q_plaintextedit_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPlainTextEdit* self, const char* text, QKeySequence* shortcut ```
QAction* q_plaintextedit_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPlainTextEdit* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_plaintextedit_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QPlainTextEdit* self, int typeVal ```
void q_plaintextedit_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPlainTextEdit* self, enum Qt__WindowType param1 ```
void q_plaintextedit_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QPlainTextEdit* self, int typeVal ```
void q_plaintextedit_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPlainTextEdit* self, int x, int y ```
QWidget* q_plaintextedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPlainTextEdit* self, QPoint* p ```
QWidget* q_plaintextedit_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPlainTextEdit* self, enum Qt__WidgetAttribute param1 ```
void q_plaintextedit_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QPlainTextEdit* self, enum Qt__WidgetAttribute param1 ```
bool q_plaintextedit_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QPlainTextEdit* self, QWidget* child ```
bool q_plaintextedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QPlainTextEdit* self, bool enabled ```
void q_plaintextedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QPlainTextEdit* self ```
QBackingStore* q_plaintextedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QPlainTextEdit* self ```
QWindow* q_plaintextedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QPlainTextEdit* self ```
QScreen* q_plaintextedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QPlainTextEdit* self, QScreen* screen ```
void q_plaintextedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_plaintextedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QPlainTextEdit* self, const char* title ```
void q_plaintextedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QPlainTextEdit* self, void (*slot)(QWidget*, const char*) ```
void q_plaintextedit_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QPlainTextEdit* self, QIcon* icon ```
void q_plaintextedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QPlainTextEdit* self, void (*slot)(QWidget*, QIcon*) ```
void q_plaintextedit_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QPlainTextEdit* self, const char* iconText ```
void q_plaintextedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QPlainTextEdit* self, void (*slot)(QWidget*, const char*) ```
void q_plaintextedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QPlainTextEdit* self, QPoint* pos ```
void q_plaintextedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QPlainTextEdit* self, void (*slot)(QWidget*, QPoint*) ```
void q_plaintextedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QPlainTextEdit* self, int hints ```
void q_plaintextedit_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPaintDevice* target, QPoint* targetOffset ```
void q_plaintextedit_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_plaintextedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_plaintextedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPainter* painter, QPoint* targetOffset ```
void q_plaintextedit_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_plaintextedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_plaintextedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPlainTextEdit* self, QRect* rectangle ```
QPixmap* q_plaintextedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPlainTextEdit* self, enum Qt__GestureType typeVal, int flags ```
void q_plaintextedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPlainTextEdit* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_plaintextedit_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPlainTextEdit* self, int id, bool enable ```
void q_plaintextedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPlainTextEdit* self, int id, bool enable ```
void q_plaintextedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPlainTextEdit* self, enum Qt__WindowType param1, bool on ```
void q_plaintextedit_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPlainTextEdit* self, enum Qt__WidgetAttribute param1, bool on ```
void q_plaintextedit_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_plaintextedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_plaintextedit_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPlainTextEdit* self, const char* name ```
void q_plaintextedit_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPlainTextEdit* self, bool b ```
bool q_plaintextedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPlainTextEdit* self ```
QThread* q_plaintextedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPlainTextEdit* self, QThread* thread ```
void q_plaintextedit_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPlainTextEdit* self, int interval ```
int32_t q_plaintextedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPlainTextEdit* self, int id ```
void q_plaintextedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPlainTextEdit* self ```
libqt_list /* of QObject* */ q_plaintextedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPlainTextEdit* self, QObject* filterObj ```
void q_plaintextedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPlainTextEdit* self, QObject* obj ```
void q_plaintextedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_plaintextedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPlainTextEdit* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_plaintextedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_plaintextedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_plaintextedit_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPlainTextEdit* self, const char* name, QVariant* value ```
bool q_plaintextedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPlainTextEdit* self, const char* name ```
QVariant* q_plaintextedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPlainTextEdit* self ```
const char** q_plaintextedit_dynamic_property_names(void* self) {
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
/// ``` QPlainTextEdit* self ```
QBindingStorage* q_plaintextedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPlainTextEdit* self ```
QBindingStorage* q_plaintextedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPlainTextEdit* self, void (*slot)(QObject*) ```
void q_plaintextedit_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPlainTextEdit* self ```
QObject* q_plaintextedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPlainTextEdit* self, const char* classname ```
bool q_plaintextedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPlainTextEdit* self, int interval, enum Qt__TimerType timerType ```
int32_t q_plaintextedit_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_plaintextedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPlainTextEdit* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_plaintextedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPlainTextEdit* self, QObject* param1 ```
void q_plaintextedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPlainTextEdit* self, void (*slot)(QObject*, QObject*) ```
void q_plaintextedit_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPlainTextEdit* self ```
double q_plaintextedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPlainTextEdit* self ```
double q_plaintextedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_plaintextedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_minimum_size_hint(void* self) {
    return QPlainTextEdit_MinimumSizeHint((QPlainTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_qbase_minimum_size_hint(void* self) {
    return QPlainTextEdit_QBaseMinimumSizeHint((QPlainTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QSize* (*slot)() ```
void q_plaintextedit_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QPlainTextEdit_OnMinimumSizeHint((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_size_hint(void* self) {
    return QPlainTextEdit_SizeHint((QPlainTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_qbase_size_hint(void* self) {
    return QPlainTextEdit_QBaseSizeHint((QPlainTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QSize* (*slot)() ```
void q_plaintextedit_on_size_hint(void* self, QSize* (*slot)()) {
    QPlainTextEdit_OnSizeHint((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QWidget* viewport ```
void q_plaintextedit_setup_viewport(void* self, void* viewport) {
    QPlainTextEdit_SetupViewport((QPlainTextEdit*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QWidget* viewport ```
void q_plaintextedit_qbase_setup_viewport(void* self, void* viewport) {
    QPlainTextEdit_QBaseSetupViewport((QPlainTextEdit*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QWidget*) ```
void q_plaintextedit_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnSetupViewport((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QObject* param1, QEvent* param2 ```
bool q_plaintextedit_event_filter(void* self, void* param1, void* param2) {
    return QPlainTextEdit_EventFilter((QPlainTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QObject* param1, QEvent* param2 ```
bool q_plaintextedit_qbase_event_filter(void* self, void* param1, void* param2) {
    return QPlainTextEdit_QBaseEventFilter((QPlainTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, QObject*, QEvent*) ```
void q_plaintextedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPlainTextEdit_OnEventFilter((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QEvent* param1 ```
bool q_plaintextedit_viewport_event(void* self, void* param1) {
    return QPlainTextEdit_ViewportEvent((QPlainTextEdit*)self, (QEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QEvent* param1 ```
bool q_plaintextedit_qbase_viewport_event(void* self, void* param1) {
    return QPlainTextEdit_QBaseViewportEvent((QPlainTextEdit*)self, (QEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, QEvent*) ```
void q_plaintextedit_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QPlainTextEdit_OnViewportEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_viewport_size_hint(void* self) {
    return QPlainTextEdit_ViewportSizeHint((QPlainTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_qbase_viewport_size_hint(void* self) {
    return QPlainTextEdit_QBaseViewportSizeHint((QPlainTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QSize* (*slot)() ```
void q_plaintextedit_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QPlainTextEdit_OnViewportSizeHint((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QStyleOptionFrame* option ```
void q_plaintextedit_init_style_option(void* self, void* option) {
    QPlainTextEdit_InitStyleOption((QPlainTextEdit*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QStyleOptionFrame* option ```
void q_plaintextedit_qbase_init_style_option(void* self, void* option) {
    QPlainTextEdit_QBaseInitStyleOption((QPlainTextEdit*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QStyleOptionFrame*) ```
void q_plaintextedit_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnInitStyleOption((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_dev_type(void* self) {
    return QPlainTextEdit_DevType((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_qbase_dev_type(void* self) {
    return QPlainTextEdit_QBaseDevType((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int32_t (*slot)() ```
void q_plaintextedit_on_dev_type(void* self, int32_t (*slot)()) {
    QPlainTextEdit_OnDevType((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, bool visible ```
void q_plaintextedit_set_visible(void* self, bool visible) {
    QPlainTextEdit_SetVisible((QPlainTextEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool visible ```
void q_plaintextedit_qbase_set_visible(void* self, bool visible) {
    QPlainTextEdit_QBaseSetVisible((QPlainTextEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, bool) ```
void q_plaintextedit_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QPlainTextEdit_OnSetVisible((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, int param1 ```
int32_t q_plaintextedit_height_for_width(void* self, int param1) {
    return QPlainTextEdit_HeightForWidth((QPlainTextEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int param1 ```
int32_t q_plaintextedit_qbase_height_for_width(void* self, int param1) {
    return QPlainTextEdit_QBaseHeightForWidth((QPlainTextEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int32_t (*slot)(QPlainTextEdit*, int) ```
void q_plaintextedit_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QPlainTextEdit_OnHeightForWidth((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_has_height_for_width(void* self) {
    return QPlainTextEdit_HasHeightForWidth((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_qbase_has_height_for_width(void* self) {
    return QPlainTextEdit_QBaseHasHeightForWidth((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)() ```
void q_plaintextedit_on_has_height_for_width(void* self, bool (*slot)()) {
    QPlainTextEdit_OnHasHeightForWidth((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QPaintEngine* q_plaintextedit_paint_engine(void* self) {
    return QPlainTextEdit_PaintEngine((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QPaintEngine* q_plaintextedit_qbase_paint_engine(void* self) {
    return QPlainTextEdit_QBasePaintEngine((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QPaintEngine* (*slot)() ```
void q_plaintextedit_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QPlainTextEdit_OnPaintEngine((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QEnterEvent* event ```
void q_plaintextedit_enter_event(void* self, void* event) {
    QPlainTextEdit_EnterEvent((QPlainTextEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QEnterEvent* event ```
void q_plaintextedit_qbase_enter_event(void* self, void* event) {
    QPlainTextEdit_QBaseEnterEvent((QPlainTextEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QEnterEvent*) ```
void q_plaintextedit_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnEnterEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QEvent* event ```
void q_plaintextedit_leave_event(void* self, void* event) {
    QPlainTextEdit_LeaveEvent((QPlainTextEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QEvent* event ```
void q_plaintextedit_qbase_leave_event(void* self, void* event) {
    QPlainTextEdit_QBaseLeaveEvent((QPlainTextEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QEvent*) ```
void q_plaintextedit_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnLeaveEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QMoveEvent* event ```
void q_plaintextedit_move_event(void* self, void* event) {
    QPlainTextEdit_MoveEvent((QPlainTextEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QMoveEvent* event ```
void q_plaintextedit_qbase_move_event(void* self, void* event) {
    QPlainTextEdit_QBaseMoveEvent((QPlainTextEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMoveEvent*) ```
void q_plaintextedit_on_move_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnMoveEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QCloseEvent* event ```
void q_plaintextedit_close_event(void* self, void* event) {
    QPlainTextEdit_CloseEvent((QPlainTextEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QCloseEvent* event ```
void q_plaintextedit_qbase_close_event(void* self, void* event) {
    QPlainTextEdit_QBaseCloseEvent((QPlainTextEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QCloseEvent*) ```
void q_plaintextedit_on_close_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnCloseEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QTabletEvent* event ```
void q_plaintextedit_tablet_event(void* self, void* event) {
    QPlainTextEdit_TabletEvent((QPlainTextEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QTabletEvent* event ```
void q_plaintextedit_qbase_tablet_event(void* self, void* event) {
    QPlainTextEdit_QBaseTabletEvent((QPlainTextEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QTabletEvent*) ```
void q_plaintextedit_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnTabletEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QActionEvent* event ```
void q_plaintextedit_action_event(void* self, void* event) {
    QPlainTextEdit_ActionEvent((QPlainTextEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QActionEvent* event ```
void q_plaintextedit_qbase_action_event(void* self, void* event) {
    QPlainTextEdit_QBaseActionEvent((QPlainTextEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QActionEvent*) ```
void q_plaintextedit_on_action_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnActionEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QHideEvent* event ```
void q_plaintextedit_hide_event(void* self, void* event) {
    QPlainTextEdit_HideEvent((QPlainTextEdit*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QHideEvent* event ```
void q_plaintextedit_qbase_hide_event(void* self, void* event) {
    QPlainTextEdit_QBaseHideEvent((QPlainTextEdit*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QHideEvent*) ```
void q_plaintextedit_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnHideEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_plaintextedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPlainTextEdit_NativeEvent((QPlainTextEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_plaintextedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPlainTextEdit_QBaseNativeEvent((QPlainTextEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, const char*, void*, intptr_t*) ```
void q_plaintextedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QPlainTextEdit_OnNativeEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_plaintextedit_metric(void* self, int64_t param1) {
    return QPlainTextEdit_Metric((QPlainTextEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_plaintextedit_qbase_metric(void* self, int64_t param1) {
    return QPlainTextEdit_QBaseMetric((QPlainTextEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int32_t (*slot)(QPlainTextEdit*, enum QPaintDevice__PaintDeviceMetric) ```
void q_plaintextedit_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QPlainTextEdit_OnMetric((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QPainter* painter ```
void q_plaintextedit_init_painter(void* self, void* painter) {
    QPlainTextEdit_InitPainter((QPlainTextEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QPainter* painter ```
void q_plaintextedit_qbase_init_painter(void* self, void* painter) {
    QPlainTextEdit_QBaseInitPainter((QPlainTextEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QPainter*) ```
void q_plaintextedit_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnInitPainter((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QPoint* offset ```
QPaintDevice* q_plaintextedit_redirected(void* self, void* offset) {
    return QPlainTextEdit_Redirected((QPlainTextEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QPoint* offset ```
QPaintDevice* q_plaintextedit_qbase_redirected(void* self, void* offset) {
    return QPlainTextEdit_QBaseRedirected((QPlainTextEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QPaintDevice* (*slot)(QPlainTextEdit*, QPoint*) ```
void q_plaintextedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QPlainTextEdit_OnRedirected((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QPainter* q_plaintextedit_shared_painter(void* self) {
    return QPlainTextEdit_SharedPainter((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QPainter* q_plaintextedit_qbase_shared_painter(void* self) {
    return QPlainTextEdit_QBaseSharedPainter((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QPainter* (*slot)() ```
void q_plaintextedit_on_shared_painter(void* self, QPainter* (*slot)()) {
    QPlainTextEdit_OnSharedPainter((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QChildEvent* event ```
void q_plaintextedit_child_event(void* self, void* event) {
    QPlainTextEdit_ChildEvent((QPlainTextEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QChildEvent* event ```
void q_plaintextedit_qbase_child_event(void* self, void* event) {
    QPlainTextEdit_QBaseChildEvent((QPlainTextEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QChildEvent*) ```
void q_plaintextedit_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnChildEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QEvent* event ```
void q_plaintextedit_custom_event(void* self, void* event) {
    QPlainTextEdit_CustomEvent((QPlainTextEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QEvent* event ```
void q_plaintextedit_qbase_custom_event(void* self, void* event) {
    QPlainTextEdit_QBaseCustomEvent((QPlainTextEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QEvent*) ```
void q_plaintextedit_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnCustomEvent((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QMetaMethod* signal ```
void q_plaintextedit_connect_notify(void* self, void* signal) {
    QPlainTextEdit_ConnectNotify((QPlainTextEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QMetaMethod* signal ```
void q_plaintextedit_qbase_connect_notify(void* self, void* signal) {
    QPlainTextEdit_QBaseConnectNotify((QPlainTextEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMetaMethod*) ```
void q_plaintextedit_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnConnectNotify((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QMetaMethod* signal ```
void q_plaintextedit_disconnect_notify(void* self, void* signal) {
    QPlainTextEdit_DisconnectNotify((QPlainTextEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QMetaMethod* signal ```
void q_plaintextedit_qbase_disconnect_notify(void* self, void* signal) {
    QPlainTextEdit_QBaseDisconnectNotify((QPlainTextEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMetaMethod*) ```
void q_plaintextedit_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnDisconnectNotify((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, int left, int top, int right, int bottom ```
void q_plaintextedit_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QPlainTextEdit_SetViewportMargins((QPlainTextEdit*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int left, int top, int right, int bottom ```
void q_plaintextedit_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QPlainTextEdit_QBaseSetViewportMargins((QPlainTextEdit*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, int, int, int, int) ```
void q_plaintextedit_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QPlainTextEdit_OnSetViewportMargins((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QMargins* q_plaintextedit_viewport_margins(void* self) {
    return QPlainTextEdit_ViewportMargins((QPlainTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QMargins* q_plaintextedit_qbase_viewport_margins(void* self) {
    return QPlainTextEdit_QBaseViewportMargins((QPlainTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QMargins* (*slot)() ```
void q_plaintextedit_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QPlainTextEdit_OnViewportMargins((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QPainter* param1 ```
void q_plaintextedit_draw_frame(void* self, void* param1) {
    QPlainTextEdit_DrawFrame((QPlainTextEdit*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QPainter* param1 ```
void q_plaintextedit_qbase_draw_frame(void* self, void* param1) {
    QPlainTextEdit_QBaseDrawFrame((QPlainTextEdit*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QPainter*) ```
void q_plaintextedit_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QPlainTextEdit_OnDrawFrame((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_update_micro_focus(void* self) {
    QPlainTextEdit_UpdateMicroFocus((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_qbase_update_micro_focus(void* self) {
    QPlainTextEdit_QBaseUpdateMicroFocus((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)() ```
void q_plaintextedit_on_update_micro_focus(void* self, void (*slot)()) {
    QPlainTextEdit_OnUpdateMicroFocus((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_create(void* self) {
    QPlainTextEdit_Create((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_qbase_create(void* self) {
    QPlainTextEdit_QBaseCreate((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)() ```
void q_plaintextedit_on_create(void* self, void (*slot)()) {
    QPlainTextEdit_OnCreate((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_destroy(void* self) {
    QPlainTextEdit_Destroy((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_qbase_destroy(void* self) {
    QPlainTextEdit_QBaseDestroy((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)() ```
void q_plaintextedit_on_destroy(void* self, void (*slot)()) {
    QPlainTextEdit_OnDestroy((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_focus_next_child(void* self) {
    return QPlainTextEdit_FocusNextChild((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_qbase_focus_next_child(void* self) {
    return QPlainTextEdit_QBaseFocusNextChild((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)() ```
void q_plaintextedit_on_focus_next_child(void* self, bool (*slot)()) {
    QPlainTextEdit_OnFocusNextChild((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_focus_previous_child(void* self) {
    return QPlainTextEdit_FocusPreviousChild((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_qbase_focus_previous_child(void* self) {
    return QPlainTextEdit_QBaseFocusPreviousChild((QPlainTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)() ```
void q_plaintextedit_on_focus_previous_child(void* self, bool (*slot)()) {
    QPlainTextEdit_OnFocusPreviousChild((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QObject* q_plaintextedit_sender(void* self) {
    return QPlainTextEdit_Sender((QPlainTextEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QObject* q_plaintextedit_qbase_sender(void* self) {
    return QPlainTextEdit_QBaseSender((QPlainTextEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QObject* (*slot)() ```
void q_plaintextedit_on_sender(void* self, QObject* (*slot)()) {
    QPlainTextEdit_OnSender((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_sender_signal_index(void* self) {
    return QPlainTextEdit_SenderSignalIndex((QPlainTextEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_qbase_sender_signal_index(void* self) {
    return QPlainTextEdit_QBaseSenderSignalIndex((QPlainTextEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int32_t (*slot)() ```
void q_plaintextedit_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPlainTextEdit_OnSenderSignalIndex((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, const char* signal ```
int32_t q_plaintextedit_receivers(void* self, const char* signal) {
    return QPlainTextEdit_Receivers((QPlainTextEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, const char* signal ```
int32_t q_plaintextedit_qbase_receivers(void* self, const char* signal) {
    return QPlainTextEdit_QBaseReceivers((QPlainTextEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int32_t (*slot)(QPlainTextEdit*, const char*) ```
void q_plaintextedit_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPlainTextEdit_OnReceivers((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QMetaMethod* signal ```
bool q_plaintextedit_is_signal_connected(void* self, void* signal) {
    return QPlainTextEdit_IsSignalConnected((QPlainTextEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QMetaMethod* signal ```
bool q_plaintextedit_qbase_is_signal_connected(void* self, void* signal) {
    return QPlainTextEdit_QBaseIsSignalConnected((QPlainTextEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, QMetaMethod*) ```
void q_plaintextedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPlainTextEdit_OnIsSignalConnected((QPlainTextEdit*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_delete(void* self) {
    QPlainTextEdit_Delete((QPlainTextEdit*)(self));
}

/// https://doc.qt.io/qt-6/qplaintextdocumentlayout.html

/// q_plaintextdocumentlayout_new constructs a new QPlainTextDocumentLayout object.
///
/// ``` QTextDocument* document ```
QPlainTextDocumentLayout* q_plaintextdocumentlayout_new(void* document) {
    return QPlainTextDocumentLayout_new((QTextDocument*)document);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPlainTextDocumentLayout* self ```
QMetaObject* q_plaintextdocumentlayout_meta_object(void* self) {
    return QPlainTextDocumentLayout_MetaObject((QPlainTextDocumentLayout*)self);
}

/// ``` QPlainTextDocumentLayout* self, const char* param1 ```
void* q_plaintextdocumentlayout_metacast(void* self, const char* param1) {
    return QPlainTextDocumentLayout_Metacast((QPlainTextDocumentLayout*)self, param1);
}

/// ``` QPlainTextDocumentLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_plaintextdocumentlayout_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPlainTextDocumentLayout_Metacall((QPlainTextDocumentLayout*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, int32_t (*slot)(QPlainTextDocumentLayout*, enum QMetaObject__Call, int, void*) ```
void q_plaintextdocumentlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPlainTextDocumentLayout_OnMetacall((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_plaintextdocumentlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPlainTextDocumentLayout_QBaseMetacall((QPlainTextDocumentLayout*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_plaintextdocumentlayout_tr(const char* s) {
    libqt_string _str = QPlainTextDocumentLayout_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#draw)
///
/// ``` QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2 ```
void q_plaintextdocumentlayout_draw(void* self, void* param1, void* param2) {
    QPlainTextDocumentLayout_Draw((QPlainTextDocumentLayout*)self, (QPainter*)param1, (QAbstractTextDocumentLayout__PaintContext*)param2);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QPainter*, QAbstractTextDocumentLayout__PaintContext*) ```
void q_plaintextdocumentlayout_on_draw(void* self, void (*slot)(void*, void*, void*)) {
    QPlainTextDocumentLayout_OnDraw((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2 ```
void q_plaintextdocumentlayout_qbase_draw(void* self, void* param1, void* param2) {
    QPlainTextDocumentLayout_QBaseDraw((QPlainTextDocumentLayout*)self, (QPainter*)param1, (QAbstractTextDocumentLayout__PaintContext*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#hitTest)
///
/// ``` QPlainTextDocumentLayout* self, QPointF* param1, enum Qt__HitTestAccuracy param2 ```
int32_t q_plaintextdocumentlayout_hit_test(void* self, void* param1, int64_t param2) {
    return QPlainTextDocumentLayout_HitTest((QPlainTextDocumentLayout*)self, (QPointF*)param1, param2);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, int32_t (*slot)(QPlainTextDocumentLayout*, QPointF*, enum Qt__HitTestAccuracy) ```
void q_plaintextdocumentlayout_on_hit_test(void* self, int32_t (*slot)(void*, void*, int64_t)) {
    QPlainTextDocumentLayout_OnHitTest((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self, QPointF* param1, enum Qt__HitTestAccuracy param2 ```
int32_t q_plaintextdocumentlayout_qbase_hit_test(void* self, void* param1, int64_t param2) {
    return QPlainTextDocumentLayout_QBaseHitTest((QPlainTextDocumentLayout*)self, (QPointF*)param1, param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
///
/// ``` QPlainTextDocumentLayout* self ```
int32_t q_plaintextdocumentlayout_page_count(void* self) {
    return QPlainTextDocumentLayout_PageCount((QPlainTextDocumentLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, int32_t (*slot)() ```
void q_plaintextdocumentlayout_on_page_count(void* self, int32_t (*slot)()) {
    QPlainTextDocumentLayout_OnPageCount((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self ```
int32_t q_plaintextdocumentlayout_qbase_page_count(void* self) {
    return QPlainTextDocumentLayout_QBasePageCount((QPlainTextDocumentLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
///
/// ``` QPlainTextDocumentLayout* self ```
QSizeF* q_plaintextdocumentlayout_document_size(void* self) {
    return QPlainTextDocumentLayout_DocumentSize((QPlainTextDocumentLayout*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, QSizeF* (*slot)() ```
void q_plaintextdocumentlayout_on_document_size(void* self, QSizeF* (*slot)()) {
    QPlainTextDocumentLayout_OnDocumentSize((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self ```
QSizeF* q_plaintextdocumentlayout_qbase_document_size(void* self) {
    return QPlainTextDocumentLayout_QBaseDocumentSize((QPlainTextDocumentLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
///
/// ``` QPlainTextDocumentLayout* self, QTextFrame* param1 ```
QRectF* q_plaintextdocumentlayout_frame_bounding_rect(void* self, void* param1) {
    return QPlainTextDocumentLayout_FrameBoundingRect((QPlainTextDocumentLayout*)self, (QTextFrame*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, QRectF* (*slot)(QPlainTextDocumentLayout*, QTextFrame*) ```
void q_plaintextdocumentlayout_on_frame_bounding_rect(void* self, QRectF* (*slot)(void*, void*)) {
    QPlainTextDocumentLayout_OnFrameBoundingRect((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self, QTextFrame* param1 ```
QRectF* q_plaintextdocumentlayout_qbase_frame_bounding_rect(void* self, void* param1) {
    return QPlainTextDocumentLayout_QBaseFrameBoundingRect((QPlainTextDocumentLayout*)self, (QTextFrame*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
///
/// ``` QPlainTextDocumentLayout* self, QTextBlock* block ```
QRectF* q_plaintextdocumentlayout_block_bounding_rect(void* self, void* block) {
    return QPlainTextDocumentLayout_BlockBoundingRect((QPlainTextDocumentLayout*)self, (QTextBlock*)block);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, QRectF* (*slot)(QPlainTextDocumentLayout*, QTextBlock*) ```
void q_plaintextdocumentlayout_on_block_bounding_rect(void* self, QRectF* (*slot)(void*, void*)) {
    QPlainTextDocumentLayout_OnBlockBoundingRect((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self, QTextBlock* block ```
QRectF* q_plaintextdocumentlayout_qbase_block_bounding_rect(void* self, void* block) {
    return QPlainTextDocumentLayout_QBaseBlockBoundingRect((QPlainTextDocumentLayout*)self, (QTextBlock*)block);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#ensureBlockLayout)
///
/// ``` QPlainTextDocumentLayout* self, QTextBlock* block ```
void q_plaintextdocumentlayout_ensure_block_layout(void* self, void* block) {
    QPlainTextDocumentLayout_EnsureBlockLayout((QPlainTextDocumentLayout*)self, (QTextBlock*)block);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#setCursorWidth)
///
/// ``` QPlainTextDocumentLayout* self, int width ```
void q_plaintextdocumentlayout_set_cursor_width(void* self, int width) {
    QPlainTextDocumentLayout_SetCursorWidth((QPlainTextDocumentLayout*)self, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#cursorWidth)
///
/// ``` QPlainTextDocumentLayout* self ```
int32_t q_plaintextdocumentlayout_cursor_width(void* self) {
    return QPlainTextDocumentLayout_CursorWidth((QPlainTextDocumentLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#requestUpdate)
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_request_update(void* self) {
    QPlainTextDocumentLayout_RequestUpdate((QPlainTextDocumentLayout*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentChanged)
///
/// ``` QPlainTextDocumentLayout* self, int from, int param2, int charsAdded ```
void q_plaintextdocumentlayout_document_changed(void* self, int from, int param2, int charsAdded) {
    QPlainTextDocumentLayout_DocumentChanged((QPlainTextDocumentLayout*)self, from, param2, charsAdded);
}

/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, int, int, int) ```
void q_plaintextdocumentlayout_on_document_changed(void* self, void (*slot)(void*, int, int, int)) {
    QPlainTextDocumentLayout_OnDocumentChanged((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self, int from, int param2, int charsAdded ```
void q_plaintextdocumentlayout_qbase_document_changed(void* self, int from, int param2, int charsAdded) {
    QPlainTextDocumentLayout_QBaseDocumentChanged((QPlainTextDocumentLayout*)self, from, param2, charsAdded);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_plaintextdocumentlayout_tr2(const char* s, const char* c) {
    libqt_string _str = QPlainTextDocumentLayout_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_plaintextdocumentlayout_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPlainTextDocumentLayout_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#anchorAt)
///
/// ``` QPlainTextDocumentLayout* self, QPointF* pos ```
const char* q_plaintextdocumentlayout_anchor_at(void* self, void* pos) {
    libqt_string _str = QAbstractTextDocumentLayout_AnchorAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#imageAt)
///
/// ``` QPlainTextDocumentLayout* self, QPointF* pos ```
const char* q_plaintextdocumentlayout_image_at(void* self, void* pos) {
    libqt_string _str = QAbstractTextDocumentLayout_ImageAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
///
/// ``` QPlainTextDocumentLayout* self, QPointF* pos ```
QTextFormat* q_plaintextdocumentlayout_format_at(void* self, void* pos) {
    return QAbstractTextDocumentLayout_FormatAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
///
/// ``` QPlainTextDocumentLayout* self, QPointF* pos ```
QTextBlock* q_plaintextdocumentlayout_block_with_marker_at(void* self, void* pos) {
    return QAbstractTextDocumentLayout_BlockWithMarkerAt((QAbstractTextDocumentLayout*)self, (QPointF*)pos);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#setPaintDevice)
///
/// ``` QPlainTextDocumentLayout* self, QPaintDevice* device ```
void q_plaintextdocumentlayout_set_paint_device(void* self, void* device) {
    QAbstractTextDocumentLayout_SetPaintDevice((QAbstractTextDocumentLayout*)self, (QPaintDevice*)device);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
///
/// ``` QPlainTextDocumentLayout* self ```
QPaintDevice* q_plaintextdocumentlayout_paint_device(void* self) {
    return QAbstractTextDocumentLayout_PaintDevice((QAbstractTextDocumentLayout*)self);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
///
/// ``` QPlainTextDocumentLayout* self ```
QTextDocument* q_plaintextdocumentlayout_document(void* self) {
    return QAbstractTextDocumentLayout_Document((QAbstractTextDocumentLayout*)self);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#registerHandler)
///
/// ``` QPlainTextDocumentLayout* self, int objectType, QObject* component ```
void q_plaintextdocumentlayout_register_handler(void* self, int objectType, void* component) {
    QAbstractTextDocumentLayout_RegisterHandler((QAbstractTextDocumentLayout*)self, objectType, (QObject*)component);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
///
/// ``` QPlainTextDocumentLayout* self, int objectType ```
void q_plaintextdocumentlayout_unregister_handler(void* self, int objectType) {
    QAbstractTextDocumentLayout_UnregisterHandler((QAbstractTextDocumentLayout*)self, objectType);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#handlerForObject)
///
/// ``` QPlainTextDocumentLayout* self, int objectType ```
QTextObjectInterface* q_plaintextdocumentlayout_handler_for_object(void* self, int objectType) {
    return QAbstractTextDocumentLayout_HandlerForObject((QAbstractTextDocumentLayout*)self, objectType);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_update(void* self) {
    QAbstractTextDocumentLayout_Update((QAbstractTextDocumentLayout*)self);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*) ```
void q_plaintextdocumentlayout_on_update(void* self, void (*slot)(void*)) {
    QAbstractTextDocumentLayout_Connect_Update((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
///
/// ``` QPlainTextDocumentLayout* self, QTextBlock* block ```
void q_plaintextdocumentlayout_update_block(void* self, void* block) {
    QAbstractTextDocumentLayout_UpdateBlock((QAbstractTextDocumentLayout*)self, (QTextBlock*)block);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QTextBlock*) ```
void q_plaintextdocumentlayout_on_update_block(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_UpdateBlock((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
///
/// ``` QPlainTextDocumentLayout* self, QSizeF* newSize ```
void q_plaintextdocumentlayout_document_size_changed(void* self, void* newSize) {
    QAbstractTextDocumentLayout_DocumentSizeChanged((QAbstractTextDocumentLayout*)self, (QSizeF*)newSize);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QSizeF*) ```
void q_plaintextdocumentlayout_on_document_size_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_DocumentSizeChanged((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
///
/// ``` QPlainTextDocumentLayout* self, int newPages ```
void q_plaintextdocumentlayout_page_count_changed(void* self, int newPages) {
    QAbstractTextDocumentLayout_PageCountChanged((QAbstractTextDocumentLayout*)self, newPages);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, int) ```
void q_plaintextdocumentlayout_on_page_count_changed(void* self, void (*slot)(void*, int)) {
    QAbstractTextDocumentLayout_Connect_PageCountChanged((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
///
/// ``` QPlainTextDocumentLayout* self, int objectType, QObject* component ```
void q_plaintextdocumentlayout_unregister_handler2(void* self, int objectType, void* component) {
    QAbstractTextDocumentLayout_UnregisterHandler2((QAbstractTextDocumentLayout*)self, objectType, (QObject*)component);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// ``` QPlainTextDocumentLayout* self, QRectF* param1 ```
void q_plaintextdocumentlayout_update1(void* self, void* param1) {
    QAbstractTextDocumentLayout_Update1((QAbstractTextDocumentLayout*)self, (QRectF*)param1);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QRectF*) ```
void q_plaintextdocumentlayout_on_update1(void* self, void (*slot)(void*, void*)) {
    QAbstractTextDocumentLayout_Connect_Update1((QAbstractTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPlainTextDocumentLayout* self ```
const char* q_plaintextdocumentlayout_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPlainTextDocumentLayout* self, const char* name ```
void q_plaintextdocumentlayout_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPlainTextDocumentLayout* self ```
bool q_plaintextdocumentlayout_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPlainTextDocumentLayout* self ```
bool q_plaintextdocumentlayout_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPlainTextDocumentLayout* self ```
bool q_plaintextdocumentlayout_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPlainTextDocumentLayout* self ```
bool q_plaintextdocumentlayout_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPlainTextDocumentLayout* self, bool b ```
bool q_plaintextdocumentlayout_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPlainTextDocumentLayout* self ```
QThread* q_plaintextdocumentlayout_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPlainTextDocumentLayout* self, QThread* thread ```
void q_plaintextdocumentlayout_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPlainTextDocumentLayout* self, int interval ```
int32_t q_plaintextdocumentlayout_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPlainTextDocumentLayout* self, int id ```
void q_plaintextdocumentlayout_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPlainTextDocumentLayout* self ```
libqt_list /* of QObject* */ q_plaintextdocumentlayout_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPlainTextDocumentLayout* self, QObject* parent ```
void q_plaintextdocumentlayout_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPlainTextDocumentLayout* self, QObject* filterObj ```
void q_plaintextdocumentlayout_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPlainTextDocumentLayout* self, QObject* obj ```
void q_plaintextdocumentlayout_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_plaintextdocumentlayout_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPlainTextDocumentLayout* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_plaintextdocumentlayout_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_plaintextdocumentlayout_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_plaintextdocumentlayout_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPlainTextDocumentLayout* self, const char* name, QVariant* value ```
bool q_plaintextdocumentlayout_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPlainTextDocumentLayout* self, const char* name ```
QVariant* q_plaintextdocumentlayout_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPlainTextDocumentLayout* self ```
const char** q_plaintextdocumentlayout_dynamic_property_names(void* self) {
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
/// ``` QPlainTextDocumentLayout* self ```
QBindingStorage* q_plaintextdocumentlayout_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPlainTextDocumentLayout* self ```
QBindingStorage* q_plaintextdocumentlayout_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QObject*) ```
void q_plaintextdocumentlayout_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPlainTextDocumentLayout* self ```
QObject* q_plaintextdocumentlayout_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPlainTextDocumentLayout* self, const char* classname ```
bool q_plaintextdocumentlayout_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPlainTextDocumentLayout* self, int interval, enum Qt__TimerType timerType ```
int32_t q_plaintextdocumentlayout_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_plaintextdocumentlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPlainTextDocumentLayout* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_plaintextdocumentlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPlainTextDocumentLayout* self, QObject* param1 ```
void q_plaintextdocumentlayout_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QObject*, QObject*) ```
void q_plaintextdocumentlayout_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_plaintextdocumentlayout_resize_inline_object(void* self, void* item, int posInDocument, void* format) {
    QPlainTextDocumentLayout_ResizeInlineObject((QPlainTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_plaintextdocumentlayout_qbase_resize_inline_object(void* self, void* item, int posInDocument, void* format) {
    QPlainTextDocumentLayout_QBaseResizeInlineObject((QPlainTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*) ```
void q_plaintextdocumentlayout_on_resize_inline_object(void* self, void (*slot)(void*, void*, int, void*)) {
    QPlainTextDocumentLayout_OnResizeInlineObject((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_plaintextdocumentlayout_position_inline_object(void* self, void* item, int posInDocument, void* format) {
    QPlainTextDocumentLayout_PositionInlineObject((QPlainTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_plaintextdocumentlayout_qbase_position_inline_object(void* self, void* item, int posInDocument, void* format) {
    QPlainTextDocumentLayout_QBasePositionInlineObject((QPlainTextDocumentLayout*)self, (QTextInlineObject*)item, posInDocument, (QTextFormat*)format);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*) ```
void q_plaintextdocumentlayout_on_position_inline_object(void* self, void (*slot)(void*, void*, int, void*)) {
    QPlainTextDocumentLayout_OnPositionInlineObject((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format ```
void q_plaintextdocumentlayout_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format) {
    QPlainTextDocumentLayout_DrawInlineObject((QPlainTextDocumentLayout*)self, (QPainter*)painter, (QRectF*)rect, (QTextInlineObject*)object, posInDocument, (QTextFormat*)format);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format ```
void q_plaintextdocumentlayout_qbase_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format) {
    QPlainTextDocumentLayout_QBaseDrawInlineObject((QPlainTextDocumentLayout*)self, (QPainter*)painter, (QRectF*)rect, (QTextInlineObject*)object, posInDocument, (QTextFormat*)format);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QPainter*, QRectF*, QTextInlineObject*, int, QTextFormat*) ```
void q_plaintextdocumentlayout_on_draw_inline_object(void* self, void (*slot)(void*, void*, void*, void*, int, void*)) {
    QPlainTextDocumentLayout_OnDrawInlineObject((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QEvent* event ```
bool q_plaintextdocumentlayout_event(void* self, void* event) {
    return QPlainTextDocumentLayout_Event((QPlainTextDocumentLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QEvent* event ```
bool q_plaintextdocumentlayout_qbase_event(void* self, void* event) {
    return QPlainTextDocumentLayout_QBaseEvent((QPlainTextDocumentLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, bool (*slot)(QPlainTextDocumentLayout*, QEvent*) ```
void q_plaintextdocumentlayout_on_event(void* self, bool (*slot)(void*, void*)) {
    QPlainTextDocumentLayout_OnEvent((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QObject* watched, QEvent* event ```
bool q_plaintextdocumentlayout_event_filter(void* self, void* watched, void* event) {
    return QPlainTextDocumentLayout_EventFilter((QPlainTextDocumentLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QObject* watched, QEvent* event ```
bool q_plaintextdocumentlayout_qbase_event_filter(void* self, void* watched, void* event) {
    return QPlainTextDocumentLayout_QBaseEventFilter((QPlainTextDocumentLayout*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, bool (*slot)(QPlainTextDocumentLayout*, QObject*, QEvent*) ```
void q_plaintextdocumentlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPlainTextDocumentLayout_OnEventFilter((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTimerEvent* event ```
void q_plaintextdocumentlayout_timer_event(void* self, void* event) {
    QPlainTextDocumentLayout_TimerEvent((QPlainTextDocumentLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTimerEvent* event ```
void q_plaintextdocumentlayout_qbase_timer_event(void* self, void* event) {
    QPlainTextDocumentLayout_QBaseTimerEvent((QPlainTextDocumentLayout*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QTimerEvent*) ```
void q_plaintextdocumentlayout_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextDocumentLayout_OnTimerEvent((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QChildEvent* event ```
void q_plaintextdocumentlayout_child_event(void* self, void* event) {
    QPlainTextDocumentLayout_ChildEvent((QPlainTextDocumentLayout*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QChildEvent* event ```
void q_plaintextdocumentlayout_qbase_child_event(void* self, void* event) {
    QPlainTextDocumentLayout_QBaseChildEvent((QPlainTextDocumentLayout*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QChildEvent*) ```
void q_plaintextdocumentlayout_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextDocumentLayout_OnChildEvent((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QEvent* event ```
void q_plaintextdocumentlayout_custom_event(void* self, void* event) {
    QPlainTextDocumentLayout_CustomEvent((QPlainTextDocumentLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QEvent* event ```
void q_plaintextdocumentlayout_qbase_custom_event(void* self, void* event) {
    QPlainTextDocumentLayout_QBaseCustomEvent((QPlainTextDocumentLayout*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QEvent*) ```
void q_plaintextdocumentlayout_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPlainTextDocumentLayout_OnCustomEvent((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QMetaMethod* signal ```
void q_plaintextdocumentlayout_connect_notify(void* self, void* signal) {
    QPlainTextDocumentLayout_ConnectNotify((QPlainTextDocumentLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QMetaMethod* signal ```
void q_plaintextdocumentlayout_qbase_connect_notify(void* self, void* signal) {
    QPlainTextDocumentLayout_QBaseConnectNotify((QPlainTextDocumentLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QMetaMethod*) ```
void q_plaintextdocumentlayout_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPlainTextDocumentLayout_OnConnectNotify((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QMetaMethod* signal ```
void q_plaintextdocumentlayout_disconnect_notify(void* self, void* signal) {
    QPlainTextDocumentLayout_DisconnectNotify((QPlainTextDocumentLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QMetaMethod* signal ```
void q_plaintextdocumentlayout_qbase_disconnect_notify(void* self, void* signal) {
    QPlainTextDocumentLayout_QBaseDisconnectNotify((QPlainTextDocumentLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QMetaMethod*) ```
void q_plaintextdocumentlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPlainTextDocumentLayout_OnDisconnectNotify((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int pos ```
int32_t q_plaintextdocumentlayout_format_index(void* self, int pos) {
    return QPlainTextDocumentLayout_FormatIndex((QPlainTextDocumentLayout*)self, pos);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int pos ```
int32_t q_plaintextdocumentlayout_qbase_format_index(void* self, int pos) {
    return QPlainTextDocumentLayout_QBaseFormatIndex((QPlainTextDocumentLayout*)self, pos);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int32_t (*slot)(QPlainTextDocumentLayout*, int) ```
void q_plaintextdocumentlayout_on_format_index(void* self, int32_t (*slot)(void*, int)) {
    QPlainTextDocumentLayout_OnFormatIndex((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int pos ```
QTextCharFormat* q_plaintextdocumentlayout_format(void* self, int pos) {
    return QPlainTextDocumentLayout_Format((QPlainTextDocumentLayout*)self, pos);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int pos ```
QTextCharFormat* q_plaintextdocumentlayout_qbase_format(void* self, int pos) {
    return QPlainTextDocumentLayout_QBaseFormat((QPlainTextDocumentLayout*)self, pos);
}

/// Inherited from QAbstractTextDocumentLayout
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTextCharFormat* (*slot)(QPlainTextDocumentLayout*, int) ```
void q_plaintextdocumentlayout_on_format(void* self, QTextCharFormat* (*slot)(void*, int)) {
    QPlainTextDocumentLayout_OnFormat((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self ```
QObject* q_plaintextdocumentlayout_sender(void* self) {
    return QPlainTextDocumentLayout_Sender((QPlainTextDocumentLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self ```
QObject* q_plaintextdocumentlayout_qbase_sender(void* self) {
    return QPlainTextDocumentLayout_QBaseSender((QPlainTextDocumentLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QObject* (*slot)() ```
void q_plaintextdocumentlayout_on_sender(void* self, QObject* (*slot)()) {
    QPlainTextDocumentLayout_OnSender((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self ```
int32_t q_plaintextdocumentlayout_sender_signal_index(void* self) {
    return QPlainTextDocumentLayout_SenderSignalIndex((QPlainTextDocumentLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self ```
int32_t q_plaintextdocumentlayout_qbase_sender_signal_index(void* self) {
    return QPlainTextDocumentLayout_QBaseSenderSignalIndex((QPlainTextDocumentLayout*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int32_t (*slot)() ```
void q_plaintextdocumentlayout_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPlainTextDocumentLayout_OnSenderSignalIndex((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, const char* signal ```
int32_t q_plaintextdocumentlayout_receivers(void* self, const char* signal) {
    return QPlainTextDocumentLayout_Receivers((QPlainTextDocumentLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, const char* signal ```
int32_t q_plaintextdocumentlayout_qbase_receivers(void* self, const char* signal) {
    return QPlainTextDocumentLayout_QBaseReceivers((QPlainTextDocumentLayout*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int32_t (*slot)(QPlainTextDocumentLayout*, const char*) ```
void q_plaintextdocumentlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPlainTextDocumentLayout_OnReceivers((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QMetaMethod* signal ```
bool q_plaintextdocumentlayout_is_signal_connected(void* self, void* signal) {
    return QPlainTextDocumentLayout_IsSignalConnected((QPlainTextDocumentLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QMetaMethod* signal ```
bool q_plaintextdocumentlayout_qbase_is_signal_connected(void* self, void* signal) {
    return QPlainTextDocumentLayout_QBaseIsSignalConnected((QPlainTextDocumentLayout*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, bool (*slot)(QPlainTextDocumentLayout*, QMetaMethod*) ```
void q_plaintextdocumentlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPlainTextDocumentLayout_OnIsSignalConnected((QPlainTextDocumentLayout*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_delete(void* self) {
    QPlainTextDocumentLayout_Delete((QPlainTextDocumentLayout*)(self));
}